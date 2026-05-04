#include <iostream>
#include <string>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

void task1();
void task2();
void task3();

int main()
{
    int choice;

    do
    {
        cout << "\n1 - Завдання 1";
        cout << "\n2 - Завдання 2";
        cout << "\n3 - Завдання 3";
        cout << "\n0 - Вихід";
        cout << "\nВаш вибір: ";
        cin >> choice;

        switch (choice)
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
        case 0:
            cout << "Завершення програми.\n";
            break;
        default:
            cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    string inFile, outFile;
    double arr[MAX];
    int n;

    cout << "Введіть ім'я вхідного файлу: ";
    cin >> inFile;

    cout << "Введіть ім'я вихідного файлу: ";
    cin >> outFile;

    getArray(inFile, arr, n);

    cout << "\nПочатковий масив:\n";
    printArrayConsole(arr, n);

    shiftLeft(arr, n);

    cout << "\nЗмінений масив:\n";
    printArrayConsole(arr, n);

    saveArray(outFile, arr, n);
}

void task2()
{
    string fileName;
    double matrix[MAX][MAX];
    int m, n;

    cout << "Введіть ім'я файлу: ";
    cin >> fileName;

    getMatrix(fileName, matrix, m, n);

    cout << "\nМатриця:\n";
    printMatrixConsole(matrix, m, n);

    rowSums(matrix, m, n);

    appendMatrixResult(fileName, matrix, m, n);
}

void task3()
{
    string inFile, outFile;
    double arr[MAX];
    int n;

    cout << "Введіть ім'я вхідного файлу: ";
    cin >> inFile;

    cout << "Введіть ім'я вихідного файлу: ";
    cin >> outFile;

    getArray(inFile, arr, n);

    shakerSortDesc(arr, n);

    saveArray(outFile, arr, n);

    cout << "\nВідсортований масив:\n";
    printArrayConsole(arr, n);
}
