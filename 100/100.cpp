#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	ifstream fin("100.txt", ios::in);
	ofstream fout("100out.txt", ios::out);
	fin>>t;
	while(t--){
		int n;
		vector< pair<int,int> > a;
		fin>>n;
		for(int i=0; i<n; ++i){
			int x;
			fin>>x;
			a.push_back({x,i});
		}
		sort(a.begin(), a.end());
		int L=0, R=n-1;
		for(int i=0; i<n-1; ++i){
			if(a[i].second!=i){
				L=i;
				break;
			}
		}
		for(int i=n-1; i>0; --i){
			if(a[i].second!=i){
				R=i;
				break;
			}
		}
		cout<<L<<" "<<R<<endl;
	}
}

