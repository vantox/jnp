#include "kontroler.h"
#include "sejf.h"
#include<iostream>

using namespace std;

int main()
{
	Sejf s1("aaa", 2);
    s1[2];
    auto k1 = s1.kontroler();
    cout << k1 << "test\n";
    s1[2];
    s1[3];
    s1[4];
    cout << k1;
    s1[3];
    cout << k1;
    s1[2];
    cout << k1;
	
	return 0;
}