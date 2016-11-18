#include <functional>
#include <iostream>

int
main()
{
  std::function<int(int)> mul_by_5 = std::bind(std::multiplies<int>(), std::placeholders::_1, 5);

  std::cout << "11*5 = " << mul_by_5(11) << std::endl;

  std::function<int(int)> mul_by_5_lambda = [](int x){return x * 5;};

  std::cout << "11*5 = " << mul_by_5_lambda(11) << std::endl;


  return 0;
}
