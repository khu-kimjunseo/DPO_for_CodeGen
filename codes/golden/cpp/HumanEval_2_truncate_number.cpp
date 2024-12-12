#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
float truncate_number(float number) {
    return number - floor(number);
}
int main() {
    auto candidate = truncate_number;
    assert(candidate((3.5)) == (0.5));
    assert(candidate((1.25)) == (0.25));
    assert(candidate((123.0)) == (0.0));
}
