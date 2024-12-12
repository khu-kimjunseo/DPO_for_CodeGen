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

### Python version

from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple of the closest elements.
    """
    return findClosestElements(numbers)

### Java version

import java.util.stream

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    """
    Find the closest elements of a list of numbers.

    :param numbers: A list of numbers.
    :return: A tuple