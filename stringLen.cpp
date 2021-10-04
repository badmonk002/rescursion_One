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

int firstUp(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + firstUp(str + 1);
}

int main()
{
    string str = "abcd";
    cout << firstUp(str);

    return 0;
}
