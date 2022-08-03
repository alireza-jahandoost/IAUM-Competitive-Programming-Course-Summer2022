#include <bits/stdc++.h>
using namespace std;

int main(){
	// 1 2 1 7 1 2 1
	//         #    
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums(n);
		for(int i=0;i<n;i++) cin>> nums[i];

		set<int> s;

		int ans = 0;
		for(int i=n-1;i>=0;i--){
			if(s.count(nums[i])){
				ans = i + 1;
				break;
			}
			s.insert(nums[i]);
		}
		cout<<ans<<endl;
	}

	return 0;
}
