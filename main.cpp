//
//  main.cpp
//  

#include <iostream>
#include <string>
#include "photo.h"
#include "video.h"
using namespace std;

int main(int argc, char* argv[]) {

    list<ObjetsMultimedia *> listObjects ;

    //Creating the iterator
    list<ObjetsMultimedia *>::iterator interator;

    Video * obj = new Video("Telecom Paristech","media/TelecomParistech.mp4");
    Photo * obj1 = new Photo("Brazil","media/Brazil.png");

    listObjects.push_back(obj);
    listObjects.push_back(obj1);


    // Interation with iterator and navigate through the list
    interator = listObjects.begin();
    while(interator!=listObjects.end())
    {
        (*interator)->display();
        std::advance(interator,1);

    }

}
