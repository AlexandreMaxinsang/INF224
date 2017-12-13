#ifndef VIDEO_H
#define VIDEO_H

#include "objetsmultimedia.h"

class Video : public ObjetsMultimedia
{
private:
       double duration;

public:
    Video(): duration(0.0){}
    Video(string name, string pathname,double duration) :
        ObjetsMultimedia(name, pathname),duration(duration){}

    ~Video() {cout<<"Destroyed Video" <<endl ;}

    double getDuration() const;
    void setDuration(double value);

    void display(ostream& stream ) const override;

    void play()  const override;
};

#endif // VIDEO_H
