#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	int ans = 0;
	for(int i=0;i<=100;i++){
		if(i>=a&&i<b){
			ans ++;
		}else if(i>=c&&i<d){
			ans++;
		}
	}
	cout<<ans<<endl;

	return 0;
}
