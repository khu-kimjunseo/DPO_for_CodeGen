#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long add(std::vector<long> lst) {
  long sum = 0;
  for (int i = 1; i < lst.size(); i += 2) {
    if (lst[i] % 2 == 0) {
      sum += lst[i];
    }
  }
  return sum;
}
