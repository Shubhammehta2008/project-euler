#include<iostream>
using namespace std;
int main()

{   long long sum = 0;
    long long p = 794000;
    
    for (long long n = 1; n <= p; n += 2) {
        sum += n * n;
    }
    
    cout << sum;
    return 0;
}