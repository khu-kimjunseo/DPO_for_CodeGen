#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> result;
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        result.push_back(planet);
    }
    return result;
}
int main() {
    auto candidate = bf;
    assert(candidate(("Jupiter"), ("Neptune")) == (std::vector<std::string>({(std::string)"Saturn", (std::string)"Uranus"})));
    assert(candidate(("Earth"), ("Mercury")) == (std::vector<std::string>({(std::string)"Venus"})));
    assert(candidate(("Mercury"), ("Uranus")) == (std::vector<std::string>({(std::string)"Venus", (std::string)"Earth", (std::string)"Mars", (std::string)"Jupiter", (std::string)"Saturn"})));
    assert(candidate(("Neptune"), ("Venus")) == (std::vector<std::string>({(std::string)"Earth", (std::string)"Mars", (std::string)"Jupiter", (std::string)"Saturn", (std::string)"Uranus"})));
    assert(candidate(("Earth"), ("Earth")) == (std::vector<std::string>()));
    assert(candidate(("Mars"), ("Earth")) == (std::vector<std::string>()));
    assert(candidate(("Jupiter"), ("Makemake")) == (std::vector<std::string>()));
}
