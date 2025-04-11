#include<iostream>
using namespace std;

//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1

	int i = 0;
	int n = 5; 
	while (i < n)
	{
		cout << i << ". Loops" << endl;
		i++;
	}
#endif

#if defined WHILE_2

	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n-- > 0)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif

}