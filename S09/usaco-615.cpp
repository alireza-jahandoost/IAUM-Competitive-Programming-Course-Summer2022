#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);

	int x,y,m;
	cin>>x>>y>>m;

	int ans = 0;
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=1000;j++){
			int current = i*x + j*y;
			if(current <= m){
				ans = max(ans, current);
			}
		}
	}

	cout<<ans<<endl;
	
	return 0;
}
