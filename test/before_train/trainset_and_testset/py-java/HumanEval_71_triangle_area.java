import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static float triangleArea(long a, long b, long c) {
        return triangle_area(a, b, c, a, b, c);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1) {
        return triangle_area(a, b, c, a1, b1, c1);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2, long a3, long b3, long c3) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2, a3, b3, c3);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2, long a3, long b3, long c3, long a4, long b4, long c4) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2, a3, b3, c3, a4, b4, c4);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2, long a3, long b3, long c3, long a4, long b4, long c4, long a5, long b5, long c5) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2, a3, b3, c3, a4, b4, c4, a5, b5, c5);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2, long a3, long b3, long c3, long a4, long b4, long c4, long a5, long b5, long c5, long a6, long b6, long c6) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2, a3, b3, c3, a4, b4, c4, a5, b5, c5, a6, b6, c6);
    }
    public static float triangleArea(long a, long b, long c, long a1, long b1, long c1, long a2, long b2, long c2, long a3, long b3, long c3, long a4, long b4, long c4, long a5, long b5, long c5, long a6, long b6, long c6, long a7, long b7, long c7) {
        return triangle_area(a, b, c, a1, b1, c1, a2, b2, c2, a3, b3, c3, a4, b4, c4, a5, b5, c5, a6, b6,
    public static void main(String[] args) {
    assert(triangleArea((3l), (4l), (5l)) == (6.0f));
    assert(triangleArea((1l), (2l), (10l)) == (float)-1l);
    assert(triangleArea((4l), (8l), (5l)) == (8.18f));
    assert(triangleArea((2l), (2l), (2l)) == (1.73f));
    assert(triangleArea((1l), (2l), (3l)) == (float)-1l);
    assert(triangleArea((10l), (5l), (7l)) == (16.25f));
    assert(triangleArea((2l), (6l), (3l)) == (float)-1l);
    assert(triangleArea((1l), (1l), (1l)) == (0.43f));
    assert(triangleArea((2l), (2l), (10l)) == (float)-1l);
    }

}
