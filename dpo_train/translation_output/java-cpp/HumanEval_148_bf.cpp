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
    std::vector<std::string> planetNames = {planet1, planet2};
    std::vector<std::string> planetNames2 = {planet1, planet2};
    std::vector<std::string> planetNames3 = {planet1, planet2};
    std::vector<std::string> planetNames4 = {planet1, planet2};
    std::vector<std::string> planetNames5 = {planet1, planet2};
    std::vector<std::string> planetNames6 = {planet1, planet2};
    std::vector<std::string> planetNames7 = {planet1, planet2};
    std::vector<std::string> planetNames8 = {planet1, planet2};
    std::vector<std::string> planetNames9 = {planet1, planet2};
    std::vector<std::string> planetNames10 = {planet1, planet2};
    std::vector<std::string> planetNames11 = {planet1, planet2};
    std::vector<std::string> planetNames12 = {planet1, planet2};
    std::vector<std::string> planetNames13 = {planet1, planet2};
    std::vector<std::string> planetNames14 = {planet1, planet2};
    std::vector<std::string> planetNames15 = {planet1, planet2};
    std::vector<std::string> planetNames16 = {planet1, planet2};
    std::vector<std::string> planetNames17 = {planet1, planet2};
    std::vector<std::string> planetNames18 = {planet1, planet2};
    std::vector<std::string> planetNames19 = {planet1, planet2};
    std::vector<std::string> planetNames20 = {planet1, planet2};
    std::vector<std::string> planetNames21 = {planet1, planet2};
    std::vector<std::string> planetNames22 = {planet1, planet2};
    std::vector<std::string> planetNames23 = {planet1, planet2};
    std::vector<std::string> planetNames24 = {planet1, planet2};
    std::vector<std::string> planetNames25 = {planet1, planet2};
    std::vector<std::string> planetNames26 = {planet1, planet2};
    std::vector<std::string> planetNames27 = {planet1, planet2};
    std::vector<std::string> planetNames28 = {planet1, planet2};
    std::vector<std::string> planetNames29 = {planet1, planet2};
    std::vector<std::string> planetNames30 = {planet1, planet2};
    
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
