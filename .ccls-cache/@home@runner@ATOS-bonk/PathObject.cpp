#include <iostream>
#include <string>
#include "tinyxml2.h"
using namespace std;



class PathObject {
  public:
    float OriginLatitiude;
    float OriginLongitude;
    float OriginAltitude;
    float bearing;
  

    PathObject(const string& path_to_file ){
      get_origin(path_to_file);
    }


  private:
    void get_origin(const string& path_to_file){
      PathObject::OriginLatitiude;
      PathObject::OriginLongitude;
      PathObject::OriginAltitude;
      PathObject::bearing;
    }
};