#ifndef BUCH_H
#define BUCH_H

#include <iostream>

using namespace std;

class Buch
{
	string auth, title;
	int pages;

public:
	Buch(string a, string t, int p);
	string getauth() { return auth; }
	string gettitle() { return title; }
	int getpages() { return pages; }
	void setauth(string x) { auth = x; }
	void settitle(string x) { title = x; }
	void setpages(int x) { pages = x; }
	void print() { cout << auth << ": " << title << " (" << pages << " pages)" << endl; }
private:

};





#endif // !BUCH_H
