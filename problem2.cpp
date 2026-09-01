#include<iostream>
using namespace std;
int main(){
    long long sum=0, l=1,ls=2;
    while (l<=4000000){
      if(l%2==0){
       sum+=l;
      }
      long long temp=ls+l;
      ls=l;
      l=temp;
    }
    cout<<sum;
    return 0;
}