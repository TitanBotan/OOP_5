#include "Header.h"

using std::swap;

double* create(int a) {
    double* mas = new double[a];
    return mas;
    del(mas);
}

double* filling(int a) {
    srand(time(NULL));
    double* mass = create(a);
    for (int i = 0; i < a; i++) {
        mass[i] = rand();
    }
    return mass;
    del(mass);
}

void show(int a) {
    double* mass = filling(a);
    for (int i = 0; i < a; i++) {
        cout << mass[i] << "   ";
    }
    del(mass);
}

double* per(int a) {
    int k = 0;
    double* mass = filling(a);
    for (int i = 0; i < 6; i++) {
        swap(mass[k], mass[k + 1]);
        k = k + 2;
    }
    return mass;
    del(mass);
}

void show2(int a) {
    show(a);
    cout << endl;
    double* mass = per(a);
    for (int i = 0; i < a; i++) {
        cout << mass[i] << "   ";
    }
    del(mass);
}

void del(double* mas) {
    delete[] mas;
}

void zapoln(int** array, size_t str, size_t stol) {
    for (size_t i = 0; i < str; ++i)
        for (size_t j = 0; j < stol; ++j)
            array[i][j] = rand() % 41 + 10;
}

void vivod(int** array, size_t str, size_t stol) {
    for (size_t i = 0; i < str; ++i) {
        for (size_t j = 0; j < stol; ++j)
            cout << array[i][j] << ' ';
        cout << endl;
    }
}