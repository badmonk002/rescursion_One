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

void insertion(vector<int>&v,int temp)
{
   if(v.size()==0 || v[v.size()-1]<=temp)
   {
   v.push_back(temp);
   return;
   }
   int x=v[v.size()-1];
   v.pop_back();
   insertion(v,temp);
   v.push_back(x);
}
void sorting(vector<int>&v)
{
   if(v.size()<=1)
   return;
   int temp=v[v.size()-1];
   v.pop_back();
   sorting(v);
   insertion(v,temp);
}

int main(){

vector<int> nums = {3,5,1,6,2};
// vector<int> result = sortA(nums);
// for(int i=0; i<result.size(); i++){
//     cout<<result[i]<<" ";
// }
sorting(nums);
for(auto it:nums)
cout<<it<<" ";

return 0;
}