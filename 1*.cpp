#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

void find(vector <string>& b) {
    multiset <string> a;
    for (auto & i : b) {
        a.insert(i);
    }

    vector <int> c(b.size());
    for (int & i : c) {
        i = 0;
    }

    for (auto i = a.begin(); i != a.end(); ++i) {
        int v = a.count(*i);
        ++c[v];
        for (int j = 0; j < v - 1; ++j) {
            ++i;
        }
    }

    int k = 100;
    int f = 0;
    int l = c.size();
    while (k > 0 || l >= 0) {
        k -= c[l];
        f = l;
        --l;
    }

    int n = 100;
    for (auto i = a.begin(); i != a.end(); ++i) {
        int v = a.count(*i);
        if (v > f && n >= 0) {
            --n;
            cout << *i << endl;
            for (int j = 0; j < v - 1; ++j) {
                ++i;
            }
        }
    }

}

int main() {
    vector <string> a(6);
    a[0] = "1";
    a[1] = "22";
    a[2] = "333";
    a[3] = "333";
    a[4] = "333";
    a[5] = "1";
    find(a);
    return 0;
}
