#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::string string_sequence(long n) {
    std::string result = "";
    for (long i = 0; i <= n; i++) {
        result += std::to_string(i);
        if (i != n) {
            result += " ";
        }
    }
    return result;
}
