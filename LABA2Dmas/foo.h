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
bool foo(int p,int* b,int m)
{
	for (int i = 0; i < m; i++)
	{
		if (p==b[i])
		{
			return true;
		}
	}
	return false;
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
	int* abt = new int[m];
	int size = 0;
	if (m>n)
	{
		swap(m, n);
	}
	for (int i = 0; i < m; i++)
	{
		int g = 0;
		int p = a[i];
		for (int j = 0; j < m; j++)
		{
			if (foo(p, abt, m) == false && foo(p,b,m) == true)
			{
				abt[size] = a[i];
				size++;
				break;
			}
		}
	}
	int* ab = new int[size];

	for (int i = 0; i < size; i++)
	{
		ab[i] = abt[i];
	}


	print(ab, size);
}