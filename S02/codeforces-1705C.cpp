#include <bits/stdc++.h>
using namespace std;

int main(){

	// string = mark

	// op=0: length=8 start=1 end=4
	// op=1: length=11 start=5 end=7
	// op=2: length=17 start=3 end=8

	// action: index = (index-length(op-1))+start-1
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		int n,c,q;
		cin>>n>>c>>q;

		string s;
		cin>>s;

		vector<vector<long long>>op(c, vector<long long>(3));
		cin>>op[0][1]>>op[0][2];
		op[0][0] = s.length()+(op[0][2]-op[0][1]+1);

		for(int i=1;i<c;i++){
			cin>>op[i][1]>>op[i][2];
			op[i][0] = op[i-1][0]+(op[i][2]-op[i][1]+1);
		}

		while(q--){
			long long index;
			cin>>index;
			for(int i=c-1;i>=0;i--){
				if((i>0&&op[i-1][0]>=index)||index<=(int)s.length())continue;
				index -= (i>0 ? op[i-1][0] : s.length());
				index += op[i][1];
				index --;
			}
			cout<<s[index-1]<<endl;
		}
	}

	return 0;
}
