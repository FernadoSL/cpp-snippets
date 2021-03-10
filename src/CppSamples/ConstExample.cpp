#include "ConstExample.h"

ConstExample::ConstExample(int number)
{
	ConstExample::PrivateNumber = number;
	ConstExample::PublicNumber = number;
}

void ConstExample::ConstFunction(int number) const
{
	/* 
	* Const Function 
	* safety first, used to protect the code;
	* const functions cannot edit or alter the member variables;
	* so if a function does not change any member variable of the class, make it const;
	* const object can call olny const functions;
	* if you uncomment the lines below the code will not build;
	* ConstExample::PrivateNumber = number;
	* ConstExample::PublicNumber = number;
	*/ 
}

void ConstExample::NonConstFunction(int number)
{
	ConstExample::PrivateNumber = number;
	ConstExample::PublicNumber = number;
}

void ConstExample::FuctionConstParameter(const int number)
{
	/*
	* Const Parameter
	* the parameter number can't be modified;
	* if you uncomment the lines below the code will not build;
	* number = 47;
	*/
}