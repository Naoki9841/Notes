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

    int N, x, y;
    double a, b;
    vector <int> x_list, y_list;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        cin >> y;
        x_list.push_back(x);
        //cout << x_list[i];
        y_list.push_back(y);
        //cout << y_list[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (x_list[i] == y_list[j] && y_list[i] == y_list[j]) continue;
            if (x_list[i] != x_list[j]) {
                a = (double)(y_list[i] - y_list[j])/(x_list[i] - x_list[j]);
                //cout << y_list[i] << y_list[j] << endl;
                //cout << a << endl;
                b = y_list[i] - a * x_list[i];
                //cout << b << endl;

                for (int k = 0; k < N; k++) {
                    if ((y_list[k] == y_list[i] && x_list[k] == x_list[i]) || (y_list[k] == y_list[j] && x_list[k] == x_list[j])) continue;
                    if ((x_list[i] - x_list[j]) * y_list[k] ==  (y_list[i] - y_list[j]) * x_list[k] + (y_list[i]*(x_list[i] - x_list[j]) - (y_list[i] - y_list[j]) * x_list[i]) ) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
                
            }else{
                for (int k = 0; k < N; k++) {
                    if (k == i || k == j) continue;
                    if (x_list[k] == x_list[i]) {
                        if (y_list[k] == y_list[i] || y_list[k] == y_list[j]) {
                            continue;
                            }else{
                                cout << "Yes" << endl;
                                return 0;
                            }
                    }
                }
            }
            
        }
    }

    cout << "No" << endl;
    return 0;
}
