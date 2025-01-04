//TODO: Program to implement Binary search for an array.
#include<iostream>
#include "../utils/superFunc.h"
using namespace std;

int BinarySearch(int *p, int n, int key) {
    int l = 0, r = n - 1, mid;
    while(l<=r){
        mid = (l + r) / 2;
        if(p[mid]==key)
            return mid;
        else if(p[mid]>key){
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    system("clear");
    int arr[5] = {-2, 0, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int key;
    printArray(arr, n);
    cout << "Enter a value for search : ";
    cin >> key;
    int index = BinarySearch(arr, n, key);
    if (index == -1)
        cout << "Element Not Found...";
    else
        cout << key << " is found at index " << index << endl;
    return 0;
}
