import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean anyInt(float x, float y, float z) {
        return any_int(x, y, z);
    }
    public static void main(String[] args) {
    assert(anyInt((float)2l, (float)3l, (float)1l) == (true));
    assert(anyInt((2.5f), (float)2l, (float)3l) == (false));
    assert(anyInt((1.5f), (float)5l, (3.5f)) == (false));
    assert(anyInt((float)2l, (float)6l, (float)2l) == (false));
    assert(anyInt((float)4l, (float)2l, (float)2l) == (true));
    assert(anyInt((2.2f), (2.2f), (2.2f)) == (false));
    assert(anyInt((float)-4l, (float)6l, (float)2l) == (true));
    assert(anyInt((float)2l, (float)1l, (float)1l) == (true));
    assert(anyInt((float)3l, (float)4l, (float)7l) == (true));
    assert(anyInt((3.0f), (float)4l, (float)7l) == (false));
    }

}
