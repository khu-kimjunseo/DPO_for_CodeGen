from typing import Union, List

def split_words(txt: str) -> Union[List[str], int]:
    """
    Split words in txt into list of words.
    """
    return split_words(txt, ' ')

def check(candidate):
    assert candidate('Hello world!') == ['Hello', 'world!']
    assert candidate('Hello,world!') == ['Hello', 'world!']
    assert candidate('Hello world,!') == ['Hello', 'world,!']
    assert candidate('Hello,Hello,world !') == ['Hello,Hello,world', '!']
    assert candidate('abcdef') == 3
    assert candidate('aaabb') == 2
    assert candidate('aaaBb') == 1
    assert candidate('') == 0

def test_check():
    check(split_words)

test_check()
