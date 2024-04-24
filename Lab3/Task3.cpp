#include <iostream>
#include <string>
#include <list>

using namespace std;

int chekNumIsNumTask3() {
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
                cout << "Entered not int" << endl;
            }
        }
        catch (const invalid_argument&) {
            cout << "Entered not int" << endl;
        }
	}
}

void task3() {
	int result = -1;

	cout << "Введите последовательность из 10 чисел\n";
	for (int i = 0; i < 10; i++) { 
        int t = chekNumIsNumTask3();
		result += t*t;
	}

	cout << (result >=0 ? to_string(result) : "Что-то не так");
}