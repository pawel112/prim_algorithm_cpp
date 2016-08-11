/**
 * The header file of class vertex.
**/
#pragma once

#include <list> /** The necessary library to use lists. */
#include <iostream>
using namespace std;

/**
 * A class that represents vertex.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/
class vertex
{
public:
	/** A name of vertex. */
	string name;
	/** If the vertex was visited, it is true, otherwise it is false. */
	bool visited;

	/** The constructor creates an empty vertex. */
	vertex ();
	/** The constructor creates a vertex with given name and with information about vertex was visited.
	 * \param[in] number A number of vertex.
	 * \param[in] visited Information, about the vertex was visited.
	**/
	vertex (std::string name, bool visited);
};

/** The function returns a pointer to the vertex with given name from the list of indicators to vertices. If vertex wasn't on the list, vertex is first added, and then was returned.
 * \param[in] name A name of vertex.
 * \param[in] vertices List of indicators to vertices.
 * \return The function returns a pointer to the vertex with given number from list vertices.
**/
vertex* add_vertex (std::string name, std::list <vertex*> *vertices);
