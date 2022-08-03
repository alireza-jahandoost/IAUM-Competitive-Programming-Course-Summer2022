#include <bits/stdc++.h>
using namespace std;

void f(int s, int current = 9){
	if(s == 0) return;

	bool printIt = false;

	if(s >= current){
		f(s-current, current-1);
		printIt = true;
	}else
		f(s, current - 1);
	
	if(printIt){
		cout<<current;
	}
}
// f(45, 9)
// f(36, 8) and printIt = true
// f(28, 7) and printIt = true
// f(21, 6) and printIt = true
// f(15, 5) and printIt = true
// f(10, 4) and printIt = true
// f(6, 3) and printIt = true
// f(3, 2) and printIt = true
// f(1, 1) and printIt = true
// f(0, 0)

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		f(s);
		cout<<endl;
	}

	return 0;
}
