#include "node.h"

node::node()
{
	data = 0;
	left = NULL;
	right = NULL;
}

node::node(int d)
{
	data = d;
	left = NULL;
	right = NULL;
}

int node::getdata()
{
	return data;
}

node* node::getleft()
{
	return left;
}

node* node::getright()
{
	return right;
}

void node::setdata(int d)
{
	data = d;
}

void node::setleft(node* k)
{
	left = k;
}

void node::setright(node* b)
{
	right = b;
}


