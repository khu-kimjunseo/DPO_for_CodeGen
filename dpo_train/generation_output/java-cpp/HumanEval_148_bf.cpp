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
    