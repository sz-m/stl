#include <iostream>
#include <ctime>
#include <functional>
#include <iterator>
#include <algorithm>
#include <deque>
#include <cstdlib>

void 
print(const std::deque<int>& d)
{
  std::cout << "Deque: ";
  
  std::copy(d.begin(), d.end(), std::ostream_iterator<int>(std::cout, " "));
  
  std::cout << "\n\n";
}

int
main()
{
  std::srand(std::time(0));

  std::deque<int> deque;

  std::generate_n(std::back_inserter(deque), 14, []{ return std::modulus<int>()(std::rand(), 7); });
  print(deque);

  std::sort(deque.begin(), deque.end());
  print(deque);

  auto end = std::unique(deque.begin(), deque.end());
  deque.erase(end, deque.end());
  print(deque);

  std::rotate(deque.begin(), deque.begin()+deque.size()/2, deque.end());
  print(deque);

  return 0;
}
