#include<iostream>

using namespace std;

void main()
{

	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	cout << temperature << endl;
	
	if (temperature > 50)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Пекло" << endl;
	}

	else if (temperature > 30)
	{
		cout << "Жарища" << endl;
	}
	
	else if (temperature > 20)
	{
		cout << "Жарко" << endl;
	}

	else if (temperature > 10)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "холодно" << endl;
	}
	else if (temperature > -20)
	{
		cout << "мороз" << endl;
	}
	
	else if (temperature > -30)
	{
		cout << "холодрыга" << endl;
	}
	else if (temperature > -40)
	{
		cout << "гонки" << endl;
	}
	else if (temperature > -50)
	{
		cout << "сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "северный полюс" << endl;
	}
	else
	{
		cout << "Вы инопланетянин" << endl;
	}



/*else if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
*/



}