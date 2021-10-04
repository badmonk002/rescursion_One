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

void sorting(stack<int>&nums){
    if(nums.size()<=1){
        return;
    }
}




int main(){
    stack<int> nums;
    nums.push(5);
    nums.push(2);
    nums.push(1);
    nums.push(7);
    nums.push(3);
    nums.Push(6);

    sorting(nums);
    for(auto it:nums)
    cout<<it<<" ";

return 0;
}