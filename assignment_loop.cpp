//Write a program to print all ARMSTRONG NUMBERS between 100 to 500.

#include <iostream>

using namespace std;

//int main(){
//	int i,d,s,r;
//	for(i=100;i<=500;i++){
//		r=i;
//		s=0;
//		while(r>0){
//			d=r%10;
//			s+=d*d*d;
//			r=r/10;
//		}
//		if(s==i){
//			cout<<s<<endl;
//		}
//				
//	}
//	
//}


//WRITE A PROGRAM TO PRINT A CROSS PATTERN---->

int main(){
	int n ,i,j;
	cout<<"To print a cross pattern of 5 rows"<<endl<<endl;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1){
				if(j==1 or j==5){
					cout<<"*";
				}else cout<<" ";
			}else if(i==2){
				if(j==2 or j==4){
					cout<<"*";
				}else cout<<" ";
			}
			else if(i==3){
				if(j==3){
					cout<<"*";
				}else cout<<" ";
			}else if(i==4){
				if(j==2 or j==4){
					cout<<"*";
				}else cout<<" ";
			}else if(i==5){
				if(j==1 or j==5){
					cout<<"*";
				}else cout<<" ";
			}
		}cout<<endl;
	}
	
}



