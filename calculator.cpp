#include<iostream>
using namespace std;
int main()
{
   int n,a,b;
   double result;
   cout<<("Press 1 for addition \n");
   cout<<("Press 2 for Subtract \n");
   cout<<("Press 3 for Multiplication\n");
   cout<<("Press 4 for Divide\n");
   cout<<("Choose any one number-->\n");
   cin>>n;
   cout<<("Input 2 numbers-->\n");
   cin>>a;
   cin>>b;
   
   switch(n){
     case 1:
    	result = a+b;
      cout<<"Your result is="<<result;
     break;
     case 2:
     	result = a-b;
     	cout<<"Your result is="<<result;
     break;
     case 3:
     	result = a*b;
	cout<<"Your result is="<<result;
     break;
     case 4:
     	result = a/b;
	cout<<"Your result is="<<result;
     break;
    
    default:
    	cout<<"invalid input";
     break;
    }
return 0;
}

