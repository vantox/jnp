#include "kontroler.h"
#include "sejf.h"
#include<iostream>

using namespace std;

int main()
{
	Sejf s1("ala", 1);
	Sejf s= s1;
	
	cout << s.get_val() << " " << s.get_accesses() << endl;
	s *= 3;
	cout << s.get_val() << " " << s.get_accesses() << endl;
	
	
	return 0;
}