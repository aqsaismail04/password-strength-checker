# password-strength-checker
A console-based password strength checker built in C++ that evaluates password complexity using multiple security rules and character analysis.
# 🔐 Password Strength Checker (C++)

A **console-based Password Strength Checker** developed in **C++** that analyzes and evaluates the strength of a password using common security rules such as password length, character diversity, and formatting constraints.

This project is designed as a **beginner-friendly C++ application** that demonstrates fundamental programming concepts like loops, conditional statements, arrays, and input validation.

---

# 👨‍💻 Developers

* **Muhammad Nouman**
* **Aqsa Ismail**

---

# 📌 Features

* 🔎 Checks password **minimum length requirement**
* 🚫 Detects **spaces inside passwords**
* 🔤 Identifies **lowercase letters**
* 🔠 Identifies **uppercase letters**
* 🔢 Detects **numeric digits**
* ✨ Detects **special characters**
* 📊 Displays **character analysis results**
* 🛡️ Classifies password strength as:

  * **Strong**
  * **Medium**
  * **Weak**
* 🔁 Allows users to **check multiple passwords**

---

# ⚙️ Password Validation Rules

The program evaluates passwords based on the following criteria:

### 1️⃣ Minimum Length

The password must contain **at least 8 characters**.

### 2️⃣ No Spaces Allowed

Passwords **cannot contain spaces**.

### 3️⃣ Character Diversity

For stronger security, a password should contain a mix of:

* Uppercase letters *(A–Z)*
* Lowercase letters *(a–z)*
* Numbers *(0–9)*
* Special characters *(e.g., @, #, $, %, etc.)*

---

# 🧠 Password Strength Logic

| Condition                                                     | Result              |
| ------------------------------------------------------------- | ------------------- |
| Contains lowercase, uppercase, digits, and special characters | **Strong Password** |
| Contains two types of characters                              | **Medium Password** |
| Contains limited character types                              | **Weak Password**   |

---

# 🖥️ Example Output

```
=====================================================
            PASSWORD STRENGTH CHECKER
=====================================================
Developed By: MUHAMMAD NOUMAN & AQSA ISMAIL
=====================================================

Enter Your Password: MyPass@123

Password Length: 10 characters

Character Analysis
-----------------------------------------------------
Lowercase Letters  : 4
Uppercase Letters  : 1
Digits             : 3
Special Characters : 1

Password Strength : STRONG
```

---

# 📂 Project Structure

```
Password-Strength-Checker
│
├── password_strength_checker.cpp
└── README.md
```

---

# 🛠️ Technologies Used

* **C++**
* **Standard Library (iostream)**

---

# ▶️ How to Run the Program

### 1️⃣ Clone the Repository

```
git clone https://github.com/Nouman-Irfan/password-strength-checker.git
```

### 2️⃣ Compile the Program

```
g++ password_strength_checker.cpp -o checker
```

### 3️⃣ Run the Program

```
./checker
```

---

# 🎯 Learning Objectives

This project helps beginners understand:

* C++ **loops and control structures**
* **Character analysis**
* **Input validation**
* **Arrays and string handling**
* **Program flow control**

---


# 📜 License

This project is licensed under the **MIT License**.

---

# ⭐ Support

If you find this project useful, consider **starring ⭐ the repository** on GitHub.
