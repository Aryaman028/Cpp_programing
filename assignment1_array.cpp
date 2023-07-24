//- Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
//that they belong to different arrays and are not at the same index. Here 1<size<101

#include <iostream>

using namespace std;

//int main(){
//	int a[]={5,6,10,4,9};
//	int b[]={1,2,3,4,5};
//	int min=a[0]+b[1];
//	int sum=a[0]+b[1];
//	
//	
//	int l1 = sizeof(a)/sizeof(a[0]);
//	int l2 = sizeof(b)/sizeof(b[0]);
//	
//	for(int i = 0;i<l1;i++){
//		for(int j=0;j<l2;j++){
//			if(i!=j){
//				sum=a[i]+b[j];
//			}
//			if(min>sum){
//				min=sum;
//			}
//		}
//	}cout<<min;	
//}

//Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
//both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

int main(){
	int a[]={3,0,1};
	int b[]={8,6,4,5,3,2,1,0};
	int l1 = sizeof(a)/sizeof(a[0]);
	int l2 = sizeof(b)/sizeof(b[0]);
	
	
	//inputs are given already in the assingment thus not using input from the user concept
	
	int i = 0;
	while(i<=l2){
		int count=0;
		for(int j=0;j<l2;j++){
			if(i==b[j]){
				count++;
			}
		}if(count==0){
			cout<<"Missing number in the given range is=";
			cout<<i;
		}i++;
	}	
}





