#ifndef SEJF_H
#define SEJF_H
#include<string>
#include<cstdint>
#include "kontroler.h"
using namespace std;
class Sejf{
	private:
		string value;
		size_t accesses;
		Kontroler controler;
	public:
		Sejf(string value, ssize_t accesses);
		Sejf(string value);
		string get_val();
		size_t get_accesses();
		Sejf& operator+=(ssize_t val);
		Sejf& operator-=(ssize_t val);
		Sejf& operator*=(ssize_t val);
		int16_t operator [](size_t pos);
		Kontroler* kontroler();
		
		
};




#endif