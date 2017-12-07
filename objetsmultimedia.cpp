#include "objetsmultimedia.h"


 void ObjetsMultimedia :: display() const
{

    std::cout << "The name of the object " << name<< std::endl;
    std::cout << "the path of the object " << pathname<< std::endl;

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
