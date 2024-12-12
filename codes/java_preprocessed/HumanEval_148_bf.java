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
