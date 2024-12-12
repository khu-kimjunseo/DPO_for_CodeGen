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
