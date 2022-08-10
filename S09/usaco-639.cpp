#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

	int n,k;
	cin>>n>>k;

	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	sort(nums.begin(), nums.end());

	// 1,4,5,6,7
	//          

	int ans = 0;

	for(int i=0;i<n;i++){
		int cnt = 1;
		for(int j=i+1;j<n;j++){
			if(nums[j] - nums[i] <= k) cnt++;
		}
		ans = max(ans, cnt);
	}

	cout<<ans<<endl;

	return 0;
}
