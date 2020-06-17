#include<iostream>
#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<b;i++)
using namespace std;

bool pratacomplex(long long arr[],int val,int n,int tp){
int cur_prata=0;
int a=INT_MIN;
fo(i,0,n){

int chef=arr[i];
int minutes=0;
int fact=1;
while(minutes<=val){
    minutes+=fact*(chef);
    fact++;
    cur_prata++;
}
cur_prata--;
if(cur_prata>=tp){
    return true;
}
}
return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
int p,l;
cin>>p>>l;
long long arr[l];
fo(i,0,l){cin>>arr[i];}
sort(arr,arr+l);
long long last_val=0;
long long mul=arr[l-1];
int fact=1;
fo(i,0,p){last_val+=mul*(fact);
fact++;
}
long long si=0;
long long ei=last_val;
long long ans=INT_MAX;
while(si<=ei){

    long long mid=(si+ei)/2;
    bool is=pratacomplex(arr,mid,l,p);
    if(is){
        ei=mid-1;
        ans=min(ans,mid);
    }else{
        si=mid+1;
    }
}
cout<<ans<<endl;
    }
return 0;
}
