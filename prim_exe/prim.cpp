#include <iostream>
#include <fstream>
#include "write_read_files.h"
#include "graph.h"
#include "vertex.h"
#include "edge.h"
#include "compare_edges.h"
#include "prim_algorithm.h"

/**
 * A class that represents vertex.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/

int main()
{
	std::fstream file_reading = open_the_file_for_reading();
	std::fstream file_save = open_the_file_for_writing();
	graph *graph1 = new graph;

	if (!file_reading.is_open())
	{
		std::cout << "An error occurred while trying to open the input file.\nProgram will be terminated.\n";
		system ("pause");
		exit(1);
	}
	if (!file_save.is_open())
	{
		std::cout << "An error occurred while trying to open the output file.\nProgram will be terminated.\n";
		system ("pause");
		exit(1);
	}

	//read graph from  a file
	for (unsigned int i=0; !file_reading.eof(); i++)
	{
		int number_vertex1 = 0;
		int number_vertex2 = 0;
		double weigh_edge = 0.0;
		vertex* vertex1;
		vertex* vertex2;
		
		file_reading >> number_vertex1 >> number_vertex2 >> weigh_edge;
		vertex1 = add_vertex (number_vertex1, &graph1->vertices);
		vertex2 = add_vertex (number_vertex2, &graph1->vertices);
		edge new_edge = edge (vertex1, vertex2, weigh_edge);
		graph1->queue.push (new_edge);
	}
	file_reading.close();
	//read graph from  a file

	//Prim algorithm
	prim_algorithm (graph1);
	//Prim algorithm

	//write graph to a file
	while (!graph1->result.empty())
	{
		graph1->new_edge = graph1->result.top();
		graph1->result.pop();
		file_save << graph1->new_edge.vertex1->number << " " << graph1->new_edge.vertex2->number << " " << graph1->new_edge.weigh_edge;
		if (!graph1->result.empty())
		{
			file_save << "\n";
		}
		else
		{
			if (graph1->mst == true)
			{
				file_save << "\nMST\n" << graph1->final_cost << "\n";
			}
			else
			{
				file_save << "\nMSF\n" << graph1->final_cost << "\n";
			}
			break;
		}
	}
	file_save.close();
	//write graph to a file

	delete (graph1);
	std::cout << "The end of the program.\n";
	system ("pause");
    return 0;
}