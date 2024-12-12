### Python version

def int_to_mini_roman(number: int) -> str:
    num = [1, 4, 5, 9, 10, 40, 50, 90,  
           100, 400, 500, 900, 1000] 
    sym = ["I", "IV", "V", "IX", "X", "XL",  
           "L", "XC", "C", "CD", "D", "CM", "M"] 
    i = 12
    res = ''
    while number: 
        div = number // num[i] 
        number %= num[i] 
        while div: 
            res += sym[i] 
            div -= 1
        i -= 1
    return res.lower()

### C++ version

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

