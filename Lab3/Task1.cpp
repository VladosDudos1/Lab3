#include <iostream>
#include <string>

using namespace std;

int chekNumIsNum() {
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
				cout << "������� �����" << endl;
			}
		}
		catch (const invalid_argument&) {
			cout << "������� �����" << endl;
		}
	}
}

void task1() {
	int n = 0;
	int firstChar = 0;
	int lastChar = 0;
	cout << "������� ����� N\n";
	n = chekNumIsNum();

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
		cout << "������ �� ������� ������� ��� ��� ������� " << firstChar << "\n";
		cout << "��������� �� ������� ������� ��� ��� ������� " << lastChar;
	}
	else
	{
		cout << "������� �� ����������";
	}
}
