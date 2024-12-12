#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
bool simplify(std::string x, std::string n) {
    std::stringstream ss1(x), ss2(n);
    int a, b, c, d;
    char slash;
    ss1 >> a >> slash >> b;
    ss2 >> c >> slash >> d;
    int numerator = a * c;
    int denom = b * d;
    return numerator % denom == 0;
}
int main() {
    auto candidate = simplify;
    assert(candidate(("1/5"), ("5/1")) == (true));
    assert(candidate(("1/6"), ("2/1")) == (false));
    assert(candidate(("5/1"), ("3/1")) == (true));
    assert(candidate(("7/10"), ("10/2")) == (false));
    assert(candidate(("2/10"), ("50/10")) == (true));
    assert(candidate(("7/2"), ("4/2")) == (true));
    assert(candidate(("11/6"), ("6/1")) == (true));
    assert(candidate(("2/3"), ("5/2")) == (false));
    assert(candidate(("5/2"), ("3/5")) == (false));
    assert(candidate(("2/4"), ("8/4")) == (true));
    assert(candidate(("2/4"), ("4/2")) == (true));
    assert(candidate(("1/5"), ("5/1")) == (true));
    assert(candidate(("1/5"), ("1/5")) == (false));
}
