#ifndef PROJECT3CPP_MAPOBJECTLIST_H
#define PROJECT3CPP_MAPOBJECTLIST_H
#include<string>
#include <cstdlib>
#include <vector>
#include "MapObject.h"
using namespace std;

class MapObjectList {

public:
    void add(MapObject param);

    vector<class MapObject> &getObjects();

    void print();

    void get_all_of_type(object_type_t target);
    void find(string target);
private:
    vector<class MapObject> list;

};

#endif //PROJECT3CPP_MAPOBJECTLIST_H
