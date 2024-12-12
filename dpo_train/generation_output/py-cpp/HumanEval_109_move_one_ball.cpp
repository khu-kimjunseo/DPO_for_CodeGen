### Python version

from typing import List

def move_one_ball(arr: List[int]) -> bool:
    if len(arr)==0:
      return True
    sorted_array=sorted(arr)
    my_arr=[]
    
    min_value=min(arr)
    min_index=arr.index(min_value)
    my_arr=arr[min_index:]+arr[0:min_index]
    for i in range(len(arr)):
      if my_arr[i]!=sorted_array[i]:
        return False
    return True

### C++ version

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
  std::vector<long> arr;
  std::vector<long> sorted_arr;
  std::vector<long> my_arr;
  std::vector<long> my_sorted_arr;
  std::vector<long> my_sorted_arr2;
  std::vector<long> my_sorted_arr3;
  std::vector<long> my_sorted_arr4;
  std::vector<long> my_sorted_arr5;
  std::vector<long> my_sorted_arr6;
  std::vector<long> my_sorted_arr7;
  std::vector<long> my_sorted_arr8;
  std::vector<long> my_sorted_arr9;
  std::vector<long> my_sorted_arr10;
  std::vector<long> my_sorted_arr11;
  std::vector<long> my_sorted_arr12;
  std::vector<long> my_sorted_arr13;
  std::vector<long> my_sorted_arr14;
  std::vector<long> my_sorted_arr15;
  std::vector<long> my_sorted_arr16;
  std::vector<long> my_sorted_arr17;
  std::vector<long> my_sorted_arr18;
  std::vector<long> my_sorted_arr19;
  std::vector<long> my_sorted_arr20;
  std::vector<long> my_sorted_arr21;
  std::vector<long> my_sorted_arr22;
  std::vector<long> my_sorted_arr23;
  std::vector<long> my_sorted_arr24;
  std::vector<long> my_sorted_arr25;
  std::vector<long> my_sorted_arr26;
  std::vector<long> my_sorted_arr27;
  std::vector<long> my_sorted_arr28;
  std::vector<long> my_sorted_arr29;
  std::vector<long> my_sorted_arr30;
  std::vector<long> my_sorted_arr31;
  std::vector<long> my_sorted_arr32;
  std::vector<long> my_sorted_arr33;
  std::vector<long> my_sorted_arr34;
  std::vector<long> my_sorted_arr35;
  std::vector<long> my_sorted_arr36;
  std::vector<long> my_sorted_arr37;
  std::vector<long> my_sorted_arr