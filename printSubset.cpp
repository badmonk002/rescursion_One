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

void powerSet(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;

        return;
    }
    string op1 = op;
    string op2 = op;
    // op1.erase(op1.begin());
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    powerSet(ip, op1);
    powerSet(ip, op2);
}

int main()
{
    string str = "ab";
    string op = " ";

    powerSet(str, op);

    return 0;
}