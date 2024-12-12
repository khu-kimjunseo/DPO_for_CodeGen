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
    int oddCount = 0;
    for (char c : Long.toString(n).toCharArray()) {
        int digit = Character.getNumericValue(c);
        if (digit % 2 == 1) {
            product *= digit;
            oddCount++;
        }
    }
    return oddCount == 0 ? 0 : product;
}
int main() {
    auto candidate = digits;
    assert(candidate((5)) == (5));
    assert(candidate((54)) == (5));
    assert(candidate((120)) == (1));
    assert(candidate((5014)) == (5));
    assert(candidate((98765)) == (315));
    assert(candidate((5576543)) == (2625));
    assert(candidate((2468)) == (0));
}
