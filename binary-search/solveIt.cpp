/*
 https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1282
 */

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<"\n"
#define in(x) cin>>x
#define out(x) cout<<x
#define forn(i, n) for (int i = 0; i < int(n); ++i)

double get_(double p, double q, double r, double s, double t, double u, double x){
	return (p*exp(-x))  + (q*sin(x)) + (r*cos(x)) + (s*tan(x)) + (t* x*x) + u  ;
}




int main(){
	double p,q,r,s,t,u,x;

	while(in(p) && in(q) && in(r) && in(s) && in(t) && in(u) ){
		bool flag=1;
		double hi=1.0;
		double lo=0.0;
		double prev=x=.5;
		while(1){
			double val= get_(p,q,r,s,t,u,x);
			if(abs(val-0.0)<0.00000000001){
				cout <<fixed;
    			cout << setprecision(4);
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
