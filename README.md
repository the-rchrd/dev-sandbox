# Dev — Sandbox

**Hi, I'm @the-rchrd!**  
Welcome to my C++ playground where I explore, resolve, and optimize solutions for algorithmic problems. 🚀

---

## 📚 Overview

This repository is a sandbox for experimenting with C++ algorithms, measuring their performance, and finding the most efficient solutions.  
For example, consider the problem of **Finding the Most Common Symbol in a String/Text**. Below are three approaches I implemented and tested with a large dataset of one million symbols:

| **Method**                  | **Complexity** | **Execution Time**        | **Description**                |
|-----------------------------|----------------|----------------------------|--------------------------------|
| Two Cycles Method           | O(N²)          | *Too slow, didn't finish*  | Iterative brute force approach |
| Unordered Set Method        | O(K * N)       | ~502ms                     | Uses a set of unique symbols   |
| Unordered Map Method        | O(N)           | ~125ms                     | Maps symbols to their counts   |

### **Key Takeaway**  
The optimal solution for this problem has **O(N) complexity**, as demonstrated by the Unordered Map Method. This repository is all about exploring such differences and experimenting with diverse solutions.

---

## ✨ Features

- 📈 **Performance Analysis**: Measure and compare execution times of different algorithms.
- 🧩 **Problem Solving**: Solve algorithmic challenges from platforms like **LeetCode** and **Codeforces**.
- 🔍 **Optimization**: Explore and implement efficient solutions for common problems.

---

## 🔧 Setup

### **Prerequisites**
- C++ compiler (e.g., `g++` with C++17 support)
- CMake (for build system generation)

### **How to Build**
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/dev-sandbox.git
   cd dev-sandbox
2. Build the project:
   mkdir build && cd build
   cmake ..
   make
3. Run the executable:
   ./dev_sandbox

## 🧪 Examples

### **Finding the Most Common Symbol**
#include <algorithms/string/find_most_common_symbol.hpp>

int main() {
    ds::algorithms::string::find_most_common_symbol::unordered_map_method("input.txt");
    return 0;
}

## 📂 Project Structure

.
├── src/
│   ├── algorithms/
│   │   └── string/           # String algorithms
│   ├── tasks/                # Solutions for Codeforces/LeetCode tasks
│   ├── time/                 # Utilities for performance measurement
│   └── main.cpp              # Entry point
├── tests/                    # Unit tests for algorithms
├── CMakeLists.txt            # Build system configuration
└── README.md                 # Project documentation