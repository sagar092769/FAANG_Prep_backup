#include<iostream>
using namespace std;

int ans(int arr[])
int main(){
int t;
cin>>t;
while(t>0){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<ans(arr,0,n-1);
    t--;
}
}
