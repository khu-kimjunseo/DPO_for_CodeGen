#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool move_one_ball(std::vector<long> arr) {
  std::vector<long> sorted_array=sorted(arr);
  std::vector<long> my_arr=arr;
  
  int min_value=min(arr);
  int min_index=arr.index(min_value);
  my_arr=arr[min_index:]+arr[0:min_index];
  
  for(int i=0;i<my_arr.size();i++) {
    if(my_arr[i]!=sorted_array[i]) {
      return false;
    }
  }
  return true;
}
int main() {
    auto candidate = move_one_ball;
    assert(candidate((std::vector<long>({(long)3, (long)4, (long)5, (long)1, (long)2}))) == (true));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)10, (long)1, (long)2}))) == (true));
    assert(candidate((std::vector<long>({(long)4, (long)3, (long)1, (long)2}))) == (false));
    assert(candidate((std::vector<long>({(long)3, (long)5, (long)4, (long)1, (long)2}))) == (false));
    assert(candidate((std::vector<long>())) == (true));
}
