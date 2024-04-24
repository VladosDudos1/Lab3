#include <iostream>
#include <string>

using namespace std;

int chekNumIsNumTask2(int n) {
	while (true) {
		string test;
		getline(cin, test);
		try {
			size_t pos = 0;
			int value = stoi(test, &pos);
			if (pos == test.size()) {
				return value;
			}
			else {
				cout << "¬ведите число" << endl;
			}
		}
		catch (const invalid_argument&) {
			cout << "¬ведите число" << endl;
		}
	}

}

void task2() {
	int n = 0;
	int resultNum = 0;
	cout << "¬ведите число N\n";
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