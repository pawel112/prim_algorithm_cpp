/**
 * The header file of class vertex.
**/
#pragma once

#include <list>

/**
 * A class that represents vertex.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/
class vertex
{
public:
	/** A number of vertex. */
	int number;
	/** If the vertex was visited, it is true, otherwise it is false. */
	bool visited;

	/** The constructor creates an empty vertex. */
	vertex ();
	/** The constructor creates a vertex with given number and with information about vertex was visited.
	 * \param[in] number A number of vertex.
	 * \param[in] visited Information, about the vertex was visited.
	**/
	vertex (int number, bool visited);
};

/** The function returns a pointer to the vertex with given number from the list of indicators to vertices. If vertex wasn't on the list, vertex is first added, and then was returned.
 * \param[in] number A number of vertex.
 * \param[in] vertices List of indicators to vertices.
 * \return The function returns a pointer to the vertex with given number from list vertices.
**/
vertex* add_vertex (int number, std::list <vertex*> *vertices);