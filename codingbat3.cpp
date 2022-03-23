#include <iostream>
#include <string.h>

using namespace std;

string Gap(string s){
	if (!s.compare(0, 3, "not")) { return s;}
	else { return "not "+s;}
	
}

int main(){
	string s;
	getline (cin,s);
	cout<<Gap(s);
	return 0;
}