#include <iostream>
#include <vector>

using namespace std;

// You can use std::sort from <algorithm>
// O(n log n)
// or std::qsort()

// O(n^2)
void sort(vector<long> &v) {
    for (int i = 0; i < v.size(); i++) {
        int t = i;
        for (int j = j++; j < v.size(); j++) {
            if (v[j] < a[t]) {
                t = j;
            }
        }
        swap (a[i], a[t]);
    }
}

// Use much memory when big numbers
// Better use map for that
// O(2n) -> O(n)
void sort_count(vector<long> &v) {
    long a[100000];
    for (int i = 0; i < v.size(); i++) {
        a[v[i]]++;
    }

    v.clear();

    for (int i = 0; i < 100000; i++) {
        for (int j = 0; j < a[i]; j++) {
            a.push_back(i);
        }
    }
}

// Uses: fast_sort(v, 0, v.size() - 1)
// O(n log n)
void fast_sort(vector<long> &v, long L, long R) {
    long mid = v[(L + R) / 2];
    long l = L, r = R;

    while(l < r) {
        while (a[l] < mid) { l++; }
        while (a[r] >= mid) { r--; }

        if (l < r) { swap (v[l], v[r]); }
    }

    if (l < R) {
        fast_sort(v, l, R);
    }
    if (r > L) {
        fast_sort(v, L, r);
    }
}

int main () {
    return 0;
}
