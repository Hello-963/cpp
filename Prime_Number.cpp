#include <iostream>
using namespace std;
int main(){
    int sum=0,y,n;
    int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    
    for (int u=0;u<13;u++){
      y=A[u];
      
 
      sum=0;
      for(int i=1;i<=y;i++){ //changes
          if (y%i==0){
              sum+=i;
          }
      }
 
 
        if( sum==y+1){
              cout<<"prime Number : "<<y<<endl;
            
        }
        else if(sum!=y+1){
              cout<<"not prime :"<<y<<endl;
            
        }
        
    }
    
}
    

    
