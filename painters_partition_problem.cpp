#include<bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<b;i++)
using namespace std;

bool paintercomplex(ll arr[],ll mid,int n){

fo(i,0,n){

ll cur_time=0;
int idx=i;
while(idx<n && cur_time<=mid){
    cur_time+=arr[idx++];
}
if(cur_time>mid){
cur_time-=arr[--idx];
}
if(cur_time>=mid){
    return true;
}
}

return false;
}

int main(){
int k,n;
cin>>k>>n;
ll arr[n];
fo(i,0,n){
cin>>arr[i];
}
sort(arr,arr+n);
int t_time=0;
fo(i,0,n){
t_time+=arr[i];
}
long long si=0;;
long long ei=t_time;
ll ans=INT_MAX;
while(si<=ei){
    ll mid=(si+ei)/2;
    bool is=paintercomplex(arr,mid,n);
    if(is){
        ei=mid-1;
        ans=min(ans,mid);
    }else{
        si=mid+1;
    }
}
cout<<ans;
return 0;
}
