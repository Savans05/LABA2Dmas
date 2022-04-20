#include <iostream>
#include <time.h>

using namespace std;

void random(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 10;
	}
}
void print(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

void radota()
{

	srand(time(0));
	setlocale(LC_ALL, "rus");
	int m,g;
	cout << "M -> ";
	cin >> m;
	int* a = new int[m];
	system("cls");
	cout << "\tВы будете вводить значения?\n\t1 - да\n\t2- нет\n\t";
	cin >> g;
	if (g==2)
	{
		random(a, m);
	}
	else {
		system("cls");
		for (int i = 0; i < m; i++)
		{
			cout << "\nВведите " << i << "-ое ->";
			cin >> a[i];
		}
	}
	system("cls");
	int h;
	int* f = new int[m];
	cout << "\tЧто удалить \n\t1-Чёт \n\t2-Нечёт\n\t";
	cin >> h;
	int j = 0;
	if (h==1)
	{
		for (int i = 0; i < m; i++)
		{
			if (a[i]%2!=0)
			{
				f[j] = a[i];
				j++;
			}
		}
	}
	else {
		for (int i = 0; i < m; i++)
		{
			if (a[i] % 2 == 0)
			{
				f[j] = a[i];
				j++;
			}
		}
	}
	a = new int[j];
	for (int i = 0; i < j; i++)
	{
		a[i] = f[i];
	}

	delete[] f;

	cout << "\n\n\n\t";
	print(a, j);
	cout << "\n\n\n";
}
