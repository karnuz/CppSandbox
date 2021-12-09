#include <iostream>

class A
{
  public:
  template<class T> T function_m(T a) {return a; };
};

template<class U> void function_n(U argument)
{
  auto object_x = argument.template function_m<char>('a');  // ill-formed
  std::cout << object_x << "\n";
}

int main () {

  A a = *(new A());
  function_n(a);

  return 0;
}
