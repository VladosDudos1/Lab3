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
	
}