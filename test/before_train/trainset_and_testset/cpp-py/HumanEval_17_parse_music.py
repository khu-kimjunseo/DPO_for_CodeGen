from typing import List

def parse_music(music_string: str) -> List[int]:
  music_string = music_string.replace("\n", "")
  music_string = music_string.replace("\r", "")
  music_string = music_string.replace("\t", "")
  music_string = music_string.replace("\b", "")
  music_string = music_string.replace("\f", "")
  music_string = music_string.replace("\A", "")
  music_string = music_string.replace("\E", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string = music_string.replace("\S", "")
  music_string =
def check(candidate):
    assert candidate('') == []
    assert candidate('o o o o') == [4, 4, 4, 4]
    assert candidate('.| .| .| .|') == [1, 1, 1, 1]
    assert candidate('o| o| .| .| o o o o') == [2, 2, 1, 1, 4, 4, 4, 4]
    assert candidate('o| .| o| .| o o| o o|') == [2, 1, 2, 1, 4, 2, 4, 2]

def test_check():
    check(parse_music)

test_check()
