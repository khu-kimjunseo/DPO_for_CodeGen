#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::optional<std::string> string_to_md5(std::string text) {
    if (text == null || text.isEmpty()) {
        return std::optional<std::string>();
    }
    std::stringstream ss(text);
    std::string line;
    std::string md5;
    while (std::getline(ss, line)) {
        md5 = md5.append(line);
    }
    return std::optional<std::string>(md5);
}
int main() {
    auto candidate = string_to_md5;
    assert(candidate(("Hello world")) == "3e25960a79dbc69b674cd4ec67a72c62");
    assert(candidate(("")) == std::nullopt);
    assert(candidate(("A B C")) == "0ef78513b0cb8cef12743f5aeb35f888");
    assert(candidate(("password")) == "5f4dcc3b5aa765d61d8327deb882cf99");
}
