#include <iostream>
#include <io.h>
#include <Windows.h>
#include <stdio.h>

using namespace std;

const int size = 255;

//для удаления слеша и пробела в конце строки
void RemoveSpaceAndSlashes(char* str) {
	int index = strlen(str) - 1;
	while (str[index] == ' ' || str[index]== '\\')index--;
	strncpy_s(str,strlen(str)+1, str, index);
	str[index + 1] = '\0';
	
}

//показ директории
void ShowCurentDir(char path[],char temp[]) {
	CharToOemA(path, temp);
	printf("%s>", path);
}
	
//показ всего содержимого директории
bool ShowDir(char path[]) {
	_finddata_t find;
	char pathfind[MAX_PATH];
	strcpy_s(pathfind, path);
	strcat_s(pathfind, "\\*.*");

	char info[MAX_PATH];

	intptr_t result = _findfirst(pathfind, &find);

	system("cls");
	intptr_t flag = result;

	if (flag == -1) {
		strcpy_s(info, "Такой нету директории");
		printf("%s\n", info);
		return false;
	}
	
	while (flag != -1)
	{
		if (strcmp(find.name, ".") || strcmp(find.name, "..")) {
			find.attrib& _A_SUBDIR ? strcpy_s(info, "Каталог") : strcpy_s(info, "Файл");
			printf("%30s %10s\n", find.name, info);
		}
		flag = _findnext(result, &find);
	}
	ShowCurentDir(path,info);
	_findclose(result);
	return true;
}

int main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	char path[MAX_PATH];
	char action[size];
	char temp[MAX_PATH];

	GetCurrentDirectoryA(sizeof(path), path);

	bool flag = true;

	ShowDir(path);
	do
	{
		cin.getline(action, size);
		RemoveSpaceAndSlashes(action);
		if (!_strcmpi(action, "root")) {
			path[2] = '\0';
			ShowDir(path);
		}
		else if (!_strcmpi(action, "exit")) {
			flag = false;
		}
		else if (!_strnicmp(action, "cd", 2)) {
			if (!_strcmpi(action, "cd"))ShowDir(path);
			else if (!_strnicmp(action, "cd", 3)) {
				int index = strspn(action + 2, " ");
				if (index) {
					if (strchr(action + index + 2, ':')) {
						if (ShowDir(action + index + 2)) {
							strcpy_s(path, action + index + 2);
						}
						ShowCurentDir(path, temp);
					}
				}
				else if (!strcmp(action + index + 2, "..")) {
					char* result = strrchr(path, '\\');
					if (result) {
						int delta = result - path;
						strncpy_s(temp, path, delta);
						temp[delta] = '\0';
					}
					else strcpy_s(temp, path); //         _s

					if (ShowDir(temp)) {
						strcpy_s(path,temp);
					}
					else {
						ShowCurentDir(path,temp);
					}
						
				}
				else if (!strcmp(action + index + 2,".")) {
					ShowDir(path);
				}
				else if (!strcmp(action + index + 2, "/")) {
					ShowDir(path);
				}
				else {
					strcpy_s(temp, path);
					strcat_s(temp, "\\");
					strcat_s(temp, action + index + 2);

					if (ShowDir(temp))strcpy_s(path, temp);
					else ShowCurentDir(path, temp);
				}
				
			}
			else {
				ShowDir(path);
			}
			
		}
		else {
			ShowDir(path);
		}

	} while (flag);

}