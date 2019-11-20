#pragma once
#include "iostream"
#include "string"
using namespace std;
class Auto
{
private:
	string Brand;
	int Power;
	int Speed;

protected:
	int Mass;
	int Length;
public:
	string Country;
	string getCountry();
	int Removal;
	int getRemoval();
	string getBrand();
	int getLength();
	int getMass();
	int getPower();
	int getSpeed();
	void setCountry(string C);
	void setRemoval(int R);
	void setMass(int M);
	void setLength(int L);
	void setBrand(string B);
	void setPower(int P);
	void setSpeed(int S);
	void Input();
	void Print();
};