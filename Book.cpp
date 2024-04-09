#include"Book.hpp"

Book Book::operator=(const Book other) {
	this->auth = other.auth;
	this->title = other.title;
	this->pages = other.pages;
}

bool Book::operator==(const Book other) {
	if (this->auth == other.auth && this->title == other.title && this->pages == other.pages) {
		return true;
	}

	return false;
}