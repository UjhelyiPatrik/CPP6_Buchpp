#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.hpp"


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

private:
	Book *books;
	int numberOfBooks;
};


#endif // !LIBRARY_H
