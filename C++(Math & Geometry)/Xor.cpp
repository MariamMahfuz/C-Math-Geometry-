#include<iostream>
using namespace std;
int main(){ 
    int A,B,Q;
    cout<<"Enter three numbers";
    cin>>A>>B>>Q;
    if(Q==1){
        cout<<A;
    }
    else if(Q==2){
        cout<<B;
    }
    else if(Q>=3){
        cout<<(A^B);
    }
}
