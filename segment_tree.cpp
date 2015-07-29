#include <iostream>

using namespace std;

template<class T>
class SegmentTree {
    private:
        T *tree, *a;
        T (*f)(T, T);
        int n;

        void build(int i, int l, int r) {
            if (l == r) {
                tree[i] = a[l];
            } else {
                int mid = (l + r) / 2;
                build(2 * i + 1, l, mid);
                build(2 * i + 2, mid + 1, r);
                tree[i] = f(tree[2 * i + 1], tree[2 * i + 2]);
            }
        }

        T get(int i, int l, int r, int L, int R) {
            if (l == L && r == R) {
                return tree[i];
            }

            int mid = (L + R) / 2;
            if (mid >= r) {
                return get (i * 2 + 1, l, r, L, mid);
            } else if (mid < l) {
                return get (i * 2 + 2, l, r, mid + 1, R);
            }

            return f(get(i * 2 + 1, l, mid, L, mid), get(i * 2 + 2, mid + 1, r, mid + 1, R));
        }

        void change(int i, T x, int index, int L, int R) {
            if (L == R) {
                tree[index] = x;
                return;
            }

            int mid = (L + R) / 2;
            if (mid >= i) {
                change(i, x, index * 2 + 1, L, mid);
            } else {
                change(i, x, index * 2 + 2, mid + 1, R);
            }

            tree[index] = f(tree[index * 2 + 1], tree[index * 2 + 2]);
        }
public:
    SegmentTree(int n, T *a, T (*foo)(T, T)) {
        this->n = n;
        this->a = a;
        f = foo;
        tree = new T[n * 4];

        build(0, 0, n - 1);
    }

    T get() {
        return get(0, n - 1);
    }

    T get(int l, int r) {
        return get(0, l, r, 0, n - 1);
    }

    void change(int i, T x) {
        change(i, x, 0, 0, n - 1);
    }
};

int main() {
    return 0;
}
