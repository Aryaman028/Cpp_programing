#include <iostream>
// problem on loops 
//patternsss


//1st problem
using namespace std;

//int main(){
//    int i, j,r,c;
//    cout<<"Enter the number of rows you want=";
//    cin>>r;
//    cout<<"Enter the number of columns you want=";
//    cin>>c;
//    for(i=0;i<r;i++){
//        for(j=0;j<c;j++){
//            cout<<'*';
//        }cout<<endl;
//    }
//} 


//2nd problem
int main(){
	int i, j,r,c;
	cout<<"Enter the number of rows you want=";
    cin>>r;
    cout<<"Enter the number of columns you want=";
    cin>>c;
     for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        	if(i==1 || i==r || j==1 || j==c){
            	cout<<'*';
			}else cout<<' ';
        	
        }cout<<endl;
    }
	
}   
