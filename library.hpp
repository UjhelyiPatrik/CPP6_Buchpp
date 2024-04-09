#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.hpp"
#include <iostream>

using namespace std;


class Library
{
public:
	Library();
	Library(Book book);
	~Library() { delete[] books; }

	void add(Book newBook);

	Library& operator+=(const Book &newBook);
	Library& operator+=(const Library &other);
	Library& operator-=(const Book &deletedBook);

	friend ostream& operator<<(ostream &ost, Library &lib);

private:
	Book *books;
	int numberOfBooks;
};

ostream& operator<<(ostream &ost, Library &lib);

#endif // !LIBRARY_H
