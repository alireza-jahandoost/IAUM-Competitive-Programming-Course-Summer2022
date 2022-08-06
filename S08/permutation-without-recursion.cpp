#include <bits/stdc++.h>
using namespace std;

int main(){

	// next_permutation // O(n!)

	int n;
	cin>>n;

	vector<int> nums(n);

	for(int i=0;i<n;i++) cin>>nums[i];

	sort(nums.begin(), nums.end());

	do{
		for(int i=0;i<n;i++) cout<<nums[i]<<" "; // O(n)
		cout<<endl;
	}while(next_permutation(nums.begin(), nums.end()));


	return 0;
}
