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
        ArrayList<String> result = new ArrayList<>();
        for (int i = 0; i < planet1.length(); i++) {
            result.add(planet1.charAt(i));
        }
        for (int i = 0; i < planet2.length(); i++) {
            result.add(planet2.charAt(i));
        }
        return result;
    }
}

class Solution {
    public static void main(String[] args) {
        String[] planets = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
        ArrayList<String> bf = Problem.bf(planets[0], planets[1]);
        for (int i = 2; i < planets.length; i++) {
            bf.add(planets[i]);
        }
        System.out.println(bf);
    }
}
