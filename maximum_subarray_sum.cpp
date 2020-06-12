#include <iostream>
#include<climits>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int msf=INT_MIN;
		int cm=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			cm+=x;
			msf=max(msf,cm);
			if(cm<0){
				cm=0;
			}
		}
		cout<<msf<<endl;
	}
}