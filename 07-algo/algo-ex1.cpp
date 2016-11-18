#include <string>
#include <iostream>
#include <algorithm>

bool
is_palindrome(const std::string& str)
{
  auto x = std::mismatch(str.begin(), str.end(), str.rbegin());
  if(x.first == str.end())
    return true;

  return false;
}

void
check_palindrome(const std::string& str)
{
  std::cout << str << " is" << (is_palindrome(str) ? " " : " not ") << "palindrome." << std::endl;
}

int
main()
{
  check_palindrome("anna");
  check_palindrome("wolow");
  check_palindrome("drxxdd");
  
  return 0;
}
