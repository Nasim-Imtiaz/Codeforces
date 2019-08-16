//Codeforces 579 Div 3 C    
         
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int num;
	cin>>num;
	long long int n=0;
	long long t;
	for(int i=0;i<num;i++){
		cin>>t;
		n=__gcd(n,t);
	}
	int ans=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i==i){
				ans++;
			}
			else{
				ans+=2;
			}
    	}
    }
    cout<<ans<<endl;
    return 0;
}    
