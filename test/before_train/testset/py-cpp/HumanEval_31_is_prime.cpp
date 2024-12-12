#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool is_prime(long n) {
    if (n == 1) return true;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;
    if (n % 5 == 0) return false;
    if (n % 7 == 0) return false;
    if (n % 11 == 0) return false;
    if (n % 13 == 0) return false;
    if (n % 17 == 0) return false;
    if (n % 19 == 0) return false;
    if (n % 23 == 0) return false;
    if (n % 29 == 0) return false;
    if (n % 31 == 0) return false;
    if (n % 37 == 0) return false;
    if (n % 41 == 0) return false;
    if (n % 43 == 0) return false;
    if (n % 47 == 0) return false;
    if (n % 53 == 0) return false;
    if (n % 59 == 0) return false;
    if (n % 61 == 0) return false;
    if (n % 67 == 0) return false;
    if (n % 71 == 0) return false;
    if (n % 73 == 0) return false;
    if (n % 79 == 0) return false;
    if (n % 83 == 0) return false;
    if (n % 89 == 0) return false;
    if (n % 97 == 0) return false;
    if (n % 101 == 0) return false;
    if (n % 103 == 0) return false;
    if (n % 107 == 0) return false;
    if (n % 109 == 0) return false;
    if (n % 113 == 0) return false;
    if (n % 127 == 0) return false;
    if (n % 131 == 0) return false;
    if (n % 137 == 0) return false;
    if (n % 139 == 0) return false;
    if (n % 143 == 0) return false;
    if (n % 147 == 0) return false;
    if (n % 151 == 0) return false;
    if (n % 157 == 0) return false;
    if (n % 163 == 0) return false;
    if (n % 167 == 0) return false;
    if (n % 169 == 0) return false;
    if (n % 173 == 0) return false;
    if (n % 179 == 0) return false;
    if (n % 181 == 0) return false;
    if (n % 191 == 0) return false;
    if (n % 193 == 0) return false;
    if (n % 197 == 0) return false;
    if (n % 199 == 0) return false;
    if (n % 211 == 0) return false;
    if (n % 223 == 0) return false;
    if (n % 227 == 0) return false;
    if (n % 229 == 0) return false;
    if (n % 233 == 0) return false;
    if (n % 239 == 0) return false;
    if (n % 241 == 0) return false;
    if (n % 251 == 0) return false;
    if (n % 257 == 0) return false;
    if (n % 269 == 0) return false;
    if (n % 271 == 0) return false;
    if (n % 277 == 0) return false;
    if (n % 281 == 0) return false;
    if (n % 283 == 0) return false;
    if (n % 293 == 0) return false;
    if (n % 307 == 0) return false;
    if (n % 311 == 0) return false;
    if (n % 313 == 0) return false
}
int main() {
    auto candidate = is_prime;
    assert(candidate((6)) == (false));
    assert(candidate((101)) == (true));
    assert(candidate((11)) == (true));
    assert(candidate((13441)) == (true));
    assert(candidate((61)) == (true));
    assert(candidate((4)) == (false));
    assert(candidate((1)) == (false));
    assert(candidate((5)) == (true));
    assert(candidate((11)) == (true));
    assert(candidate((17)) == (true));
    assert(candidate((85)) == (false));
    assert(candidate((77)) == (false));
    assert(candidate((255379)) == (false));
}
