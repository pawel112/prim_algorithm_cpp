#include "main.h"
#include "edge.h"
#include "graph.h"
#include "compare_edges.h"
#include "graphmanager.h"
#include "vertex.h"
#include "prim_algorithm.h"

// a sample exported function
void DLL_EXPORT prim (map <std::string, vector <int>> nodes, map <pair <std::string, std::string>, pair <int, std::string>> edges)
{
	graph *graph1 = new graph;

	//read graph from a program
	for (map <pair <std::string, std::string>, pair <int, std::string>>::iterator it=edges.begin(); it!=edges.end(); it++)
	{
		int weigh_edge = 0;
		vertex* vertex1 = NULL;
		vertex* vertex2 = NULL;

		vertex1->name = it->first.second;
		vertex2->name = it->first.first;
		weigh_edge = it->second.first;

		vertex1 = add_vertex (vertex1->name, &graph1->vertices);
		vertex2 = add_vertex (vertex2->name, &graph1->vertices);
		edge new_edge = edge (vertex1, vertex2, weigh_edge);
		graph1->queue.push (new_edge);
	}
	//read graph from a program

	//Prim algorithm
	prim_algorithm(graph1);
	
	//Prim algorithm
	GraphManager *new_graph = NULL;
	
	//write graph to a program
	while (!graph1->result.empty())
	{
		graph1->new_edge = graph1->result.top();
		graph1->result.pop();
		edge test = graph1->new_edge;
		new_graph->nodToMap (test.vertex1);
		new_graph->nodToMap (test.vertex2);
		new_graph->edgeToMap (&test);


	}
	//write graph to a program

	delete (graph1);
}
