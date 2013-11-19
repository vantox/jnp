#include<iostream>
#include "kontroler.h"

Kontroler::Kontroler(Sejf* sejf)
{
	this->sejf = sejf;
}

ostream& operator<<(ostream& output, const Kontroler& k)
{
	string out;
	switch(k.sejf->curr_state){
		case Sejf::OK:
			out = "OK\n";
			break;
		case Sejf::ZMANIPULOWANY:
			out = "ALARM: ZMANIPULOWANY\n";
			break;
		case Sejf::WLAMANIE:
			out = "ALARM: WLAMANIE\n";
			break;
	}
	output << out;
	return output;
}

Kontroler::operator bool() const
{
	return (this->sejf->accesses > 0);
}
