#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b;
	cin >> a >> b;
	cout << "Original Numbers:\n";
	cout << "a = " << a << " " << "b = " << b << "\n";
	//swap algorithm
	a=a-b;
	b=a+b;
	a=b-a;
	cout << "After Swap:\n";
	cout << "a = " << a << " " << "b = " << b << "\n";
}
