#include <vector>
#include <iostream>

int
main()
{
  std::vector<int> v;

  std::cout << "size: " << v.size() << std::endl;
  std::cout << "capacity: " << v.capacity() << std::endl;

  v.resize(10);
  std::fill(v.begin(), v.end(), 5);

  std::cout << "size: " << v.size() << std::endl;
  std::cout << "capacity: " << v.capacity() << std::endl;

  v.reserve(20);

  std::cout << "size: " << v.size() << std::endl;
  std::cout << "capacity: " << v.capacity() << std::endl;

  v.shrink_to_fit();

  std::cout << "size: " << v.size() << std::endl;
  std::cout << "capacity: " << v.capacity() << std::endl;

  return 0;
}
