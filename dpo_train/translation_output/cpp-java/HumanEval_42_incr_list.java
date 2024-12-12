import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> incrList(ArrayList<Long> l) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            res.add(e + 1);
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                res.add(e + 1);
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                if (e < m) {
                    res.add(e + 1);
                }
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m, long n2) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                if (e < m) {
                    if (e < n2) {
                        res.add(e + 1);
                    }
                }
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m, long n2, long n3) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                if (e < m) {
                    if (e < n2) {
                        if (e < n3) {
                            res.add(e + 1);
                        }
                    }
                }
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m, long n2, long n3, long n4) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                if (e < m) {
                    if (e < n2) {
                        if (e < n3) {
                            if (e < n4) {
                                res.add(e + 1);
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m, long n2, long n3, long n4, long n5) {
        ArrayList<Long> res = new ArrayList<>();
        for (long e : l) {
            if (e < n) {
                if (e < m) {
                    if (e < n2) {
                        if (e < n3) {
                            if (e < n4) {
                                if (e < n5) {
                                    res.add(e + 1);
                                }
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
    public static ArrayList<Long> incrList(ArrayList<Long> l, long n, long m, long n2, long n
    public static void main(String[] args) {
    assert(incrList((new ArrayList<Long>(Arrays.asList()))).equals((new ArrayList<Long>(Arrays.asList()))));
    assert(incrList((new ArrayList<Long>(Arrays.asList((long)3l, (long)2l, (long)1l)))).equals((new ArrayList<Long>(Arrays.asList((long)4l, (long)3l, (long)2l)))));
    assert(incrList((new ArrayList<Long>(Arrays.asList((long)5l, (long)2l, (long)5l, (long)2l, (long)3l, (long)3l, (long)9l, (long)0l, (long)123l)))).equals((new ArrayList<Long>(Arrays.asList((long)6l, (long)3l, (long)6l, (long)3l, (long)4l, (long)4l, (long)10l, (long)1l, (long)124l)))));
    }

}
