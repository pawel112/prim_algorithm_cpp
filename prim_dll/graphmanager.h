#pragma once

#include "vertex.h"
#include "edge.h"
#include <string>
#include <map>
#include <vector>

/**
 * A class that manager of graphs.
 \author Paweł Roszatycki
 \author Sławomir Mazurek
 \date 31.03.2016
**/
class GraphManager
{
public:
     GraphManager();

     void nodToMap (vertex *n);
     void edgeToMap (edge *n);

     map <std::string, vector <int>> nodMap;
     map <pair <std::string, std::string>, pair <int, std::string>> edgeMap;


};
