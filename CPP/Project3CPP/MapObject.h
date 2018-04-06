#ifndef PROJECT3CPP_MAPOBJECT_H
#define PROJECT3CPP_MAPOBJECT_H

#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

//Different types for the MapObject
enum object_type_t {
    CAR, TREE, POLICE, OBSTACLE, EMPTY
};

class MapObject {

public:

    //Default constructor
    MapObject();

    //Constructor
    MapObject(string label, int xloc, int yloc, float speed, int direction, object_type_t type);

    MapObject(string label, int xloc, int yloc, float speed, int direction);

    //COLLISION
    bool collision(MapObject &param);

    //ACCESSOR METHODS
    string get_label();

    //Get the x location variable fo the MapObject type
    int getX();

    //Get the y location variable of the MapObject type
    int getY();

    //Get the speed of the MapObject type
    float get_speed();

    //Get the direction of the MapObject type
    int get_direction();

    //Get the MapObject type
    object_type_t getType();

    //Retrieve a map representation of the MapObject


    //Set the label of the MapObject
    void set_label(string param);

    //Set the x location of the MapObject
    void set_xloc(int param);

    //Set the ylocation of the MapObject
    void set_yloc(int param);

    //Set the speed of the MapObject
    void set_speed(float param);

    //Set the direction of the MapObject
    void set_direction(int param);

    //Set the type of the MapObject
    void set_type(object_type_t param);

    //Prompt the user for information about the MapObject
    void get();

    //Print the current object
    void print();

    /**
     * Convert a string to an object_type_t
     * @param string String representation of the object_type_t
     * @return object_type_t The type of the object that was converted from a string
     */


    /**
     * Convert an object_type_t to a string
     * @param object_type_t The object type that will be converted to a string
     * @return string string representation of the object_type_t
     */
    string type_to_string(object_type_t param);

private:

    //Label for the object type
    string label;
    //x and y coordinates of this object
    int xloc, yloc;
    //speed of this object
    float speed;
    //direction of this object
    int direction;
    //object type of this object
    enum object_type_t type;
};

object_type_t string_to_type(string param);
char get_map_representation(object_type_t type);

#endif //PROJECT3CPP_MAPOBJECT_H
