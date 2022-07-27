#include <bits/stdc++.h>
using namespace std;

int main(){
	// upper_bound , lower_bound

	int n,k;
	cin>>n>>k;

	int nums[100000];

	for(int i=0;i<n;i++)cin>>nums[i];

	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		
		int index = lower_bound(nums, nums + n, x) - nums;
		
		if(index < n && nums[index] == x) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
