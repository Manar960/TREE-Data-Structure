// Data3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"tree.h"
#include"node.h"
#include <iostream>
using namespace std;

int main()
{
	int m,j1,j2;
	tree k;
	
	while (1)
	{
		cout << " ___________ Main Menu _________ " << endl;
		cout << "|                               |" << endl;
		cout << "| 1. Add a new node             |" << endl;
		cout << "| 2. tree is Balanced or not    |" << endl;
		cout << "| 3. height of a node           |" << endl;
		cout << "| 4. sum of nodes k             |" << endl;
		cout << "| 5. Range between two nodes    |" << endl;
		cout << "| 6. Range between two levels   |" << endl;
		cout << "| 7. Exit                       |" << endl;
		cout << "|_______________________________|" << endl;
		cout << " Enter your choice:";
		int g;
		cin >> g;
		cout << "\n";
		switch (g) {
		
		case 1:
			k.insert(8);
			k.insert(3);
			k.insert(10);
			k.insert(9);
			k.insert(1);
			k.insert(6);
			k.insert(4);
			k.insert(7);
			k.insert(14);
			k.insert(13);
			cout << k;
			cout << endl<<"\n";
			break;
		case 2:
			if (k.balanced())
				cout << "the tree is balanced\n";
			else
				cout << "the tree is not balanced\n";
			cout << "\n";
			break;
		case 3:
			
				cout << "enter the node you want\n";
				cin >> m;
				cout << "height of:" << m <<"= "<< k.height1(m)<<endl;
				cout << "\n";
			break;
			
		case 4:
			cout << "NOTE:this work if the root have two child only\n";
			cout << "enter the num you want : ";
			cin >> m;
			k.sum(m);
			cout << "\n";
			break;
		case 5:
			cout << "enter the Range you want ";
			cin >> j1; 
			cin >> j2;
			k.range1(j1,j2);
			cout<<endl;
			cout << "\n";
			break;
		case 6:
			cout << "enter the Range levels you want ";
			cin >> j1 >> j2;
			k.printnod(j1,j2);
			cout << "\n";
			break;
		case 7:
			cout << "END\n\n";
			break;
        }
	}
}

