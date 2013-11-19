#ifndef KONTROLER_H
#define KONTROLER_H
#include<string>
#include "sejf.h"

using namespace std;

class Sejf;


class Kontroler{
	friend class Sejf;
	
	private:
		Kontroler(Sejf* sejf);
		Sejf* sejf;
		
	public:
		explicit operator bool() const;
		friend ostream& operator<<(ostream& output, const Kontroler& k);
};
		



















#endif