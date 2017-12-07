#ifndef PHOTO_H
#define PHOTO_H


#include "objetsmultimedia.h"


class Photo : public ObjetsMultimedia
{

private:
    double latitude;
    double longitude;

public:

    Photo(){}
    Photo(string name, string pathname):ObjetsMultimedia(name, pathname){}
    ~Photo() {};

    double getLatitude() const;
    void setLatitude(double value);

    double getLongitude() const;
    void setLongitude(double value);

    void display()  const;

};

#endif // PHOTO_H
