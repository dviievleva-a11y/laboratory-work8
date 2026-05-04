#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include "array_utils.h"   

#include <string>
using namespace std;

// const int MAX = 20;   

void getMatrix(string filename, double matrix[][MAX], int& m, int& n);
void printMatrixConsole(double matrix[][MAX], int m, int n);
void rowSums(double matrix[][MAX], int m, int n);
void appendMatrixResult(string filename, double matrix[][MAX], int m, int n);

#endif
