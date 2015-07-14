#include <iostream>

using namespace std;

#define sqr(a) (a * a)

// Returns x ^ n
long pow(long x, long n) {
    if (!n) {
        return 1;
    }

    if (n % 2) {
        return x * pow(sqr(x), (n - 1) / 2)
    } else {
        return pow(sqr(x), n / 2);
    }
}

// Removed recursion
long pow_loop(long n, long x) {
    long r = 1;
    while (n) {
        if (n % 2 == 0) {
            r *= x;
        }
        x *= x;
        n /= 2;
    }
}

int main () {
    return 0;
}
