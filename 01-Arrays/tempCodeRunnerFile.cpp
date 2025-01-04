// TODO: Program to implement array reversal
#include <iostream>
#include "../utils/superFunc.h"
using namespace std;

void ReverseArray(int *p, int n)
{
    int mid = n / 2, temp;
    for (int i = 0; i < mid; i++)
    {
        temp = p[i];
        p[i] = p[n - i - 1];
        p[n - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    ReverseArray(arr, n);
    printArray(arr, n);
    return 0;
}