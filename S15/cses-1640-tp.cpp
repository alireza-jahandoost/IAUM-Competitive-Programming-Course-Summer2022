#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin>>n>>x;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int> b = a;

	sort(b.begin(), b.end());

	int p1 = 0, p2 = n - 1;
	bool found = false;

	while(p1 < p2){
		if(b[p1] + b[p2] == x){
			found = true;
			break;
		}else if(b[p1] + b[p2] < x){
			p1 ++;
		}else{
			p2 --;
		}
	}

	if(found){
		for(int i=0;i<n;i++){
			if(b[p1] == a[i]){
				cout<<i+1<<" ";
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(b[p2] == a[i]){
				cout<<i+1<<endl;
				break;
			}
		}
	}else{
		cout<<"IMPOSSIBLE\n";
	}

	return 0;
}
