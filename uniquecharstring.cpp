#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;
# define ll long long


int uin(string arr[], int i, string ans,int n){
	if (i == n) {
			int freq[26]={0};
			for (int k = 0; k < ans.length(); k++) {
				if (freq[ans[k] - 'a'] == 1) {
					return 0;
				}
				freq[ans[k] - 'a']++;
			}
			return ans.length();
		}
		int o1, o2;
		o1 = o2 = INT_MIN;
		if (ans.length() + arr[i].length() <= 26) {
			o1 = uin(arr, i + 1, ans + arr[i],n);
		}
		o2 = uin(arr, i + 1, ans,n);
		return max(o1, o2);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

   int n;
   cin>>n;
  string v[n];
   for(int i=0;i<n;i++){
   	string s;
   	cin>>s;
   	v[i]=s;
   }
   string x="";
   int i=0;
   cout<<uin(v,i,x,n);

   return 0;
}

