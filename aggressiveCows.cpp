#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool fun(int mid,int arr[],int c,int n,int lst_val){
int cows=1;
int lstcowplaced=0;
for(int i=1;i<=lst_val;i++){
    if(arr[i]-arr[lstcowplaced]>=mid){
        cows++;
        lstcowplaced=i;
    }
    if(cows==c){
    return true;
    }
}
return false;

}
int main(){
int n,c;
cin>>n>>c;
int arr[n];
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr[i]=x;
}
sort(arr,arr+n);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
int ei=n-1;
int lst_val=arr[n-1]-arr[0];
int si=0;
int ans=INT_MIN;
while(si<=ei){
    int mid=(si+ei)/2;
    bool is=fun(mid,arr,c,n,lst_val);
    cout<<is;
    if(is){
    ans=max(ans,mid);
    si=mid+1;
    }else{
    ei=mid-1;
    }
    cout<<ans<<endl;
}
cout<<ans;
return 0;
}
