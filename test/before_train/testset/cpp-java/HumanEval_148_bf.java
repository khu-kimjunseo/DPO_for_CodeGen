import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<String> bf(String planet1, String planet2) {
        ArrayList<String> planet_names = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
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
    public static void main(String[] args) {
    assert(bf(("Jupiter"), ("Neptune")).equals((new ArrayList<String>(Arrays.asList((String)"Saturn", (String)"Uranus")))));
    assert(bf(("Earth"), ("Mercury")).equals((new ArrayList<String>(Arrays.asList((String)"Venus")))));
    assert(bf(("Mercury"), ("Uranus")).equals((new ArrayList<String>(Arrays.asList((String)"Venus", (String)"Earth", (String)"Mars", (String)"Jupiter", (String)"Saturn")))));
    assert(bf(("Neptune"), ("Venus")).equals((new ArrayList<String>(Arrays.asList((String)"Earth", (String)"Mars", (String)"Jupiter", (String)"Saturn", (String)"Uranus")))));
    assert(bf(("Earth"), ("Earth")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(bf(("Mars"), ("Earth")).equals((new ArrayList<String>(Arrays.asList()))));
    assert(bf(("Jupiter"), ("Makemake")).equals((new ArrayList<String>(Arrays.asList()))));
    }

}
