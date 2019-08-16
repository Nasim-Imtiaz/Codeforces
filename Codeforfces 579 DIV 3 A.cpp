//Codeforfces 579 DIV 3 A   
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(),cout.tie();
	
	int t;
	cin>>t;
	vector<int> a;
	while(t--){
		int n,temp;
		cin>>n;
		int min=201,id;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp<min){
				min=temp;
				id=i;
			}
			a.push_back(temp);
		}
		if(id==0){
			if(a[id+1]-a[id]>1){
				rotate(a.begin(),a.begin()+id+1,a.end());
			}
		}
		else if(id==n-1){
			if(a[id-1]-a[id]>1){
				rotate(a.begin(),a.begin()+id,a.end());
			}
		}
		else if(a[id+1]-a[id]>1){
			rotate(a.begin(),a.begin()+id+1,a.end());
		}
		else{
			rotate(a.begin(),a.begin()+id,a.end());	
		}
		if(is_sorted(a.begin(),a.end()) || is_sorted(a.begin(),a.end(),greater<int>())){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		a.clear();
	}
	return 0;
}     
