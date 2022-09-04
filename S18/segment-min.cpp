#include <bits/stdc++.h>
using namespace std;

struct SegmentTree{
	vector<long long> values;
	int size;

	void init(int n){
		size = 1;
		while(size < n) size *= 2;
		// 1 2 4 8 16 32 64 ...
		values.resize(2 * size, INT_MAX);
	}

	void build(vector<int>&a, int x, int lx, int rx){
		if(lx + 1 == rx){
			if(lx < (int)a.size()) values[x] = a[lx];
			return;
		}

		int middle = (lx + rx) / 2;
		build(a, 2*x+1, lx, middle);
		build(a, 2*x+2, middle, rx);
		values[x] = min(values[2*x+1], values[2*x+2]);
	}

	void build(vector<int>&a){
		build(a, 0, 0, size);
	}

	void assign(int i, int v, int x, int lx, int rx){
		if(lx + 1 == rx){
			values[x] = v;
			return;
		}

		int middle = (lx + rx) / 2;
		if(i < middle){
			assign(i, v, 2*x+1, lx, middle);
		}else{
			assign(i, v, 2*x+2, middle, rx);
		}
		values[x] = min(values[2*x+1], values[2*x+2]);
	}

	void assign(int i, int v){
		assign(i, v, 0, 0, size);
	}

	long long calc(int l, int r, int x, int lx, int rx){
		if(lx >= l && rx <= r) return values[x];
		if(lx >= r || rx <= l) return INT_MAX;

		int middle = (lx + rx) / 2;
		long long left = calc(l, r, 2*x+1, lx, middle);
		long long right = calc(l, r, 2*x+2, middle, rx);
		return min(left, right);
	}

	long long calc(int l, int r){
		return calc(l, r, 0, 0, size);
	}
};

int main(){
	int n,m;
	cin>>n>>m;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	SegmentTree st;
	st.init(n);
	st.build(a);

	while(m--){
		int type;
		cin>>type;
		if(type == 1){
			int i,v;
			cin>>i>>v;
			st.assign(i, v);
		}else{
			int l, r;
			cin>>l>>r;
			cout<<st.calc(l, r)<<endl;
		}
	}
	return 0;
}
