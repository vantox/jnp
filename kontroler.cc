#include<iostream>
#include "kontroler.h"
void Kontroler::change_state(int state)
{
	if(this->state < state){
		cout << "bede zmieniac " << this->state << " na " << state <<"\n";
		this->state = state;
		cout << "zmienione : " << this->state << endl;
	}
	else{
		cout << "nie bede zmieniac\n";
	}
}

Kontroler::Kontroler()
{
	this->state = 0;
}

ostream& operator<<(ostream& output, Kontroler& k)
{
// 	switch(k.state){
// 		case 0:
// 			output << "OK\n";
// 			break;
// 		case 1:
// 			output << "ALARM: ZMANIPULOWANY\n";
// 			break;
// 		case 2:
// 			output << "ALARM: WLAMANIE\n";
// 			break;
// 	}
	output << k.state << endl;
	return output;
}

int Kontroler::get(){
		return this->state;
}

