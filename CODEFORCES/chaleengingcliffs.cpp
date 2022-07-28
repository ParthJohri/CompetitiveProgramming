#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,p=0,mn=INT_MAX;
    cin>>n;
    long long int arr[n],v[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
    	if(arr[i+1]-arr[i]<mn)
        {
            p=i;
            mn=min(mn,arr[i+1]-arr[i]);
        }
    } 
    v[0]=arr[p];
    v[n-1]=arr[p+1];
    int x=1;
    for(int i=p+2;i<n;i++)
    {
        v[x++]=arr[i];
    } 
    for(int i=0;i<p;i++)
    {
        v[x++]=arr[i];
    } 
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    } 
    cout<<endl;
}
int main()
{
	int t;
    cin>>t;
    while(t--){solve();}
}
