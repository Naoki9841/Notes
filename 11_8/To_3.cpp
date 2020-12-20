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

    string s;
    cin >> s;
    int ans = 20;

    for (int i = 1; i < 1 <<s.size(); i++) {
        int num = 0;
        int sum = 0;
        for (int j = 0; j < s.size(); j++) {
            if (i >> j & 1){
                num++;
                sum += s[j] - '0';
            }
        }
        if (sum % 3 == 0){
            ans = min((int)s.size() - num, ans);
        }
    }
    if (ans ==20)ans = -1;
    cout << ans << endl;
}
