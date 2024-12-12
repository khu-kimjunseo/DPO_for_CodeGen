from typing import List

def count_up_to(n: int) -> List[int]:
    primes = count_up_to(n)
    return [primes[i] for i in range(len(primes))]

def check(candidate):
    assert candidate(5) == [2, 3]
    assert candidate(6) == [2, 3, 5]
    assert candidate(7) == [2, 3, 5]
    assert candidate(10) == [2, 3, 5, 7]
    assert candidate(0) == []
    assert candidate(22) == [2, 3, 5, 7, 11, 13, 17, 19]
    assert candidate(1) == []
    assert candidate(18) == [2, 3, 5, 7, 11, 13, 17]
    assert candidate(47) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43]
    assert candidate(101) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]

def test_check():
    check(count_up_to)

test_check()
