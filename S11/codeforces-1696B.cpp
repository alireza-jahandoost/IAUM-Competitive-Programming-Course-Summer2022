#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	// 0 1 2 0 1 2 0 1 2 0 1 2

	while(t--){
		int n;
		cin>>n;

		int ans = 0;
		bool pos = false;

		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			if(a == 0){
				pos = false;
			}else{
				if(!pos) ans++;
				pos = true;
			}
		}
		cout<<min(2, ans)<<endl;
	}
	return 0;
}
