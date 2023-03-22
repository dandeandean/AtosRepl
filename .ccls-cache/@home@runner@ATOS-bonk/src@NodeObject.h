#include <iostream>
#include <string>
using namespace std;

struct SegmentObject{
  string segmentDescription;
  float x;
  float y;
  float time;
  float velocity;
  int heading;
  float TimeToCollisionLongitudinal;
  float Duration;
  SegmentObject* nextNode;
}