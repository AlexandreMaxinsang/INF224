
#include "film.h"

int Film::getNumber() const
{
    return this->number ;
}

void Film::setNumber(int number)
{
    this->number=number;
}

int * Film::getDurationChap() const
{
  return this->durationchap ;
}

void Film::setDurationChap(int * value,int n)
{
    if (this->number != n) {
         delete [] this->durationchap;
         this->number = n;
         if (n != 0)
           this->durationchap = new int[n];
         else
           this->durationchap = nullptr;
       }

    for (int i = 0; i < n; ++i)
           this->durationchap[i]=value[i];


}

void Film::display(ostream& stream ) const
{

}

