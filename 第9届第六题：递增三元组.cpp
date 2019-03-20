#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],b[n],c[n];
	for(int i = 0;i < n;i++) scanf("%d",&a[i]);
	for(int i = 0;i < n;i++) scanf("%d",&b[i]);
	for(int i = 0;i < n;i++) scanf("%d",&c[i]);
	sort(a,a+n);
  	sort(b,b+n);
  	sort(c,c+n);
	int sum = 0;
	for(int i = 0;i < n;i++){
		int x = (lower_bound(a,a+n,b[i]) - a);
		int y = (n - (upper_bound(c,c+n,b[i]) - c));
		sum += x * y;
	}
	cout << sum;
	return 0;
} 
