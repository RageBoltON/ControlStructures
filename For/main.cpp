#include<iostream>
using namespace std;
//#define FACTORIAL
//#define DEGREE
//#define ASCII
//#define FIBONACHI
//#define FIBONACHI2
//#define PRIMENUMBER
//#define THEPERFECTNUMBER
//#define PIFAGOR
//#define SIMPLENUMBERS

void main()
{
	setlocale(LC_ALL, "Russian");

	//for (;;)
	//{
	//	cout << "Hello FOR";
	//}

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	*/

#ifdef FACTORIAL

	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif

#ifdef DEGREE

	double a;
	int n;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n ; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif 

#ifdef ASCII

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}

#endif  

#ifdef FIBONACHI

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;

#endif 

#ifdef FIBONACHI2

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
	
	cout << "¬ведите количество членов р€да: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;

#endif 

#ifdef PRIMENUMBER

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2;j < sqrt(i);j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if(simple)cout << i << "\t";
	}
	cout << endl;

#endif

#ifdef THEPERFECTNUMBER

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	

#endif 

#ifdef SIMPLENUMBERS

	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		//bool perfect = true;
		int sum = 0;
		for (int j = 1;j < i/2;j++)
		{
			if (i % j == 0)sum += j;
		}
		//if (sum == i)perfect = true;
		if (sum==i) cout << i << "\t";
	}

#endif 



}