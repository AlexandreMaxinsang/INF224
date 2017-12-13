#include "video.h"


double Video::getDuration() const
{
    return duration;
}

void Video::setDuration(double value)
{
    duration = value;
}

void Video::display(ostream& stream) const
{
 stream << "duration = " << duration << endl;

}
void Video::play() const
{
    string path="open -a \"QuickTime Player\" "  + pathname + " &";

    system(path.c_str());

}
