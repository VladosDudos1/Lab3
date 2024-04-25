#include <iostream>
#include <string>
#include <list>
#include <math.h>

using namespace std;

int chekNumIsNumTask3() {
	while (true) {
        string test;
        getline(cin, test);
        try {
            double value = stod(test);
            if (value) {
                return value;
            }
            else {
                cout << "Entered not double" << endl;
            }
        }
        catch (const invalid_argument&) {
            cout << "Entered not double" << endl;
        }
	}
}

void task3() {
	long long result = 0;

	cout << "Введите последовательность из 10 чисел\n";
	for (int i = 0; i < 10; i++) { 
        int t = chekNumIsNumTask3();
		result += pow(t, i+1);
	}

	cout << (result > 0 ? to_string(result) : "Что-то не так");
}