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





int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, X;
    string S;

    cin >> N >> X >> S;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'o') {
            X++;
        }else{
            if (X == 0) {
                continue;
            }else{
                X--;
            }
        }
    }

    cout << X << endl;

}
