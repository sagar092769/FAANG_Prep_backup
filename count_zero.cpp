#include <iostream>
using namespace std;
int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int fiv=5;
	int count=0;
	while((n/fiv)>0){
		count+=(n/fiv);
		fiv=fiv*5;
	}
	cout<<count;
}