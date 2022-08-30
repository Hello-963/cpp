#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Value of N: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        if (n%i==0){
            cout<<i;
        }
    }
}