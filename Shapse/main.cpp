#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define SQURE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
#define RHOMB
//#define PlUSMINUS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQURE

	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif 

#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif 

#ifdef TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif 

#ifdef TRIANGLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}

#endif 

#ifdef RHOMB

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "/ ";
		for (int j = i; j < n; j++)cout << "\ ";
		cout << endl;
	}

#endif 

#ifdef PlUSMINUS

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}

#endif 


}