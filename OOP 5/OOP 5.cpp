#include <iostream>
#include <windows.h>

#include "Header.h"

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int zadanie;
    cout << "������� ����� �������: \n";
    cin >> zadanie;
    switch (zadanie) {
    case 1:
    {
        string pr = "yes";
        int a;
        while (pr == "yes") {
            cout << "������� ������ �������: \n";
            cin >> a;
            show(a);
            cout << "\n������ ���������� ��������� (yes ��� no)?\n";
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
        cout << "������� ���-�� ���� � ��������\n";
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