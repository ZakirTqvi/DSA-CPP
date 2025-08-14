# Bitwise Operators in C++

Bitwise operators perform operations on the binary representation of integers.  
They work **bit-by-bit** rather than on the whole number at once.

---

## **1. Types of Bitwise Operators**

| Operator | Name                     | Description                                                                 | Example (`a = 5`, `b = 3`) |
|----------|--------------------------|-----------------------------------------------------------------------------|----------------------------|
| `&`      | Bitwise AND               | Sets each bit to `1` if both bits are `1`.                                  | `a & b = 1` (`0101 & 0011 = 0001`) |
| `|`      | Bitwise OR                | Sets each bit to `1` if at least one bit is `1`.                            | `a | b = 7` (`0101 | 0011 = 0111`) |
| `^`      | Bitwise XOR (exclusive OR)| Sets each bit to `1` if only one bit is `1`.                                | `a ^ b = 6` (`0101 ^ 0011 = 0110`) |
| `~`      | Bitwise NOT (One's Complement) | Inverts all the bits (changes `0` to `1` and `1` to `0`).                  | `~a = -6` (in 2's complement) |
| `<<`     | Left Shift                | Shifts bits to the left, adding `0` on the right. Each shift multiplies by 2.| `a << 1 = 10` (`0101` → `1010`) |
| `>>`     | Right Shift               | Shifts bits to the right, discarding bits on the right. Each shift divides by 2.| `a >> 1 = 2` (`0101` → `0010`) |

---

## **2. Binary Representation Refresher**
- **Decimal to Binary Example:**  
  `5 (decimal)` → `0101 (binary)`  
  `3 (decimal)` → `0011 (binary)`

---

## **3. Common Uses of Bitwise Operators**
- Setting, clearing, and toggling specific bits.
- Checking if a number is **even or odd** (`n & 1`).
- Optimizing multiplication/division by powers of 2 using shift operators.
- Working with low-level hardware or graphics programming.
- Implementing bit masks.

---

## **4. Example Code**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "a & b = " << (a & b) << endl;  // AND
    cout << "a | b = " << (a | b) << endl;  // OR
    cout << "a ^ b = " << (a ^ b) << endl;  // XOR
    cout << "~a = " << (~a) << endl;        // NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    return 0;
}
````

---

## **5. Quick Tips**

* Always use unsigned integers for predictable shift operations.
* Remember `~` (NOT) in C++ uses **two's complement** representation for negative numbers.
* `(x << n)` is equivalent to `x * (2^n)`.
* `(x >> n)` is equivalent to `x / (2^n)` for positive integers.

---

**📌 Summary:**
Bitwise operators give fine control over binary data, making them essential for performance-critical applications, low-level programming, and competitive coding tricks.

```
