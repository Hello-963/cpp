#include <iostream>
using namespace std;
int main(){
int m,n,numb=0,r;
cout<<"enter n :";
cin>>n;
m=n;
while(n!=0){
    r=n%10;
    n=n/10;
    numb=numb+r*r*r;
}
if (numb==m){
cout<<"armstrong number is :"<<numb;
}

}