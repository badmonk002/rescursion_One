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

int powerX(int n, int a)
{
    if (n == 1)
    {
        return 0;
    }
    return 1 + powerX(n / a, a);
}

int main()
{
    int a, n;
    n = 10;
    a = 3;
    cout << powerX(n, a);

    return 0;
}