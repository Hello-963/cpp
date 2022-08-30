#include <iostream>
using namespace std;
 
int add(int x, int y){
    return x+y;
}
int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    return x/y;
}
void display(){
    
}

int main(){
    int u,x,y,z;
while(1){
    cout<<endl<<" 1 for addition"<<endl;
    cout<<" 2 for addition"<<endl;
    cout<<" 3 for addition"<<endl;
    cout<<" 4 for addition"<<endl;
    cout<<"Enter option : ";
    cin>>u;
    switch(u){
        case 1:
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enterr second number : ";
        cin>>y;
        z=add(x,y);
        cout<<"Addition is : "<<z;
        break;
        case 2:
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enterr second number : ";
        cin>>y;
        z=subtract(x,y);
        cout<<"Subtraction is : "<<z;
        break;
        case 3:
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enterr second number : ";
        cin>>y;
        z=multiply(x,y);
        cout<<"Miltiplication is : "<<z;
        break;
        case 4:
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enterr second number : ";
        cin>>y;
        z=divide(x,y);
        cout<<"Division is : "<<z;
        break;
    
       default:
        cout<<"Wrong value input please try again";
        break;
}

}
}