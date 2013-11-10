#include<iostream>
#include "kontroler.h"
void Kontroler::change_state(int state)
{
	if(this->state < state)
		this->state = state;
}

Kontroler::Kontroler()
{
	this->state = 0;
}

ostream& operator<<(ostream& output, Kontroler* k)
{
	switch(k->state){
		case 0:
			output << "OK\n";
			break;
		case 1:
			output << "ALARM: ZMANIPULOWANY\n";
			break;
		case 2:
			output << "ALARM: WLAMANIE\n";
			break;
	}
	return output;
}

int Kontroler::get(){
		return this->state;
}

