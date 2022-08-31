#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin>>n>>x;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int> b = a;

	sort(b.begin(), b.end());

	bool found = false;

	for(int i = 0;i < n;i++){

		int p1 = 0, p2 = n - 1;

		while(p1 < p2){
			if(p1 == i){
				p1 ++;
				continue;
			}
			if(p2 == i){
				p2 --;
				continue;
			}
			if(b[p1] + b[p2] + b[i] == x){
				found = true;
				break;
			}else if(b[p1] + b[p2] + b[i] < x){
				p1 ++;
			}else{
				p2 --;
			}
		}
		if(found){
			int first, second;
			for(int j=0;j<n;j++){
				if(b[p1] == a[j]){
					cout<<j+1<<" ";
					first = j;
					break;
				}
			}
			for(int j=n-1;j>=0;j--){
				if(b[p2] == a[j]){
					cout<<j+1<<" ";
					second = j;
					break;
				}
			}
			for(int j=n-1;j>=0;j--){
				if(j == first || j == second) continue;
				if(b[i] == a[j]){
					cout<<j+1<<endl;
					break;
				}
			}
			break;
		}
	}
	
	if(!found){
		cout<<"IMPOSSIBLE\n";
	}

	return 0;
}
