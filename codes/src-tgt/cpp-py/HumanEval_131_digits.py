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
long digits(long n) {
    long product = 1;
    int odd_count = 0;
    for (char digit : std::to_string(n)) {
        int int_digit = digit - '0';
        if (int_digit % 2 == 1) {
            product *= int_digit;
            odd_count++;
        }
    }
    return odd_count == 0 ? 0 : product;
}


### Python version

def digits(n: int) -> int:
    product = 1
    odd_count = 0
    for digit in str(n):
        int_digit = int(digit)
        if int_digit%2 == 1:
            product= product*int_digit
            odd_count+=1
    if odd_count ==0:
        return 0
    else:
        return product
