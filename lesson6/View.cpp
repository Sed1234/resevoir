#include "View.h"



View::View()
{
}

void View::addResevoir(Resevoir r)
{
	resevoirs.push_back(r);
}

void View::removeResevoir(int id)
{
	int i = 0;
	for (Resevoir resevoir :  resevoirs) {
		if (resevoir.getId() == id)
		{
			resevoirs.erase(resevoirs.begin()+i);
			break;
		}
	}
}


View::~View()
{
}
