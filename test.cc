#include "kontroler.h"
#include "sejf.h"
#include<iostream>

using namespace std;

int main()
{
	Sejf s("ala108", 0);
	//Sejf s2 (s);
	
	
	//cout <<s[2] << endl;
	auto k1 = s.kontroler();
	cout << k1;
	s += 0;
	cout << k1;
	cout << s[1] << endl;
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