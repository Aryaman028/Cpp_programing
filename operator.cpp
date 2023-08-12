#include <iostream>
//Write a program to take the values of two variables a and b from the keyboard and then check if
//both the conditions 'a < 50' and 'a < b' are true.

using namespace std;

int main(){
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<((a<50)&&(a==b))<<endl;
}

//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

//int main(){
//	int num,div,sum;
//	int count=5;
//	cout<<"enter a five digit number=";
//	cin>>num;
//	while(num>0){
//		div = num%10;
//		if((count==4)or (count==1))
//			sum+=div;
//		count-=1;
//		num = num/10;
//	}
//	cout<<sum;
//	
//}

