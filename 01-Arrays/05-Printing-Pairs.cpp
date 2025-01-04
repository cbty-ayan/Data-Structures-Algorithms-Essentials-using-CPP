//TODO: Program to print all the pairs for an array
#include <iostream>
#include "../utils/superFunc.h"
using namespace std;

void printPairs(int *p,int n){
    for (int i = 0; i < n-1;i++){
        for (int j = i + 1; j < n;j++){
            cout << "(" << p[i] << "," << p[j] << ")" << endl;
        }
        cout << endl;
    }
}

int main()
{
    system("clear");
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    cout << "All Pairs:" << endl;
    cout << "--------" << endl;
    printPairs(arr, n);
    return 0;
}