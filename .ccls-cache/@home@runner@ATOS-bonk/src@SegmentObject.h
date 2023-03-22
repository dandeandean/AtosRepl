#ifndef SEGMENTOBJECT_H
#define SEGMENTOBJECT_H
#include <iostream>
#include <string>

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