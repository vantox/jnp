#include<iostream>
#include<cstdint>
#include "kontroler.h"
#include "sejf.h"

using namespace std;


	
	Sejf::Sejf(string value, ssize_t accesses)
	{
		this->value = value;
		this->accesses = accesses;
	}
	
	Sejf::Sejf(string value)
	{
		this->value = value;
		this->accesses = 42;
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
		if(val >= 0)
			this->accesses += val;
		return *this;
	}
	
	Sejf& Sejf::operator-=(ssize_t val)
	{
		if(val >= 0)
			this->accesses -= val;
		return *this;
	}
	
	Sejf& Sejf::operator*=(ssize_t val)
	{
		if((val >= 1) ||((val == 0) && (this->accesses == 0)))
			this->accesses *= val;
		return *this;
	}


