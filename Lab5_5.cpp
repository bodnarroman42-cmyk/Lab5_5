// Lab_05_1.cpp
// Боднар Роман
// Лабораторна робота № 5.5
// Рекурсивні функц
// Варіант 2
#include <iostream>
#include <clocale>
using namespace std;

int countOnes(int n, int level, int& depth);

int main() {
    setlocale (LC_ALL, "ukr");
    int n;
    cout << "Введiть цiле число n (n >= 0): ";
    cin >> n;

    if (n < 0) {
        cout << "Помилка: число повинно бути невiд'ємним!" << endl;
        return 1;
    }

    int depth = 0;

    cout << "\n--- Процес рекурсивних викликiв ---" << endl;

    int onesCount = countOnes(n, 1, depth);

    cout << "\n-----------------------------------" << endl;
    cout << "Результати:" << endl;
    cout << "Кiлькість одиниць у двiйковому кодi числа " << n << " = " << onesCount << endl;
    cout << "Глибина рекурсiї = " << depth << endl;

    return 0;
}

int countOnes(int n, int level, int& depth) {
    if (level > depth) {
        depth = level;
    }

    cout << "level = " << level << ", n = " << n << endl;

    if (n == 0) {
        return 0;
    }

    return 1 + countOnes(n & (n - 1), level + 1, depth);
}
