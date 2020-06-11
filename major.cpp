#include <iostream>
#include<vector>
using namespace std;
vector<int> majority(vector<int> v){
	int element1=v[0];
	int cnt1=1;
	int element2=0;
	int cnt2=0;
	for(int i=1;i<v.size();i++){
		if(v[i]==element1){
			cnt1++;
		}else if(v[i]==element2){
			cnt2++;
		}
		else if(cnt1==0){
			element1=v[i];
			cnt1=1;
		}else if(cnt2==0){
			element2=v[i];
			cnt2=1;
		}else{
			cnt1--;
			cnt2--;
		}

	}

	cnt1=cnt2=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==element1){
			cnt1++;
		}else if(v[i]==element2){
			cnt2++;
		}
	}
	vector<int> ans;
	if(cnt1>(v.size()/3)){
		ans.push_back(element1);
	}
	if(cnt2>(v.size()/3))
{
	ans.push_back(element2);
}
return ans;
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
	vector<int> ans=majority(v);
	if(ans.size()==0){
		cout<<"No Majority Elements";
	}else{
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
	}

	return 0;
}
