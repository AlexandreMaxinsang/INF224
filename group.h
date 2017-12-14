#ifndef GROUP_H
#define GROUP_H


#include "objetsmultimedia.h"


class Group : public list <shared_ptr<ObjetsMultimedia>>
{
    string name;
protected:

//   Group(): list() {}
//   Group(string name):name(name){}
//   virtual ~Group() { cout<<"Destroyed Group" <<endl ;}

public:

   Group(): list() {}
   Group(string name):name(name){}
   virtual ~Group() { cout<<"Destroyed Group" <<endl ;}


    string getName() const ;

    void display(ostream& stream) const ;

    void removeName(string name);


};

#endif // GROUP_H
