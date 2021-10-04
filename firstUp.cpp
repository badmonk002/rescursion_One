#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define fl(i, n) for (int i = 0; i < n; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define flmn(i, m, n) for (int i = n; i > m; i--)
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;

//code
//code by Abhishek Awana
//Language c++

char firstUp(string str, int n)
{
    if (n == str.length())
    {
        return 0;
    }
    else
    {
        if (isupper(str[n]))
        {
            return str[n];
        }
        else
        {
            return firstUp(str, n + 1);
        }
    }
}

int main()
{
    string str = "eeksorgee";
    cout << firstUp(str, 0);

    return 0;
}