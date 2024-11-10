#include <iostream>

using namespace std;

int compareStrings(const char *str1, const char *str2)
{

    while (*str1 && (*str1 == *str2))
    {

        str1++;

        str2++;
    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main()
{

    char str1[100], str2[100];

    // Input two strings

    cout << "Enter the first string: ";

    cin.getline(str1, 100);

    cout << "Enter the second string: ";

    cin.getline(str2, 100);

    // Compare the strings

    int result = compareStrings(str1, str2);

    // Display the result

    if (result == 0)
    {

        cout << "The strings are equal." << endl;
    }
    else if (result < 0)
    {

        cout << "The first string is less than the second string." << endl;
    }
    else
    {

        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}