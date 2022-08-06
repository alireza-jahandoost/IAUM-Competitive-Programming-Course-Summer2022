#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nums;

vector<int> subset;

void f(int index){
	if(index == n){
		for(int i=0;i<(int)subset.size();i++){
			cout<<subset[i]<<" ";
		}
		cout<<endl;
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

	for(int i=0;i<n;i++) cin>> nums[i];

	f(0);
	
	
	return 0;
}
