#ifndef MANAGER_H
#define MANAGER_H

#include "objetsmultimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"
#include <memory>
#include <map>
#include <string>

typedef std::map<string, shared_ptr<ObjetsMultimedia>> Dict_ob;
typedef std::map<string, shared_ptr<Group>> Dict_gr;

class Manager
{
private:
    Dict_ob dictobject;
    Dict_gr dictgr;

public:

    Manager(){}

    void createPhoto(string name, string pathname, double latitude,double longitude);

    void createVideo(string name, string pathname,double duration);

    void createFilm(string name, string path,double duration, int n, int *durationchap);

    void createGroup(string name);

    void removeObjM(string name);

    shared_ptr<Group> findGroupe(string key);

    void displayGroupe(string key);

    void addToGroup(string namegroup,string nameobj);

    shared_ptr<ObjetsMultimedia> findObjM(string key);

    void displayObjM(string key);

    void play(string key);

};

#endif // MANAGER_H
