/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:15/11/2017
* Description: Code to demonstrate multiple inhertance 
*
* Copyright notice
*/
#pragma once
#include <iostream>
#include <string>

using namespace std;


class Animal {
	int weight_{ 254 };
public:
	Animal() { std::cout << "Animal constructor called" << std::endl; };
	int GetWeight() { return weight_; };

};

class PolarBear : virtual public Animal {
	std::string likesToEat{ "seals" };

};

class GrizzlyBear : virtual public Animal {
	std::string likesToEat{ "salmon" };

};

class Nanulak : public PolarBear, public GrizzlyBear {

};



int main() {

	Nanulak bigBear{};

	bigBear.GetWeight();

	return 0;
}