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
    return Problem.rescaleToUnit(numbers)

### Java version

import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.LongStream;
import java.util.stream.IntStream;
import java.util.stream.Long