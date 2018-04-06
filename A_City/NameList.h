/**
 * Abstract that is meant for dealing with names in a vector.
 */

#ifndef A_CITY_NAMELIST_H
#define A_CITY_NAMELIST_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class NamesList {

public:

//Default constructor
    NamesList();

    //Explicitly set constructor
    NamesList(std::string filename);

    void printList(std::vector<std::string> aList);

    void setList(std::vector<std::string> list);

    std::vector<std::string> list;

    std::string ok;
};

//Read in the names to a list
std::vector<std::string> createList(std::string filename);


#endif //A_CITY_NAMELIST_H
