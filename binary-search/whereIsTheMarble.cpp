/*
 https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415

 */
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)

void solve(int n, int q){
	vector<int> nums(n);
	forn(i,n){
		in(nums[i]);
	}
	sort(nums.begin(), nums.end());
	int x;
	while(q--){
		in(x);
		 int pos =lower_bound(nums.begin(), nums.end(), x) - nums.begin();
		 if(nums[pos]!=x){
		 	out(x<<" not found\n");
		 }
		 else{
		 	out(x<<" found at "<<pos+1<<"\n");
		 }

	}
}


int main(){
	int n,q, cas=1;
	while(1){
		in(n); in(q);
		if(n==0 && q==0){break;}
		out("CASE# "<<cas++<<":\n");
		solve(n,q);
	}


	return 0;
}
