#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
// #define mx 1000005
#define INF LLONG_MAX

#define debug(a) cout<<"\n----------------------"<<a<<"-------------------------"

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		#define mx 1005
	#else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	char A[mx];
	// memset(A,-1,sizeof(A));
	cin>>t;
	while(t--){
		r=f=0;
		cin>>n;
		rep(i,0,n){
			cin>>A[i];
		}
		// sort(A,A+n);
		vector<ll> V;
		a=1;
		rep(i,1,n){
			if(A[i]==A[i-1]){
				a++;
			}else{
				V.pb(a);
				a=1;
			}
		}
		if(A[0]==A[n-1]){
			if(V.size()==0){
				V.pb(a);
			}else{
			V[0] += a;
			}
		}
		r=0;
		if(V.size()==1){
			if(n<=2){
				r=0;
			}else{
				r = (n+2)/3;
			}
		}else{
			n = V.size();
			rep(i,0,n){
				r += V[i]/3;
			}
		}

		cout<<r<<"\n";

	}

	return 0;
}