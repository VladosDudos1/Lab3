#include <iostream>
#include <string>
#include <list>

using namespace std;

int chekNumIsNumTask3(int num) {
	string test = "";
	cin >> test;
	try
	{
		num = stoi(test);
	}
	catch (exception e) {}
	if (num > 0) {
		return num;
	}
	else
	{
		cout << "�������� �������� �� �������� ������, ��������� ����!\n";
		return chekNumIsNumTask3(num);
	}

}

void task3() {
	int n = 0;
	cout << "������� ����� N\n";
	n = chekNumIsNumTask3(n);
	list<string> checkArray;

	cout << "������� ������������������ a\n";
	for (int i = 0; i < n; i++) {
		int t = -1;
		t = chekNumIsNumTask3(t);
		checkArray.push_back(to_string(t));
	}


	cout << "������� ������������������ b\n";
	for (int i = 0; i < n; i++) {
		int t = -1;
		t = chekNumIsNumTask3(t);

		try
		{
			checkArray.remove(to_string(t));
		}
		catch (const std::exception&)
		{

		}
	}
	if (checkArray.size() != 0)
	{
		cout << "������������������ �� ���������\n";
	}
	else
	{
		cout << "������������������ ��������� � ���������� ���� �������� ����� � ���\n";
	}
}