#ifndef BUCH_H
#define BUCH_H

#include <iostream>

using namespace std;

class Book
{
	string auth, title;
	int pages;

public:
	Book(string a="", string t="", int p=0) : auth(a), title(t), pages(p) {}
	string getauth() const { return auth; }
	string gettitle() const { return title; }
	int getpages() const { return pages; }
	void setauth(string x){ auth = x; }
	void settitle(string x) { title = x; }
	void setpages(int x) { pages = x; }
	void print() const { cout << auth << ": " << title << " (" << pages << " pages)" << endl; }

	Book operator=(const Book other);
	bool operator==(const Book other);
private:

};





#endif // !BUCH_H
