#pragma once
class ConstExample
{
private:
	int PrivateNumber;

public:
	int PublicNumber;

	ConstExample(int number);
	void ConstFunction(int number) const;
	void NonConstFunction(int number);
	void FuctionConstParameter(const int number);
};