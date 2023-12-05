#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    // Enter number till which you want count
    cin >> n;

    int i;
    int count = 0;

    // just finding all the digits by dividing by 10 logic and then calculating total number 1's occuring
    for (i = 1; i <= n; i++)
    {
        int num = i;
        while (num > 0)
        {
            int rem = num % 10;
            if (rem == 1)
            {
                count++;
            }
            num /= 10;
        }
    }
    // output
    cout << count << endl;
    return 0;
}