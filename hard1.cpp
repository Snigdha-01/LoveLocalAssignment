#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // Enter array size
    cin >> n;
    int k;
    // Enter window size
    cout<<"k= ";
    cin >> k;
    vector<int> arr(n);

    // input taking
    cout<<"Input: nums = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result;
    int maxi = arr[0];

    // max find for first k
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    result.push_back(maxi);

    int i = 0, j = k;
    // using the logic that 2 pointers to track, are pointing and then using max find logic
    while (j < n)
    {
        vector<int> newVector;
        for (int l = i + 1; l <= j; l++)
            newVector.push_back(arr[l]);
        for (int i = 0; i < newVector.size(); i++)
        {
            if (newVector[i] > maxi)
            {
                maxi = newVector[i];
            }
        }
        result.push_back(maxi);
        maxi = INT_MIN;
        j++;
        i++;
    }

    // output
    cout<<"Output :"<<endl;
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
}