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
