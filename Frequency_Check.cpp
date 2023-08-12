#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[100];
	int arr1[100];
	int a,b,c;
	cout<<"How many elements you want=";
	cin>>a;
	for(int i = 0;i<a;i++){
		cout<<"Enter "<<i<<" element=";
		cin>>arr[i];
		
	}
	cout<<"Array is like this="<<endl;
	for(int i = 0;i<a;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
	for(int i = 0 ; i<a;i++){
		c=0;
		for(int j = 0; j<a;j++){
			if(arr[i]==arr[j]){
				c++;
			}
		}arr1[i++]=c;
	}
	
}
