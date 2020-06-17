#include<iostream>
#include<climits>
using namespace std;
int mids(int arr[],int si,int ei,int mid){
int sum=0;
int i=mid;
int j=mid+1;
int lsum=INT_MIN;
while(i>=0){
    sum+=arr[i];
    lsum=max(lsum,sum);
    i--;
}
sum=0;
int rsum=INT_MIN;
while(j<=ei){
    sum+=arr[j];
    rsum=max(rsum,sum);
    j++;
}
return lsum+rsum;
}
int sum(int arr[],int si,int ei){
if(si==ei){
        return arr[si];
}
else if(si<ei){
    int mid=(si+ei)/2;
    int leftsum=sum(arr,si,mid);
    int rightsum=sum(arr,mid+1,ei);
    int midsum=mids(arr,0,ei,mid);
    int alpha=max(leftsum,rightsum);
    return max(alpha,midsum);
}
else{return 0;}
}
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
    cout<<sum(arr,0,n-1);
    t--;
}
return 0;
}
