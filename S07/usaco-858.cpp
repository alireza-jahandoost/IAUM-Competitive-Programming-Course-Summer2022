#include <bits/stdc++.h>
using namespace std;

int n,m,c;
const int N = 1e5 + 200;
int nums[N];

bool ok(int delay){
	int i = 1;
	int remainingSpace = c - 1;
	int busCount = 1;
	int startOfBus = nums[0];

	while(i<n){
		if(remainingSpace > 0 && nums[i] - startOfBus <= delay){
			remainingSpace --;
		}else{
			remainingSpace = c - 1;
			busCount ++;
			startOfBus = nums[i];
		}
		i++;
	}

	return busCount <= m;
}

int main(){
	freopen("convention.in", "r", stdin);
	freopen("convention.out", "w", stdout);
	// -1 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
	//  l 0 0 0 0 1 1 1 1 1 1 1 1 1 1  1   r

	// 1 1 3 4 10 14
	// 1 1 2 2 3  3
	
	cin>>n>>m>>c;
	for(int i=0;i<n;i++) cin>>nums[i];

	sort(nums, nums + n);

	int l = -1, r = nums[n-1]+10;

	while(l+1 < r){
		int m = (l + r) / 2;

		if(ok(m)){
			r = m;
		}else{
			l = m;
		}
	}

	cout<<r<<endl;
	return 0;
}
