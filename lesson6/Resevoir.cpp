#include "Resevoir.h"
#include "string"
#include <iostream> 
#include<vector>



int Resevoir::GetArea()
{
	return x*y;
}

Resevoir::Resevoir()
{
	id = cnt++;
}


Resevoir::~Resevoir()
{
}
bool Resevoir::typeEquals(const Resevoir & another) const
{
	if (type == another.type)
	{
		return true;
	}
	return false;
}

bool Resevoir::hasAreaMoreThan( Resevoir & another) 
{
	if (typeEquals(another)) {
		return GetArea() > another.GetArea();
	}
	else {
		std::cout << "types are incompatible" << std::endl;
	}

	return false;
}

Resevoir::Resevoir(const Resevoir & another)
{
	this->name = another.name;
	this->type = another.type;
	this->x = another.x;
	this->y = another.y;
	this->z = another.z;
}

int Resevoir::getId()
{
	return id;
}

Resevoir::Resevoir(std::string name, std::string type, int x, int y, int z) {
	this->name = name;
	this->type = type;
	this->x = x;
	this->y = y;
	this->z = z;
	id = cnt++;
}

int Resevoir::GetVolume()
{
	return x*y*z;
}
