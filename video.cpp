#include "video.h"


double Video::getDuration() const
{
    return duration;
}

void Video::setDuration(double value)
{
    duration = value;
}

void Video::display() const
{
    string path="open -a \"QuickTime Player\" "  + pathname + " &";

    system(path.c_str());

}
