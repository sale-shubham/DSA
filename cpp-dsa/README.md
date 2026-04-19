# C++ DSA Practice

## Setup & Compilation

```bash
# Compile
make

# Run
make run

# Clean
make clean
```

## Pattern Problem #1: Diamond Pattern

### Problem Statement
Print a diamond pattern with `n` rows.

**Input:** An integer `n` (number of rows)

**Example:** For n=5:
```
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
```

### Requirements:
- First half expands (rows 1 to n)
- Second half contracts (rows n-1 to 1)
- Each row has leading spaces followed by stars separated by spaces
- The middle row (row n) has maximum stars

### Hints:
- Use nested loops
- Calculate spaces: `n - i` for row `i`
- Calculate stars: `i` for row `i` in top half
- Mirror the pattern for bottom half

### Sample Input/Output:
```
Input: 5
Output:
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
```

## How to Test
1. Modify `main.cpp` with your solution
2. Run `make run` to compile and execute
3. Enter the value of n when prompted

Good luck! 🚀
