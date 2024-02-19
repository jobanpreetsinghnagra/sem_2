#include <iostream>
using namespace std;
class EmptyClass {
public:
};

int main() {
  // Create an empty class instance
  EmptyClass empty_instance;

  // Print the size of the empty class instance (usually 1 byte)
  cout << "Size of EmptyClass: " << sizeof(empty_instance) << endl;

  return 0;
}
