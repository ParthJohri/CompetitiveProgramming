#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define f first
#define s second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define gcd(a,b) __gcd(a,b);
#define lcm(a,b) a(*(b/gcd(a,b)));
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()


#define yes() cout<<"YES"<<endl;
#define no() cout<<"NO"<<endl;

#define loop(i,s,e) for(long long int i=s;i<e;i++);
#define rloop(i,e,s) for(long long int i=e;i>=s;i--);

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);//unties cin and cout 

#define endl "\n"
/*
It is recommended to use cout << “\n”; 
instead of cout << endl;. 
endl is slower because it forces a flushing stream (cout.flush();) 
, which is usually unnecessary.
IMP:- 
Use endl instead of \n for interactive problems 
endl clears the buffer everytime while \n does not 
as cout automatically clears the buffer after 
certain number of words or characters i.e 1000
*/

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " ";print(x);
#else
#define debug(x)
#endif


template <class T> void print(T a)
{
	cerr << a << endl;
}


template <class T> void print(vector<T> v)
{
	cerr << "[ ";
	for(int i=0;i<v.size();i++)
		cerr << v[i]<< " ";
	cerr << "]" << endl;
}

template <class T, class V> void print(pair<T, V> p)
{
	cerr << "{" << p.first << "," << p.second << "}"<< endl;
}

template <class T> void print(vector< vector<T> > v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cerr << v[i][j] <<" ";
		}
		cerr << endl;
	}
}

template <class T> void print(set<T> s)
{
	cerr<<"{";
	for(int i=s.begin();i<s.end();i++)
	{
		cerr << s[i] << " ";
	}
	cerr << "}" << endl;
}

template <class T> void print(multiset <T> v) 
{
	cerr << "[ "; 
		for (T i : v) 
		{
			print(i); 
			cerr << " ";
		} 
	cerr << "]";
}

template <class T, class V> void print(map <T, V> v) 
{
	cerr << "[ "; 
		for (auto i : v) 
		{
			print(i); 
			cerr << " ";
		} 
	cerr << "]";
}

void solve()
{
     int n,i,j;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     }
     int t[n];
     vector<pair<int,string>> str;
     for(int i=0;i<n;i++){
     	int x;
     	string s="";
     	cin>>x>>s;
     	str.push_back({x,s});
     }
     for(int i=0;i<n;i++){
     	string s=str[i].second;
     	int l=s.length();
     	for(int j=0;j<l;j++){
     		arr[i]+=s[j]=='D'?1:-1;
     		if(arr[i]==10)
     			arr[i]=0;
     		else if(arr[i]==-1)
     			arr[i]=9;
     	}
     }
     for(int i=0;i<n;i++){
     	cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){solve();}
}
