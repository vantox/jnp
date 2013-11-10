#ifndef SEJF_H
#define SEJF_H
#include<string>
using namespace std;
class Sejf{
	private:
		string value;
		size_t accesses;
	public:
		Sejf(string value, ssize_t accesses);
		Sejf(string value);
		string get_val();
		size_t get_accesses();
		Sejf& operator+=(ssize_t val);
		Sejf& operator-=(ssize_t val);
		Sejf& operator*=(ssize_t val);
		
};




#endif