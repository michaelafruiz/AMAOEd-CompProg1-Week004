#include <string>
#include <sstream>
#include "../../Week010/Mammal/Mammal.h"


using namespace std;

class Dog : public Mammal {
  private:
    string _breed, _size;
    bool _isRegister;

  public:
    Dog(string name, string fur, short legs, bool hasTail)
      :Mammal(name,fur,legs, hasTail) {
    }

    void setBreed(string breed) {
      this->_breed = breed;
    }

    string getBreed() {
      return _breed;
    }

    void setSize(string size) {
      this->_size = size;
    }

    string getSize() {
      return _size;
    }

    void setIsRegister(bool isregister) {
      this->_isRegister = isregister;
    }

    bool getIsRegister() {
      return _isRegister;
    }
};