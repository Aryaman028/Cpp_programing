//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int a,b,c;
//	int arr[100];
//	for(int i = 0;i<=5;i++){
//		cin>>arr[i];
//	}
//	cout<<"The given array is"<<endl;
//	
//	for(int i = 0;i<=5;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<"\n";
//	cout<<"This is the unique numbers"<<endl;
//	for(int i = 0;i<=5;i++){
//		int c=0;
//		for (int j =0;j<=5;j++){
//			if(arr[i]==arr[j]){
//				c++;
//			}
//		}
//		if(c==1){
//			cout<<arr[i];
//		}
//	}
//
//}

#include <bits/stdc++.h>

int max_ele_index(int arr[],int size){
	int max = 0;
	int max_index;
	for(int i = 0;i<size;i++){
		if(max<arr[i]){
			max= arr[i];
			max_index = i;
		}
	}
	return max_index;
}



using namespace std;

int main(){
	int a,b;
	int arr[]= {1,2,35,2,5,4,8,10};
	int index= max_ele_index(arr,8);
	arr[index]=-1;
	int max = max_ele_index(arr,8);
	cout<<arr[max];
	
	
}


