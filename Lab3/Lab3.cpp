#include <iostream>
#include "TitleFile.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер задания от 1 до 3\n";
    int n = 0;
    cin >> n;

    switch (n)
    {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        default:
            main();
            break;
    }
}

