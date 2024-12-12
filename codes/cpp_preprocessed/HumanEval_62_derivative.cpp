#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<long> derivative(std::vector<long> xs) {
  std::vector<long> res;
  for (int i = 1; i < xs.size(); ++i) {
    res.push_back(i * xs[i]);
  }
  return res;
}
