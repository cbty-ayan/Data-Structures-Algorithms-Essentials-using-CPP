#include <iostream>
using namespace std;
//! Printing array
template <typename T>
void printArray(T *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << "|" << p[i] << "|";
        else
            cout << p[i] << "|";
    }
    cout << endl;
}