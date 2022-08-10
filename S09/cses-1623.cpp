#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nums;
long long sum = 0;
long long ans = (1ll<<60);

vector<int> subset;

void f(int index){
	if(index == n){
		long long currentSum = 0;

		for(auto x: subset) currentSum += x;

		ans = min(ans, abs(sum - 2*currentSum)); // |(sum - currentSum) - currentSum|
	}else{
		subset.push_back(nums[index]);
		f(index+1);
		subset.pop_back();
		f(index+1);
	}
}

int main(){
	cin>>n;
	nums.resize(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	for(auto x: nums) sum += x;
		
	f(0);

	cout<<ans<<endl;

	return 0;
}
