import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold) {
        return has_close_elements(numbers, threshold, 0);
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth) {
        if (depth == 0) {
            return has_close_elements(numbers, threshold);
        } else {
            return has_close_elements(numbers, threshold, depth - 1);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold);
        } else {
            return has_close_elements(numbers, threshold, depth - 1);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2, int maxDepth3) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2, int maxDepth3, int maxDepth4) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2, int maxDepth3, int maxDepth4, int maxDepth5) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2, int maxDepth3, int maxDepth4, int maxDepth5, int maxDepth6) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    public static boolean hasCloseElements(ArrayList<Float> numbers, float threshold, int depth, int maxDepth, int maxDepth2, int maxDepth3, int maxDepth4, int maxDepth5, int maxDepth6, int maxDepth7) {
        if (depth == maxDepth) {
            return has_close_elements(numbers, threshold, depth - 1);
        } else {
            return has_close_elements(numbers, threshold, depth - 1, maxDepth2);
        }
    }

    
    public static void main(String[] args) {
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.9f, (float)4.0f, (float)5.0f, (float)2.2f))), (0.3f)) == (true));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.9f, (float)4.0f, (float)5.0f, (float)2.2f))), (0.05f)) == (false));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)5.9f, (float)4.0f, (float)5.0f))), (0.95f)) == (true));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)5.9f, (float)4.0f, (float)5.0f))), (0.8f)) == (false));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.0f, (float)2.0f, (float)3.0f, (float)4.0f, (float)5.0f, (float)2.0f))), (0.1f)) == (true));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.1f, (float)2.2f, (float)3.1f, (float)4.1f, (float)5.1f))), (1.0f)) == (true));
    assert(hasCloseElements((new ArrayList<Float>(Arrays.asList((float)1.1f, (float)2.2f, (float)3.1f, (float)4.1f, (float)5.1f))), (0.5f)) == (false));
    }

}
