//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n,i,j;
//	cout<<"No.of rows you want to print=";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//			
//		}
//		for(j=1;j<=2*i-1;j++){
//			cout<<'*';
//		}cout<<endl;
//	}
//}

//numerical recatngular problem


//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n,i,j;
//	cout<<"No.of rows you want to print=";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=i;j<=n;j++){
//			cout<<j;
//			
//		}
//		for(j=1;j<=i-1;j++){
//			cout<<j;
//		}cout<<endl;
//	}
//}

//#include <iostream>
//
//using namespace std;
//
//int main(){
//	int n,i,j;
//	cout<<"No.of rows you want to print=";
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if((i+j)%2 == 0){
//				cout<<"2";
//			}else cout<<"1";
//			
//			
//		}cout<<endl;
//		
//		}
//	}


	
#include <iostream>

using namespace std;

int main(){
	int n,i,j;
	cout<<"No.of rows you want to print=";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<j;
		}
		for(j=i-1;j>=1;j--){
			cout<<j;
		}cout<<endl;
		
		}
	}
	






