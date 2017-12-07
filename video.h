#ifndef VIDEO_H
#define VIDEO_H

#include "objetsmultimedia.h"

class Video : public ObjetsMultimedia
{
private:

       double duration;

public:
    Video();
    Video(string name, string pathname) : ObjetsMultimedia(name, pathname){}

    double getDuration() const;
    void setDuration(double value);
    void display() const;
};

#endif // VIDEO_H
