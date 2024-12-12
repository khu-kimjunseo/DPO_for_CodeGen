import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Long> removeDuplicates(ArrayList<Long> numbers) {
        Map<Long, Long> counts = new HashMap<>();
        for (Long n : numbers) {
            counts.put(n, counts.getOrDefault(n, 0L) + 1L);
        }
        return numbers.stream().filter(n -> counts.get(n) <= 1L).collect(Collectors.toCollection(ArrayList::new));
    }
    
    

}
