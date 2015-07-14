#include  <iostream>

using namespace std;

// O(log n)
// Returns how much 1 in binary view of number
long countOnesInBinary(long n) {
    long c = 0;
    while (n) {
        c++;
        n &= (n - 1);
    }

    return c;
}

int main () {
    long n;
    cin >> n;
    cout << countOnesInBinary(n);

    return 0;
}
