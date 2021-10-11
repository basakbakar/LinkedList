#if !defined(LinkedList_hpp)
#define LinkedList_hpp
#include "Node.hpp"
using namespace std;

class LinkedList
{
    private:
        Node *First, *Last;
        int ElementCounter;
       
    public: 
    int Word=0;
    int WordL=0;
        LinkedList ();
        void AddNControl(string Data);
        void Gain();
};

#endif