#include <string>
#include <vector>
#include "MapObject.h"
#include "MapObjectList.h"

using namespace std;

void MapObjectList::add(MapObject param) {
    list.push_back(param);
}

vector<class MapObject> &MapObjectList::getObjects() {
    return list;
}

void MapObjectList::print() {

    for (unsigned i = 0; i < list.size(); i++) {
        list.at(i).print();
        cout << endl;
    }
}

void MapObjectList::get_all_of_type(object_type_t target) {

    for (unsigned i = 0; i < list.size(); i++) {

        if (list.at(i).type_to_string(list.at(i).getType()) == list.at(i).type_to_string(target)) {

            //print label of target
            cout << "Label: " + list.at(i).get_label() << endl;
            //print location of target
            cout << "Location (x,y): (" << list.at(i).getX() <<
                 ", " << list.at(i).getY() << ")" << endl;
            //print direction of target
            cout << "Direction: " << list.at(i).get_direction() << endl;

        }
    }
}

void MapObjectList::find(string target) {

    cout << "Finding all objects with label " << target << "...." << endl;
    for (unsigned i = 0; i < list.size(); i++) {

        if (list.at(i).get_label() == target) {
            cout << "Location (x,y): (" << list.at(i).getX() << ", " <<
                 list.at(i).getY() << ")" << endl;
            cout << "Speed: " << list.at(i).get_speed() << endl;
        }

    }
}
