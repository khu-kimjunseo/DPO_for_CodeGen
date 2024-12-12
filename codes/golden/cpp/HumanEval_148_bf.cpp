#include<assert.h>
#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<regex>
#include<map>
#include<set>
std::vector<std::string> bf(std::string planet1, std::string planet2) {
    std::vector<std::string> planet_names = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    if (std::find(planet_names.begin(), planet_names.end(), planet1) == planet_names.end() || std::find(planet_names.begin(), planet_names.end(), planet2) == planet_names.end() || planet1 == planet2) {
        return {};
    }
    int planet1_index = std::find(planet_names.begin(), planet_names.end(), planet1) - planet_names.begin();
    int planet2_index = std::find(planet_names.begin(), planet_names.end(), planet2) - planet_names.begin();
    if (planet1_index < planet2_index) {
        return {planet_names.begin() + planet1_index + 1, planet_names.begin() + planet2_index};
    } else {
        return {planet_names.begin() + planet2_index + 1, planet_names.begin() + planet1_index};
    }
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
