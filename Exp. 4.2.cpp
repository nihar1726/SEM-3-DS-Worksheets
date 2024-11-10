1
// Simple C++ program to add two polynomials
#include <iostream>
using namespace std;

// A utility function to return maximum of two integers
int max(int m, int n) 
{ 
    return (m > n) ? m : n; 
}

// A[] represents coefficients of first polynomial
// B[] represents coefficients of second polynomial
// m and n are sizes of A[] and B[] respectively
int* add(int expression1[], int expression2[], int size_of_exp1, int size_of_exp2)
{
    int size = max(size_of_exp1, size_of_exp2);
    int* sum = new int[size];

    // Initialize the product polynomial
    for (int i = 0; i < size_of_exp1; i++)
        sum[i] = expression1[i];

    // Take every term of first polynomial
    for (int i = 0; i < size_of_exp2; i++)
        sum[i] += expression2[i];

    return sum;
}

// A utility function to print a polynomial
void printPoly(int poly[], int p)
{
    for (int i = 0; i < p; i++) {
        cout << poly[i];
        if (i != 0)
            cout << "x^" << i;
        if (i != p - 1)
            cout << " + ";
    }
}

// Driver program to test above functions
int main()
{
    // The following array represents polynomial 5 + 10x^2 +
    // 6x^3
    int exp1[] = { 5, 0, 10, 6 };

    // The following array represents polynomial 1 + 2x +
    // 4x^2
    int exp2[] = { 1, 2, 4 };
    int m = sizeof(exp1) / sizeof(exp1[0]);
    int n = sizeof(exp2) / sizeof(exp2[0]);

    cout << "First polynomial is \n";
    printPoly(exp1, m);
    cout << "\nSecond polynomial is \n";
    printPoly(exp2, n);

    int* sum = add(exp1, exp2, m, n);
    int size = max(m, n);

    cout << "\nsum polynomial is \n";
    printPoly(sum, size);

    return 0;
}
