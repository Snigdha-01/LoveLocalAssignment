#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // Enter length of array
    cout<<"Input: nums = ";
    cin >> n;

    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    // increasing the occurence of numbers in map
    for (int num : arr)
    {
        m[num]++;
    }

    int maxi = n / 3;
    // logic to check if the (key, value) value is greater than n/3
    cout<<"Output : ";
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        if (!(it->second > maxi))
        {
            cout << "No elements occur greater than n/3" << endl;
            break;
        }
        else
        {
            if (it->second >= maxi)
            {
                cout << it->first << ", ";
            }
        }
    }

    return 0;
}