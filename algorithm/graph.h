#ifndef ALGORITHM_GRAPH_H
#define ALGORITHM_GRAPH_H

#include <unordered_map>
#include <set>

struct Edge{
	int from, to;
	int weight;

	Edge(int from, int to, int weight)
	{
		this->from = from;
		this->to = to;
		this->weight = weight;
	}

	bool operator == (const Edge &rhs)
	{
		return from == rhs.from && to == rhs.to;
	}
	bool operator < (const Edge &rhs)
	{
		return weight < rhs.weight; 
	}
};

struct DAG_adj{
	std::tr1::unordered_map<int, std::set<Edge>> adjList;

};

#endif