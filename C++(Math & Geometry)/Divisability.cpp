#include <iostream>
using namespace std;

int main() {
int A,B,X,i,p,q,sum;
cout<<"Enter three Numbers:";
cin>>A>>B>>X;
p=A/X;
q=B/X;
sum=0;
for(i=p;i<=q;i++){
    sum=sum+X*i;
}
cout<<sum;

}