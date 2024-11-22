#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int num, const std::vector<int>& primes) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;

    for (int prime : primes) {
        if (prime > std::sqrt(num)) break;
        if (num % prime == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    if (n == 1) return 2;
    std::vector<int> primes = {2};
    int count = 1;
    int num = 3;

    while (count < n) {
        if (isPrime(num, primes)) {
            primes.push_back(num);
            count++;
        }
        num += 2; // Skip even numbers
    }
    return primes.back();
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "The " << n << "th prime number is " << nthPrime(n) << std::endl;
    return 0;
}


// Hope to your enjoyed