#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;
const ll N= 2*1e5+10;
ll a[N];
ll solve()
{
	ll count=0;
	ll mx=-1;
	for(ll i=0; i<n; i++)
	{
	    if (a[i] > mx && (i==n-1 || a[i]>a[i+1]))
	    {
	        count++;
	    }
	    mx = max(mx,a[i]);
	}
	return count;
}

int main()
{
	ll tc;
	cin>>tc;
	for(ll t=1; t<=tc; t++)
	{
		cin>>n;
		for(ll i=0; i<n;i++)
		{
			cin>>a[i];
		}
		ll ans=solve();
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
  return 0;
}
