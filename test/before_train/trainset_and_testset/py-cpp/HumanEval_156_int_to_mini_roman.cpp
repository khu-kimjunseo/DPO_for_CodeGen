#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::string int_to_mini_roman(long number) {
    std::stringstream ss;
    ss << number;
    return ss.str();
}
int main() {
    auto candidate = int_to_mini_roman;
    assert(candidate((19)) == ("xix"));
    assert(candidate((152)) == ("clii"));
    assert(candidate((251)) == ("ccli"));
    assert(candidate((426)) == ("cdxxvi"));
    assert(candidate((500)) == ("d"));
    assert(candidate((1)) == ("i"));
    assert(candidate((4)) == ("iv"));
    assert(candidate((43)) == ("xliii"));
    assert(candidate((90)) == ("xc"));
    assert(candidate((94)) == ("xciv"));
    assert(candidate((532)) == ("dxxxii"));
    assert(candidate((900)) == ("cm"));
    assert(candidate((994)) == ("cmxciv"));
    assert(candidate((1000)) == ("m"));
}
