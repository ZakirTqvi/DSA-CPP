
# 📅 Day 2 - Functions in C++

### ✅ Topics Covered:
- What is a Function?
- Arguments and Parameters
- Function in memory
- Pass by value

---

## 📖 Notes

### 📌 **What is a Function?**
A **function** in C++ is a reusable block of code designed to perform a particular task. It improves:
- **Code reusability**
- **Readability**
- **Debugging efficiency**

---

### 📝 **Function Syntax**
```cpp
return_type function_name(parameters) {
    // function body
}
````

**Example:**

```cpp
#include<iostream>
using namespace std;

void greet() {
    cout << "Hello World!" << endl;
}

int main() {
    greet();
    return 0;
}
```

---

### 📌 **Arguments vs Parameters**

| Term          | Explanation                                               |
| ------------- | --------------------------------------------------------- |
| **Parameter** | Variable defined in the function definition.              |
| **Argument**  | Actual value passed to the function during function call. |

**Example:**

```cpp
void greet(string name) {  // parameter
    cout << "Hello, " << name << endl;
}

int main() {
    greet("Hussain");  // argument
}
```

---

### ✅ **Why Functions?**

* 🔁 Avoids code repetition
* 👀 Improves code readability
* 🛠️ Easier to debug and maintain

---

### 📌 **Types of Functions**

* **User-defined Functions**
* **Library Functions** (like `cout`, `cin`, `sqrt()`)

---

Here's a clean, **GitHub README.md**-ready version of notes just for **Function in Memory** and **Pass by Value**:

```markdown
## 📌 Function in Memory (C++)

- When a function is **declared and defined**, it occupies a **specific memory location** in the program's **code segment**.
- When a function is **called**, the **control of execution jumps** to the memory address where the function code is stored.
- **Function Call Stack:**
    - When a function is called, a **stack frame** is created in the **stack segment** of memory.
    - This stack frame holds:
        - Local variables
        - Function parameters
        - Return address (where to continue after function execution)
- After function execution, the **stack frame is destroyed**, and control returns to the calling function.

### 📌 Visual Summary:
```

\[Main Function] → \[Calls Function] → \[Function executes in stack memory] → \[Returns back]

````

---

## 📌 Pass by Value (C++)

- In **Pass by Value**, a **copy of the actual argument** is passed to the function.
- Any changes made inside the function **do NOT affect** the original variable.
- Default behavior in C++ is **pass by value**.

### ✅ Example:
```cpp
#include<iostream>
using namespace std;

void increment(int num) {
    num = num + 1;
    cout << "Inside function: " << num << endl;
}

int main() {
    int a = 5;
    increment(a);
    cout << "In main function: " << a << endl;
}
````

### ✅ Output:

```
Inside function: 6
In main function: 5
```

### ✅ Key Points:

* 🔑 Function receives a **copy** of the variable.
* 🔑 Original value in **main() remains unchanged**.
* 🔑 Useful when you don’t want to modify the original data.

---

### 🌟 Summary:

✔️ Functions use **stack memory** during execution.
✔️ By default, C++ uses **pass by value**, meaning changes inside a function do not affect the original data.






