#include "kontroler.h"
#include "sejf.h"
#include<iostream>
#include <assert.h>
#include <sstream>
#include<utility>
#include <algorithm>

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
//Sejf x("asd", -5);

//Sejf c(a); //  nie dzia³a, i dobrze
if(!k) cout << "dziala\n";

Sejf x("");
x = move(x);
cout << x[0] << endl;
Sejf x2("a");
x2 = move(x2);
x2 -= 42;
cout << x2[0] << " " << x2.kontroler() << endl;
//if(a.kontroler() > b.kontroler()) cout << "cos\n"; //tez nie dziala i dobrze
//Sejf g("a", -5);// po odpaleniu leci sigsegv, wola³bym ¿eby siê nie kompilowa³o wogóle


	return 0;
}