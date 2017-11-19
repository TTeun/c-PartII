#include <iostream>

using namespace std;

class Test {
  public:
  Test() = default;
  explicit operator bool(){
    cout << "Conv\n";
    return true;
  }
};

bool fun(){
  return Test();
}

int main(){
  Test t;
  bool b = Test();
}
