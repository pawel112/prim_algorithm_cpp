/**
 * Source code file class vertex.
**/
#include "vertex.h"

/**
 * A class that represents vertex.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/

//class vertex
vertex::vertex()
{
	this->number = 0;
	this->visited = false;	
}

vertex::vertex (int number, bool visited)
{
	this->number = number;
	this->visited = visited;
}

vertex* add_vertex (int number, std::list <vertex*> *vertices)
{
	std::list <vertex*>::iterator it;
	for (it=vertices->begin(); it!=vertices->end(); ++it)
	{
		if ((*(*(&(it)._Ptr->_Myval))).number == number)
		{
			return *(&(it)._Ptr->_Myval);
		}
	}

	vertex* new_vertex = new vertex (number, false);
	vertices->push_back (new_vertex);
	it=vertices->begin();
	
	for (unsigned int i=0; i<vertices->size()-1; i++)
	{
		it++;
	}
	return *(&(it)._Ptr->_Myval);
}