from typing import List

def words_string(s: str) -> List[str]:
    return Problem.wordsString(s)

def check(candidate):
    assert candidate('Hi, my name is John') == ['Hi', 'my', 'name', 'is', 'John']
    assert candidate('One, two, three, four, five, six') == ['One', 'two', 'three', 'four', 'five', 'six']
    assert candidate('Hi, my name') == ['Hi', 'my', 'name']
    assert candidate('One,, two, three, four, five, six,') == ['One', 'two', 'three', 'four', 'five', 'six']
    assert candidate('') == []
    assert candidate('ahmed     , gamal') == ['ahmed', 'gamal']

def test_check():
    check(words_string)

test_check()
