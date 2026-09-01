#include<iostream>
using namespace std;
int countDivisors(long long n) {
    int count = 0;
    
    // 1 से लेकर sqrt(n) तक लूप
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                count += 1;
            } else {
                count += 2; 
            }
        }
    }
    
    return count;
}
int main(){
    int s=0;
for(int i=1;i<13000;i++){
s+=i;

if(countDivisors(s)>500){
    cout<<s;
    break;
}
}
    return 0;
}