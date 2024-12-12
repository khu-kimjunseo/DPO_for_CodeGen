### C++ version

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


### Python version

from typing import Tuple

def bf(planet1: str, planet2: str) -> Tuple[str, ...]:
    planet_names = ("Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune")
    if planet1 not in planet_names or planet2 not in planet_names or planet1 == planet2:
        return ()
    planet1_index = planet_names.index(planet1)
    planet2_index = planet_names.index(planet2)
    if planet1_index < planet2_index:
        return (planet_names[planet1_index + 1: planet2_index])
    else:
        return (planet_names[planet2_index + 1 : planet1_index])
