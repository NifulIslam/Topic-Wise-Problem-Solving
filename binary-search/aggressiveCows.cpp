/*
 https://www.spoj.com/problems/AGGRCOW/en/
 */

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)
bool canFit(vector<int> & v , int n, int cow, int gap){
	int cur,next=v[0],i;
	while(cow--){
		i=lower_bound(v.begin(), v.end(),next)-v.begin();
		if(i==n) return 0;
		next=v[i]+gap;
	}
	return 1;

}

void solve(){
	int n, cows; in(n); in(cows);
	vector<int> v(n);
	forn(i,n){ in(v[i]);}
	sort(v.begin(), v.end());

	int hi=v[n-1],lo=1,mid;

	while(lo<=hi){
		mid=(0ll+hi+lo)/2;
		if(canFit(v,n,cows,mid)){
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	out(hi<<"\n");

}



int main(){
	int t; in(t);
	while(t--)
		solve();




	return 0;
}
