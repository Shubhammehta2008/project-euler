#include <iostream>

long long find_sum() {
    long long total_sum = 0;
    for (int i = 0; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            total_sum += i;
        }
    }
    return total_sum;
}

int main() {
    std::cout << find_sum() << '\n';
    return 0;
}