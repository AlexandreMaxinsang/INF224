//
//  main.cpp
//  

#include <iostream>
#include <string>
#include <memory>
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"
#include "manager.h"

using namespace std;

int main(int argc, char* argv[]) {


    Manager * manager = new Manager();

    manager->createPhoto("Brazil","media/Brazil.png",20.0,22.0);
    manager->createVideo("Telecom Paristech","media/TelecomParistech.mp4",2.2);


    manager->displayGroupe("Telecom Paristech");




}

//    Group listObjects ;

//    //Creating the iterator
//    Group::iterator interator;


//    listObjects.push_back( make_shared<Video>("Telecom Paristech","media/TelecomParistech.mp4",2.2));
//    listObjects.push_back( make_shared<Photo>("Brazil","media/Brazil.png",20.0,22.0)) ;

//    listObjects.pop_back();


//    // Interation with iterator and navigate through the list
//    interator = listObjects.begin();
//    while(interator!=listObjects.end())
//    {
//        (*interator)->display(cout);
//        std::advance(interator,1);
//    }
