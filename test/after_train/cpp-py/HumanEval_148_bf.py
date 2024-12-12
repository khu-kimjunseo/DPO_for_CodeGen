from typing import Tuple

def bf(planet1: str, planet2: str) -> Tuple[str, ...]:
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
def check(candidate):
    assert candidate('Jupiter', 'Neptune') == ('Saturn', 'Uranus')
    assert candidate('Earth', 'Mercury') == ('Venus',)
    assert candidate('Mercury', 'Uranus') == ('Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn')
    assert candidate('Neptune', 'Venus') == ('Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus')
    assert candidate('Earth', 'Earth') == ()
    assert candidate('Mars', 'Earth') == ()
    assert candidate('Jupiter', 'Makemake') == ()

def test_check():
    check(bf)

test_check()
