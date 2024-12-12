import java.util.*;
import java.lang.reflect.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String decimalToBinary(long decimal) {
        return decimalToBinary(decimal, 0);
    }

    public static String decimalToBinary(long decimal, int precision) {
        return decimalToBinary(decimal, precision, 0);
    }

    public static String decimalToBinary(long decimal, int precision, int scale) {
        return decimalToBinary(decimal, precision, scale, 0);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, 0);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, 0);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, 0);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset2, int scaleOffset2) {
        return decimalToBinary(decimal, precision, scale, precisionOffset, scaleOffset, precisionOffset2, scaleOffset2);
    }

    public static String decimalToBinary(long decimal, int precision, int scale, int precisionOffset, int scaleOffset, int precisionOffset
    public static void main(String[] args) {
    assert(decimalToBinary((0l)).equals(("db0db")));
    assert(decimalToBinary((32l)).equals(("db100000db")));
    assert(decimalToBinary((103l)).equals(("db1100111db")));
    assert(decimalToBinary((15l)).equals(("db1111db")));
    }

}
