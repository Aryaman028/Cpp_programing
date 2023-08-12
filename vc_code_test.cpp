#include <iostream>
// problem on loops

using namespace std;

int main(){
    int i, j,r,c;
    cout<<"Enter the number of rows you want=";
    cin>>r;
    cout<<"Enter the number of columns you want=";
    cin>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<'*';
        }cout<<endl;
    }
}    