#ifndef PATHOBJECT_H
#define PATHOBJECT_H

#include <iostream>
#include <string>
#include <list>
#include "tinyxml2.h"
#include "SegmentObject.h"

using namespace std;
using namespace tinyxml2;

class PathObject{
  public:
    float OriginLatitiude;
    float OriginLongitude;
    float OriginAltitude;
    float bearing;

    list<SegmentObject> segmentsList;
};

PathObject get_path(const string& path_to_file);

#endif