////Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
////a pair in the array whose sum is exactly x.
//
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main(){
//	int n[]={-1,0,1,2,3};
//	int x = 2;
//	int c=0;
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			if(i!=j){
//				if(x==n[i]+n[j]){
//					c++;
//				}
//			}
//		}
//	}
//	if(c!=0){
//		cout<<" Yes pair exist";
//	}
//}
//

//- Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
//a pair in the array whose absolute difference is exactly x.

//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main(){
//	int n[]={5,13,21,14,26};
//	int x = 10;
//	int c=0;
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5;j++){
//			if(i!=j){
//				if(x==n[i]-n[j]){
//					c++;
//				}
//			}
//		}
//	}
//	if(c!=0){
//		cout<<" Yes pair exist";
//	}else cout<<"No pair exist";
//}

//Given a vector arr[] sorted in increasing order. Return an array of squares of each
//number sorted in increasing order. Where size of vector 1<size<101.

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int n[]={-4,-3,-1,0,2,10};
//	for(int i=0;i<6;i++){
//		n[i]=n[i]*n[i];
//	}
//	for(int i=0;i<6;i++){
//		cout<<n[i]<<endl;
//	}
//	cout<<"Now we have to sort the array"<<endl;
//	for(int i=0;i<6;i++){
//		for(int i=0;i<6;i++){  //2 loops are required for sorting dont forget this baby
//			if(n[i]>n[i+1]){
//				int temp = n[i];
//				n[i]=n[i+1];
//				n[i+1]=temp;
//		}
//	}
//	}	
//	for(int i=0;i<6;i++){
//		
//		cout<<n[i]<<endl;
//	}
//}

//- Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
//of unique pairs that exist in the array whose absolute sum is exactly x.

#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[]= {2,2,2};
	int c=0;
	int i,j;
	int x = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Length of array=";
	cout<<n<<endl;
	cout<<endl;
	for(i=0;i<n;i++){
		for(j=(i+1);j<n;j++){
			if (arr[i] + arr[j]==x){
				c++;
				}
			}
		}
	cout<<c;
	

	
}


