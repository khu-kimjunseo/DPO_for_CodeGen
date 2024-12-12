import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> sortThird(ArrayList<Long> l) {
        for (int i=2; i<l.size(); i+=3) {
            int j=i-2;
            while (j>=0 && l.get(j+3)<l.get(j)) {
                long tmp=l.get(j);
                l.set(j,l.get(j+3));
                l.set(j+3,tmp);
                j-=3;
            }
        }
        return l;
    }
    
    

}
