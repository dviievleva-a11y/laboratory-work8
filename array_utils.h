#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <string>
using namespace std;

const int MAX = 20;

void getArray(string filename, double arr[], int& n);
void saveArray(string filename, const double arr[], int n);
void printArrayConsole(const double arr[], int n);

void shiftLeft(double arr[], int n);
void shakerSortDesc(double arr[], int n);

#endif
