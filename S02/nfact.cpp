#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int fact = 1;
	for(int i=2;i<=n;i++)
		fact*=i;

	for(int j=0;j<fact;j++){
		// do something O(n!)
	}

	return 0;
}
