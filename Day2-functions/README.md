
# 📅 Day 2 - Functions in C++

### ✅ Topics Covered:
- What is a Function?
- Arguments and Parameters

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



