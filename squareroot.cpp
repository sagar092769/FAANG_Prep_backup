#include<iostream>
using namespace std;

float sq(int n,int p){
int si=0;
int ei=n;
float ans=-1;
while(si<=ei){
    int mid=(si+ei)/2;
    if((mid*mid)==n){
        return mid;
    }
    else if((mid*mid)>n){
        ei=mid-1;
    }else{
        si=mid+1;
        ans=mid;
    }

}
float inc=0.1;
for(int i=1;i<=p;i++){
    while(ans*ans<=n){
        ans+=inc;
    }
    ans=ans-inc;
    inc/=10;
}
return ans;


}

int main(){
int n,p;
cin>>n>>p;

cout<<sq(n,p);

return 0;
}
