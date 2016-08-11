/**
 * Source code file Prim algorithm.
**/
#include "prim_algorithm.h"

/**
 * A class that represents vertex.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/

void prim_algorithm (graph *graph1)
{
	if (!graph1->queue.empty())
	{
		graph1->new_edge = graph1->queue.top();
		graph1->queue.pop();
		graph1->new_edge.vertex1->visited = true;
		graph1->new_edge.vertex2->visited = true;
		graph1->final_cost += graph1->new_edge.weigh_edge;
		graph1->result.push (graph1->new_edge);
	}

	while (!graph1->queue.empty())
    {	
		for (unsigned int i=0; i<graph1->queue.size(); )
		{
			graph1->new_edge = graph1->queue.top();
			graph1->queue.pop();
		
			if (((graph1->new_edge.vertex1->visited == false) && (graph1->new_edge.vertex2->visited == true)) || ((graph1->new_edge.vertex1->visited == true) && (graph1->new_edge.vertex2->visited == false)))
			{
				graph1->new_edge.vertex1->visited = true;
				graph1->new_edge.vertex2->visited = true;
				graph1->final_cost += graph1->new_edge.weigh_edge;
				graph1->result.push (graph1->new_edge);
				i = 0;
			}
			else if ((graph1->new_edge.vertex1->visited == false) && (graph1->new_edge.vertex2->visited == false))
			{
				graph1->queue.push (graph1->new_edge);
				i++;
				if (i == graph1->queue.size())
				{
					graph1->new_edge = graph1->queue.top();
					graph1->queue.pop();
					graph1->new_edge.vertex1->visited = true;
					graph1->new_edge.vertex2->visited = true;
					graph1->final_cost += graph1->new_edge.weigh_edge;
					graph1->result.push (graph1->new_edge);
					i = 0;
					graph1->mst = false;
				}
			}
		}
	}
}

