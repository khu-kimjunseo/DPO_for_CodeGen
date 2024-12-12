### Java version

import java.util.*;
import java.lang.reflect.*;
import org.javatuples.*;
import java.security.*;
import java.math.*;
import java.io.*;
import java.util.stream.*;
class Problem {
    public static ArrayList<Float> rescaleToUnit(ArrayList<Float> numbers) {
        float minNumber = Collections.min(numbers);
        float maxNumber = Collections.max(numbers);
        return numbers.stream().map(x -> (x - minNumber) / (maxNumber - minNumber)).collect(Collectors.toCollection(ArrayList::new));
    }
    

}


### Python version

from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    return [(x - min_number) / (max_number - min_number) for x in numbers]
