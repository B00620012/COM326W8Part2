#pragma once
#include "Book.h"
class PhysicalBook : public Book
{

private:
	float weight_;
	float width_;
	float length_;
	float height_;

public:
	PhysicalBook();

	PhysicalBook(float weight, float width, float length, float height);

	void SetTitle(std::string title);

	~PhysicalBook();
};

