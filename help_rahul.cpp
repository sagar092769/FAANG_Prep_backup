#include<iostream>
using namespace std;
int fin(int arr[],int si,int ei,int key){

while(si<=ei){
    int mid=si+ei;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>=arr[si]){
        if(key<=arr[mid] && key>=arr[si]){
            ei=mid-1;
        }else{
            si=mid+1;
        }
    }else{
        if(key>=arr[mid] && key<=arr[ei]){
            si=mid+1;
        }else{
        ei=mid-1;
        }
    }



}
return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<fin(arr,0,n-1,key);
}
