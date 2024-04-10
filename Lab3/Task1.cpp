#include <iostream>
#include <string>

using namespace std;

int chekNumIsNum(int n) {
	string test = "";
	cin >> test;
	try
	{
		n = stoi(test);
	}
	catch (exception e) {}
	if (n>0) {
		return n;
	}
	else
	{
		cout << "N не является числом, повторите ввод!\n";
		return chekNumIsNum(n);
	}
	
}

void task1() {
	int n = 0;
	int firstChar = 0;
	int lastChar = 0;
	cout << "Введите число N\n";
	n = chekNumIsNum(n);

	for (int i = 0; i < n; i++) {
		char t = ' ';
		cin >> t;
		if (t == ',' && firstChar == 0) {
			firstChar = i+1;
			lastChar = i+1;
		}
		else if (t == ',') {
			lastChar = i+1;
		}
	}
	if (firstChar != 0) {
		cout << "Первая по порядку запятая идёт под номером " << firstChar << "\n";
		cout << "Последняя по порядку запятая идёт под номером " << lastChar;
	}
	else
	{
		cout << "Запятых не обнаружено";
	}
}
