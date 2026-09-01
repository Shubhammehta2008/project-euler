#include <iostream>

int main() {
    long long n = 600851475143;
    long long max_prime = -1;

    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            max_prime = d;
            n /= d;
        }
    }
    if (n > 1) {
        max_prime = n;
    }

    std::cout << max_prime << '\n'; // 6857
    return 0;
}