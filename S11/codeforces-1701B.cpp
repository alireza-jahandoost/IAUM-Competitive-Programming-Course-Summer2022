#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		// n = 8
		// 1  2  4  8  3  6  5  7 

		set<int> used;
		cout<<2<<endl;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j*=2){
				if(used.count(j)) continue;
				cout<<j<<" ";
				used.insert(j);
			}
		}
		cout<<endl;
	}
	return 0;
}
