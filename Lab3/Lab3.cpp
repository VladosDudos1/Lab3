#include <iostream>
#include "TitleFile.h"
#include <limits>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер задания от 1 до 3\n";
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
    else if (n == "3")
    {
        task3();
    }
    else
    {
        main();
    }
}

