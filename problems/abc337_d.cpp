#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <climits>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int h,w,k;
	cin>> h >> w >> k;
	vector<string> a(h+1);
	for(int i = 1;i<= h;i++) {
		string temp;
		cin>> temp;
		temp = " "+ temp;
		a[i] = temp;
	}
	vector<pair<int,int>> row(h+1,make_pair(0,0)), col(w+1,make_pair(0,0));
	int result = INT_MAX;
	for(int i =1;i<= h;i++){
		for(int j =1;j<= w;j++){
			if(a[i][j]=='.' || a[i][j]=='o'){
				if(a[i][j]=='.'){
					row[i].first = row[i].first+1;
					col[j].first = col[j].first +1;
				}else{
					row[i].second = row[i].second +1;
					col[j].second = col[j].second +1;
				}
				if(row[i].first + row[i].second ==k){
					result = min(result, k - row[i].second);
					if(a[i][j-k+1] == 'o') row[i].second--;
					else row[i].first--;
				}
				if(col[j].first + col[j].second >=k){
					result = min(result, k - col[j].second);
					if(a[i-k+1][j] =='o') col[j].second--;
					else col[j].first--;
				}
			}
			else{ 
				row[i]=make_pair(0,0);
				col[j]=make_pair(0,0);
			}
		} 
	}
	if(result == INT_MAX) cout<<-1<<endl;
	else cout<< result<< endl;

}
 
int main() {
    solve();
    return 0;
}
