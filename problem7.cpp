#include <iostream>

int main() {
    int n = 10001, count = 0, num = 1;

    while (count < n) {
        num++;
        int factors = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) factors++;
        }
        if (factors == 2) count++;
    }

    std::cout << num;
    return 0;
}