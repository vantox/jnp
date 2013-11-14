#ifndef SEJF_H
#define SEJF_H
#include<string>
#include<cstdint>
//class Sejf;
#include "kontroler.h"

using namespace std;

class Kontroler;

class Sejf{
	friend class Kontroler;
	friend void swap(Sejf& s1, Sejf& s2);
	private:
		enum state{
			OK,
			ZMANIPULOWANY,
			WLAMANIE
		};
		state curr_state;
		string get_state();
		string value;
		size_t accesses;
		Sejf(const Sejf& sejf);
		Sejf operator=(Sejf sejf);
		void change_state(state s);
	public:
		Sejf(string value, ssize_t accesses);
		Sejf(string value);
		Sejf& operator+=(ssize_t val);
		Sejf& operator-=(ssize_t val);
		Sejf& operator*=(ssize_t val);
		int16_t operator [](size_t pos);
		Kontroler kontroler();
		
		
};




#endif