import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> strangeSortList(ArrayList<Long> lst) {
        ArrayList<Long> res = new ArrayList<>();
        boolean switch_ = true;
        while (!lst.isEmpty()) {
            res.add(switch_ ? Collections.min(lst) : Collections.max(lst));
            lst.remove(res.get(res.size() - 1));
            switch_ = !switch_;
        }
        return res;
    }
    

}
