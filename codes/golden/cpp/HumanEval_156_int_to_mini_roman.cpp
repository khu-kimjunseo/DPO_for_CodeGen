#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string int_to_mini_roman(long number) {
    std::vector<long> num = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::vector<std::string> sym = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;
    std::string res = "";
    while (number) {
        long div = number / num[i];
        number %= num[i];
        while (div) {
            res += sym[i];
            div -= 1;
        }
        i -= 1;
    }
    std::transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
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
