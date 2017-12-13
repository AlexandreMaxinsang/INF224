#ifndef PHOTO_H
#define PHOTO_H


#include "objetsmultimedia.h"


class Photo : public ObjetsMultimedia
{

private:
    double latitude;
    double longitude;

public:

    Photo(): ObjetsMultimedia("", ""), latitude(0.),longitude(0.){}
    Photo(string name, string pathname, double latitude,double longitude):ObjetsMultimedia(name, pathname),latitude(latitude),longitude(longitude){}

    ~Photo() {cout<<"Destroyed Photo" <<endl ;}

    double getLatitude() const;
    void setLatitude(double value);

    double getLongitude() const;
    void setLongitude(double value);

    void display(ostream & stream)  const override;

    void play() const override;
};

#endif // PHOTO_H
