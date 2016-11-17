#include <vector>
#include <iostream>

int
main()
{
  std::vector<int> v{1,2,4,5,6};

  v.erase(v.begin());

  v.push_back(5);

  v.emplace(v.begin(), 12);

  std::cout << "Vector.size() - " << v.size() << std::endl;
  std::cout << "Vector.max_size() - " << v.max_size() << std::endl;

  std::cout << "Vector: ";
  for(int& val : v)
    std::cout << val << " ";
  std::cout << std::endl;

  v.clear();

  std::cout << "Vector.size() - " << v.size() << std::endl;
  std::cout << "Vector.capacity() - " << v.capacity() << std::endl;

  return 0;
}
