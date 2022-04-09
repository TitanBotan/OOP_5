#include <iostream>
#include <windows.h>

#include "Header.h"

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int zadanie;
    cout << "¬ведите номер задани€: \n";
    cin >> zadanie;
    switch (zadanie) {
    case 1:
    {
        string pr = "yes";
        int a;
        while (pr == "yes") {
            cout << "¬ведите размер массива: \n";
            cin >> a;
            show(a);
            cout << "\n’отите продолжить программу (yes или no)?\n";
            cin >> pr;
        }
    }
    case 2:
    {
        int a = 12;
        show2(a);
    }
    case 3:
    {
        size_t str, stol;
        cout << "¬ведите кол-во срок и столбцов\n";
        cin >> str;
        cin >> stol;
        int** arr = new int* [str];
        for (size_t i = 0; i < str; ++i)
            arr[i] = new int[stol];

        zapoln(arr, str, stol);
        vivod(arr, str, stol);

        for (size_t i = 0; i < str; ++i)
            delete[] arr[i];
        delete[] arr;
    }
    }
}