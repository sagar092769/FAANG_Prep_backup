#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<climits>
using namespace std;
# define ll long long

int watermax(vector<int> v){
	int water=INT_MIN;
	int i=0;
	int j=v.size()-1;
	while(i<j){
		int height=min(v[i],v[j]);
		int length=j-(i);
		int cwater=height*length;
		water=max(cwater,water);
		if(v[i]>v[j]){
			j--;
		}else{
			i++;
		}
	}
	return water;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

   int n;
   cin>>n;
   vector<int> v;
   int x;
   for(int i=0;i<n;i++){
   	cin>>x;
   	v.push_back(x);
   }
   cout<<watermax(v);


   return 0;
}

