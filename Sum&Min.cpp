#include <iostream>
using namespace std;

int sum(int n, int A[]){
    int sum=0;
    for (int i=0;i<n;i++)
    sum+=A[i];
    return sum;
}

int min(int A[], int n){
    int min=INT_MAX;
    for (int i=0;i<n;i++){
      if (A[i]<min){
        min=A[i];
        }
        }
return min;
}

int main() {
int t,n,x,a,b;
cin>>t;
while(t--){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
    cin>>x;
    A[i]=x;
    }
    a=sum(n,A);
    b=min(A,n);
    cout<<a-b;
}

}

