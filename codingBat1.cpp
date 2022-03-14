#include <iostream>
using namespace std;

bool sleep(bool ishKuni, bool bayram) {
	if(bayram) return true;
	else if(ishKuni) return false;
	else return true;
}

int main(){
	
	bool ishKuni=true;
	bool bayram=false;
	
	cout << sleep(ishKuni, bayram);
	
	return 0;
}