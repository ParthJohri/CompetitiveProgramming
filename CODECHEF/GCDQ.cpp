#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

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
int gcd(int a,int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}
void solve()
{
    int n,q,l,r;
    cin>>n>>q;
    int arr[n+10],fgcd[n+10],bgcd[n+10];
    fgcd[0]=bgcd[n+1]={0};
    for(int i=1;i<=n;i++) {
    	cin>>arr[i];
    } 
    for(int i=1;i<=n;i++){
    	fgcd[i]=__gcd(arr[i],fgcd[i-1]);
    }
    for(int i=n;i>=1;i--){
    	bgcd[i]=__gcd(arr[i],bgcd[i+1]);
    }
    while(q--) {
    	cin>>l>>r;
    	cout<<__gcd(fgcd[l-1],bgcd[r+1])<<endl;
    }
}

int main()
{
	int t;
    cin>>t;
    while(t--){solve();}
}
