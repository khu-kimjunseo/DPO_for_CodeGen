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
        return findClosestElements(numbers, 0.0f);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance) {
        return findClosestElements(numbers, minDistance, 0.0f);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance) {
        return findClosestElements(numbers, minDistance, maxDistance, 0.0f);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, 0.0f);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquaredSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, maxDistanceSquaredSquared);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquaredSquared, float maxDistanceSquaredSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, maxDistanceSquared, maxDistanceSquaredSquared);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquared, float maxDistanceSquaredSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, maxDistanceSquared, maxDistanceSquaredSquared);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquared, float maxDistanceSquaredSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, maxDistanceSquared, maxDistanceSquaredSquared);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquared, float maxDistanceSquaredSquared) {
        return findClosestElements(numbers, minDistance, maxDistance, maxDistance, maxDistanceSquared, maxDistanceSquared, maxDistanceSquaredSquared);
    }

    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float minDistance, float maxDistance, float maxDistanceSquared, float maxDistanceSquared, float maxDistanceSquaredSquared) {
        return findClosestE