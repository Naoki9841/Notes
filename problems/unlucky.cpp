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


int digit_length_ten( int );
int digit_length_eight( int );
bool check_seven_eight( int );
bool check_seven_ten( int );

int digit_length_ten( int num ){
    int count = 0;
    while( num ){
        num = num / 10;
        count++;
    }

    return count;
}

int digit_length_eight( int num ){
    int count = 0;
    while( num ){
        num = num / 8;
        count++;
    }

    return count;
}

// 10進法で7が入っていたらfalse, 入っていなかったらtrue
bool check_seven_ten( int num ){
    int mod, i=0;
    int length = digit_length_ten( num );

    while( num ){
        mod = num % 10;
        num = num / 10;

        if (mod == 7) {
            return false;
        }
    }

    return true;
}

// 8進法で7が入っていたらfalse, 入っていなかったらtrue
bool check_seven_eight( int num ){
    int mod, i=0;
    int length = digit_length_eight( num );

    while( num ){
        mod = num % 8;
        num = num / 8;

        if (mod == 7) {
            return false;
        }
    }

    return true;
}

int main(){
    int N, total;
    cin >> N;
    total = N;

    for (int i=1; i < N+1; i++) {
        if ( (!check_seven_eight(i)) || (!check_seven_ten(i)) ) {
            total--;
        }
    }

    cout << total << endl;


}
