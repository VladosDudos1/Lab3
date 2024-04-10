#include <iostream>
#include <string>

using namespace std;

int chekNumIsNumTask2(int n) {
	string test = "";
	cin >> test;
	try
	{
		n = stoi(test);
	}
	catch (exception e) {}
	if (n > 0) {
		return n;
	}
	else
	{
		cout << "N не является числом, повторите ввод!\n";
		return chekNumIsNumTask2(n);
	}

}

void task2() {
	int n = 0;
	int resultNum = 0;
	cout << "Введите число N\n";
	n = chekNumIsNumTask2(n);

	string strN = to_string(n);

	if (strN.find("0") != EOF)
	{
		resultNum++;
	}
	if (strN.find("1") != EOF)
	{
		resultNum++;
	}
	if (strN.find("2") != EOF)
	{
		resultNum++;
	}
	if (strN.find("3") != EOF)
	{
		resultNum++;
	}
	if (strN.find("4") != EOF)
	{
		resultNum++;
	}
	if (strN.find("5") != EOF)
	{
		resultNum++;
	}
	if (strN.find("6") != EOF)
	{
		resultNum++;
	}
	if (strN.find("7") != EOF)
	{
		resultNum++;
	}
	if (strN.find("8") != EOF)
	{
		resultNum++;
	}
	if (strN.find("9") != EOF)
	{
		resultNum++;
	}

	cout << resultNum;
}