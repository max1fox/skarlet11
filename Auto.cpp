#include "Auto.h"

string Auto::getBrand()
{
	return Brand;
}
string Auto::getCountry()
{
	return Country;
}
int Auto::getRemoval()
{
	return Removal;
}
int Auto::getPower()
{
	return Power;
}
int Auto::getSpeed()
{
	return Speed;
}
int Auto::getMass()
{
	return Mass;
}
int Auto::getLength()
{
	return Length;
}
void Auto::setBrand(string B)
{
	Brand = B;
}
void Auto::setCountry(string C)
{
	Country = C;
}
void Auto::setRemoval(int R)
{
	Removal = R;
}
void Auto::setPower(int P)
{
	Power = P;
}
void Auto::setSpeed(int S)
{
	Speed = S;
}
void Auto::setMass(int M)
{
	Mass = M;
}
void Auto::setLength(int L)
{
	Length = L;
}
void Auto::Input()
{
	cout << "Brand =" << '\n';
	cin >> Brand;
	cout << "Power =" << '\n';
	cin >> Power;
	cout << "Speed =" << '\n';
	cin >> Speed;
	cout << "Mass =" << '\n';
	cin >> Mass;
	cout << "Length =" << '\n';
	cin >> Length;
	cout << "Country =" << '\n';
	cin >> Country;
	cout << "Removal =" << '\n';
	cin >> Removal;
}
void Auto::Print()
{
	cout << "The Brand - " << Brand << '\n';
	cout << "The horsepower of engine - " << Power << '\n';
	cout << "The max speed by car - " << Speed << '\n';
	cout << "The mass of car - " << Mass << '\n';
	cout << "The length of car - " << Length << '\n';
	cout << "The country of car - " << Country << '\n';
	cout << "The removal of car - " << Removal << '\n';
}
