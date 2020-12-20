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
#include "array"
using namespace std;



/*
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, count = 0;
    cin >> N;

    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j * j <= N-1; j++) {
            if ((N-i) % j == 0) {
                if (j*j == N-i) {
                    count++;
                    cout << "i is " << i << " j is " << j <<  endl;
                    }
                if (j*j != N-i) {
                    count += 2;
                    cout << "i is " << i << " j is " << j <<  endl;
                }
            }
        }
    }
    cout << count << endl;
}
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, count = 0;
    cin >> N;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j * i < N; j++) {
                count++;
            }
    }
    cout << count << endl;
}
