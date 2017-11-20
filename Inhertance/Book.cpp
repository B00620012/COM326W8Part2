#pragma once
#include "Book.h"

Book::Book() {
	std::cout << "Base class book constructor called" << std::endl;
}

Book::Book(std::string title) :
	title_{ title } {
}

Book::Book(std::string title, Author author) :
	title_{ title }, author_{ author } {
}


Book::Book(std::string title, Author author, std::string  publisher, std::string isbn13, float price) :
	title_{ title }, author_{ author }, publisher_ {publisher}, isbn13_{ isbn13 }, price_{ price } {
}

//Default destructor
Book::~Book() { 
	std::cout << "Base class book constructor called" << std::endl;
	std::cout << "Destructor called on " << this->GetTitle() << std::endl; }

std::string Book::GetTitle() { 
	return title_; 
};

void Book::SetTitle(std::string title) {
	std::cout << "base book set title called" << std::endl;
	title_ = title;
}

Author Book::GetAuthor() {
	return author_;
}
void Book::SetAuthor(Author author) {
	author_ = author;
}


std::string  Book::GetPublisher() const {
	return publisher_;
}

void Book::SetPublisher(std::string  publisher) {
	publisher_ = publisher;
	std::cout << "Set publisher called on base object " << std::endl;
}

std::string Book::ToString()  {
	std::ostringstream output;
	output << "Base book details " << GetAuthor().GetName() << ", " << GetTitle() << ", " << GetPublisher()
		<< std::endl;

	return output.str();
}
