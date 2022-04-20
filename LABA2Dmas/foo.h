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
	int m, n;
	cout << "M -> ";
	cin >> m;
	cout << "N -> ";
	cin >> n;
	int* a = new int[m];
	random(a, m);
	print(a, m);
	cout << "\n\n\n";
	int* b = new int[n];
	random(b, n);
	print(b, n);
	cout << "\n\n\n";
	int* ab = new int[m + n];
	for (int i = 0; i < m; i++)
	{
		ab[i] = a[i];
	}
	int ch = 0;
	for (int i = m; i < m+n; i++)
	{
		ab[i] = b[ch];
		ch++;
	}
	print(ab, m+n);

}
