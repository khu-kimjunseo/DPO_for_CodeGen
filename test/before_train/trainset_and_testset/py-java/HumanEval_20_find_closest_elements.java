import java.util.*;
import java.lang.reflect.*;
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
    public static void main(String[] args) {
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.9f, (float)4.0f, (float)5.0f, (float)2.2f)))).equals((Pair.with(3.9f, 4.0f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)5.9f, (float)4.0f, (float)5.0f)))).equals((Pair.with(5.0f, 5.9f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.2f)))).equals((Pair.with(2.0f, 2.2f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.0f)))).equals((Pair.with(2.0f, 2.0f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.1f, (float)2.2f, (float)3.1f, (float)4.1f, (float)5.1f)))).equals((Pair.with(2.2f, 3.1f))));
    }

}
