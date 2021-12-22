// laba10 == laba2
// Вариант 16
//Структуры и массивы структур

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE


#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct ent {                                                        //enterprise-предприятие
	char name[100];                   //название
	char v;                           //вид собственности
	int sq;                          //площадь земли
	int cnt;                         //кол-во работников
} et[11];


int main(){

/*

Zarya D 300 120
Rosinka K 174 27
Petrenko C 56 6 

*/

	struct ettx;                //рабочая переменная
	int n;
	n = 3;//кол-во элем.в массиве

	//Ввод данных

	for (int i = 0; i < n; i++) {
		printf("%d. Введите: название, вид собственности, площадь, количество > ", i + 1);
		cin >> et[i].name >> et[i].v >> et[i].sq >> et[i].cnt;
		}
	


	//Вывод таблицы

	printf("-------------------------------------------------\n");
	printf("|        Сельскохозяйственные предприятия       |\n");
	printf("|-----------------------------------------------|\n");
	printf("| Название | Вид         | Площадь  |Количество |\n");
	printf("|          |собственности| земли(га)|работников |\n");
	printf("|----------|-------------|----------|-----------|\n");

	//Вывод строк фактических данных
	for (int i = 0; i < n; i++)
		printf("|%9s |      %1c      |      %3d | %-5.1d     |\n",
			et[i].name, et[i].v, et[i].sq, et[i].cnt);
	printf("---------------------------------------------\n");


	//Cортировка мамссива

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (et[j].name < et[j+1].name) {
				// меняем элементы местами
				
				//strcpy(et[j+1].name, et[j].name);

				char* temp5 = et[j].name;
				*et[j].name = *et[j + 1].name;
				*et[j + 1].name = *temp5;

				char temp1 = et[j].v;
				et[j].v = et[j + 1].v;
				et[j + 1].v = temp1;

				int temp2 = et[j].sq;
				et[j].sq = et[j + 1].sq;
				et[j + 1].sq = temp2;

				int temp3 = et[j].cnt;
				et[j].cnt = et[j + 1].cnt;
				et[j + 1].cnt = temp3;


			}
		}
	}
	
	printf("\nОтсортированная таблица\n\n");


	/* Вывод таблицы */
	printf("-------------------------------------------------\n");
	printf("|        Сельскохозяйственные предприятия       |\n");
	printf("|-----------------------------------------------|\n");
	printf("| Название | Вид         | Площадь  |Количество |\n");
	printf("|          |собственности| земли(га)|работников |\n");
	printf("|----------|-------------|----------|-----------|\n");
	for (int i = 0; i < n; i++)
		printf("|%9s |      %1c      |      %3d | %-5.1d     |\n",
			et[i].name, et[i].v, et[i].sq, et[i].cnt);
	printf("---------------------------------------------\n");
	return 0;
}


