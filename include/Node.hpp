#if !defined(Node_hpp)
#define Node_hpp
#include <string>
using namespace std;
class Node
{
    public: 
        string Data;
        Node *next;
        Node *previous;
        int Counter=0;

        Node (string Data,Node  *next=NULL,Node  *previous=NULL)
        {
            this->Data=Data;
            this->next=next;
            this->previous=previous;
        }
};

#endif