/**
 * Source code file class edge.
**/
#include "edge.h" /** The necessary header file to create a edge. */

/**
 * A class that represents vertex.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/

//class edge
edge::edge ()
{
	vertex temp("", false);	
	this->vertex1 = &temp;
	this->vertex2 = &temp;
	this->weigh_edge = 0;
}

edge::edge (vertex *vertex1, vertex *vertex2, int weigh_edge)
{
	this->vertex1 = vertex1;
	this->vertex2 = vertex2;
	this->weigh_edge = weigh_edge;
}