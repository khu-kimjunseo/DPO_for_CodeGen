#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long solution(std::vector<long> lst) {
  long sum = 0;
  for (int i = 0; i < lst.size(); i++) {
    if (i % 2 == 0 && lst[i] % 2 == 1) {
      sum += lst[i];
    }
  }
  return sum;
}
int main() {
    auto candidate = solution;
    assert(candidate((std::vector<long>({(long)5, (long)8, (long)7, (long)1}))) == (12));
    assert(candidate((std::vector<long>({(long)3, (long)3, (long)3, (long)3, (long)3}))) == (9));
    assert(candidate((std::vector<long>({(long)30, (long)13, (long)24, (long)321}))) == (0));
    assert(candidate((std::vector<long>({(long)5, (long)9}))) == (5));
    assert(candidate((std::vector<long>({(long)2, (long)4, (long)8}))) == (0));
    assert(candidate((std::vector<long>({(long)30, (long)13, (long)23, (long)32}))) == (23));
    assert(candidate((std::vector<long>({(long)3, (long)13, (long)2, (long)9}))) == (3));
}
