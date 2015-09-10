#include <iostream>
#include <vector>
#include <deque>

using namespace std;

long bfs(const vector<vector<long> > &v, bool *mark, long goal, long from) {
    deque<long> q;
    q.push_back(from);



    if (mark[from]) { return false; }
    mark[from] = true;

    if (from == goal) { return true; }

    for (int i = 0; i < v[from].size(); ++i) {
        if (bfs(v, mark, goal, v[from][i])) {
            return true;
        }
    }

    return false;
}

// Returns true if there is path from @from to @goal
long bfs(const vector<vector<long> > &v, long goal, long from) {
    bool *mark = new bool[v.size()];
    for (int i = 0; i < v.size(); ++i) { mark[i] = false; }

    long res = bfs(v, mark, goal, from);

    delete[] mark;
    return res;
}

int main () { return 0; }
