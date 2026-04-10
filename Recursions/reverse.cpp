#include <bits/stdc++.h>
using namespace std;

string reverse(string str, int len)
{
    if (len < 1)
    {
        return "";
    }
    // Base case
    if (len == 1)
    {
        return string(1, str[0]);
    }
    return str[len - 1] + reverse(str, len - 1);
}

int main()
{
    string str = "Geeks for geeks";
    cout << reverse(str, str.length()) << endl;
    return 0;
}