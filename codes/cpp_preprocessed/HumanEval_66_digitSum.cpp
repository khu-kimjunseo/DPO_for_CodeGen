#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
long digitSum(std::string s) {
    if (s == "") return 0;
    long ans = 0;
    for (char c : s) {
        if (isupper(c)) ans += c;
    }
    return ans;
}
