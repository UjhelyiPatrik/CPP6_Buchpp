#include "library.hpp"

Library::Library():numberOfBooks(0){
	books = new Book[0];
}


Library::Library(Book book):numberOfBooks(1) {
	books = new Book[1];

	books[0] = book;

}

void Library::add(Book newBook) {

	Book* newArray = new Book[numberOfBooks+1];

	for (int i = 0; i < numberOfBooks; i++)
	{
		newArray[i] = books[i];
	}

	newArray[numberOfBooks] = newBook;

	delete[]books;
	
	books = newArray;

	numberOfBooks++;
}

Library& Library::operator+=(const Book &newBook) {

	Book* newArray = new Book[numberOfBooks + 1];

	for (int i = 0; i < numberOfBooks; i++)
	{
		newArray[i] = books[i];
	}

	newArray[numberOfBooks] = newBook;

	delete[]books;

	books = newArray;

	numberOfBooks++;

	return *this;
}

Library& Library::operator+=(const Library &other) {

	Book* newArray = new Book[this->numberOfBooks + other.numberOfBooks ];

	for (int i = 0; i < this->numberOfBooks; i++)
	{
		newArray[i] = this->books[i];
	}

	for (int i = 0; i < other.numberOfBooks; i++)
	{
		newArray[this->numberOfBooks+i] = other.books[i];
	}

	delete[]this->books;

	this->books = newArray;

	this->numberOfBooks+=other.numberOfBooks;

	return *this;
}

Library& Library::operator-=(const Book &deletedBook) {

	for (int i = 0; i < this->numberOfBooks; i++)
	{
		if (this->books[i] == deletedBook) {

			this->books[i] = this->books[this->numberOfBooks - 1];

		}
	}

	Book* newArray = new Book[numberOfBooks -1];

	for (int i = 0; i < numberOfBooks-1; i++)
	{
		newArray[i] = books[i];
	}

	delete[]books;

	books = newArray;

	numberOfBooks--;

	return *this;
}

ostream& operator<<(ostream &ost, Library &lib) {

	for (int i = 0; i < lib.numberOfBooks; i++)
	{
		ost << lib.books[i].getauth() << ": " << lib.books[i].gettitle() << " (" << lib.books[i].getpages() << "p)" << endl;		
	}

	return ost;

}