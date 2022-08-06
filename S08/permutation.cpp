#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> nums; // 1 2 3

vector<int> permutation;
set<int> chosen;

// permutation: []

// permutation: [1]

// permutation: [1,2]

// permutation: [1,2,3]
// print 1,2,3

// permutation: [1,2]

// permutation: [1,3]

// permutation: [1,3]

// permutation: [1,3,2]
// print 1,3,2

// permutation: [2]
void f(){ // O(nn!)
	// if permutation.size == n => print permutation
	// else go to the next step

	if(permutation.size() == n){
		for(int i=0;i<n;i++) cout<<permutation[i]<<" ";
		cout<<endl;
	}else{
		for(int i=0;i<n;i++){
			if(chosen.count(i)){
				continue;
			}
			permutation.push_back(nums[i]);
			chosen.insert(i);
			f();
			permutation.pop_back();
			chosen.erase(i);
		}
	}
}

int main(){
	cin>>n;

	nums.resize(n);

	for(int i=0;i<n;i++) cin>>nums[i];

	f();

	return 0;
}
