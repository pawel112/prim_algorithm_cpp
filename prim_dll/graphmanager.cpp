/**
 * Source code file class vertex.
**/
#include "vertex.h" /** The necessary header file to create a vertex. */
#include "graphmanager.h"
#include <string>

/**
 * A class that manager of graphs.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/

//class vertex

void GraphManager::nodToMap (vertex *n)
{
    vector<int> values;
    values.push_back (0);
    values.push_back (0);
    values.push_back (0);
    values.push_back (0);
    nodMap[n->name] = values;
}

void GraphManager::edgeToMap (edge *n)
{
    pair<std::string,std::string> nodes;
    nodes.first = n->vertex1->name;
    nodes.second = n->vertex2->name;
    pair<int,std::string> values;
    values.first = n->weigh_edge;
    values.second = "TWO_WAY";
    edgeMap[nodes] = values;
}

