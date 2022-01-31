#include <iostream>
#include <assert.h>

using namespace std;

struct Node {
    
    struct Node* next;
    
    void setNext(Node*);
    
    Node* getNext();
};

int getLoopSize(Node* currentNode, Node* startNode) {
    if(currentNode == startNode) {
        return 1;
    }

    return getLoopSize(currentNode->getNext(), startNode) + 1;
}


int getLoopSize(Node* startNode)
{
    if(startNode->getNext() == NULL)
        return 0;
    Node* n1 = startNode;
    Node* current = startNode->getNext();
    int count = 1;
    while(current != n1)  {
        current = current->getNext();
        if (current == NULL)
            break;
        count++;
    }

    return count;
    //return getLoopSize(startNode->getNext(), startNode);
}

bool floydCicle(Node *list) {

    Node* slow = list;
    Node* fast = list;

    while(slow && fast && (fast->getNext() != NULL)) {
        slow = slow->getNext();
        fast = fast->getNext()->getNext();

        if(slow == fast) {
            return 1;
        }

    }

    return 0;
}

void Node::setNext(Node *next) {
    this->next = next;
}

Node* Node::getNext(){
    if(this->next == NULL)
        return NULL;
    return this->next;
}

int main() {
    Node n1, n2, n3, n4;

    n1.setNext(&n2);
    n2.setNext(&n3);
    n3.setNext(&n4);
    //n4.setNext(&n1);


    //assert(getLoopSize(&n1) == 4);
    cout << floydCicle(&n1) << endl;

    return 0;
}