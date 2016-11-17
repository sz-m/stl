#include <vector>
#include <iostream>

int
main()
{
  std::vector<int> vector;
  vector.reserve(10000000);

  for(int j=0; j<10000000; ++j)
    vector.push_back(j);

  // vector.time
  // real 0m0.218s
  // user 0m0.204s
  // sys  0m0.012s

  // with reserve
  // real 0m0.174s
  // user 0m0.160s
  // sys  0m0.012s

  std::cout << "[4]: " << vector.at(5000000) << std::endl;

  // vector.time
  // real 0m0.219s
  // user 0m0.196s
  // sys  0m0.020s

  // with reserve
  // real 0m0.174s
  // user 0m0.168s
  // sys  0m0.008s

  return 0;
}
