#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	int nums[100000+200];
	// int nums[n];

	for(int i=1;i<=n;i++) cin>>nums[i];

	for(int i=0;i<k;i++){
		int l = 0; // nums[l] <= x
		int r = n+1; // nums[r] > x

		int x;
		cin>>x;
		while(l+1<r){
			int middle = (l+r)/2;

			if(nums[middle] <= x) l = middle;
			else r = middle;
		}

		cout<<l<<endl;
	}
	return 0;
}
