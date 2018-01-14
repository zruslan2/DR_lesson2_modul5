#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <vector>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <iostream>

int menu();

using namespace std;
unsigned short int nz;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i;

	while (true)
	{
		/*cout << "Введите номер задания, 0 - для выхода \n";
		cin >> nz;*/
		
		menu();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Массив предназначен для хранения значений весов двадцати человек.
				С помощью датчика случайных чисел заполнить массив целыми значениями,
				лежащими в диапазоне от 50 до 100 включительно*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Массив предназначен для хранения значений весов двадцати человек.\n";
			cout << "С помощью датчика случайных чисел заполнить массив целыми значениями,\n";
			cout << "лежащими в диапазоне от 50 до 100 включительно\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			unsigned short int ves[20];
			for (i = 0; i < 20; i++)
			{
				ves[i] = 50 + rand() % 50;
				cout << "Вес человека " << i + 1 << " равен " << ves[i] << endl;
			}
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 2)
		{
			/*2.	Заполнить массив из восьми элементов таким образом, чтобы значения 
				элементов при просмотре массива слева направо образовывали :
			a.убывающую последовательность;
			b.возрастающую последовательность*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Заполнить массив из восьми элементов таким образом, чтобы значения\n";
			cout << "элементов при просмотре массива слева направо образовывали :\n";
			cout << "  a.убывающую последовательность;\n";
			cout << "  b.возрастающую последовательность\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[8];
			for (i = 0; i < 8; i++)
			{
				mas[i] = 1 + rand() % 50;
			}
			int prom;
			for (i = 0; i < 8; i++) {
				for (int j = 0; j < 8 - 1; j++) {
					if (mas[j] < mas[j + 1])
					{
						prom = mas[j];
						mas[j] = mas[j + 1];
						mas[j + 1] = prom;
					}
				}
			}
			cout << "a. ";
			for (i = 0; i < 8; i++)
			{
				cout << mas[i] << "\t";
			}
			cout << endl;
			for (i = 0; i < 8; i++) {
				for (int j = 0; j < 8 - 1; j++) {
					if (mas[j] > mas[j + 1])
					{
						prom = mas[j];
						mas[j] = mas[j + 1];
						mas[j + 1] = prom;
					}
				}
			}
			cout << "b. ";
			for (i = 0; i < 8; i++)
			{
				cout << mas[i] << "\t";
			}
			cout << endl<<endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 3)
		{
			/*3.	Ввести целочисленный массив, состоящий из 10 элементов.Поменять местами 
				максимальный и первый элементы.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Ввести целочисленный массив, состоящий из 10 элементов.Поменять местами\n";
			cout << "максимальный и первый элементы.\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[10], im=0,prom;
			for (i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "\t";
			}
			cout << endl;
			int maks = mas[0];
			for (i = 1; i < 10; i++)
			{
				if (mas[i] > maks)
				{
					maks = mas[i];
					im = i;
				}
			}
			if (im != 0)
			{
				prom = mas[0];
				mas[0] = mas[im];
				mas[im] = prom;
				for (i = 0; i < 10; i++)
				{
					cout << mas[i] << "\t";
				}
				cout << endl;
			}
			else
			{
				cout << "Первый элимент и есть максмальный \n";
				for (i = 0; i < 10; i++)
				{
					cout << mas[i] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 4)
		{
			/*4.	Задан массив, состоящий из 15 элементов вещественного типа.
				Определить количество элементов, значения которых больше первого элемента.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Задан массив, состоящий из 15 элементов вещественного типа.\n";
			cout << "Определить количество элементов, значения которых больше первого элемента.\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			float mas[15]; short int kol = 0;
			for (i = 0; i < 12; i++)
			{
				mas[i] = 5.36f + rand() % 100;
				cout << mas[i] << "\t";
				if (mas[i] > mas[0])kol++;
			}
			cout << endl << "Количество элементов больше первого = " << kol << endl<<endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 5)
		{
			/*5.	Ввести целочисленный массив, состоящий из 15 элементов.Определить сумму 
				и разность максимального и минимального  элементов*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Ввести целочисленный массив, состоящий из 15 элементов.Определить сумму\n";
			cout << "и разность максимального и минимального  элементов\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[15];
			for (i = 0; i < 15; i++)
			{
				mas[i] = 1 + rand() % 49;
				cout << mas[i] << "\t";
			}
			//cout << endl;
			int maks = mas[0],min=mas[0];
			for (i = 1; i < 15; i++)
			{
				if (mas[i] > maks)maks = mas[i];
				if (mas[i] < min)min = mas[i];
			}
			cout << "Сумма максимального " << maks << " и минимального " << min << " = " << maks + min << endl;
			cout << "Разность максимального " << maks << " и минимального " << min << " = " << maks - min << endl;
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 6)
		{
			/*6.	Ввести целочисленный массив, состоящий из 17 элементов.Заменить элементы 
				кратные трем на сумму нечетных по значению элементов*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Ввести целочисленный массив, состоящий из 17 элементов.Заменить элементы\n";
			cout << "кратные трем на сумму нечетных по значению элементов\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[17], sumn=0;
			for (i = 0; i < 17; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << mas[i] << "\t";
				if (mas[i] % 2 != 0)sumn += mas[i];
			}
			cout << endl;
			for (i = 0; i < 17; i++)
			{
				if (mas[i] % 3 == 0)mas[i] = sumn;
				cout << mas[i] << "\t";
			}
			cout << endl<<endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 7)
		{
			/*7.	Ввести массив, состоящий из 15 элементов целого типа.Определить количество 
				отрицательных, произведение положительных и количество нулевых элементов*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Ввести массив, состоящий из 15 элементов целого типа.Определить количество\n";
			cout << "отрицательных, произведение положительных и количество нулевых элементов\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[15], kolo = 0,proizp=1,koln=0;
			for (i = 0; i < 15; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << mas[i] << "\t";
				if (mas[i] < 0)kolo++;
				if (mas[i] > 0)proizp *= mas[i];
				if (mas[i] == 0)koln++;
			}
			cout << endl;
			cout << "Количество отрицательных: " << kolo << endl;
			cout << "Произведение положительных: " << proizp << endl;
			cout << "Количество нулевых: " << koln << endl;
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 8)
		{
			/*8.	Дан массив − 19 элементов целого типа.Найти сумму элементов, расположенных 
				до первого отрицательного элемента.Если отрицательных элементов нет, 
				то выдать соответствующее сообщение.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Дан массив − 19 элементов целого типа.Найти сумму элементов, расположенных\n";
			cout << "до первого отрицательного элемента.Если отрицательных элементов нет,\n";
			cout << "то выдать соответствующее сообщение.\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			int mas[19], sumo = 0;
			bool otr = false;
			for (i = 0; i < 19; i++)
			{
				mas[i] = -50 + rand() % 100;
				cout << mas[i] << "\t";				
			}
			cout << endl;
			for (i = 0; i < 19; i++)
			{
				if (mas[i] > 0)sumo += mas[i];
				else
				{
					otr = true;
					break;
				}
			}
			cout << "Сумма элементов = " << sumo<<endl;
			if (otr == false)cout << "Отрицательных элементов нет" << endl;
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 9)
		{
			/*9.	В заданном массиве М(12) действительных чисел увеличить минимальный элемент 
				в три раза и поменять местами с последним*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "В заданном массиве М(12) действительных чисел увеличить минимальный элемент\n";
			cout << "в три раза и поменять местами с последним\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			float M[12], min=1000, prom;
			int ind;
			for (i = 0; i < 12; i++)
			{
				M[i] = 0.22 + rand() % 100;
				cout << M[i] << "\t";
				if (M[i] < min)
				{
					min = M[i];
					ind = i;
				}
			}
			cout << endl;
			cout << endl;
			min *= 3;
			prom = M[11];
			M[11] = min;
			M[ind] = prom;
			for (i = 0; i < 12; i++)
			{
				cout << M[i] << "\t";				
			}
			cout << endl;
			cout << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 10)
		{
			/*10.	Дан массив М(15) вещественных чисел.Расположить элементы в обратном порядке*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Дан массив М(15) вещественных чисел.Расположить элементы в обратном порядке\n\n";
			SetConsoleTextAttribute(hConsole, 15);
			float M[15],prom;
			int nach = 0, kon = 14, ser = 15 / 2;
			for (i = 0; i < 15; i++)
			{
				M[i] = 0.22 + rand() % 100;
				cout << M[i] << "\t";				
			}
			cout << endl<<endl;
			while (nach != ser)
			{
				prom = M[nach];
				M[nach] = M[kon];
				M[kon] = prom;
				nach++; kon--;
			}
			for (i = 0; i < 15; i++)
			{
				cout << M[i] << "\t";
			}
			cout << endl << endl;
			cout << "Вернутся в меню\n";
			getch();
		}		
	}
}

int menu()
{
	system("cls");
	int code;
	cout << "Выберите задание\n";
	nz = 1;

	cout << "   Выход\n";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "-> Задание 1\n";
	SetConsoleTextAttribute(hConsole, 15);
	cout << "   Задание 2\n";
	cout << "   Задание 3\n";
	cout << "   Задание 4\n";
	cout << "   Задание 5\n";
	cout << "   Задание 6\n";
	cout << "   Задание 7\n";
	cout << "   Задание 8\n";
	cout << "   Задание 9\n";
	cout << "   Задание 10\n";
	

	do
	{
		code = getch();
		system("cls");

		
		if (code == 80)
		{
			if (nz != 10)
			{
				nz++;
			}
			else
			{
				nz = 0;
			}
			cout << "Выберите задание\n";
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход \n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход \n";
			}	
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание "<<i<<endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}			
			code = getch();
		}
		else if (code == 72)
		{
			if (nz != 0)
			{
				nz--;
			}
			else
			{
				nz = 10;
			}
			cout << "Выберите задание\n";
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход\n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход\n";
			}
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}
			code = getch();
		}
		else
		{
			if (code != 80 || code != 72 || code != 13)
			{
				continue;				
			}
		}

	} while (code != 13);
	SetConsoleTextAttribute(hConsole, 15);
	return nz;
}