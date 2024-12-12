from typing import List

def numerical_letter_grade(grades: List[float]) -> List[str]:
    letterGrade = []
    for grade in grades:
        if grade == 4.0f:
            letterGrade.append("A+")
        elif grade == 3.7f:
            letterGrade.append("A")
        elif grade == 3.3f:
            letterGrade.append("A-")
        elif grade == 3.0f:
            letterGrade.append("B+")
        elif grade == 2.7f:
            letterGrade.append("B")
        elif grade == 2.3f:
            letterGrade.append("B-")
        elif grade == 2.0f:
            letterGrade.append("C+")
        elif grade == 1.7f:
            letterGrade.append("C")
        elif grade == 1.3f:
            letterGrade.append("C-")
        elif grade == 1.0f:
            letterGrade.append("D+")
        elif grade == 0.7f:
            letterGrade.append("D")
        elif grade == 0.0f:
            letterGrade.append("D-")
        else:
            letterGrade.append("E")
    return letterGrade

def check(candidate):
    assert candidate([4.0, 3, 1.7, 2, 3.5]) == ['A+', 'B', 'C-', 'C', 'A-']
    assert candidate([1.2]) == ['D+']
    assert candidate([0.5]) == ['D-']
    assert candidate([0.0]) == ['E']
    assert candidate([1.0, 0.3, 1.5, 2.8, 3.3]) == ['D', 'D-', 'C-', 'B', 'B+']
    assert candidate([0.0, 0.7]) == ['E', 'D-']

def test_check():
    check(numerical_letter_grade)

test_check()
