#include<iostream>
#include<math.h>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int n, p, max=1, count=0, gcd=0, ans=2;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> p;
		a.push_back(p);
		if(max<p){max=p;}
	}

	for(int j=1; j<max; j++){
		for(int i=0; i<n; i++){
			if(a[i]%(j+1)==0){
				count++;
			}
		}

		if(gcd<count){gcd=count; ans=j+1;}
		count=0;
	}

	cout << ans << endl;

}