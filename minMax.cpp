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

int getMin(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    getMin(arr, n - 1);
}

int main()
{
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << getMin(arr, n);
    // cout << getMax(arr, n);

    return 0;
}