#include <iostream>
#include "TitleFile.h"
#include <limits>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер задания от 1 до 2\n";
    string n = "";
    getline(cin, n);

    if (n == "1")
    {
        task1();
    }
    else if (n == "2")
    {
        task2();
    }
    else
    {
        main();
    }
}

