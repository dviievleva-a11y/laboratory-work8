#include "matrix_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void getMatrix(string filename, double matrix[][MAX], int& m, int& n)
{
    ifstream fin(filename);

    fin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fin >> matrix[i][j];

    fin.close();
}

void printMatrixConsole(double matrix[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void rowSums(double matrix[][MAX], int m, int n)
{
    cout << "\nСуми рядків:\n";

    for (int i = 0; i < m; i++)
    {
        double sum = 0;

        for (int j = 0; j < n; j++)
            sum += matrix[i][j];

        cout << "Рядок " << i + 1 << ": " << sum << endl;
    }
}

void appendMatrixResult(string filename, double matrix[][MAX], int m, int n)
{
    ofstream fout(filename, ios::app);

    fout << "\n\nСуми рядків:\n";

    for (int i = 0; i < m; i++)
    {
        double sum = 0;

        for (int j = 0; j < n; j++)
            sum += matrix[i][j];

        fout << sum << " ";
    }

    fout.close();
}
