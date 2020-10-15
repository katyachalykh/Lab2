#include <iostream>

double myVar = 4'000'000'000.0F;

int main()
{
  std::cout << myVar << std::endl;
  myVar = myVar + 1.0F;

  return 0;
}
