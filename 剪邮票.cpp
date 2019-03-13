#include<bits/stdc++.h>
using namespace std;
int i1,i2,i3,i4,i5,dis[4] = {-1,1,-4,4},vis[13],cnt,res = 0;
void dfs(int n){
	if(cnt == 5) return;
	for(int i = 0;i < 4;i++){
		if((dis[i] == 1 && (n == 4 || n == 8)) || (dis[i] == -1 && (n == 5 || n == 9))) continue;
		int t = n + dis[i];
		if(t >= 1 && t <= 12 &&vis[t] == 0 && (t == i2 || t == i3 || t == i4 || t == i5)){
			vis[t] = 1;
			cnt++;
			dfs(t);
		}
	}
}
int main(){
	for(i1 = 1;i1 <= 12;i1++)
		for(i2 = i1 + 1;i2 <= 12;i2++)
			for(i3 = i2 + 1;i3 <= 12;i3++)
				for(i4 = i3 + 1;i4 <= 12;i4++)
					for(i5 = i4 +1;i5 <= 12;i5++){
						memset(vis,0,sizeof(vis));
						cnt = 1;
						dfs(i1);
						if(cnt == 5) res++;
					}
	cout << res;
	return 0;
} 
