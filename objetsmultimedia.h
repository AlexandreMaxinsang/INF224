#ifndef OBJETSMULTIMEDIA_H
#define OBJETSMULTIMEDIA_H

#include <string>
#include <iostream>
#include <list>
#include <memory>

using namespace std;

class ObjetsMultimedia
{

protected:
    string name = "Picture of ....";
    string pathname;


public:

    ObjetsMultimedia() {}
    ObjetsMultimedia(string name, string pathname):
        name(name),pathname(pathname){}

    virtual ~ObjetsMultimedia() {}


    virtual void display(ostream& stream ) const;

    virtual void play() const;

    virtual string getName() const;
    virtual void setName(const string &value);

    virtual string getPath() const;
    virtual  void setPath(const string &value);



};

#endif // OBJETSMULTIMEDIA_H
