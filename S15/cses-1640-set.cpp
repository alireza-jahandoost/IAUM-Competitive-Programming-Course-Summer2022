#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin>>n>>x;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	set<int> s;
	bool found = false;
	for(int i=0;i<n;i++){
		if(s.count(x - a[i])){
			cout<<i+1<<" ";
			for(int j=0;j<n;j++){
				if(x - a[i] == a[j]){
					cout<<j+1<<endl;
					break;
				}
			}
			found = true;
		}else{
			s.insert(a[i]);
		}
	}
	if(!found){
		cout<<"IMPOSSIBLE\n";
	}

	return 0;
}
