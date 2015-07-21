#include <iostream>

using namespace std;

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

    return c;
}

int main () {
    return 0;
}
