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
	vector<int> a, b;
	int  sum=0, ans;
	int k=0;
	long long N, NN;
	string Num;

	cin >> Num;
    
	k = Num.size();

	for(int i=0; i<k; i++){
		a.push_back(Num[i]-'0');
		b.push_back(a[i]%3);

		sum += b[i];

	}

    
	
	if(sum%3 == 0){
		ans=0;
	}
	if(sum%3==1){
		if(k==1 || (k==2&&b[0]==2)){ans=-1;}else{
			if(find(b.begin(), b.end(), 1)==b.end()){ans=2;}else{ans=1;}
		}
	}
	if(sum%3==2){
		if(k==1 || (k==2&&b[0]==1)){ans=-1;}else{
			if(find(b.begin(), b.end(), 2)==b.end()){ans=2;}else{ans=1;}
		}
	}

	cout << ans <<endl;
}
