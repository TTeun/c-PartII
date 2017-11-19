#include <iostream>

namespace First {
  enum Enum{ VAL };
  void fun(First::Enum symbol){
    std::cout << "First\n";
  }
}

namespace Second {
  void fun(First::Enum symbol){
    std::cout << "Second\n";
  }
}

void fun(First::Enum symbol){
  std::cout << "Free\n";
}

int main(){
  fun(First::VAL);
}
