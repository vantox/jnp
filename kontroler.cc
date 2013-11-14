#include<iostream>
#include "kontroler.h"

Kontroler::Kontroler(Sejf* sejf)
{
	this->sejf = sejf;
}

ostream& operator<<(ostream& output, Kontroler k)
{
	output << k.get_state();
	return output;
}

string Kontroler::get_state()
{
	return this->sejf->get_state();
}

Kontroler::operator bool() const
{
	return (this->sejf->accesses > 0);
}



