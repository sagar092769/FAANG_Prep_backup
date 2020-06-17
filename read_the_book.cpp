#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define ll long long
using namespace std;
bool fun(ll arr[],ll val,ll n,ll m){
ll cur_stud=1;
ll cur_time=0;
ll idx=0;
while(idx<n){

    if(cur_time+arr[idx]>val){

       cur_stud++;

        cur_time=arr[idx++];

             if(cur_stud>m){
            return false  ;
        }

    }else{
       cur_time+=arr[idx++];
    }


}
return true;

}
int main(){
int n;
cin>>n;
int m;
cin>>m;
ll arr[n];
fo(i,0,n){
cin>>arr[i];
}
ll si=arr[n-1];
ll ei=0;
fo(i,0,n){
ei+=arr[i];
}
ll ans=INT_MAX;
while(si<=ei){
    ll mid=(si+ei)/2;
    bool is=fun(arr,mid,n,m);
    if(is){
        ans=min(ans,mid);
        ei=mid-1;
    }else{
        si=mid+1;
    }
}
cout<<ans;
return 0;
}
