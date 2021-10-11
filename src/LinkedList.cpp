/**
* @file LinkedList.cpp
* @description Linked sinifinin fonksiyonlarini burada yazdik.
* @course 1. Ogretim A Grubu
* @assignment 2.Ödev
* @date 27.11.2019
* @author Başak Bakar/basak.bakar@ogr.sakarya.edu.tr
		  Hilal Yıldız/hilal.yildiz@ogr.sakarya.edu.tr
*/

#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"
#include <string>

using namespace std;


LinkedList::LinkedList()
{
    First=NULL;
    Last=NULL;
    ElementCounter=0;
}

void LinkedList::AddNControl(string Data)
{
    Node *NewD=new Node(Data);
    if(First==NULL)
    {
        First=NewD;
        Last=NewD;
    }
    else
    {
        Last->next=NewD;
        NewD->previous=Last;
        Last=NewD;
    }

    int CounterHere = 1;
		Node* temp = Last->previous;
		while (temp != NULL)
		{
			if (temp->Data == Data)
			{
				Last->Counter = CounterHere;
                Word+=Last->Data.length();
                Last->Data="-";
                WordL+=Last->Data.length();
			}
			temp = temp->previous;
			CounterHere++;
		}

    ElementCounter++;
    cout<<"<-"<<NewD->Data<<" "<<NewD->Counter<<"->";
}
void LinkedList::Gain()
{
    int Eff;
    Eff=Word-WordL;
    cout<<"Kazanc: "<<Eff;
}

