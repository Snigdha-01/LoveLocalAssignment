#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // Enter the number of rows
    cin >> n;

    // Output
    for (int i = 0; i < n; i++)
    { // for rows
        int number = 1;
        cout << "[";
        for (int j = 0; j <= i; j++)
        { // for number of items in a row
            cout << number << ",";
            number = number * (i - j) / (j + 1);
        }
        cout << "]" << endl;
    }

    return 0;
}