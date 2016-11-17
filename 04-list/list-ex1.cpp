#include <list>
#include <iostream>

int
main()
{
  std::list<int> list;

  for(int j=0; j<10000000; ++j)
    list.push_back(j);

  // list.time
  // real 0m1.513s
  // user 0m1.384s
  // sys  0m0.124s

  std::list<int>::iterator it = list.begin();
  for(int j=0; j<5000000; ++j)
    it++;

  std::cout << "[4]: " << *it << std::endl;

  // list.time
  // real 0m1.570s
  // user 0m1.384s
  // sys  0m0.124s

  return 0;
}
