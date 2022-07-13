#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen(filename, "r"||"w", stdin||stdout);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t;
	cin>>t; // t=0
	while(t--){
		// 5
		int a;
		cin>>a;

		int cnt = 0;
		for(int j=0;j<3;j++){
			int b;
			cin>>b;
			if(b>a) cnt++;
		}
		cout<<cnt<<endl;
	}

	return 0;
}
