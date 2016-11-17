#include <unordered_set>
#include <iostream>

int
main()
{
  std::unordered_set<int> set{3,2,1,4,6,5,7,9,8,0,11,12,13,14,15,16};

  auto bucket = set.bucket(11);
  std::cout << "bucket: " << bucket << std::endl;

  std::cout << "bucket_size: " << set.bucket_size(11) << std::endl;

  std::cout << "bucket_count: " << set.bucket_count() << std::endl;

  return 0;
}
