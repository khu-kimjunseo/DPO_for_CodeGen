import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(float[] numbers) {
        return findClosestElements(Arrays.asList(numbers));
    }
    public static Pair<Float, Float> findClosestElements(List<Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(int[] numbers) {
        return findClosestElements(Arrays.asList(numbers));
    }
    public static Pair<Float, Float> findClosestElements(Set<Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Map<Float, Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers) {
        return findClosestElements(numbers.toArray());
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance) {
        return findClosestElements(numbers.toArray(), min_distance);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance, float max_distance_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared);
    }
    public static Pair<Float, Float> findClosestElements(Tuple<Float, Float> numbers, float min_distance, float max_distance, float max_distance_squared, float max_distance_squared_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared, max_distance_squared_squared);
    }
    public static Pair<Float, Float> findClosestElements(ArrayList<Float> numbers, float min_distance, float max_distance, float max_distance_squared) {
        return findClosestElements(numbers.toArray(), min_distance, max_distance, max_distance_squared);
    }
    public static Pair
    public static void main(String[] args) {
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.9f, (float)4.0f, (float)5.0f, (float)2.2f)))).equals((Pair.with(3.9f, 4.0f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)5.9f, (float)4.0f, (float)5.0f)))).equals((Pair.with(5.0f, 5.9f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.2f)))).equals((Pair.with(2.0f, 2.2f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.0f)))).equals((Pair.with(2.0f, 2.0f))));
    assert(findClosestElements((new ArrayList<Float>(Arrays.asList((float)1.1f, (float)2.2f, (float)3.1f, (float)4.1f, (float)5.1f)))).equals((Pair.with(2.2f, 3.1f))));
    }

}
