/**
* @file Main.cpp
* @description icerik.txt dosyasini burada okuttuk ve Listeye eleman ekleyip kontrol etme ve Verimini hesaplama fonksiyonlarini burada cagirdik.
* @course 1. Ogretim A Grubu
* @assignment 2.Ödev
* @date 27.11.2019
* @author Başak Bakar/basak.bakar@ogr.sakarya.edu.tr
		  Hilal Yıldız/hilal.yildiz@ogr.sakarya.edu.tr
*/

#include "../include/LinkedList.hpp"
#include "../include/Node.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{ 
    LinkedList *liste=new LinkedList();
    
    fstream file; 
    string word, filename; 

    filename = ".\\icerik.txt"; 

    file.open(filename.c_str());   
    
    cout<<"NULL";
    
    while (file >> word) 
        liste->AddNControl(word);

    cout<<"NULL"<<endl;

    liste->Gain();
    return 0; 
}