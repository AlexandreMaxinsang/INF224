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


