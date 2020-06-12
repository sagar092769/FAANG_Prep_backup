#include <iostream>
using namespace std;
int main(){
		#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}
	int idx=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			int temp=arr[i];
			arr[i]=arr[idx];
			arr[idx]=temp;
			idx++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}