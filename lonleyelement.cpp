#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int XOR=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    XOR=XOR^x;
}
cout<<XOR;
return 0;
}
