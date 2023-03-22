#ifndef SEGMENTOBJECT_H
#define SEGMENTOBJECT_H
#include <iostream>
#include <string>
#include "tinyxml2.h"

using namespace std;

class SegmentObject{
  public:
      string segmentDescription;
      float x;
      float y;
      float time;
      float velocity;
      int heading;
};

#endif