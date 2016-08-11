/**
 * Source code file class vertex.
**/
#include "vertex.h" /** The necessary header file to create a vertex. */
#include <string>

/**
 * A class that represents vertex.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/

//class vertex
vertex::vertex()
{
	this->name = "";
	this->visited = false;
}

vertex::vertex (std::string name, bool visited)
{
	this->name = name;
	this->visited = visited;
}

vertex* add_vertex (std::string name, std::list <vertex*> *vertices)
{
	std::list <vertex*>::iterator it;
	for (it=vertices->begin(); it!=vertices->end(); ++it)
	{
	    vertex *test = *(it);
		if (test->name == name)
		{
			return test;
		}
	}

	vertex* new_vertex = new vertex (name, false);
	vertices->push_back (new_vertex);
	it=vertices->begin();

	for (unsigned int i=0; i<vertices->size()-1; i++)
	{
		it++;
	}
	return *it;
}
