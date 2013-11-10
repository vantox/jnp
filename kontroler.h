#ifndef KONTROLER_H
#define KONTROLER_H
#include<string>

using namespace std;

enum state
{
    OK,
	ZMANIPULOWANY,
    WLAMANIE
	
	
};

class Kontroler{
	friend ostream& operator<<(ostream& output, Kontroler& k);
	friend class Sejf;
	private:
		int state;
		Kontroler();
		void change_state(int state);
		bool operator<(Kontroler k);
	public:
		ostream& operator<<(ostream& out);
		int get();

		
};
		



















#endif