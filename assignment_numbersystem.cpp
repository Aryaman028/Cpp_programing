////- Given a natural number, find the number of 0’s in the binary representation of that number.

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,re,ans,d;
	cout<<"Natural number=";
	cin>>n;
	int p =1;
	while(n>0){
		re=n%2;
		ans+=re*p;
		p*=10;
		n=n/2;	
	}cout<<"Number in binary form is="<<ans<<endl;
	int count=0;
	//for counting zeros in the binary number 
	while(ans>0){
		d = ans%10;
		if(d == 0){
			count++;
		}
		ans=ans/10;
//		if(d == 1){
//			while(ans>0){
//			if(0==(ans/pow(10,p))){
//			count+=1;
//			}
//			p--;	
//			}
//		}
	}cout<<"No of zeros found in the binary number is="<<count;
}

//- Given two binary numbers, return the greatest of these numbers in decimal format.


#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,r1,r2,c,d;
	cout<<"enter 1st number=";
	cin>>a;
	cout<<"enter 2st number=";
	cin>>b;
	int p = 0;
	while(a>0){
		d= a%10;
		r1+=d*2*p;
		p++;
		a=a/10;
	}
	
	while(b>0){
		c= b%10;
		r2+=c*2*p;
		p++;
		b=b/10;
	}
	if(r1>r2){
		cout<<r1;
	}else if(r1<r2){
	cout<<r2;
	}
	else 
	cout<<"Both numbers are equal";
	
}


