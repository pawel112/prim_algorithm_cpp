/**
 * The header file of class graph.
**/
#pragma once

#include <list>
#include <queue>
#include "edge.h"
#include "compare_edges.h"

/**
 * A class that represents the graph.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
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
	/** The list of vertices. */
	std::list <vertex*> vertices;
	/** Priority queue for all added edge. The edges of the smallest weight are at the top of the queue. */
	std::priority_queue <edge, std::vector <edge>, compare_edges> queue;
	/** Priority queue all edges belonging to the minimum spanning tree or minimum spanning forest. The edges of the smallest weight are at the top of the queue. */
	std::priority_queue <edge, std::vector <edge>, compare_edges> result;

	/** The constructor creates an empty graph. */
	graph ();
};