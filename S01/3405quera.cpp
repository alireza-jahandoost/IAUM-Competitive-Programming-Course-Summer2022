#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	stack<int> s;

	while(true){
		cin>>a;
		if(a==0) break;

		s.push(a);
	}

	while(!s.empty()){
		a = s.top();
		s.pop();
		cout<<a<<endl;
	}
	return 0;
}
