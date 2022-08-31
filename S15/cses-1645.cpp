#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];

	stack<int> s;
	a[0] = INT_MIN;
	s.push(0);
	for(int i=1;i<=n;i++){
		while(a[s.top()] >= a[i]){
			s.pop();
		}
		cout<<s.top()<<" ";
		s.push(i);
	}
	cout<<endl;	

	return 0;
}
