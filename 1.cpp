#include <iostream>
#include <vector>
using namespace std;

void swap(vector <int>& a, int i, int j) {
    int k = a[i];
    a[i] = a[j];
    a[j] = k;
}

void find5(vector <int>& b) {
    if (b.size() < 5) {
        cout << "incorrect array";
        return;
    }
    auto a = b;
    bool f = true;
    int end = a.size();
    while (f) {
        f = false;
        for (int i = 0; i < end - 1; ++i) {
            if (a[i] > a[i + 1]) {
                swap(a, i, i + 1);
                f = true;
            }
        }
        --end;
    }
    for (int i = a.size() - 5; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << "" << endl;
}

int main() {
    return 0;
}
