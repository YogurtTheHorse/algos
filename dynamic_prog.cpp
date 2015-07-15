#include <iostream>

using namespace std;

// Uses dynamic for counting fibonachi
// O(n)
long fib_dyn(long n) {
    long *f = new long[n];
    f[0] = f[1] = 1;

    for (int i = 2; i < n; i++) {
        f[i] = f[i-1] + f[i - 2];
    }

    return f[n];
}

long **m; // Init
// Return how many summads combos in number
long summads_count_fast(long x, long m) {
    long **m;

    if (m[x][m] != -1) {
        return m[x][m];
    }

    if (x == 0) { return 1; }
    if (x < m) { return 0; }

    long r = 0;

    for (int i = m; i <= x; i++) {
        r += foo(x - i, i);
    }

    return r;
}

// Return how many summads combos in number
// x - number, m - minimal summands
// O (Really big number), O(100) = ~1000000
long summads_count(long x, long m) {
    if (x == 0) { return 1; }
    if (x < m) { return 0; }

    long r = 0;

    for (int i = m; i <= x; i++) {
        r += foo(x - i, i);
    }

    return r;
}

int main () {
    return 0;
}
