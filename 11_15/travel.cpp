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

const int MAXN = 8;
bool used[MAXN];
int perm[MAXN];
int number = 0;

//Depth-first search. Permutaions of (n-pos). the first pos sholud be called as 0 in the main function
void permutation (int pos, int n, int cost, vector<vector<long long> > T, long long K) {

    if (pos == n && perm[0] == 0) {
        for (int i = 0; i < n-1; i++) {
            cost = cost + T.at(perm[i]).at(perm[i+1]);
        }
        cost += T.at(perm[n-1]).at(perm[0]);

        if (cost == K) {
            number++;
        }
        cost = 0;
    }


    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            perm[pos] = i;
            used[i] = true;
            permutation (pos + 1, n, cost, T, K);
            used[i] = false;
        }
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, cost = 0;
    cin >> N;
    vector<vector <long long> > T(N, vector<long long>(N));
    long long K;
    cin >> K;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++ ){
            cin >> T.at(i).at(j);
        }
    }

    permutation (0, N, cost, T, K);
    cout << number << endl;

}
