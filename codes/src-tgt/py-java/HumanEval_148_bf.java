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

