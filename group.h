#ifndef GROUP_H
#define GROUP_H


#include "objetsmultimedia.h"


class Group : public list <shared_ptr<ObjetsMultimedia>>
{
private:
   string name;


public:
    Group(): list() {}
    Group(string name):name(name){}

    ~Group() { cout<<"Destroyed Group" <<endl ;}

    string getName() const ;

    void display(ostream& stream) const ;

};

#endif // GROUP_H
