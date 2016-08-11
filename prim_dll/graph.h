/**
 * The header file of class graph.
**/
#pragma once

#include <list> /** The necessary library to use lists. */
#include <queue> /** The necessary library to use queues. */
#include "edge.h" /** The necessary header file to create a graph. */
#include "compare_edges.h" /** Necessary library for comparing edges. */

/**
 * A class that represents the graph.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/
class graph
{
public:
	/** Final cost of the graph. Default value is 0. */
	double final_cost;
	/** Information about if the graph is the minimum spanning tree (true), otherwise it is graph is the minimum spanning forest (false). */
	bool mst;
	/** Temporary edge, which was taken from the list of queue and can be added to the final list. */
	edge new_edge;
	/** The list of vertices.
	  * \tparam vertex Class vertex. */
	std::list <vertex*> vertices;
	/** Priority queue for all added edge. The edges of the smallest weight are at the top of the queue.
	  * \tparam edge Class edge.
	  * \tparam std::vector Class vector.
	  * \tparam compare_edges Class responsible for comparing the edges's weight. */
	std::priority_queue <edge, std::vector <edge>, compare_edges> queue;
	/** Priority queue all edges belonging to the minimum spanning tree or minimum spanning forest. The edges of the smallest weight are at the top of the queue.
	  * \tparam edge Class edge.
	  * \tparam std::vector Class vector.
	  * \tparam compare_edges Class responsible for comparing the edges's weight. */
	std::priority_queue <edge, std::vector <edge>, compare_edges> result;

	/** The constructor creates an empty graph. */
	graph ();
};
