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
const long long mod = 1000000007;

long long powmod(long long x, long long y){
    long long res = 1;
    for (int i = 0; i < y; i++){
        res = res * x % mod;
    }
    return res;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N, ans;
    cin >> N;

    ans = powmod(10, N) - 2*powmod(9, N) + powmod(8, N);
    ans = ans % mod;
    ans = (ans+mod)%mod;
    cout << ans << endl;

}
