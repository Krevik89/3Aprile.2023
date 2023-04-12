#pragma once
#include <iostream>
using namespace std;


struct Product {
	char name[25];
	int count;
	float price;
};

class File
{
	FILE* f;
	char path[30];

public:

	File(const char* p) {
		strcpy_s(path, p);
		
	}
	~File() {
		if (f) fclose(f);
	}

	Product* LoadPrint() {
		char put1[25] = { "money.txt" };
		double money=0;
		if (strcmp(path, put1)==0) {
			fopen_s(&f, put1, "r");
			while (!feof(f)) {
				fscanf_s(f, "%f", &money);
				printf("%f", money);
			}
			fclose(f);
		}
		else {
			int i = 0;
			char mas[100];
			fopen_s(&f, path, "r");
			while (!feof(f))
			{
				fgets(mas, 100, f);
				i++;
			}
			fclose(f);
			
			Product* p = new Product[i];

			/*int h = 0;
			fopen_s(&f, path, "r");
			while (!feof(f))
			{
				fscanf_s(f, "%s", p[h].name, 25);
				fscanf_s(f, "%d", &p[h].count);
				fscanf_s(f, "%f", &p[h].price, sizeof(float));
				h++;
			}
			fclose(f);*/
			/*for (int j = 0; j < i; j++)
			{
				printf("%s %d %0.2f\n", p[j].name, p[j].count, p[j].price);
			}*/
			return p;
		}
		
	}

	void Save(Product* p, double money, int size) {
		fopen_s(&f, "Sklad.txt", "w");
		for (int i = 0; i < size; i++)
		{
			fprintf(f, "%s", p[i].name,25);
			fprintf(f, "%d", &p[i].count);
			fprintf(f, "%f", &p[i].price);
		}
		fclose(f);
		
	}
	
};

