#include <array>
#include <iostream>

int 
main()
{
  std::array<int, 10> arr1;

  arr1.fill(5);

  arr1[3] = 3;

  std::array<int, arr1.size()> arr2{};

  arr2.swap(arr1);

  std::cout << "Arr1: ";
  for(auto val : arr1) 
    std::cout << val << " ";
  std::cout << std::endl;

  std::cout << "Arr2: ";
  for(auto val : arr2) 
    std::cout << val << " ";
  std::cout << std::endl;

  return 0;
}
