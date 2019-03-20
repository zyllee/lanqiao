#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int x;
	int y;
	int num;
}pos;
int n,m;
char maps[550][550];
int vis[550][550];
int pre[550][550];
int dir[4][2] = {1,0,0,-1,0,1,-1,0};
char str[] = {"DLRU"};
void bfs(){
	queue<pos> qu;
	pos t;
	t.x = 1;t.y = 1;t.num = 0;
	qu.push(t);
	vis[1][1] = 1;
	pre[1][1] = -1;
	while(!qu.empty()){
		t = qu.front();
		qu.pop();
		if(t.x == n && t.y == m){
			printf("%d\n",t.num);
			return ;
		}
		for(int i = 0;i < 4;i++){
			pos tt;
			tt.num = t.num + 1;
			tt.x = t.x + dir[i][0];
			tt.y = t.y + dir[i][1];
			if(tt.x >= 1 && tt.x <= n && tt.y >= 1 && tt.y <= m && maps[tt.x][tt.y] == '0' && vis[tt.x][tt.y] == 0){
				pre[tt.x][tt.y] = i;
				qu.push(tt);
				vis[tt.x][tt.y] = 1;
			}
		}
	}
}
void path(int x,int y){
	if(x == 1 && y == 1) return;
	path(x - dir[pre[x][y]][0],y -dir[pre[x][y]][1]);
	printf("%c",str[pre[x][y]]);
}
int main(){
	scanf("%d %d",&n,&m);
	getchar();
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			scanf("%c",&maps[i][j]);
		}
		getchar();
	}
	bfs();
	path(n,m);
	return 0;
}



