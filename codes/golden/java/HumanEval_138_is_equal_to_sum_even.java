import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean isEqualToSumEven(long n) {
        return n%2 == 0 && n > 7;
    }
    public static void main(String[] args) {
    assert(isEqualToSumEven((4l)) == (false));
    assert(isEqualToSumEven((6l)) == (false));
    assert(isEqualToSumEven((8l)) == (true));
    assert(isEqualToSumEven((10l)) == (true));
    assert(isEqualToSumEven((11l)) == (false));
    assert(isEqualToSumEven((12l)) == (true));
    assert(isEqualToSumEven((13l)) == (false));
    assert(isEqualToSumEven((16l)) == (true));
    }

}
