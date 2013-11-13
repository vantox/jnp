#include<iostream>
#include<cstdint>
#include "sejf.h"

using namespace std;


	
	Sejf::Sejf(string value, ssize_t accesses)
	{
		this->value = value;
		this->accesses = accesses;
		this->controler = *(new Kontroler);
	}
	
	Sejf::Sejf(string value)
	{
		this->value = value;
		this->accesses = 42;
		this->controler = *(new Kontroler);
	}
	
	string Sejf::get_val()
	{
		return this->value;
	}
	
	size_t Sejf::get_accesses()
	{
		return this->accesses;
	}
	
	Sejf& Sejf::operator+=(ssize_t val)
	{
		if(val >= 0){
			this->accesses += val;
			this->controler.change_state(1);
		}
		return *this;
	}
	
	Sejf& Sejf::operator-=(ssize_t val)
	{
		if((val >= 0) && (this->accesses >= (size_t)(val))){
			this->accesses -= val;
			this->controler.change_state(1);			
		}
		return *this;
	}
	
	Sejf& Sejf::operator*=(ssize_t val)
	{
		if((val >= 1) ||((val == 0) && (this->accesses == 0))){
			this->accesses *= val;
			this->controler.change_state(1);
		}
		return *this;
	}
	
	Kontroler* Sejf::kontroler()
	{
		return &controler;
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
			this->controler.change_state(2);
			return -1;
		}
	}	

	

