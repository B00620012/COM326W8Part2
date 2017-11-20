#include "PhysicalBook.h"



PhysicalBook::PhysicalBook() : Book("The C++ Programming Language") {
	//this->SetAuthor(Author{ "Bjarne", "Stroustrup" });
	std::cout << "Physical book constructor called" << std::endl;
}

PhysicalBook::PhysicalBook(float weight, float width, float length, float height):
	Book("The C++ Programming Language"), 
	weight_{ weight }, width_{ width }, length_{ length }, height_{ height } 
{
	this->price_ = 59.99f;
	this->SetPublisher("Addison Wesley");
	std::cout << "Physical book custom constructor called" << std::endl;

}


void PhysicalBook::SetTitle(std::string title) {
	std::cout << "Physical book set title called" << std::endl;
	Book::SetTitle(title);
}

PhysicalBook::~PhysicalBook()
{
	std::cout << "Physical book destructor called" << std::endl;
}
