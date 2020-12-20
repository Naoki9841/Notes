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

struct Vertex2D{
    double x;
    double y;
};

#define Vector2D Vertex2D

double distance_vertex(Vertex2D p1, Vertex2D p2) {
        return pow( (p2.x -p1.x) * (p2.x-p1.x) + (p2.y-p1.y) *  (p2.y-p1.y), 0.5);
}

double cross_vector(Vector2D vl, Vector2D vr) {
    return vl.x * vr.y - vl.y * vr.x;
}

double Distance_DotAndLine(Vertex2D P, Vertex2D A, Vertex2D B){
    Vector2D AB,AP;

	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	AP.x = P.x - A.x;
	AP.y = P.y - A.y;

	//ベクトルAB、APの外積の絶対値が平行四辺形Dの面積になる
	double D = abs( cross_vector( AB, AP ) );

	double L = distance_vertex( A, B );	//AB間の距離

	double H = D / L;
	return H;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r_1, r_2, c_1, c_2;

    cin >> r_1 >> c_1 >> r_2 >> c_2;

    if (r_1 == r_2 && c_1 == c_2) {
        cout << 0 << endl;
        return 0;
    }

    //始点から一手でいけるか見る
    if (abs(r_1 - r_2) + abs(c_1 - c_2) <= 3) {
        cout << 1 << endl;
        return 0;
    }

    if(r_1 + c_1 == r_2 + c_2) {
        cout << 1 << endl;
        return 0;
    }

    if(r_1 - c_1 == r_2 - c_2) {
        cout << 1 << endl;
        return 0;
    }

    Vertex2D first;
    first.x = static_cast<double>(r_1);
    first.y = static_cast<double>(c_1);

    Vertex2D first_r;
    first_r.x = static_cast<double>(r_1+1);
    first_r.y = static_cast<double>(c_1+1);

    Vertex2D first_l;
    first_l.x = static_cast<double>(r_1+1);
    first_l.y = static_cast<double>(c_1-1);

    Vertex2D second;
    second.x = static_cast<double>(r_2);
    second.y = static_cast<double>(c_2);

    //直線が終点の絶対値領域に入るか見る
    if (Distance_DotAndLine(second, first, first_r) <= 2 * pow(2, 0.5)) {
        cout << 2 << endl;
        //cout << Distance_DotAndLine(first, second, first_r) << endl;
        return 0;
    }
    if (Distance_DotAndLine(second, first, first_l) <= 2 * pow(2, 0.5)) {
        cout << 2 << endl;
        return 0;
    }


    if ( (r_1-c_1+r_2+c_2)%2 == 0 || (r_2-c_2+r_1+c_1)%2 == 0 ) {
        cout << 2 << endl;
        return 0;
    }else{
        cout << 3 << endl;
        return 0;
    }



}
