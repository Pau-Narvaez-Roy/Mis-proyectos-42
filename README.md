# My 42 Projects

Welcome to my 42 school projects repository! This is a collection of my work from the 42 curriculum, organized by program and milestone.

## 📑 Table of Contents

### Main Projects

| Project | Description | Status |
|---------|-------------|--------|
| **C-piscine-reloaded** | Reloaded version of the C piscine - foundational C programming exercises and challenges | Submodule |
| **Piscina** | Initial piscina (swimming pool) - introductory programming exercises | Submodule |
| **Common-core** | The main 42 curriculum path with multiple milestones | In Progress |

---

## 📂 Project Structure

### 1. **C-piscine-reloaded**
A refresher course covering fundamental C programming concepts. This submodule contains exercises that reinforce:
- Basic C syntax and data types
- Control structures (loops, conditionals)
- Functions and memory management
- File I/O operations
- Practical problem-solving exercises

**Repository:** `Pau-Narvaez-Roy/C-piscine-reloaded`

---

### 2. **Piscina**
The introductory program at 42 school that serves as a foundation for all students. Covers:
- Programming fundamentals
- Problem-solving methodologies
- Collaborative coding practices
- Introduction to the 42 network community

**Repository:** `Pau-Narvaez-Roy/Piscina`

---

### 3. **Common-core**
The main curriculum path of 42 school, organized by milestones and projects.

#### **Milestone 0**
The first milestone of the common core curriculum.

- **Libft** - A custom C library implementation
  - Implements standard C library functions
  - Foundation for all subsequent projects
  - Contains utilities for string manipulation, memory management, and linked lists
  - **Repository:** `Pau-Narvaez-Roy/Libft`

---

#### **Milestone 1**
The second milestone of the common core curriculum, building on Libft foundations.

- **ft_printf** - Custom printf implementation
  - Recreates the functionality of the standard printf function
  - Handles variable arguments and format specifiers
  - Demonstrates advanced string formatting and memory management
  - **Repository:** `Pau-Narvaez-Roy/ft_printf`

- **get_next_line** - Read file line by line
  - Reads and returns the next line from a file descriptor
  - Handles multiple file descriptors simultaneously
  - Implements efficient buffering mechanisms
  - **Repository:** `Pau-Narvaez-Roy/get_next_line`

- **push_swap** - Sorting algorithm project
  - Sorts a stack of integers using two stacks and a limited set of operations
  - Optimizes for minimal number of moves
  - Explores algorithmic problem-solving and optimization techniques
  - **Repository:** `Pau-Narvaez-Roy/push_swap`

---

## 🛠️ Technologies Used

This repository primarily features projects written in:
- **C** - Core language for most projects
- **Makefile** - Build automation

---

## 📝 Notes

This repository uses Git submodules to manage multiple projects. To clone this repository with all submodules, use:

```bash
git clone --recurse-submodules git@github.com:Pau-Narvaez-Roy/Mis-proyectos-42.git
```

Or if you've already cloned it, initialize submodules with:

```bash
git submodule update --init --recursive
```

---

## 👤 Author

**Pau Narváez Roy**

42 Student | [GitHub Profile](https://github.com/Pau-Narvaez-Roy)

---

## 📜 License

All projects in this repository are part of the 42 school curriculum.

---

## 🚀 Getting Started

1. Clone the repository with submodules
2. Navigate to the specific project directory
3. Follow the instructions in each project's individual README (if available)
4. Use `make` to build projects that include Makefiles

---

**Last Updated:** July 9, 2026
