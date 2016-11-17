#include <set>
#include <iostream>
#include <algorithm>

int
main()
{
  std::set<int> set{41,35,76,17,0,23,91,85,53,62};

  auto lbound = set.lower_bound(53);
  
  std::cout << "begin->lower_bound: " << std::distance(set.begin(), lbound) << std::endl;
  
  auto ubound = set.upper_bound(53);

  std::cout << "begin->upper_bound: " << std::distance(set.begin(), ubound) << std::endl;
  
  auto pair = set.equal_range(23);
  std::cout << "first,second: " << std::distance(pair.first, pair.second) << std::endl;

  auto first = set.begin();
  auto last = set.end();

  std::cout << "set: ";
  for(; first != last ; ++first)
    std::cout << *first << " ";
  std::cout << std::endl;

  return 0;
}
