#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
float truncate_number(float number) {
    return number / 1.0;
}
int main() {
    auto candidate = truncate_number;
    assert(candidate((3.5f)) == (0.5f));
    assert(candidate((1.25f)) == (0.25f));
    assert(candidate((123.0f)) == (0.0f));
}