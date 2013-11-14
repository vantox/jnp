#include "kontroler.h"
#include "sejf.h"
#include<iostream>
#include <assert.h>
#include <sstream>

using namespace std;

int main()
{/*
	Sejf s1("aaa", 2);
	cout << s1[2];
    auto k1 = s1.kontroler();
    cout << k1 << "test\n";
    s1[2];
    //s1[2];
	s1 += 0;
    s1[4];
    cout << k1;
    s1[3];
    cout << k1;
    s1[2];
    cout << k1;
    Sejf a("a", -3);
	auto k = a.kontroler();
	cout << k;
	*/
	Sejf a("A", 1), b("B", 1);
b += 1;
auto k = b.kontroler();
a[0]; a[0];
cout << k;
std::swap(a, b);
cout << k;

//Sejf c(a);   nie dzia³a, i dobrze
if(!k) cout << "dziala\n";
//if(a.kontroler() > b.kontroler()) cout << "cos\n"; tez nie dziala i dobrze

	return 0;
}