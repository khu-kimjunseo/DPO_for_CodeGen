#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
long prime_fib(long n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n == 2) return 3;
    if (n % 2 == 0) return 0;
    if (n % 3 == 0) return 1;
    if (n % 5 == 0) return 2;
    if (n % 7 == 0) return 3;
    if (n % 11 == 0) return 4;
    if (n % 13 == 0) return 5;
    if (n % 17 == 0) return 6;
    if (n % 19 == 0) return 7;
    if (n % 23 == 0) return 8;
    if (n % 29 == 0) return 9;
    if (n % 31 == 0) return 10;
    if (n % 37 == 0) return 11;
    if (n % 41 == 0) return 12;
    if (n % 43 == 0) return 13;
    if (n % 47 == 0) return 14;
    if (n % 53 == 0) return 15;
    if (n % 59 == 0) return 16;
    if (n % 67 == 0) return 17;
    if (n % 71 == 0) return 18;
    if (n % 73 == 0) return 19;
    if (n % 79 == 0) return 20;
    if (n % 83 == 0) return 21;
    if (n % 89 == 0) return 22;
    if (n % 97 == 0) return 23;
    if (n % 101 == 0) return 24;
    if (n % 103 == 0) return 25;
    if (n % 107 == 0) return 26;
    if (n % 109 == 0) return 27;
    if (n % 113 == 0) return 28;
    if (n % 127 == 0) return 29;
    if (n % 131 == 0) return 30;
    if (n % 137 == 0) return 31;
    if (n % 139 == 0) return 32;
    if (n % 143 == 0) return 33;
    if (n % 147 == 0) return 34;
    if (n % 151 == 0) return 35;
    if (n % 157 == 0) return 36;
    if (n % 163 == 0) return 37;
    if (n % 167 == 0) return 38;
    if (n % 169 == 0) return 39;
    if (n % 173 == 0) return 40;
    if (n % 179 == 0) return 41;
    if (n % 181 == 0) return 42;
    if (n % 191 == 0) return 43;
    if (n % 193 == 0) return 44;
    if (n % 197 == 0) return 45;
    if (n % 199 == 0) return 46;
    if (n % 211 == 0) return 47;
    if (n % 223 == 0) return 48;
    if (n % 227 == 0) return 49;
    if (n % 229 == 0) return 50;
    if (n % 233 == 0) return 51;
    if (n % 239 == 0) return 52;
    if (n % 241 == 0) return 53;
    if (n % 251 == 0) return 54;
    if (n % 257 == 0) return 55;
    if (n % 269 == 0) return 56;
    if (n % 271 == 0) return
}
int main() {
    auto candidate = prime_fib;
    assert(candidate((1)) == (2));
    assert(candidate((2)) == (3));
    assert(candidate((3)) == (5));
    assert(candidate((4)) == (13));
    assert(candidate((5)) == (89));
    assert(candidate((6)) == (233));
    assert(candidate((7)) == (1597));
    assert(candidate((8)) == (28657));
    assert(candidate((9)) == (514229));
    assert(candidate((10)) == (433494437));
}
