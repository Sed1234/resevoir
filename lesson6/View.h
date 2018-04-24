#pragma once
#include <vector>
#include "Resevoir.h"
class View
{
	std::vector<Resevoir> resevoirs;
public:
	View();
	void addResevoir(Resevoir);
	void removeResevoir(int id);
	~View();
};

