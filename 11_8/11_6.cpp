#include<iostream>
#include<math.h>
#include <vector>
using namespace std;
using ll = long;


int main(){
	double N, K, p=0;
	vector<int> l
	cin >> N;
	cin >> K;
	for(int i=0; i<N; i++){
		if(K>i){
			l.push_back(ceil(log2(K/(i+1))));

		}else{
			l.push_back(0);
		}
			p += (1/N) * pow(0.5, l[i]);
	}
	printf("%.12f\n", p);
}
