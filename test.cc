#include "kontroler.h"
#include "sejf.h"
#include<iostream>
#include <assert.h>
#include <sstream>

using namespace std;

void kontroler_test()
{
/*

        Sejf s1("abcd",2);
        //const Kontroler* k1 = &( s1.kontroler() );
        //const Kontroler & k1 = s1.kontroler(); //chcemy zeby auto dzialalo tak
        //Kontrel k1 = s1.kontroler();
        auto k1 = s1.kontroler();
        //cout << sizeof( k1 ) << endl;
        //cout << typeid(k1).name() << endl;
        cout << (s1.kontroler());
        cout << (k1);
        s1 += 1;
        cout << (k1);
*/

        Sejf s1( "abcd", 1 );
        auto k1 = s1.kontroler();

        stringstream ss;
        string res,res2;

        ss << k1;
        ss >> res;
        assert ( res.compare("OK") == 0 );
        assert ( s1[1] == (int)'b' );
        ss << k1;
        ss >> res;
        assert ( res.compare("OK") == 0 );

        s1 += 2;
        assert ( s1[2] == (int)'c' );
        assert ( s1[4] == -1 );
        assert ( s1[3] == (int)'d' );
        ss << k1;
        ss >> res;
        ss >> res2;
        assert ( res2.compare( "ZMANIPULOWANY" ) == 0 );

        assert ( s1[1] == -1 );
        ss << k1;
        ss >> res;
        ss >> res2;
        assert ( res2.compare( "WLAMANIE" ) == 0 );
}

void bool_test()
{
        Sejf s0( "abcd", 0 );

        assert ( ! s0.kontroler() );

        Sejf s1( "abcd", 2 );
    assert ( s1.kontroler() );
        assert ( s1[0] == (int)'a' );
        assert ( s1.kontroler() );
        assert ( s1[4] == -1 );
        assert ( s1.kontroler() );
        assert ( s1[1] == (int)'b' );
        assert ( !s1.kontroler() );

        Sejf s2( "abcd", 0 );
        auto k2 = s2.kontroler();
    assert ( ! k2 );

        // to musi dawac blad kompilacji (odkomnetowac i sprawdzic!):
        /*
        Sejf s2( "abcd", 0 );
        Sejf s3( "abcd", 0 );

        if ( s2.kontroler() < s3.kontroler() )
                cout << "HMM" << endl;
*/
}

int main()
{/*
	Sejf s1("aaa", 2);
	cout << s1[2];
    auto k1 = s1.kontroler();
    cout << k1 << "test\n";
    s1[2];
    //s1[2];
	s1 += 0;
    s1[4];
    cout << k1;
    s1[3];
    cout << k1;
    s1[2];
    scout << k1;*/
    Sejf a("a", -3);
	auto k = a.kontroler();
	cout << k;
	kontroler_test();
	bool_test();
	return 0;
}