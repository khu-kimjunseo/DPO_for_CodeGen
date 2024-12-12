import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static String sortNumbers(String numbers) {
        Map<String, Integer> valueMap = new HashMap<String, Integer>() {{
            put("zero", 0);
            put("one", 1);
            put("two", 2);
            put("three", 3);
            put("four", 4);
            put("five", 5);
            put("six", 6);
            put("seven", 7);
            put("eight", 8);
            put("nine", 9);
        }};
        return String.join(" ", Arrays.stream(numbers.split(" ")).filter(x -> !x.isEmpty()).sorted((x, y) -> valueMap.get(x) - valueMap.get(y)).toArray(String[]::new));
    }
    

}
