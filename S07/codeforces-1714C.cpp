#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;

		string ans = "";

		for(int i=9;i>=1;i--){
			if(i<=s){
				ans = char(i+'0') + ans;
				s -= i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
