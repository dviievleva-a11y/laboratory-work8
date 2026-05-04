#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void getArray(string filename, double arr[], int& n)
{
    ifstream fin(filename);

    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];

    fin.close();
}

void saveArray(string filename, const double arr[], int n)
{
    ofstream fout(filename);

    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";

    fout.close();
}

void printArrayConsole(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void shiftLeft(double arr[], int n)
{
    double first = arr[0];

    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = first;
}

void shakerSortDesc(double arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        for (int i = left; i < right; i++)
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        right--;

        for (int i = right; i > left; i--)
        {
            if (arr[i] > arr[i - 1])
                swap(arr[i], arr[i - 1]);
        }
        left++;
    }
}
