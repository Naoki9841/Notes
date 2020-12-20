/*
n進法で数を表した場合、各数字にアクセスするための方法について
*/
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

int digit_length( int );
int digit_length_ptr( int* );
vector<int> slice_digit( int );
vector<int> slice_digit_8( int );

int digit_length_ptr( int *numptr ){
    int count = 0;
    while( *numptr ){
        *numptr = *numptr / 10;
        count++;
    }

    return count;
}

int digit_length( int num ){
    int count = 0;
    while( num ){
        num = num / 10;
        count++;
    }

    return count;
}


//numを10進法で表した時の各桁の数を格納する配列の先頭ポインタを返す
vector<int> slice_digit( int num ){
    int mod, i=0;
    vector<int> parts;
    while( num ){
        mod = num % 10;
        num = num / 10;

        parts.push_back(mod);
    }
    reverse(parts.begin(), parts.end());
    return parts;
}

//numを8進法で表した時の各桁の数を格納する配列の先頭ポインタを返す
vector<int> slice_digit_8( int num ){
    int mod, i=0;
    vector<int> parts;
    while( num ){
        mod = num % 8;
        num = num / 8;

        parts.push_back(mod);
    }
    reverse(parts.begin(), parts.end());
    return parts;
}

int main(){

    int N;
    cin >> N;

    vector<int> v = slice_digit(N);
    vector<int> u = slice_digit_8(N);

    for (auto value: v) {
        cout << value;
    }
    cout << endl;


    for (auto value: u) {
        cout << value;
    }
    cout << endl;

    return 0;
}
