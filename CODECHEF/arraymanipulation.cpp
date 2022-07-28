#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,q;
     cin>>n>>q;
     vector<int> arr(n+1,0);
     while(q--)
     {
     	int a,b,c;
     	cin>>a>>b>>c;
     	arr[a]+=c;
     	arr[b+1]-=c;
     }
     for(int i=1;i<=n;i++)
     {
     	arr[i]+=arr[i-1];
     }
     cout<<*max_element(arr.begin(),arr.end())<<endl;
}
int main()
{
	int t=1;
    // cin>>t;
    while(t--){solve();}
}
