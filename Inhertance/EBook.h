#pragma once
#include "Book.h"
class EBook : public Book
{

private:
	std::string format_; //Kindle edition
	float fileSize_;
	std::string language_;
	bool enhancedTypeSetting_;
	bool screenReaderSupport_;


public:
	EBook();
	~EBook();
};

