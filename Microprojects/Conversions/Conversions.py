# =================================================================
#
#  File: Conversions.py
#  Author: Pablo Javier Arreola Velasco
#  Date: 23/Sept/22
#  Description: This program converts values in a list to different systems 
#  (binary, hexadecimal, decimal)
# =================================================================

from typing import List

# We set the list of values to be converted

dec1 = [450, 27, 6788]
dec2 = [333, 48921, 1892]
bin1 = ["11100010", "1010111", "110010100011101"]
bin2 = ["0100001111", "1101001", "1111111111111111"]
hex1 = ["1EF", "756AA", "24FC7"]
hex2 = ["75B4", "FC66", "87001B"]

"""Converts elements of an int list of decimal values to an int list of binary values"""
def decimal2Binary(nums: List[int]) -> List[str]:
    # We set the variables wich hold the position and the final result
    res = []
    i = 0
    for element in nums:
        # We append an empty list wich will hold the convertion of our current element
        res.append([])
        while element > 0:
            # We append the spare values of the base division until the element is 0
            res[i].insert(0, element % 2)
            element = element // 2
        i += 1
    return res


"""Converts an int list of decimal values to an string list of hexadecimal values"""
def decimal2Hexadecimal(nums: List[int]) -> List[str]:
    # We set the variables that will hold the result and position
    # We also set the aditional symbols of the hexadecimal system
    res = []
    bas = ["A", "B", "C", "D", "E", "F"]
    i = 0
    for element in nums:
        res.append([])
        # Empty list that will hold the convertion from the current value
        while element > 0:
            # If the element is less than 10 then both systems are identical
            # so we just append the spare values
            if element % 16 < 10:
                res[i].insert(0, str(element % 16))
            # If the element is more or equal to 10 then different symbols will
            # be used, so we get whatever value is correspondent
            else:
                res[i].insert(0, bas[(element % 16) - 10])
            element = element // 16
        i += 1
    return res


"""Converts an string list of binary values to an int list of decimal values"""
def binary2Decimal(nums: List[str]) -> List[int]:
    res = []
    for element in nums:
        # We set the position and sum values
        sum, i = 0, len(element) - 1
        for j in range(len(element)):
            # Whatever the position is will power 2 and multiply it to the current element
            sum = sum + (int(element[j]) * (2**i))
            i -= 1
        # We append the found value and then continue with the next convertion
        res.append(sum)
    return res


"""Converts an string list of hexadecimal values to an int list of decimal values"""
def hexadecimal2Decimal(nums: List[str]) -> List[int]:
    # We set the answer value and the equivalence from hexadecimal native symbols
    # to decimal values
    res = []
    bas = {"A": 10, "B": 11, "C": 12, "D": 13, "E": 14, "F": 15}
    for element in nums:
        # We set the position and sum values
        sum, i = 0, len(element) - 1
        for j in range(len(element)):
            # We plainly sum the power of 16 to the position plus the element itself
            # if the element has no hexadecimal symbols
            try:
                sum = sum + (int(element[j]) * (16**i))
            # In case the element is an hexadecimal value we use the equivalence
            # dictionary to convert it
            except ValueError:
                sum = sum + ((bas[element[j]]) * (16**i))
            i -= 1
        # We append the found value and then continue with the next convertion
        res.append(sum)
    return res


"""Converts an string list of binary values to an string list of hexadecimal values"""
def binary2Hexadecimal(nums: List[str]) -> List[str]:
    # Result variable
    res = []
    # We convert from binary to decimal
    res = binary2Decimal(nums)
    # The result is then converted from decimal to hexadecimal and then returned
    res = decimal2Hexadecimal(res)
    return res


"""Converts an string list of hexadecimal values to an string list of binary values"""
def hexadecimal2Binary(nums: List[str]) -> List[str]:
    # Result variable
    res = []
    # We convert from hexadecimal to decimal
    res = hexadecimal2Decimal(nums)
    # The result is then converted from decimal to binary and then returned
    res = decimal2Binary(res)
    return res


"""Prints list as plain strings for readability"""
def printListAsStr(nums: List) -> None:
    # In case the values are string
    try:
        for i in nums:
            s = ""
            for j in i:
                s += str(j)
            print(s)
    # In case the values are an int
    except TypeError:
        for i in nums:
            print(i)


# We make the convertions
print("\n")
print("1) From decimal to binary")
printListAsStr(decimal2Binary(dec1))
print("\n 2) From binary to decimal")
printListAsStr(binary2Decimal(bin1))
print("\n 3) From decimal to hexadecimal")
printListAsStr(decimal2Hexadecimal(dec2))
print("\n 4) From hexadecimal to decimal")
printListAsStr(hexadecimal2Decimal(hex1))
print("\n 5) From binary to hexadecimal")
printListAsStr(binary2Hexadecimal(bin2))
print("\n 6) From hexadecimal to binary")
printListAsStr(hexadecimal2Binary(hex2))
print("\n")
