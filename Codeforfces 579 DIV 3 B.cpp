//Codeforfces 579 DIV 3 B   
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(),cout.tie();
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n*4];
		for(int i=0;i<n*4;i++){
			cin>>a[i];	
		}
		sort(a,a+n*4);
		int ans=a[0]*a[4*n-1];
		int flag=1;
		for(int i=1,j=4*n-2;i<2*n;i++,j--){
			if(ans!=a[i]*a[j]){
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
			if(i%2!=0){
				if(a[i-1]!=a[i] || a[j+1]!=a[j]){
					cout<<"NO"<<endl;
					flag=0;
					break;
				}
			}
		}
		if(flag){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}     
