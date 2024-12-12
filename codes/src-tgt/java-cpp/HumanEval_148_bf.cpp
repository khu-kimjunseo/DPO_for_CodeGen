### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> bf(String planet1, String planet2) {
        ArrayList<String> planetNames = new ArrayList<>(Arrays.asList("Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"));
        if (!planetNames.contains(planet1) || !planetNames.contains(planet2) || planet1.equals(planet2)) {
            return new ArrayList<>();
        }
        int planet1Index = planetNames.indexOf(planet1);
        int planet2Index = planetNames.indexOf(planet2);
        if (planet1Index < planet2Index) {
            return new ArrayList<>(planetNames.subList(planet1Index + 1, planet2Index));
        } else {
            return new ArrayList<>(planetNames.subList(planet2Index + 1, planet1Index));
        }
    }
    

}


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

