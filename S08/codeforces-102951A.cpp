#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	vector<int>x(n), y(n);

	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<n;i++) cin>>y[i];

	long long ans = 0;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long xs = x[i] - x[j];
			xs *= xs;
			long long ys = y[i] - y[j];
			ys *= ys;
			ans = max(ans, xs + ys);
			// if(xs + ys > ans) ans = xs + ys;
		}
	}

	cout<<ans<<endl;

	return 0;
}
