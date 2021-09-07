#include<iostream>
using namespace std;
int main(){
    int N,i;
    int sum=0;
    cout<<"Enter a number:";
    cin>>N;
    for(i=1;i<=N;i++){
        if(N%i==0){
            sum=sum+i;  
        }
    }
    cout<<"Total summation of divisors is:"<<sum;
}