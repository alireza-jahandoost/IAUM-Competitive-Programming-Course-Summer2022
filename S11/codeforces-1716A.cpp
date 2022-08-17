#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n == 1){
			cout<<2<<endl;
			continue;
		}
		long long ans = n / 3;
		if(n%3 != 0) ans ++;
		cout<<ans<<endl;
	}
	return 0;
}
