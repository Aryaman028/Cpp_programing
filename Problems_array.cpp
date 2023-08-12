//#include <bits/stdc++.h>
////sorting of array having 
//using namespace std;
//
//int main(){
//	int n,a,b;
//	int c0,c1;
//	int ans[100];
//	cout<<"Number Of elements you want in array=";
//	cin>>n;
//	int arr[n];
//	for(int i = 0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i = 0;i<n;i++){
//		if(arr[i]==0){
//			c0++;
//		}else c1++;
//	}
//	for(int i=0;i<c0;i++){
//		ans[i]=0;
//	}for(int i=c0;i<n;i++){
//		ans[i]=1;
//	}
//	cout<<"\n";
//	for(int i=0;i<n;i++){
//		cout<<ans[i]<<" ";
//	}
//}

//#include <bits/stdc++.h>
////sorting of array having 
//using namespace std;
//
//int main(){
//	int n,a,b,j=0;
//	int c0,c1;
//	int ans[100];
//	cout<<"Number Of elements you want in array=";
//	cin>>n;
//	int arr[n];
//	for(int i = 0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i = 0;i<n;i++){
//		if(arr[i]%2==0){
//			c0++;
//		}else c1++;
//	}
//	for(int i=0;i<n;i++){
//		if(arr[i]%2==0){
//		ans[j++]=arr[i];
//		}
//	}for(int i=0;i<n;i++){
//		if(arr[i]%2!=0){
//		ans[j++]=arr[i];
//		}
//}
//	cout<<"\n";
//	for(int i=0;i<n;i++){
//		cout<<ans[i]<<" ";
//	}
//}
#include <bits/stdc++.h>

using namespace std;

int main(){
	int sum_pre,sum_sub;
	int arr[] = {1,2,3,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++){
		sum_pre=0;
		sum_sub=0;
		for(int j=0;j<i;j++){
			sum_pre+=arr[j];	
		}
		for(int k=n-1;k>=i;k--){
			sum_sub+=arr[k];	
		}
		if(sum_pre==sum_sub){
			cout<<"Partition is at position= "<<i<<endl;
			
		}
	}
}
