import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static boolean checkDictCase(HashMap<String,String> dict) {
        if (dict.empty()) {
            return false;
        }
        std::string state = "start";
        for (auto const& [key, val] : dict) {
            if (!std::all_of(key.begin(), key.end(), ::isalpha)) {
                state = "mixed";
                break;
            }
            if (state == "start") {
                if (std::all_of(key.begin(), key.end(), ::isupper)) {
                    state = "upper";
                } else if (std::all_of(key.begin(), key.end(), ::islower)) {
                    state = "lower";
                } else {
                    break;
                }
            } else if ((state == "upper" && !std::all_of(key.begin(), key.end(), ::isupper)) || (state == "lower" && !std::all_of(key.begin(), key.end(), ::islower))) {
                state = "mixed";
                break;
            }
        }
        return state == "upper" || state == "lower";
    }
    public static void main(String[] args) {
    assert(checkDictCase((new HashMap<String,String>(Map.of("p", "pineapple", "b", "banana")))) == (true));
    assert(checkDictCase((new HashMap<String,String>(Map.of("p", "pineapple", "A", "banana", "B", "banana")))) == (false));
    assert(checkDictCase((new HashMap<String,String>(Map.of("p", "pineapple", "5", "banana", "a", "apple")))) == (false));
    assert(checkDictCase((new HashMap<String,String>(Map.of("Name", "John", "Age", "36", "City", "Houston")))) == (false));
    assert(checkDictCase((new HashMap<String,String>(Map.of("STATE", "NC", "ZIP", "12345")))) == (true));
    assert(checkDictCase((new HashMap<String,String>(Map.of("fruit", "Orange", "taste", "Sweet")))) == (true));
    assert(checkDictCase((new HashMap<String,String>())) == (false));
    }

}
