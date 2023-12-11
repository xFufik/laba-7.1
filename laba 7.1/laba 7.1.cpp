#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

/*
* Лабораторная работа 7. Задание 1. Индивидуальный вариант 24
* Написать функцию, проверяющую, является ли число x простым. Если да, то вернуть 1, иначе – 0.
*/

int prost(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    setlocale(LC_ALL, "ru");

    int number;

    cout << "Введите число: ";
    cin >> number;
    return prost(number);
}