/**
 * The header file class is responsible for comparing the vertices.
**/
#pragma once

/**
 * Class responsible for comparing the edges's weight.
 \author Pawe³ Roszatycki
 \author S³awomir Mazurek
 \date 31.03.2016
**/
class compare_edges
{
public:
	/** The operator compares weights of the first edge and second edge.
	 * \param[in] edge1 Reference to the first edge.
	 * \param[in] edge2 Reference to the second edge.
	 * \return True, if weight of the first edge is greater than the weight of second edge. Otherwise false. 
	**/
	bool operator() (const edge &edge1, const edge &edge2)
	{
		if (edge1.weigh_edge > edge2.weigh_edge)
		{
			return true;
		}

		if (edge1.weigh_edge < edge2.weigh_edge)
		{
			return false;
		}
		return false;
	}
};