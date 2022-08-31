#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, s;
	cin>>n>>s;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	long long l = 0, sum = 0, best = 0;
	for(int r = 0;r < n;r++){
		sum += a[r];
		while(sum > s){
			sum -= a[l];
			l++;
		}
		best = max(best, r - l + 1);
	}
	cout<<best<<endl;

	return 0;
}
