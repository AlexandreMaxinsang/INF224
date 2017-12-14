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

void Manager::createGroup(string name)
{
    dictgr[name]= make_shared<Group>(name);
}


void Manager::removeObjM(string name)
{
    auto it = dictobject.find(name);


    if (it == dictobject.end())
    {
       cout << "Don't have the Object" << endl;

    }
    else
    {
        dictobject.erase(name);
        Dict_gr::iterator it_dict = dictgr.begin();

        for(it_dict ;it_dict!=dictgr.end();it_dict++)
        {
            auto group = it_dict->second;
            group->removeName(name);
        }
    }

}

shared_ptr<Group> Manager::findGroupe(string key)
{
    auto it = dictgr.find(key);

    if (it == dictgr.end())
    {
        cout << "Don't have the group" << endl;
        return NULL;
    }
    else
    {    cout << "The Group found" << endl;
        return it->second;
    }

}

void Manager::displayGroupe(string key)
{
   auto group= findGroupe(key);

   if (group != NULL)
        group->display(cout);
}


void Manager::addToGroup(string namegroup,string nameobj)
{
    shared_ptr<Group> group=findGroupe(namegroup);

    if(group!=NULL)
    {
        shared_ptr<ObjetsMultimedia> object=findObjM(nameobj);
        group->push_back(object);
        cout << "The addition was successful." << endl;
    }
    else
        cout << "Can't add the object to the Group" << endl;

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
