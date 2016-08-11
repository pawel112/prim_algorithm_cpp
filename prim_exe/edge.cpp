/**
 * Source code file class edge.
**/
#include "edge.h"

/**
 * A class that represents vertex.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/

//class edge
edge::edge ()
{
	vertex temp(0, false);	
	this->vertex1 = &temp;
	this->vertex2 = &temp;
	this->weigh_edge = 0.0;
}

edge::edge (vertex *vertex1, vertex *vertex2, double weigh_edge)
{
	this->vertex1 = vertex1;
	this->vertex2 = vertex2;
	this->weigh_edge = weigh_edge;
}