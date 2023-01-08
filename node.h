#pragma once
#include <iostream>
using namespace std;
class node
{
public:
	node();
	node(int d);
	int getdata();
	node *getleft();
	node *getright();
	void setdata(int d);
	void setleft( node*k);
	void setright(node* b);



private:
	int data;
	node* left;
	node* right;
};


