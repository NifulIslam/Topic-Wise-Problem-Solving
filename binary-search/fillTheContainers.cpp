/*
 https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408
 */
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define ll long long int

int canFit(vector<int> & v, ll mx){
	ll summ=0;
	int count=1;
	forn(i, v.size()){
		if(summ+v[i]>mx){
			summ=v[i];
			count++;
			continue;
		}
		summ+=v[i];
	}
	return count;

}


void solve(int n, int m){
	vector<int > v(n);
	forn(i,n){
		in(v[i]);
	}
	ll lo= *max_element(v.begin(), v.end());
	ll hi= accumulate(v.begin(), v.end(), 0);
	ll mid, res;
	while(lo<=hi){
		mid=(hi+lo)/2;
		if(canFit(v,mid)<=m){
			hi=mid-1;
			res=mid;
			continue;
		}
		lo=mid+1;
	}
	out(res<<"\n");

}



int main(){
	int n,m;

	while(cin >>n >> m){
		solve(n,m);


	}

	return 0;
}
