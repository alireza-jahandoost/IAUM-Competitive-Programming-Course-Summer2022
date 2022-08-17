#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>s>>n;

		int price = 0;
		map<int,int> cnt;
		for(auto x:s){
			int current = x - 'a' + 1;
			price += current;
			cnt[current] ++;
		}

		for(int i=26;i>=1;i--){
			while(cnt[i] > 0 && price > n){
				price -= i;
				cnt[i] --;
			}
		}

		for(auto x: s){
			int current = x - 'a' + 1;
			if(cnt[current] > 0){
				cout<<x;
				cnt[current]--;
			}
		}

		cout<<endl;
	}
	return 0;
}

