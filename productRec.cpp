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

int multiR(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    return x + multiR(x, y - 1);
}

int main()
{
    int x = 46;
    int y = 10;
    cout << multiR(x, y);

    return 0;
}