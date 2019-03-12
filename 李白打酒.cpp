#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void dfs(int i,int store,int flower,int wine){
	if(i == 0 && store == 0 && flower == 0&& wine == 1){
		cnt++;
		return ;
	}
	if(store > 0)
		dfs(i - 1,store - 1,flower,wine*2);
	if(flower > 0)
		dfs(i - 1,store,flower - 1,wine - 1);
}
int main(){
	dfs(14,5,9,2);
	cout <<cnt;
	return 0;
} 
