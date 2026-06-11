# 🔐 C++ Login System

A simple Login and Registration System built using **C++**, **Object-Oriented Programming (OOP)**, and **File Handling**. This project allows users to create an account, log in with their credentials, and recover their password using their username and email.

## 📌 Features

* User Registration (Sign Up)
* User Login Authentication
* Forgot Password Functionality
* Data Storage using Text Files
* Object-Oriented Programming Concepts
* File Handling with `fstream`

## 🛠 Technologies Used

* C++
* OOP (Classes and Objects)
* File Handling (`fstream`)
* String Manipulation

## 📂 Project Structure

```text
Login-System/
│
├── main.cpp
├── loginData.txt
└── README.md
```

## 🚀 How It Works

### 1. Sign Up

Users can create a new account by providing:

* Username
* Email
* Password

The data is stored in a text file (`loginData.txt`) in the following format:

```text
username*email*password
```

Example:

```text
ansh*ansh@gmail.com*12345
rahul*rahul@gmail.com*98765
```

### 2. Login

Users enter:

* Username
* Password

The program reads the stored data from the file and verifies the credentials.

### 3. Forgot Password

Users enter:

* Username
* Email

If both match the stored record, the program displays the associated password.

## 📖 Concepts Implemented

* Classes and Objects
* Member Functions
* File Reading and Writing
* Data Storage using Text Files
* Conditional Statements
* Switch Case Menu System
* String Handling

## ▶️ How to Run

### Using g++

```bash
g++ main.cpp -o login
./login
```

### Using Visual Studio Code

1. Open the project folder.
2. Open Terminal.
3. Compile:

```bash
g++ main.cpp -o login
```

4. Run:

```bash
./login
```

For Windows:

```bash
login.exe
```

## ⚠️ Limitations

* Passwords are stored in plain text.
* No encryption or hashing is used.
* Data validation is minimal.
* Single-user console interface.

## 👨‍💻 Author

**Anshuman Mehta**

A beginner C++ project demonstrating the use of Object-Oriented Programming and File Handling to build a basic authentication system.
