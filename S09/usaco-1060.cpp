#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];

	int ans = 0;

	for(int start = 0; start < n; start ++){
		for(int end = start; end < n;end++){
			set<int> s;
			int sum = 0;
			for(int i=start;i<=end;i++){
				sum += nums[i];
				s.insert(nums[i]);
			}

			int mod = (sum) % (end - start + 1);
			if(mod == 0 && s.count(sum / (end - start + 1))) ans++;
		}
	}

	cout<<ans<<endl;

	return 0;
}
