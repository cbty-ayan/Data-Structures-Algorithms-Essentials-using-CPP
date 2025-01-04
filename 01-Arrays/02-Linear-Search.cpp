//TODO: C++ Program to implement linear search functionality

#include<iostream>
#include "../utils/superFunc.h"
using namespace std;

int linearSearch(int *p, int n, int k) {
    for (int i = 0; i < n;i++){
        if(p[i]==k){
            return i;
        }
    }
    return -1;
}

//* Driving Code
int main()
{
    system("clear");
    int arr[10] = {3, 4, 2, 6, 1, 0, 8, 12, -3, -4};
    int n = sizeof(arr) / sizeof(int);
    int key;
    printArray(arr, n);
    cout << "Enter a value for search : ";
    cin >> key;
    int index = linearSearch(arr, n, key);
    if(index == -1)
        cout << "Element Not Found...";
    else
        cout << key << " is found at index " << index << endl;

    return 0;
}