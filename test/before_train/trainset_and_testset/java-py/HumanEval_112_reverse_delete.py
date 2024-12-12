from typing import Tuple

def reverse_delete(s: str, c: str) -> Tuple[str, bool]:
    s = s.chars().filter(ch -> c.indexOf(ch) == -1).mapToObj(Character::toString).collect(Collectors.joining());
    return Pair.with(s, new StringBuilder(s).reverse().toString().equals(s));

def check(candidate):
    assert candidate('abcde', 'ae') == ('bcd', False)
    assert candidate('abcdef', 'b') == ('acdef', False)
    assert candidate('abcdedcba', 'ab') == ('cdedc', True)
    assert candidate('dwik', 'w') == ('dik', False)
    assert candidate('a', 'a') == ('', True)
    assert candidate('abcdedcba', '') == ('abcdedcba', True)
    assert candidate('abcdedcba', 'v') == ('abcdedcba', True)
    assert candidate('vabba', 'v') == ('abba', True)
    assert candidate('mamma', 'mia') == ('', True)

def test_check():
    check(reverse_delete)

test_check()
