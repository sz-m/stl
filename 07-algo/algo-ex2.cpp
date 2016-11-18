#include <iterator>
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>


void
print_vector(const std::vector<int>& vec)
{
  std::cout << "Vector: ";
  
  std::copy(vec.begin(), vec.end(),
        std::ostream_iterator<int>(std::cout, " "));

  std::cout << "\n\n";
}


int
main()
{
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<> dist(1,10);

  std::vector<int> v;
  v.resize(30);
  print_vector(v);

  auto r = [&](){ return dist(mt); };

  std::generate(v.begin(), v.end(), r);
  print_vector(v);

  std::sort(v.begin(), v.end(), std::greater<int>());
  print_vector(v);

  auto end = std::unique(v.begin(), v.end());
  v.erase(end, v.end());
  print_vector(v);

  std::reverse(v.begin(), v.end());
  print_vector(v);

  return 0;
}
