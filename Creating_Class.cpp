#include<iostream>
using namespace std;



class Rectangle{
    public:
    int l, b;
    int Area(){
        return l*b;
    }
    int Perimeter(){
        return 2*(l+b);
    }
};
int main(){
    Rectangle r1;
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;
    r1.l=a;
    r1.b=b;
    cout<<"Area is : "<<r1.Area()<<" sqr units"<<endl;
}