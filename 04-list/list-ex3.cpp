#include <forward_list>
#include <iostream>
#include <algorithm>

int
main()
{
  std::forward_list<int> list{5,4,3,7,6,8,9,0,1,2};

  auto first = list.begin();
  auto last = list.end();

  std::cout << "Size: " << std::distance(first, last) << std::endl;

  //auto fifth = list.begin();
  //std::advance(fifth, 4);
  auto fifth = std::next(list.begin(), 4);

  std::cout << "Fifth: " << *fifth << std::endl;

  std::cout << "Distance: " << std::distance(first, fifth) << std::endl;

  return 0;
}
