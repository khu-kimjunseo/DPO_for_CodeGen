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
int main() {
    auto candidate = add;
    assert(candidate((std::vector<long>({(long)4, (long)88}))) == (88));
    assert(candidate((std::vector<long>({(long)4, (long)5, (long)6, (long)7, (long)2, (long)122}))) == (122));
    assert(candidate((std::vector<long>({(long)4, (long)0, (long)6, (long)7}))) == (0));
    assert(candidate((std::vector<long>({(long)4, (long)4, (long)6, (long)8}))) == (12));
}
