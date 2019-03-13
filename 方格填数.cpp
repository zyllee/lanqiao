#include<bits/stdc++.h>
using namespace std;
int a[10] = {0,1,2,3,4,5,6,7,8,9};
bool judge(int i,int j){
	return (abs(a[i] - a[j]) == 1);
}
bool  func(){
	if(judge(0,1) || judge(0,3) || judge(0,4) || judge(0,5) || judge(1,2) || judge(1,4) || judge(1,5) || judge(1,6) || judge(2,5) || judge(2,6) || judge(3,4) || judge(3,7) || judge(3,8) || judge(4,5) || judge(4,7) || judge(4,8) || judge(4,9) || judge(5,6) || judge(5,8) || judge(5,9)|| judge(5,9)|| judge(5,9)|| judge(5,9)|| judge(6,9)|| judge(7,8)|| judge(8,9)) 
		return false;
	return true;
} 
int main(){
	int cnt = 0;
	while(next_permutation(a,a + 10)){
		if(func())
			cnt++;
	}
	cout << cnt;
	return 0;
} 
