#include "manager.h"


void Manager::createPhoto(string name, string pathname, double latitude, double longitude)
{
    dictobject[name]=make_shared<Photo>(name,  pathname,  latitude, longitude);
}

void Manager::createVideo(string name, string pathname, double duration)
{
    dictobject[name]=make_shared<Video>(name,  pathname,duration );
}

void Manager::createFilm(string name, string path, double duration, int n, int *durationchap)
{
    dictobject[name]=make_shared<Film>( name,  path,  duration,  n,  durationchap);
}

void Manager::createGroupe(string name)
{
    dictgr[name]= make_shared<Group>(name);
}



shared_ptr<Group> Manager::findGroupe(string key)
{
    auto it = dictgr.find("key");

    if (it == dictgr.end())
    {
        cout << "Don't have the group" << endl;
        return NULL;
    }
    else
        return it->second;

}

void Manager::displayGroupe(string key)
{
   auto group= findGroupe(key);

   if (group != NULL)
        group->display(cout);
}

shared_ptr<ObjetsMultimedia> Manager::findObjM(string key)
{
    auto it = dictobject.find(key);

    if (it == dictobject.end())
    {
       cout << "Don't have the Object" << endl;
       return NULL;
    }
    else
       return it->second;

}

void Manager::displayObjM(string key)
{
    auto object= findObjM( key);

    if (object != NULL)
      object->display(cout);
}

void Manager::play(string key)
{
    auto it= findObjM( key);

    it->play();
}
