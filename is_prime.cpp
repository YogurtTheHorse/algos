#include <iostream>

using namespace std;

// O(n * lg(lg(n)))
bool isPrime(long x) {
    if (x < 2) {
        return false;
    }

    bool *primes = new bool[x + 1];
    bool *checked = new bool[x + 1];

    for (int i = 2; i * i <= x; i++) {
        if (!checked[i]) {
            primes[i] = true;
            for (int j = 2 * i; j < x; j += i) {
                checked[j] = true;
                primes[j] = false;
            }
        }
    }

    return primes[x];
}

int main () {
    return 0;
}
