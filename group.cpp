#include "group.h"

string Group::getName() const
{
    return this->name;
}


void Group::display(ostream& stream) const
{
    stream << "Group " << name << "\n" << endl;
    auto iterator=this->begin();

    while(iterator!=this->end())
   {
      (*iterator)->display(stream);
      std::advance(iterator,1);
   }

}

void Group::removeName(string name)
{
    for( Group ::iterator it_group = this->begin(); it_group != this->end();)
    {
       string nameobject=(*it_group)->getName();

      if((nameobject).compare(name)==0)
         it_group= this->erase(it_group);
      else
           it_group++;
    }

}


