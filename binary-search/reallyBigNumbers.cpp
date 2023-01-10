/*
 https://codeforces.com/problemset/problem/817/C
 */

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)




long long int getSumm(long long int n){
	long long int summ=0;
	while(n){
		summ+=(n%10);
		n/=10;
	}
	return summ;
}
int main(){
	long long int n ,s; in(n);in(s);
	long long  int lo=9, hi=n;
	long long  int mid;
	if(n<10){
		out("0\n");
		return 0;
	}
	while(lo<=hi){
		mid=(hi+lo)/2;
		// if((hi+lo)&1){mid++;}
		if(mid-getSumm(mid)<s){
			lo=mid+1;

		}
		else{
			hi=mid-1;
		}

	}
	out(n-hi);
	return 0;
}
