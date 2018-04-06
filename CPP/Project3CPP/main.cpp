#include "MapObjectList.h"
#include "MapObject.h"

string convert_boolean(bool param);

int main() {


    MapObject ok = MapObject();


    cout << "Creating and filling MapObject labeled quan: " << endl;
    ok.set_label("quan");
    ok.set_xloc(20);
    ok.set_yloc(30);
    ok.set_speed(900);
    ok.set_direction(2);
    ok.set_type(ok.string_to_type("car"));

    cout << "Printing quan MapObject..." << endl << endl;
    ok.print();



    MapObject ko;
    cout << "Creating and filling MapObject labeled tom: " << endl << endl;
    ko.set_label("tom");
    ko.set_xloc(20);
    ko.set_yloc(30);
    ko.set_speed(900);
    ko.set_direction(2);
    ko.set_type(ok.string_to_type("car"));

    cout << "Printing MapObject labeled tom..." << endl << endl;
    ko.print();

    cout << endl << endl << "Collision: " << endl;
    cout << convert_boolean(ok.collision(ko)) << endl << endl;


    class MapObjectList daList;
    cout << "Adding MapObject ok to list..." << endl;
    daList.add(ok);
    cout << "Adding MapObject ko to list..." << endl;
    daList.add(ko);

    cout << "Printing all objects in list..." << endl;
    daList.print();

    cout << "Printing all objects of type CAR..." << endl;
    daList.get_all_of_type(CAR);
    cout << endl;

    return 0;
}

string convert_boolean(bool param) {
    string result;
    if (param == 1) {
        result = "true";
    } else {
        result = "false";
    }

    return result;
}









