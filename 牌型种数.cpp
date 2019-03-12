#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void dfs(int type,int sum){
	if(sum > 13)//剪枝
		return ;
	if(type == 13){//遍历完全部类型观察是否满足总和要求
		if(sum == 13)
			cnt++;
		return;
	}
	for(int i = 0;i <=4;i++)
		dfs(type + 1,sum + i);
}
int main(){
	dfs(0,0);
	cout << cnt;
	return 0;
}

