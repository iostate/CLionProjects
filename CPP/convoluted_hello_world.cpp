#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <string>
int main() {
  std::vector<std::string> sVect{"H","e","l","l","o"," ","w","o","r","l","d","!"};
  std::copy(std::begin(sVect),std::end(sVect),std::ostream_iterator<std::string>(std::cout));
  return 0;
}
