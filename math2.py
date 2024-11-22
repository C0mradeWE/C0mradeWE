def aval(limit):
    sieve = [True] * (limit + 1)
    sieve[0] = sieve[1] = False  
    for start in range(2, int(limit**0.5) + 1):
        if sieve[start]:
            for multiple in range(start*start, limit + 1, start):
                sieve[multiple] = False
    primes = [num for num, is_prime in enumerate(sieve) if is_prime]
    return primes

def avalnist(n):
    limit = int(n * (nm.log(n) + nm.log(nm.log(n)))) if n > 5 else 15
    primes = aval(limit)
    return primes[n-1]

import numpy as nm


n = int(input("Enter your number:"))
nth_prime_number = avalnist(n)


print("______________________________")

print(f"{nth_prime_number}")



#ّHope your enjoyed!