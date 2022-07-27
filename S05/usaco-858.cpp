#include <bits/stdc++.h>
using namespace std;

int main(){
	// -1 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
	//  l 0 0 0 0 1 1 1 1 1 1 1 1 1 1  1   r

	// 1 1 3 4 10 14
	// 1 1 2 2 3  3

	int l = -1; // l is not OK
	int r = 14; // r is OK

	while(l+1<r){
		int m = (l+r)/2;
		if(ok(m)) r = m;
		else l = m;
	}
}
