/*
 https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3003
 */

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)

double get_(vector<int> & v, double irr){
	double summ=0;
	int n= v.size();
	forn(i,n){
		summ+= 1.0* v[i] / pow(1+irr, i);
	}
	return summ;
}




int main(){
	int n;

	while(1){
		in(n);
		if(!n) break;
		vector<int> v(n+1);
		forn(i,n+1){
			in(v[i]);
		}
		double x;
		bool flag=1;
		double hi=1e9+7;
		double lo=-1.0;
		double prev=x=.5;
		while(1){
			double val= get_(v,x);
			if(abs(val-0.0)<0.00000000001){
				cout <<fixed;
    			cout << setprecision(2);
				out(x<<"\n");
				flag=0;
				break;
			}
			if(val<0){
				hi=x;
			}
			else{
				lo=x;
			}
			prev=x;
			x=(hi+lo)/2.0;

			if(abs(prev-x)<.0000000000000000001){

				break;
			}



		}
		if(flag){
			out("No solution\n");
		}


	}
return 0;
}
