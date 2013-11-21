#include<iostream>
#include<utility>
#include "sejf.h"

using namespace std;

Sejf::Sejf(string value, long long accesses) :
curr_state(OK), value(value)
{
	if(accesses < 0)
		throw invalid_argument("Access number must be positive.");
	this->accesses = accesses;
}
	
Sejf::Sejf(Sejf&& sejf) : curr_state(sejf.curr_state),
value(move(sejf.value)), accesses(sejf.accesses) 
{
}

Sejf& Sejf::operator=(Sejf&& sejf)
{
    if(this == &sejf)
        return *this;
    this->value = move(sejf.value);
    this->curr_state = sejf.curr_state;
    this->accesses = sejf.accesses;
    return *this;
}
		
Sejf& Sejf::operator+=(long long val)
{
	long long check = this->accesses + val;
	if(check < this->accesses)
		return *this;
	change_state(ZMANIPULOWANY);
	this->accesses = check;
	return *this;
}

Sejf& Sejf::operator-=(long long val)
{
	long long check = this->accesses - val;
	if((check > this->accesses) || (check < 0))
		return *this;
	change_state(ZMANIPULOWANY);
	this->accesses = check;
	return *this;
}

Sejf& Sejf::operator*=(long long val)
{
	long long check = this->accesses * val;
	if(check < this->accesses)
		return *this;
	change_state(ZMANIPULOWANY);
	this->accesses = check;
	return *this;
}

Kontroler Sejf::kontroler()
{
	return Kontroler(this);
}

int16_t Sejf::operator [](size_t pos)
{
	if((pos > this->value.size() -1) || (this->value == "")){
		return -1;
	}
	if(this->accesses == 0){
		change_state(WLAMANIE);
		return -1;
	}
	
	this->accesses--;
	return this->value[pos];
}	
	
void Sejf::change_state(state s)
{
	if(this->curr_state < s)
		this->curr_state = s;
}
	
Sejf::state Sejf::get_state()
{
	return curr_state;
}
