#include "photo.h"


double Photo::getLatitude() const
{
    return latitude;
}

void Photo::setLatitude(double value)
{
    latitude = value;
}

double Photo::getLongitude() const
{
    return longitude;
}

void Photo::setLongitude(double value)
{
    longitude = value;
}

void Photo::display(ostream & stream )const
{
    stream << "latitude = " << latitude << " longitude = " << longitude << endl;


}

void Photo::play() const
{
    string path="open -a Preview " + pathname + " &";
    //string path = "open -a Preview Brazil.png &";

    system(path.c_str());

}


