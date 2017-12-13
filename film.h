#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <string>
#include "objetsmultimedia.h"
#include "Video.h"
#include "Photo.h"

using namespace std;

class Film : public Video
{
private:
    int number;
    int * durationchap = new int[number];

public:
    Film(): number(0), durationchap(nullptr) {}
    Film(string name, string path,double duration, int n, int *durationchap) :
        Video(name, path,duration), number(n), durationchap(durationchap) {}

    ~Film() {
     delete []durationchap;
    }

    int getNumber() const;
    void setNumber(int Number);

    int * getDurationChap() const;
    void setDurationChap( int * value, int n);

    virtual void display(ostream& stream) const ;

};

#endif // FILM_H
