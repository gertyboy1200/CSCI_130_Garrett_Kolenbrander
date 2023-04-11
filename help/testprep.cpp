#include <iostream>
#include <string>

using namespace std;

class linkNode {
    string name, lastName;
    linkNode *next;

    linkNode(string newname = "", linkNode *next = NULL);
};

class linkedList {

    friend ostream & operator << (ostream &out, const linkedList &G);


};

int main() {

    linkedList G;

    return 0;
}