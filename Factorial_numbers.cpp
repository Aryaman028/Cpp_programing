//PRINT THE FIRST N FACTORIAL NUMBERS---->

#include <iostream>


using namespace std;

int main(){
	int i,n,j;
	cout<<"First n numbers n=";
	cin>>n;
	for(i=1;i<=n;i++){
		int p=1;
		for(j=1;j<=i;j++){
			p=p*j;
		}cout<<p<<endl;
	}
	

	}
