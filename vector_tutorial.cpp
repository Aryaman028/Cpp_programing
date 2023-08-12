#include<bits/stdc++.h>
//this program will work in any other compiler

using namespace std;

int main(){
	vector<int>v(10);
	vector<int>v1;
	v={1,2,3,2,1,3,1};
	int l = v.size();
	for(int i=0;i<l;i++){
		if(v[i]==2){
			v1.push_back(i);
		}	
	}
	int end = v1.size();
	cout<<v1[end-1];
	
}
