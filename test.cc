#include "kontroler.h"
#include "sejf.h"
#include<iostream>

using namespace std;

int main()
{
	Sejf s1("ala108", 0);
	Sejf s= s1;
	
	s += 1;
	//cout <<s[2] << endl;
	auto k1 = s.kontroler();
	cout << k1;
	/*cout << s[0] << " " << s[1] << " " << s[2]<< endl;
	cout << k1;
	cout<< s[8] << endl;
	cout << k1;
	cout<< s[2] << endl;
	cout << k1;
	*/
	return 0;
}