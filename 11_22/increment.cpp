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

array< array< array<double, 101>, 101>, 101> dp;

//メモ化再帰
double f (int a, int b, int c) {
    if (dp[a][b][c]) return dp[a][b][c];
    if (a==100 || b==100 || c==100) return 0;
    double ans = 0;
    ans += (f(a+1, b, c) + 1) * a / (a + b + c);
    ans += (f(a, b+1, c) + 1) * b / (a + b + c);
    ans += (f(a, b, c+1) + 1) * c / (a + b + c);

    dp[a][b][c] = ans;
    return ans;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;

    printf("%.12f\n", f (A, B, C));
}
