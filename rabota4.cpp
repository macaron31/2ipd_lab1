// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

bool validatePassword(string pass)
{
	bool isValid = true;

	const string allowedChars = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFRGHJKLZXCVBNM!@#$%&*+?";

	for (int i = 0; i < pass.length(); i++)
	{
		if (allowedChars.find(pass[i]) == string::npos)
		{
			isValid = false;
		}
	}

	return isValid;
}

int main()
{
    setlocale(0, "");

	string password = "";
    
	while (true)
	{
		cout << "Введите пароль для проверки: ";
		cin >> password;
		if (validatePassword(password))
		{
			cout << "Пароль написан правильно" << endl;
		}
		else
		{
			cout << "Пароль написан неправильно" << endl;
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
