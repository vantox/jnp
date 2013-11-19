#ifndef SEJF_H
#define SEJF_H
#include<string>
#include<cstdint>
#include<utility>
#include <stdexcept>
#include "kontroler.h"

using namespace std;

class Kontroler;

class Sejf{
	friend class Kontroler;
	
	public:
		enum state{
			OK,
			ZMANIPULOWANY,
			WLAMANIE
		};
	
	private:
		state curr_state;
		state get_state();
		string value;
		long long accesses;
		void change_state(state s);
		
	public:
		Sejf(const Sejf& sejf) = delete;
		Sejf& operator=(const Sejf& sejf) = delete;
		Sejf(Sejf&& sejf);
        Sejf& operator=(Sejf&& sejf);
		Sejf(string value, long long accesses = 42);
		Sejf& operator+=(long long val);
		Sejf& operator-=(long long val);
		Sejf& operator*=(long long val);
		int16_t operator [](size_t pos);
		Kontroler kontroler();
		friend ostream& operator<<(ostream& output, const Kontroler& k);
};




#endif