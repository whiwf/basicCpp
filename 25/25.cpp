#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;

main(){
	int t, m, n, a, b;
	ifstream fin("25.in", ios::in );
	ofstream fout("25.out", ios::out );
	fin>>t;
	while(t--){
		fin>>m>>n>>a>>b;
//		ll tmp=__gcd(a,b);
//		ll bc=a/tmp*b;
		ll dem=0;
		forb(i,m,n) 
			if(i%a==0 || i%b==0) dem++;
		fout<<dem<<endl;
	}
}

