#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define fl(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define flmn(i,m,n) for(int i=n;i>m;i--)
#define fast ios_base::sync_with_stdio(false);
#define input cin.tie(NULL);
#define output cout.tie(NULL);
using namespace std;
 
//code
//code by Abhishek Awana 
//Language c++

int solve(int n, int k){
    
    int size = pow(2,n-1);
    int arr[size];
    if(n==1 || k==1){
        return 0;
    }
    if(k<size/2){
       int temp1 =  solve(n-1,k);
    }
    else{
        int temp2 = solve(n-1, k-size/2)^1;
    }
}



int main(){
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k);


return 0;
}