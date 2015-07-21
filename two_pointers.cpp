#include <iostream>

using namespace std;

long *sort_sum(long n, long m, long *A, long *B) {
    long k = 0,
         l = 0;

    int *C = new int[n + m];

    for (int i = 0; i < n + m; i++) {
        if (A[k] < B[l]) {
            C[i] = A[k++];
        } else {
            C[i] = B[l++];
        }
    }

}

int main () {
    return 0;
}
