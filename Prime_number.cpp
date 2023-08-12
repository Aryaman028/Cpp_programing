//Given two numbers a and b, write a program to print all the prime numbers present between
//a and b.


#include <iostream>

using namespace std;
int prime_numbers(int x,int y);

int main(){
	int a,b;
	cout<<"A=";
	cin>>a;
	cout<<"B=";
	cin>>b;
	prime_numbers(a,b);
		
}
int prime_numbers(int x,int y){
	for(int i=x;i<=y;i++){
	int c=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				c++;
			}
		}if(c==0){
			cout<<i<<endl;
		}
	}
}
