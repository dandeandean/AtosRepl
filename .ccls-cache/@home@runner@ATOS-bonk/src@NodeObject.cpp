#include <iostream>
#include <string>
using namespace std;

class NodeObject{
  public:
    string segmentDescription;
    float x;
    float y;
    float time;
    float velocity;
    int heading;
    float TimeToCollisionLongitudinal;
    float Duration;
    NodeObject* nextNode;
}