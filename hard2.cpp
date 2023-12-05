#include <bits/stdc++.h>
using namespace std;

string shortestPalindrome(string s)
{
    int n = s.size();
    // a string rev where original is being stored
    string rev(s);
    reverse(rev.begin(), rev.end()); // reverse the string
    for (int i = 0; i < n; i++)
    {
        // only when the reverse and original substring becomes equal then adding that substring before the original string
        if (s.substr(0, n - i) == rev.substr(i, n))
            return rev.substr(0, i) + s;
    }
    return "";
}

int main()
{
    string s;
    // Enter the string
    cin >> s;
    cout << shortestPalindrome(s) << endl;
}
