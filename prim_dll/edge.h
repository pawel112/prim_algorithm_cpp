/**
 * The header file of class edge.
**/
#pragma once

/** The necessary header file to create a edge. */
#include "vertex.h"

/**
 * A class that represents the edge.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/
class edge
{
public:
	/** Weight edge. */
	int weigh_edge;
	/** A pointer to the first vertex. */
	vertex *vertex1;
	/** A pointer to the second vertex. */
	vertex *vertex2;

	/** The constructor creates an empty edge. */
	edge ();
	/** The constructor creates a edge with given parameters first vertex and second vertex, which are pointers to selected vertices and weight edge number, which are weight of the edge.
	 * \param[in] vertex1 A pointer to the first vertex.
	 * \param[in] vertex2 A pointer to the second vertex.
	 * \param[in] weigh_edge Weight edge.
	**/
	edge (vertex *vertex1, vertex *vertex2, int weigh_edge);
};