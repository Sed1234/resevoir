#pragma once
#include "string"
#include <iostream> 
#include<vector>
class Resevoir
{
	std::string name;
	std::string type;
	int x, y, z;
	int id;
	static int cnt;
public:
	int getId();
    Resevoir(std::string name,std::string type, int, int, int);
	int GetVolume();
	int GetArea();
	Resevoir();
	~Resevoir();
	bool typeEquals(const Resevoir & another) const;
	bool hasAreaMoreThan( Resevoir & another) ;
	explicit Resevoir(const Resevoir & another);
};

