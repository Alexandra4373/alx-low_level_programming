#!/usr/bin/python3
"""Printing all the possible  combinations of two digits in ascending order, The two digits must be different - 01 and 10 are considered identical.
    """
for a in range(0, 10):
    for b in range(a + 1, 10):
        if a == 8 and b == 9:
            print("{}{}".format(a, b))
        else:
            print("{}{}".format(a, b), end=", ")
