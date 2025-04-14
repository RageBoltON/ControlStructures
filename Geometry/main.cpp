#include<iostream>
using namespace std;

//#define RHOMBUS_1
//#define RHOMBUS_2
//#define RHOMBUS_3
//#define SQUARE
//#define TRIANGLE_1 
//#define TRIANGLE_2 
//#define TRIANGLE_3 
//#define CHEES

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef RHOMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 - 1; j < i; j++) cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif 

#ifdef RHOMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 - 1; j < i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif 

#ifdef RHOMBUS_3
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (i == n - 1 - j || i - n == n * 2 - j - 1) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif 

#ifdef SQUARE
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
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif 

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif

	
#ifdef CHESS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}
#endif 

}
