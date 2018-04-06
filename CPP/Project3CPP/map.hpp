#include<vector>
#include"MapObjectList.h"
#include "MapObject.h"

class Map {
    private:
        int * map;
        int width;
        int height;
    public:        
        Map(MapObjectList list, int x, int y);
        void print();
        void add(int x, int y, char value);
        void load(MapObjectList &list);

};

void get_objects(MapObjectList &list, std::string filename);
char get_map_representation(object_type_t map);
object_type_t string_to_type(string param);
