#include<iostream>
#include<cstdint>
#include<utility>
#include "sejf.h"

using namespace std;


	
	Sejf::Sejf(string value, ssize_t accesses)
	{
		if(accesses >= 0){ 
			this->value = value;
			this->accesses = accesses;
			this->curr_state = OK;
		}
	}
	
	Sejf::Sejf(string value)
	{
		this->value = value;
		this->accesses = 42;
		this->curr_state = OK;
	}
		
	Sejf& Sejf::operator+=(ssize_t val)
	{
		if(val >= 0){
			this->accesses += val;
			change_state(ZMANIPULOWANY);
		}
		return *this;
	}
	
	Sejf& Sejf::operator-=(ssize_t val)
	{
		if((val >= 0) && (this->accesses >= (size_t)(val))){
			this->accesses -= val;
			change_state(ZMANIPULOWANY);			
		}
		return *this;
	}
	
	Sejf& Sejf::operator*=(ssize_t val)
	{
		if((val >= 1) ||((val == 0) && (this->accesses == 0))){
			this->accesses *= val;
			change_state(ZMANIPULOWANY);
		}
		return *this;
	}
	
	Kontroler Sejf::kontroler()
	{
		
		return Kontroler(this);
	}
	
	
	int16_t Sejf::operator [](size_t pos)
	{
		if(pos > this->value.size() -1){
			return -1;
		}
		else if(this->accesses > 0){
			this->accesses--;
			return this->value[pos];
		}
		else{
			change_state(WLAMANIE);
			return -1;
		}
	}	
	
	void Sejf::change_state(state s)
{
	if(this->curr_state < s)
		this->curr_state = s;
}
	
	string Sejf::get_state()
	{
		switch(this->curr_state){
			case OK:
				return "OK\n";
			case ZMANIPULOWANY:
				return "ALARM: ZMANIPULOWANY\n";
			case WLAMANIE:
				return "ALARM: WLAMANIE\n";
			default:
				return "";
		}
	}
	
	void swap(Sejf& s1, Sejf& s2)
	{
		size_t tmp_accesses = s1.accesses;
		s1.accesses = s2.accesses;
		s2.accesses = tmp_accesses;
		string tmp_value = s1.value;
		s1.value = s2.value;
		s2.value = tmp_value;
		Sejf::state tmp_state = s1.curr_state;
		s1.curr_state = s2.curr_state;
		s2.curr_state = tmp_state;
	}
	

