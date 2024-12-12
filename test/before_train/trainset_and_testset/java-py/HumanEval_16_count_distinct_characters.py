def count_distinct_characters(string: str) -> int:
    return string.toLowerCase().chars().distinct().count();

def check(candidate):
    assert candidate('') == 0
    assert candidate('abcde') == 5
    assert candidate('abcdecadeCADE') == 5
    assert candidate('aaaaAAAAaaaa') == 1
    assert candidate('Jerry jERRY JeRRRY') == 5

def test_check():
    check(count_distinct_characters)

test_check()
