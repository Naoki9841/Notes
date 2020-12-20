#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "cassert"
#include "ctime"
using namespace std;

const int MAXN = 3;

//the default value of bool is false
bool used[MAXN];
int perm[MAXN];

void display (int* ptr, int n) {
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

//Depth-first search.
void permutation (int pos, int n) {
    if (pos == n) {
        display(perm, n);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            perm[pos] = i;
            used[i] = true;
            permutation (pos + 1, n);
            used[i] = false;
        }
    }

}

int main () {
    permutation(0, 3);
}