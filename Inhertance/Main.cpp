/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:15/11/2017
* Description: Code to demonstrate inhertance - start code
*
* Copyright notice
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Book.h"
#include "Publisher.h"
#include "Author.h"
#include "PhysicalBook.h"
#include "EBook.h"

using namespace std;

int main() {

	Author bjarne{ "Bjarne", "Stroustrup" };
	Book myBook{"Programming principles and practice using C++", bjarne, "Addison Wesley", "2343242", 59.99f};
	
	cout << myBook.ToString();
	
	//PhysicalBook myPB{};
	PhysicalBook myPB{0.8f, 4.8f, 18.5f, 23.1f };

	myPB.SetTitle("hello sailor");

	EBook myEB{};

	//Book shanesBook{ "Learning C++ is so much fun", me };

	//Dalio.AddBook(shanesBook);


	return 0;
}