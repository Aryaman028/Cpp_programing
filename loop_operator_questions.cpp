//REVERSING THE DIGITS OF THE NUMBER-------->

//#include <iostream>
//
//
//using namespace std;
//
//int main(){
//	int n,r,d;
//	cout<<"enter the number you want to reverse=";
//	cin>>n;
//	while(n>0){
//		d=n%10;
//		r=r*10+d;
//		n=n/10;		
//	}cout<<"Reverse number="<<r;
//}
 
//FIND THE SUM OF THE GIVEN SERIES-->>
// S = 1-2+3-4...N;

#include <iostream>

using namespace std;

int main(){
	int even,odd,sum,n,i;
	cout<<"N=";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			even+=i;
		}else odd+=i;
	}sum = odd - even;
	cout<<"Sum of the given series is="<<sum;
}

