#include <iostream>

using namespace std;

// O(x^0.5)
long dividersCount(long x) {
    int c = 1;
    for (int i = 2; i * i < x; i++) {
        int p = 1;
        while (x % i == 0) {
            p++;
            x /= i;
        }
        c *= p;
    }

    if (x != 1) {
        c *= 2;
    }

    return c;
}

int main () {
    return 0;
}
