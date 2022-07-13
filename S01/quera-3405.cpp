#include <bits/stdc++.h>
using namespace std;

int main(){

	int nums[1000];

	int ite = 0;

	int a;

	while(true){
		cin>>a;
		if(a == 0)break;
		nums[ite] = a;
		ite++;
	}

	for(int i=ite-1;i>=0;i--)
		cout<<nums[i]<<endl;
	
	return 0;
}
