#include <iostream>
using namespace std;


int next(int arr[],int idx,int n){

	return (idx+arr[idx]+n)%n;
}

bool circular_arraY_loop(int *arr,int n){

	for(int i=0;i<n;i++){
		int slow=i;
		int fast=i;

		while(arr[slow]*arr[next(arr,slow,n)]>0 &&
			arr[fast]*arr[next(arr,fast,n)]>0 &&
			arr[fast]*arr[next(arr,next(arr,fast,n),n)]>0
			){
			slow=next(arr,slow,n);
			fast=next(arr,next(arr,fast,n),n);
			if(slow==next(arr,slow,n)){
			break;
		}
			if(slow==fast){
				return true;
			}

		}
		while(arr[slow]>0){
			arr[slow]=0;
			slow=next(arr,slow,n);
		}

	}

return false;


}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	cout<<"HEYA";
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		arr[i]=val;
	}
	cout<<circular_arraY_loop(arr,n);
	return 0;
}