#include <iostream>
#include <vector>

using namespace std;

bool dfs(const vector<vector<long> > &v, bool *mark, long goal, long from) {
    if (mark[from]) { return false; }
    mark[from] = true;

    if (from == goal) { return true; }

    for (int i = 0; i < v[from].size(); ++i) {
        if (dfs(v, mark, goal, v[from][i])) {
            return true;
        }
    }

    return false;
}

// Returns true if there is path from @from to @goal
bool dfs(const vector<vector<long> > &v, long goal, long from) {
    bool *mark = new bool[v.size()];
    for (int i = 0; i < v.size(); ++i) { mark[i] = false; }

    bool res = dfs(v, mark, goal, from);

    delete[] mark;
    return res;
}

int main () { return 0; }
