# include <iostream>
using namespace std;

int main(){
    int a=0,b=1,n;
    cout<<"how long : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
     a=a+b;
     cout<<a<<endl;
     b=b+a;
     cout<<b<<endl;
    }
}
