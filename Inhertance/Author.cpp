#pragma once

#include "Author.h"


//default constructor
Author::Author() { std::cout << "The default Author constructor has been called" << std::endl; 	
//OutputDebugString(L"This is an output");
};

//custom constructor
Author::Author(std::string fname, std::string sname) : firstName_{ fname }, secondName_{ sname } { 
	std::cout << "The Author custom constructor has been called" << std::endl; 
};

//Default destructor
Author::~Author() { 
	std::cout << "The Author destructor has been called" << std::endl; 
};

std::string Author::GetName() {
	std::string name = firstName_ + " " + secondName_;
	return name;
}
void Author::SetFName(std::string fname) {
	this->firstName_ = fname;

}

void Author::SetSName(std::string sname) {
	this->secondName_ = sname;
}

void Author::TestException() {
	throw std::invalid_argument("Imagine an invalid argument was passed!");

}