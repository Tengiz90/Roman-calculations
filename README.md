# Roman calculations - a problem from SPOJ

Write a program that calculates the sum, difference, multiplication, and division of two Roman numerals.

## Input

There are at most $10000$ test cases in the input in separate lines. Each test case is of the form:

$$a \text{ op } b$$

where $a$ and $b$ are Roman numbers in the range $[1, 3999]$, and $\text{op}$ is one of the mathematical operations: `+`, `-`, `*`, or `/`. There is whitespace between the operators and the numbers.

## Output

Calculate the result of the operation given in the input, which should be written as a Roman numeral. If the result is non-positive ($x \le 0$) or greater than $3999$, write `-` as the answer. Each calculated result should be printed on a separate line.

## Example

### Input

```
MMCC + MMC
MMXX - MMMII
CX * III
CDX / LI
```

### Output

```
-
-
CCCXXX
VIII
```
