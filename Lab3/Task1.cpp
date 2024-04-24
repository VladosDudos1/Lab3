#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int chekNumIsNum() {
	while (true) {
		string test{ "" };
		getline(cin, test);
		try {
			size_t pos { 0 };
			int value = stoi(test, &pos);
			if (pos == test.size()) {
				return value;
			}
			else {
				cout << "Введите число" << endl;
			}
		}
		catch (const invalid_argument&) {
			cout << "Введите число" << endl;
		}
	}
}

void task1() {
	string next {""};
	int n {0};
	bool firstN {false};
	string nStr {""};
	bool isFileIn {false};
	int firstChar = { 0 };
	int lastChar = { 0 };

	while (true) {
		cout << "Использовать файл или консоль для ввода? Если файл - введите \"F\", а если консоль \"C\"" << endl;
		getline(cin, next);
		if (next == "F")
		{
			isFileIn = true;
			ifstream in("in.txt");
			if (in.is_open()) {
				cout << "Число N" << endl;
				while (getline(in, nStr))
				{
					if (firstN)
					{
						n = chekNumIsNum();
					}
					else
					{
						cout << nStr << endl;
					}
				}
			}
			in.close();
			break;
		}
		else if (next == "C")
		{
			cout << "Введите число N" << endl;
			n = chekNumIsNum();
			break;
		}
	}
	for (int i{ 0 }; i < n; i++) {
		char t = { ' ' };
		cin >> t;
		if (t == ',' && firstChar == 0) {
			firstChar = i + 1;
			lastChar = i + 1;
		}
		else if (t == ',') {
			lastChar = i + 1;
		}
	}

	while (true) {
		cout << "Использовать файл или консоль для вывода? Если файл - введите \"F\", а если консоль \"C\"" << endl;
		getline(cin, next);
		if (next == "F")
		{
			ofstream out;
			out.open("out.txt");
			if (out.is_open())
			{
				if (firstChar != 0) {
					out << "Первая по порядку запятая идёт под номером " << firstChar << " " << "Последняя по порядку запятая идёт под номером " + lastChar;
				}
				else
				{
					out << "Запятых не обнаружено" << endl;
				}
			}
			out.close();
			return;
		}
		else if (next == "C")
		{
			if (firstChar != 0) {
				cout << "Первая по порядку запятая идёт под номером " << firstChar << "\n";
				cout << "Последняя по порядку запятая идёт под номером " << lastChar << endl;
			}
			else
			{
				cout << "Запятых не обнаружено" << endl;
			}
			return;
		}
	}

	if (isFileIn)
	{
		while (true) {
			getline(cin, next);
			if (next == "Yes")
			{
				task1();
				break;
			}
			else if (next == "No")
			{
				break;
			}
			else {
				cout << "Хотите повторить ввод исходных данных? Yes/No\n";
			}
		}
	}
}
