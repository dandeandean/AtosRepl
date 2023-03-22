#include <iostream>
#include <string>
#include "tinyxml2.h"
#include "PathObject.h"

using namespace std;

int main() {
      const string& path_to_file = "paths/path.path";
      tinyxml2::XMLDocument doc;
      //Loads file into doc
      doc.LoadFile(path_to_file.c_str());
      //get the root BUT I'm not exactly what is in the root
      tinyxml2::XMLElement* root = doc.RootElement();
      //get specific elements by passing in the name into FirstChildElement
      tinyxml2::XMLElement* element = root->FirstChildElement("");
  printf("tester...\n");
}