#include "PathObject.h"

using namespace std;
using namespace tinyxml2;

//moved class to .h file

PathObject get_path(const string& path_to_file){
      
      XMLDocument doc;
      //Loads file into doc
       //THE PATHS ARE GOING TO BE AT THE .astazero/ATOS/
      doc.LoadFile(path_to_file.c_str());
      //get the root BUT I'm not exactly what is in the root
      XMLElement* root = doc.RootElement();
      //get specific elements by passing in the name into FirstChildElement
      XMLElement* element = root->FirstChildElement("");

      PathObject path;

      //assign origin values
      path.OriginLatitiude;
      path.OriginLongitude;
      path.OriginAltitude;
      path.bearing;

      

      //assign segment list
      int numSegments;
      for(int i=0; i<numSegments; i++){
        SegmentObject segment;
        segment.segmentDescription;
        segment.x;
        segment.y;
        segment.time;
        segment.velocity;
        segment.heading;
        path.segmentsList.push_back(segment);
      }

       //add inter

      return path;
}