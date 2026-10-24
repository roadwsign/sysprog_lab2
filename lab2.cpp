#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    for (int i = 2; i <= 10000000; ++i) {
        if (isPrime(i)) {
            count++;
        }
    }
    std::cout << "Total primes found: " << count << std::endl;
    return 0;
}