#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n; cin>> n;
	string k; cin>> k;
	int c=n;
	vector<int> result;
	while(n--){
		string temp;
		cin>> temp;
		int size = k.size();
		bool check = true;
		if(k.size() == temp.size()){
				int count =0;
				for(int i = 0;i< size;i++){
					if(k[i]!=temp[i]) count++;
				}
				if(count>1) check = false;
		} else if( (k.size() == temp.size()+1) || (temp.size() == k.size()+1) ) {
			string t = k;
			if(temp.size()< t.size()) swap(temp, t);
			reverse(temp.begin(), temp.end());
			int left =0, right = t.size() + temp.size()-1;
			int count =0;
			string tmp = t+temp ;
			while(left< right){
				if( tmp[left] != tmp[right]){ count++; right--; continue;}
				left++; right--;
			}
			if(count>1) check = false;
			
		} 
		else { continue;}
		if(check) result.push_back( c-n);
	}
	cout<< result.size()<<endl;
	for(int i =0;i<result.size();i++) cout<< result[i]<<" ";
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
