//TODO: This is a generalised Array Program which contains 
//TODO: 1. Declarartion 2. Passing of arrays 3. Operations on Arrays

#include <iostream>
#include "../utils/superFunc.h"
using namespace std;

//! Function to print the contents of an array (Pass by reference)
// void printArray(string *p,int n) {
//     for (int i = 0; i < n; i++)
//         cout << p[i] << " | ";
//     cout << endl;
// }

//! Driving Code
int main()
{
    system("clear");

    //* Array Declaration
    //! Static Memory Allocation
    int a[100];
    int b[100] = {0}; //! All elements will be 0 automatically
    int arr[100] = {7, 1, 2, 6, 0, 1}; //! Rest of the spaces will be allocated 0
    int brr[] = {4, 5, 6}; //! Allocation size is optional
    string fruits[3] = {"apple", "banana", "guava"};

    int n = sizeof(fruits) / sizeof(string);
    cout << "Decalred Arrays" << endl
         << "---------------" << endl;
    printArray(fruits, n);
    printArray(brr, 3);
    return 0;
}