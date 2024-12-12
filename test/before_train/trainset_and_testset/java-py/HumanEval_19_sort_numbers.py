def sort_numbers(numbers: str) -> str:
    return Problem.sortNumbers(numbers)

def check(candidate):
    assert candidate('') == ''
    assert candidate('three') == 'three'
    assert candidate('three five nine') == 'three five nine'
    assert candidate('five zero four seven nine eight') == 'zero four five seven eight nine'
    assert candidate('six five four three two one zero') == 'zero one two three four five six'

def test_check():
    check(sort_numbers)

test_check()
