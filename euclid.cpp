#include <iostream>

using namespace std;

long gcd(long a, long b) {
    while (b) {
        long r = a % b;
        a = b;
        b = r;
    }

    return a;
}

long lmc(long a, long b) {
    return a * (b / gcd(a, b));
}

int main () {
    return 0;
}
