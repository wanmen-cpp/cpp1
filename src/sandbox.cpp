#include <iostream>

using namespace std;

class myBase {
public:
  myBase() {
    cout << "myBase ctr" << endl;
  }
  ~myBase() {
    cout << "myBase dtr" << endl;
  }  
};

class derivedOne : public myBase {
// class derivedOne : private myBase {
public:
  derivedOne() {
    cout << "derOne ctr" << endl;    
  }
  ~derivedOne() {
    cout << "derOne dtr" << endl;    
  }  
};

int main() {

  derivedOne derOneTester {};

  myBase* myBaseTester = &derOneTester;

  (void)myBaseTester;
  return 0;
}
