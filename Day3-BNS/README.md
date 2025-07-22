Here's a clean and professional `README.md` file you can use for GitHub:


# 📚 Binary Number System - Day 3

This repository contains study notes on the **Binary Number System**, as part of my daily learning practice.

---

## ✅ Topics Covered

### 1. What is Number System?

A **Number System** is a way to represent numbers using digits or symbols in a consistent manner. The most commonly used number systems include:
- **Decimal Number System (Base-10)**
- **Binary Number System (Base-2)**
- **Octal Number System (Base-8)**
- **Hexadecimal Number System (Base-16)**

---

### 2. What is Decimal Number System?

The **Decimal Number System** is a **base-10** system that uses **10 digits (0 to 9)**. It is the standard number system used in everyday life.

Each position in a decimal number represents a power of 10.

**Example**:  
`253 = (2 × 100) + (5 × 10) + (3 × 1)`

---

### 3. What is Binary Number System?

The **Binary Number System** is a **base-2** system that uses only **two digits (0 and 1)**. It is the fundamental language of computers and digital electronics.

Each position in a binary number represents a power of 2.

**Example**:  
`1011 = (1 × 8) + (0 × 4) + (1 × 2) + (1 × 1) = 11 (Decimal)`

---

## 📌 Summary Table

| Number System | Base | Digits Used     | Example    |
|----------------|------|-----------------|------------|
| Decimal        | 10   | 0,1,2,3,4,5,6,7,8,9 | 125 |
| Binary         | 2    | 0,1             | 1011       |

---

## ✅ 2's Complement

**2's Complement** is a method to represent **negative numbers** in the binary number system. It simplifies binary arithmetic like addition and subtraction.

---

### ✅ Why Use 2's Complement?
- Efficient way to represent both **positive** and **negative numbers**.
- Simplifies **subtraction** using **addition logic**.
- **Single representation of zero** (unlike sign-magnitude where there are `+0` and `-0`).

---

### ✅ How to Find 2's Complement:
1. Write the **binary representation** of the number (ignore the sign).
2. Find the **1's complement** (invert all bits: `0` to `1` and `1` to `0`).
3. **Add 1** to the result of 1's complement.

---

### ✅ Example: Find 2's Complement of -5 (8-bit)

Step 1: Binary of `5` = `00000101`  
Step 2: 1's Complement = `11111010`  
Step 3: Add 1 → `11111010 + 1 = 11111011`  

✅ So, **-5 = 11111011 (2's complement in 8-bit)**

---

## 🚀 Purpose of This Repository

This repository is for educational purposes, to build a strong foundation in **Number Systems**, focusing on **Binary Number System**.

---




