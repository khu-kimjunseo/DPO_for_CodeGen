import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float meanAbsoluteDeviation(ArrayList<Float> numbers) {
        float mean = numbers.stream().reduce(0.0f, Float::sum) / numbers.size();
        return numbers.stream().map(x -> Math.abs(x - mean)).reduce(0.0f, Float::sum) / numbers.size();
    }
    

}