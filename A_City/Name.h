/**
 * A class for names.
 */

#ifndef A_CITY_NAMES_H
#define A_CITY_NAMES_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class Name {

public:
    std::string getFirstName();
    std::string getLastName();



    //used for generating random names
    std::string generateRandomFirstName();
    std::string generateRandomLastName();
    Name putTogetherName(std::string randomFirstName, std::string randomLastName);


private:
    std::string firstName;
    std::string lastName;
};

//read names from list
std::vector<std::string> listFirstNames(std::string filename);

void printList(std::vector<std::string> aList);

void printListFromLetterToLetter(char beginningLetter, char endingLetter);

#endif //A_CITY_NAMES_H
