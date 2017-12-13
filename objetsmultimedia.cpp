#include "objetsmultimedia.h"


 void ObjetsMultimedia :: display( ostream& stream  ) const
{

    stream << "The name of the object " << name<< endl;
    stream << "the path of the object " << pathname<< endl;

}

void ObjetsMultimedia :: play() const
{

}

string ObjetsMultimedia::getName() const
{
    return name;
}

void ObjetsMultimedia::setName(const string &value)
{
    name = value;
}

string ObjetsMultimedia::getPath() const
{
    return pathname;
}

void ObjetsMultimedia::setPath(const string &value)
{
    pathname = value;
}
