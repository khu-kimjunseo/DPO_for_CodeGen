### Python version

from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = None
    distance = None

    for idx, elem in enumerate(numbers):
        for idx2, elem2 in enumerate(numbers):
            if idx != idx2:
                if distance is None:
                    distance = abs(elem - elem2)
                    closest_pair = tuple(sorted([elem, elem2]))
                else:
                    new_distance = abs(elem - elem2)
                    if new_distance < distance:
                        distance = new_distance
                        closest_pair = tuple(sorted([elem, elem2]))

    return closest_pair

### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers) {
        Pair<Float, Float> closestPair = null;
        Float distance = null;

        for (int idx = 0; idx < numbers.size(); idx++) {
            Float elem = numbers.get(idx);
            for (int idx2 = 0; idx2 < numbers.size(); idx2++) {
                Float elem2 = numbers.get(idx2);
                if (idx != idx2) {
                    Float newDistance = Math.abs(elem - elem2);
                    if (distance == null || newDistance < distance) {
                        distance = newDistance;
                        closestPair = Pair.with(Math.min(elem, elem2), Math.max(elem, elem2));
                    }
                }
            }
        }

        return closestPair;
    }
    

}

