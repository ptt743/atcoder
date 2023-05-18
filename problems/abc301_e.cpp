#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include <climits>
using namespace std;
using namespace atcoder;
//*****taipt*****//

vector<vector<int>> bfs(int is, int js, vector<string>&a){
	int dx[4] = {1,0,0,-1};
	int dy[4] = {0,1,-1,0};
	int h = a.size();
	int w = a[0].size();
	queue<pair<int,int>> qq;
	vector<vector<int>> res(h, vector<int>(w,1000000000));
  res[is][js]=0;
	qq.push(make_pair(is, js));
	while(!qq.empty()){
		auto t = qq.front();
		int i  = t.first;
		int j  = t.second;
		qq.pop();
		for(int k=0;k< 4;k++){
			int di = i + dx[k];
			int dj = j + dy[k];
			if(di<0 || di >= h || dj <0 || dj >=w ) continue;
      if(a[di][dj]=='#') continue;
			if(res[di][dj]> res[i][j]+1){
			  res[di][dj] = res[i][j]+1;
        qq.push(make_pair(di,dj));
      }
		}
	}
	return res;
}

void solve(){
	int h,w, t;
	cin>> h>>w>>t;
	vector<string>a;
	int is = 0, js = 0, ie = 0, je = 0;
	vector<pair<int,int>> candy;
	for(int i = 0;i< h;i++){
		string temp;
		cin>> temp;
		a.push_back(temp);
		for(int j =0;j<w;j++){
			if(temp[j]=='S'){is = i; js = j;}
			if(temp[j]=='G'){ie = i; je = j;}
			if(temp[j]=='o'){candy.push_back(make_pair(i,j));}
		}
	}
	int cnt  = candy.size();
	vector<vector<vector<int>>> d(cnt, vector<vector<int>>());
	for(int i =0;i< cnt;i++){
		d[i] = bfs(candy[i].first, candy[i].second, a);
	}
	vector<vector<int>> dp(1<<cnt, vector<int>(cnt,1000000000 ));
	for(int i =0;i< cnt;i++) {
    dp[1<<i][i] = d[i][is][js];
  }

	for(int s = 1; s< (1<<cnt);s++){
		vector<int> b;
    for(int j =0;j< cnt;j++) if(s>>j & 1) b.push_back(j);
    for(int nx: b){
			for( int last:b){
				if(last!=nx){
					dp[s][nx] = min(dp[s][nx],dp[s & ~(1<<nx)][last] + d[last][candy[nx].first][candy[nx].second]);
				}
			}
		}

	}
	int ans = -1;
  vector<vector<int>> rr = bfs(is,js,a);
  if(rr[ie][je]<=t) ans =0;
	for(int s = 1;s< 1<<cnt;s++){
		for(int i =0;i< cnt;i++){
			if(dp[s][i]+ d[i][ie][je]<=t){
				int count = 0;
				for(int j =0;j< cnt;j++) if(s>>j & 1) count++;
				ans = max(ans, count);
			}
		}
	}
	cout<<ans<<endl;
}
 
int main() {
    solve();
    return 0;
}

