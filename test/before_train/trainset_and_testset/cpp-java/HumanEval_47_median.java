import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float median(ArrayList<Long> l) {
        return median(l.toArray());
    }
    public static float median(long[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(int[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(float[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(double[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(String[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(String[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(String[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static float median(String[] l) {
        if (l.length == 0) {
            return 0.0;
        }
        int m = l.length;
        if (m % 2 == 1) {
            return l[m / 2];
        } else {
            return (l[m / 2 - 1] + l[m / 2]) / 2.0;
        }
    }
    public static
    public static void main(String[] args) {
    assert(median((new ArrayList<Long>(Arrays.asList((long)3l, (long)1l, (long)2l, (long)4l, (long)5l)))) == (float)3l);
    assert(median((new ArrayList<Long>(Arrays.asList((long)-10l, (long)4l, (long)6l, (long)1000l, (long)10l, (long)20l)))) == (8.0f));
    assert(median((new ArrayList<Long>(Arrays.asList((long)5l)))) == (float)5l);
    assert(median((new ArrayList<Long>(Arrays.asList((long)6l, (long)5l)))) == (5.5f));
    assert(median((new ArrayList<Long>(Arrays.asList((long)8l, (long)1l, (long)3l, (long)9l, (long)9l, (long)2l, (long)7l)))) == (float)7l);
    }

}
