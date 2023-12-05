#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // Enter a string
    getline(cin, s);

    stack<char> st;

    // in stack we are pushing each alphabets (i pointing to the last alphabet) and when the first space is encountered just break it
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            st.push(s[i]);
        }
        else if (!st.empty())
        {
            break;
        }
    }

    // Count the length of the last word until stack is empty
    int length = 0;
    while (!st.empty())
    {
        st.pop();
        length++;
    }

    // output
    cout << length << std::endl;

    return 0;
}
