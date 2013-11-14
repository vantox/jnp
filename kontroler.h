#ifndef KONTROLER_H
#define KONTROLER_H
#include<string>
class Kontroler;
#include "sejf.h"

using namespace std;




class Kontroler{
	friend ostream& operator<<(ostream& output, Kontroler k);
	friend class Sejf;
	private:
		Kontroler(Sejf* sejf);
		Sejf* sejf;
		bool operator<(Kontroler k);
		bool operator>(Kontroler k);
		string get_state();
	public:
		explicit operator bool() const;

		
};
		



















#endif