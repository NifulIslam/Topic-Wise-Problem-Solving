/*
 https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
 */
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)

void solve(){
	int n; in(n);
	vector<int> nums(n);
	forn(i,n){
		in(nums[i]);
	}
	int q; in(q);
	int x;
	forn(i,q){
		in(x);
		int pos =lower_bound(nums.begin(), nums.end(), x) - nums.begin();
		if(pos==0){out("X ");}
		else{out(nums[pos-1]<<" ");}
		if(pos==n){out("X");}
		else{
		 	pos =upper_bound(nums.begin(), nums.end(), x) - nums.begin();
		 	if(pos==n){out("X");}
		 	else{out(nums[pos]);}
		}
		out("\n");

	}
}


int main(){
	int n,q, cas=1;
		solve();
	return 0;
}
