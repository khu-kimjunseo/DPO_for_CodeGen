import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static long doubleTheDifference(ArrayList<Float> lst) {
        return lst.stream().filter(i -> i > 0 && i%2!=0 && i == Math.floor(i)).mapToLong(i -> (long) Math.pow(i, 2)).sum();
    }
    public static void main(String[] args) {
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList()))) == (0l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)5.0f, (float)4.0f)))) == (25l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)0.1f, (float)0.2f, (float)0.3f)))) == (0l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)-10.0f, (float)-20.0f, (float)-30.0f)))) == (0l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)-1.0f, (float)-2.0f, (float)8.0f)))) == (0l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)0.2f, (float)3.0f, (float)5.0f)))) == (34l));
    assert(doubleTheDifference((new ArrayList<Float>(Arrays.asList((float)-9.0f, (float)-7.0f, (float)-5.0f, (float)-3.0f, (float)-1.0f, (float)1.0f, (float)3.0f, (float)5.0f, (float)7.0f, (float)9.0f)))) == (165l));
    }

}
