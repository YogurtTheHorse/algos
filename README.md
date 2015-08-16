# algos
I wrote some algos for program olympiads. 

# Some docs

### Algos list:

1. [DFS](#dfs---source)
2. [Dividers count](#dividers-count---source)
3. [Euclid algorithm](#euclid-algorithm---source)
  3.1. [GCD](#gcd)
  3.2. [LCM](#lcm)
4. [Fast power](#fast-power---source)
5. [Is prime](#is-prime---source)
6. [Segment tree](#segment-tree---source)
7. [Sorting](#sorting---source)

### DFS - [source](https://github.com/yegorf1/algos/blob/master/dfs.cpp)
There are two functions. You need two use second one (But if you don't want to enter some vertex you have to use second).

  - Args:
    * `v` - Contains neighbours. v[i] contains all neighbours of `i` vertex
    * `mark` - mark[i] == true if dfs wwas in `i` vertex
    * `goal` - vertex we looking for
    * `from` - vertex where dfs starting searxhing
    
  - Complex:
    This algo is **O(|E|)**
  
  - Returns:
    **True** if there is path from `from` to `goal` and **False** otherwise
    
  - Example using:
  
    ```C++
    vector<vector<long> > v;
  
    /* some work with v */
  
    dfs(v, 0, v.size() - 1);
    ```

### Dividers count - [source](https://github.com/yegorf1/algos/blob/master/dividers_count.cpp)
This algo counting dividers of `x`:

  - Args:
    * `x` - number we will counting from
  
  - Complex:
    This algo is **O(sqrt(x))**
  
  - Returns:
    Count of dividers
    
  - Example using:
    ```C++
    dividersCount(50); // 4
    ```

### Euclid algorithm - [source](https://github.com/yegorf1/algos/blob/master/euclid.cpp)

There are two functions:

#### GCD:
  - Args:
    * `a` - first of two numbers we working with
    * `b` - second of two numbers we working with
  - Complex:

      > In the uniform cost model (suitable for analyzing the complex:ity of gcd calculation on numbers that fit into a single machine word), each step of the algorithm takes constant time, and Lamé's analysis implies that the total running time is also **O(h)**.
    [Wikipedia](https
    //en.wikipedia.org/wiki/Euclidean_algorithm#Algorithmic_efficiency)

  - Returns:
    Greatest common devider of `a` and `b`
  
  - Example using:
    ```C++
    gcd(342, 56); // 2
    ```

#### LCM
  - Args:
    * `a` - first of two numbers we working with
    * `b` - second of two numbers we working with
  - Complex:
    Same as [GCD](#gcd)

  - Returns:
    Lowest common multiple of `a` and `b`
  
  - Example using:
    ```C++
    lcm(342, 56); // 9576
    ```

### Fast power - [source](https://github.com/yegorf1/algos/blob/master/fast_pow.cpp)
There are two functions. Recomended to use second one because there is no recursion

  - Args:
    * `n` - base of power
    * `x` - exponent of pwer

  - Complex:
    Running complex is **O(log b)**

  - Returns:
    `n ^ x`

  - Example using:
    ```C++
    pow_loop(12, 5); // 248832
    ```

### Is prime - [source](https://github.com/yegorf1/algos/blob/master/is_prime.cpp)
  Better to use when there are a lot of request and move arrays to global level:

  - Args:
    * `x` number we will work with

  - Complex:
    **O(n * lg(lg(x)))**

  - Returns:
    **True** if `x` is prime and **False** otherwise

  - Eaxmple using:
    ```C++
    isPrime(3571); // true
    ```

### Segment Tree - [source](https://github.com/yegorf1/algos/blob/master/segment_tree.cpp)
  Class for working with [Segment tree](https://en.wikipedia.org/wiki/Segment_tree)

  - Public Methods:
    * `SegemntTree` - creates new segment tree
        + `n` - count of elements
        + `a` - array of elements
        + `foo` - functions that returns value parent vertex of segment tree (max, for example)

    * `get()` - returns value of top vertex

    * `get(int l, int r)` - returns value in range [**l**, **r**] of elements

    * `change(int i, T x)` - change value of element at `i` to `x`

  - Complex:
    Taking of value of vertex is **O(n * log(n) * O(foo))**

  - Example usage:
    ```C++
    long long maxF(long long a, long long b) {
        return a > b ? a : b;
    }

    int main() {
        int n;
        cin >> n;
        long long *a = new long long[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        SegmentTree<long long> *tree = new SegmentTree<long long>(n, a, &maxF);

        int t;
        cin >> t;
        for (int i = 0; i < t; i++) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << tree->get(l, r) << endl;
        }

        return 0;
    }
    ```

### Sorting - [source](https://github.com/yegorf1/algos/blob/master/sort.cpp)
There are 3 sorting algorithms and args for them the same (except fast_sort, but it will be explained in example).
Better read comments before using.

  - Args:
    * `v` - vector to sort

  - Complex:
    * For `sort` it's **O(n^2)**
    * For `sort_count` it's **O(2n)**
    * For `fast_sort` it's **O(n * log(n))

  - Returns:
    void, but `v` become sorted.

  - Example usage:
    ```C++
    vector<long> &v;

    /* some work with v */

    fast_sort(v, 0, v.size() - 0);
    ```

## License
This work is licensed under [CC0](https://creativecommons.org/publicdomain/zero/1.0/legalcode)