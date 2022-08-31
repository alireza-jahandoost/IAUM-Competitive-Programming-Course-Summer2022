#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);

	int n, x;
	scanf("%d %d", &n, &x);

	vector<int> a(n);
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	vector<int> b = a;

	sort(b.begin(), b.end());
	map<int, vector<int>> mem;
	for(int i=0;i<n;i++) mem[a[i]].push_back(i+1);

	bool found = false;

	for(int k = 0; k < n && !found;k ++){

		for(int i = k+1;i < n && !found;i++){
			if(i == k) continue;

			int p1 = i+1, p2 = n - 1;

			while(p1 < p2){
				if(p1 == i || p1 == k){
					p1 ++;
					continue;
				}
				if(p2 == i || p2 == k){
					p2 --;
					continue;
				}
				if(b[p1] + b[p2] + b[i] + b[k] == x){
					found = true;
					break;
				}else if(b[p1] + b[p2] + b[i] + b[k] < x){
					p1 ++;
				}else{
					p2 --;
				}
			}
			if(found){
				printf("%d ", mem[b[p1]].back());
				mem[b[p1]].pop_back();

				printf("%d ", mem[b[p2]].back());
				mem[b[p2]].pop_back();

				printf("%d ", mem[b[i]].back());
				mem[b[i]].pop_back();

				printf("%d\n", mem[b[k]].back());
				mem[b[k]].pop_back();
				break;
			}
		}
	}
	
	if(!found){
		printf("IMPOSSIBLE\n");
	}

	return 0;
}
