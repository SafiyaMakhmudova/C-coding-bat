#include <iostream>
using namespace std;

int Son(int s,int n){
	if (s>n) {
		return s-n;
	} else if(n>s) {
		return n-s;	
	} else{ return 0;
	};
	
}

int main(){

	cout<<Son(21,498);
	return 0;
}