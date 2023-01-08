#include "tree.h"
#include"node.h"
#include <iostream>
#include <list>
using namespace std;
#include<queue>
#include<stack>

tree::tree()
{
    
	root = NULL;
}

tree::tree(int data)
{
   root->setdata(data) ;
}

node* tree::createNode(int n)
{
    node* temp = new node;

    temp->setdata(n);

    temp->setleft(NULL) ;
    temp->setright(NULL) ;

    return temp;
}

void tree::range1(int k1, int k2)
{
    range(root, k1, k2);
}

void tree::printl()
{
       
     print(root);

}
void tree::sum(int u)
{
    
    PrintSumNodesK(root, u);
}
/**/

void tree::insert(int key)
{
    if (root == nullptr) {
        this->root = createNode(key);
    }
    else {
        this->insertNode(root, key);
    }

   
    
}


void tree::insertNode(node*root, int x)
{
    if (x < root->getdata()) {
        if (root->getleft() == nullptr) {
           
            root->setleft( createNode(x)) ;
        }
        else {
           
            this->insertNode( root->getleft(),x);
        }
    }
    else {
        if (root->getright() == nullptr) {
           
            root->setright(createNode(x)) ;
        }
        else {
           
            this->insertNode( root->getright(),x);
        }
    }

}

void tree::range(node* root, int k1, int k2)
{
    node* t = root;
    if (NULL == t)
        return;

    if (k1 < t->getdata())
        range(t->getleft(), k1, k2);

    if (k1 <= t->getdata() && k2 >= t->getdata())
        cout << t->getdata() << " ";

    if (k2 > t->getdata())
        range(t->getright(), k1, k2);
    
}

void tree::print(node* obj)
{
    if (obj == NULL)
        return;
   
    print(obj->getleft());
    cout << obj->getdata() << " ";
    
    print(obj->getright());
}

void tree::printlevels(node* root, int s, int n)
{
    if (root == NULL) {
        return;
    }
   list <node*> queue;
    queue.push_back(root);
    node* c = NULL;
    int level = -1;
    
        while (!queue.empty())
        {
            level++;
            int size = queue.size();
            while (size--)
            {
                c = queue.front();
                queue.pop_front();
                if (level >= s && level <= n) {
                    cout << c->getdata() << " ";
                }
                if (c->getleft()) {
                    queue.push_back(c->getleft());
                }
                if (c->getright()) {
                    queue.push_back(c->getright());
                }
            }
            if (level >= s && level <= n) {
                cout << endl;
            }
        }
        
}



int tree::findHeight(node* root, int x, int& height)
{
    if (root == NULL) {
        return -1;
    }
    int lh = findHeight(root->getleft(), x, height);

    int rh = findHeight( root->getright(), x, height);
    int ans = max(lh, rh) + 1;
    if (root->getdata() == x)
        height = ans;

    return ans;
}/**/



void tree::printnod(int r1, int r2)
{
    printlevels  (root,r1,r2);
}

bool tree::isBalanced(node* root)
{
    if (!root) {
        return -1;
    }

    int leftHt = height2(root->getleft());
    int rightHt = height2(root->getright());

    if (abs(leftHt - rightHt) > 1)
        return false;
    return isBalanced(root->getleft()) && isBalanced(root->getright());
}


int tree::height(node* root,int x)
{
    int h = -1;
    int maxh = findHeight(root, x, h);
    return h;
}

int tree::height1(int x)
{
    return height(root,x);
}


void tree::PrintSumNodesK(node* h, int k)
{
    int a = 0;
    int b = 0;
   int l,r;
    if (h == NULL || a == 1) {
        if (b == 0) {
            cout << "no nodes with sum  "<<k;
        }
        return;
    }/**/
    if (h->getright() == NULL && h->getleft() == NULL) {
        a = 1;
        return;
    }
    if (h->getleft() == NULL)return;
    else l = h->getleft()->getdata();

    if (h->getright() == NULL) {
        
        return;
    }

    else r = h->getright()->getdata();

    int s = l + r;
    if (s == k) {
        cout << h->getdata() << " ";
        b = 1;
    }
    if (h->getleft() == NULL) {
        a = 1;
        return;
    }
    else PrintSumNodesK(h->getleft(), k);
    if (h->getright() == NULL) {
        a = 1;
        return;
    }
    else PrintSumNodesK(h->getright(), k);

}

int tree::balanced()
{
    return isBalanced(root);
}



int tree::height2(node* root)
{
    if (root == NULL) return 0;

    int lh = height2(root->getleft());
    int rh = height2(root->getright());
    int ch = max(lh, rh) + 1;
    return ch;
}





ostream& operator<<(ostream& out, tree& obj)
{
    
     obj.printl();
     return out;

}
   

