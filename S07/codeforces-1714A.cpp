#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){

		int n,H,M;

		cin>>n>>H>>M;

		int sleepTime = H*60+M;

		int ans = 1000000;
		// long long ans = (1ll<<60);

		for(int i=0;i<n;i++){
			int h,m;
			cin>>h>>m;
			int current = h*60 + m;

			int diff;
			if(current >= sleepTime) // current: 8:00	sleepTime: 1:00
				diff = current - sleepTime;
			else // current: 2:00		sleepTime: 6:00
				diff = current + 24 * 60 - sleepTime;

			if(ans > diff)
				ans = diff;
		}

		cout<<ans / 60 << " "<< ans % 60 <<endl;
	}
	return 0;
}
