#pragma once
#include"node.h"
#include <iostream>
using namespace std;
class tree
{
public:
	tree();
	tree(int data);
	node* createNode(int n);
	void insert(int key);
	int balanced();
	int height1(int x);
	void range1(int k1, int k2);
	void printnod(int r1, int r2);
	void printl();
	void sum(int u);
	friend ostream& operator<<(ostream& out,tree& obj);
	int findHeight(node* root, int x, int& height);
	int height2(node* root);
	
private:
	node* root;
	void PrintSumNodesK(node* h, int K);
	int height(node* root, int x);
	void print(node* obj);/**/
	void insertNode(node*, int);/**/
	bool isBalanced(node* root);
	void printlevels(node* root, int s, int n);
	void range(node* root, int k1, int k2);
	
};
