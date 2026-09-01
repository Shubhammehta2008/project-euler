#include <iostream>
#include <vector>

int main() {
    long long limit = 2000000;
    std::vector<bool> isPrime(limit, true);
    long long sum = 0;

    for (long long p = 2; p < limit; p++) {
        if (isPrime[p]) {
            sum += p;
            for (long long i = p * p; i < limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    std::cout << sum << '\n';
    return 0;
}