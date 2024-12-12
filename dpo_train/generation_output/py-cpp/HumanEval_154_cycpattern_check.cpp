### Python version

def cycpattern_check(a: str , b: str) -> bool:
    l = len(b)
    pat = b + b
    for i in range(len(a) - l + 1):
        for j in range(l + 1):
            if a[i:i+l] == pat[j:j+l]:
                return True
    return False

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
bool cycpattern_check(std::string a, std::string b) {
    std::string::size_type i = 0;
    std::string::size_type j = 0;
    std::string::size_type k = 0;
    std::string::size_type l = 0;
    std::string::size_type m = 0;
    std::string::size_type n = 0;
    std::string::size_type o = 0;
    std::string::size_type p = 0;
    std::string::size_type q = 0;
    std::string::size_type r = 0;
    std::string::size_type s = 0;
    std::string::size_type t = 0;
    std::string::size_type u = 0;
    std::string::size_type v = 0;
    std::string::size_type w = 0;
    std::string::size_type x = 0;
    std::string::size_type y = 0;
    std::string::size_type z = 0;
    std::string::size_type aa = 0;
    std::string::size_type bb = 0;
    std::string::size_type cc = 0;
    std::string::size_type dd = 0;
    std::string::size_type ee = 0;
    std::string::size_type ff = 0;
    std::string::size_type gg = 0;
    std::string::size_type hh = 0;
    std::string::size_type ii = 0;
    std::string::size_type jj = 0;
    std::string::size_type kk = 0;
    std::string::size_type ll = 0;
    std::string::size_type mm = 0;
    std::string::size_type nn = 0;
    std::string::size_type oo = 0;
    std::string::size_type pq = 0;
    std::string::size_type rr = 0;
    std::string::size_type sss = 0;
    std::string::size_type tt = 0;
    std::string::size_type uu = 0;
    std::string::size_type vv = 0;
    std::string::size_type ww = 0;
    std::string::size_type xx = 0;
    std::string::size_type yy = 0;
    std::string::size_type zz = 0;
    std::string::size_type aa = 0;
    std::string::size_type bb = 0;
    std::string::size_type cc = 0;
    std::string::size_type dd = 0;
    std::string::size_type ee = 0;
    std::string::size_type ff = 0;
    std::string::size_type gg = 0;
    std::string::size_type hh = 0;
    std::string::size_type ii = 0;
    std::string::size_type jj = 0;
    std::string::size_type kk = 0;
    std::string::size_type ll = 0;
    std::string::size_type mm = 0;
    std::string::size_type nn = 0;
    std::string::size_type oo = 0;
    std::string::size_type pq = 0;
    std::string::size_type rr = 0;
    std::string::size_type sss = 0;
    std::string::size_type tt