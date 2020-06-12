#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	if((n&1)>0){
		int count=1;
		for(int i=0;i<n/2;i++){
            cout<<-(count)<<" "<<count<<" ";
            count++;
        }
        cout<<0;
	}else{
		int count=1;
		for(int i=0;i<n/2;i++){
            cout<<-(count)<<" "<<count<<" ";
            count++;
        }
	}
	return 0;
}