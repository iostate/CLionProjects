#include "MapObject.h"

MapObject::MapObject() {
    set_label("null");
    set_xloc(1);
    set_yloc(1);
    set_speed(1);
    set_direction(1);
    set_type(EMPTY);
}

MapObject::MapObject(string label, int xloc, int yloc, float speed, int direction, object_type_t type) {
    set_label(label);
    set_xloc(xloc);
    set_yloc(yloc);
    set_speed(speed);
    set_direction(direction);
    set_type(type);

}

MapObject::MapObject(string label, int xloc, int yloc, float speed, int direction) {
    set_label(label);
    set_xloc(xloc);
    set_yloc(yloc);
    set_speed(speed);
    set_direction(direction);
    set_type(EMPTY);
}

//ACCESSOR AND MUTATOR METHODS
void MapObject::set_label(string param) {
    label = param;
}

string MapObject::get_label() {

    return label;
}

void MapObject::set_xloc(int param) {
    xloc = param;
}

int MapObject::getX() {
    return xloc;
}

void MapObject::set_yloc(int param) {
    yloc = param;
}

int MapObject::getY() {
    return yloc;
}

void MapObject::set_speed(float param) {
    speed = param;
}

float MapObject::get_speed() {

    return speed;
}

void MapObject::set_direction(int param) {
    direction = param;
}

int MapObject::get_direction() {

    return direction;
}

void MapObject::set_type(object_type_t param) {
    type = param;
}

object_type_t MapObject::getType() {

    return type;
}


/**
 * Prints the information in the mapobject.
 */
void MapObject::print() {

    cout << "Label: ";
    cout << get_label() << endl;
    cout << "Xloc: " << getX() << endl;
    cout << "Yloc: " << getY() << endl;
    cout << "Speed: " << get_speed() << endl;
    cout << "Direction: " << get_direction() << endl;
    cout << "Type: " << type_to_string(getType()) << endl;
}

//Prompt the user for information about the MapObject
void MapObject::get() {

    string u_label, u_type;
    int u_xloc, u_yloc, u_direction;
    float u_speed;

    cout << "Enter the label: ";
    cin >> u_label;
    set_label(u_label);

    cout << "Enter the x loc: ";
    cin >> u_xloc;
    set_xloc(u_xloc);

    cout << "Enter the y loc: ";
    cin >> u_yloc;
    set_yloc(u_yloc);

    cout << "Enter the speed: ";
    cin >> u_speed;
    set_speed(u_speed);

    cout << "Enter the direction: ";
    cin >> u_direction;
    set_direction(u_direction);

    cout << "Enter the type: ";
    cin >> u_type;
    set_type(string_to_type(u_type));

}

string MapObject::type_to_string(object_type_t param) {
    string result = "nothing right now";
    if (param == CAR) {
        result = "car";
    } else if (param == TREE) {
        result = "tree";
    } else if (param == POLICE) {
        result = "police";
    } else if (param == OBSTACLE) {
        result = "obstacle";
    } else {
        result = "empty";
    }
    return result;
}

bool MapObject::collision(MapObject &param) {

    if (xloc == param.getX() && yloc == param.getY()) {
        return true;
    } else {
        return false;
    }
}

char get_map_representation(object_type_t type) {

    if (type == CAR) {
        return 'C';
    } else if (type == OBSTACLE) {
        return 'O';
    } else if (type == POLICE) {
        return 'P';
    } else if (type == TREE) {
        return 'T';
    } else {
        return ' ';
    }

}

object_type_t string_to_type(string param) {

object_type_t result = EMPTY;
if (param.compare("car") == 0) {
result = CAR;
} else if (param.compare("tree") == 0) {
result = TREE;
} else if (param.compare("police") == 0) {
result = POLICE;
} else if (param.compare("obstacle") == 0) {
result = OBSTACLE;
} else {
result = EMPTY;
}
return result;
}


