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
int* slice_digit( int );

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


//numを10進法で表した時の書く桁の数を格納する配列の先頭ポインタを返す
int* slice_digit( int num ){
    int mod, i=0;
    int *parts = NULL;
    while( num ){
        mod = num % 10;
        num = num / 10;

        parts[i++] = mod;
    }
    return parts;
}

int main(){
    int i=-102;
    int *intptr;
    //cout << i << endl;
    //cout << &i << endl;

    //intptr = &i;

    //cout << intptr << endl;
    //cout << *intptr << endl;
    /*
    int n_ptr = 101;
    int n = 101;
    
    cout << digit_length_ptr(&n_ptr) << endl;
    cout << n_ptr << endl;

    cout << digit_length(n) << endl;
    cout << n << endl;
    */

    int vals[] = { 4, 7, 11 };
    int *valptr = NULL;
    valptr = vals;

    cout << vals[0] << endl;
    cout << *valptr << endl;

    cout << vals[1] << endl;
    cout << *(valptr + 1) << endl;

    cout << &vals[1] << endl;
    cout << valptr + 1 << endl;
    return 0;
}