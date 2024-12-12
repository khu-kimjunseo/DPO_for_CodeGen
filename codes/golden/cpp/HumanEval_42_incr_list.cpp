#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> incr_list(std::vector<long> l) {
  std::vector<long> res;
  for (auto e : l) {
    res.push_back(e + 1);
  }
  return res;
}
int main() {
    auto candidate = incr_list;
    assert(candidate((std::vector<long>())) == (std::vector<long>()));
    assert(candidate((std::vector<long>({(long)3, (long)2, (long)1}))) == (std::vector<long>({(long)4, (long)3, (long)2})));
    assert(candidate((std::vector<long>({(long)5, (long)2, (long)5, (long)2, (long)3, (long)3, (long)9, (long)0, (long)123}))) == (std::vector<long>({(long)6, (long)3, (long)6, (long)3, (long)4, (long)4, (long)10, (long)1, (long)124})));
}
