#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string string_sequence(long n) {
    std::string result = "";
    for (long i = 0; i <= n; i++) {
        result += std::to_string(i);
        if (i != n) {
            result += " ";
        }
    }
    return result;
}
int main() {
    auto candidate = string_sequence;
    assert(candidate((0)) == ("0"));
    assert(candidate((3)) == ("0 1 2 3"));
    assert(candidate((10)) == ("0 1 2 3 4 5 6 7 8 9 10"));
}
