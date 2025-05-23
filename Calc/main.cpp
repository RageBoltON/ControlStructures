#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	char s;
	cout << "Введите арифметические выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
	default: cout << "Error: not operation" << endl;
	}
}
