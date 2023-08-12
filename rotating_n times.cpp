#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[100];
	int n,a,c,temp;
	cout<<"How many elements you want in array=";
	cin>>a;
	for(int i = 0;i<a;i++){
		cout<<"Enter "<<i<<" element=";
		cin>>arr[i];
		
	}
	cout<<"enter how many times you want to rotate the array=";
	cin>>n;
	n=n%a;
	for(int j = 1;j<=n;j++){
		temp = arr[a-1];
	for(int i = a-1;i>=0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	}
	cout<<"Array after rotating "<<n<<" times"<<endl;
	for(int i = 0;i<a;i++){
		cout<<arr[i]<<" ";
		
	}
}
