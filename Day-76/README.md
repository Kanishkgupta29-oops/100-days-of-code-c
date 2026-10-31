# Day 76 — Problem 126

**Section**: File Handling

## 📝 Problem Statement
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

## 🧪 Test Cases
### Test Case 1
- **Input**: `Filename: sample.txt (File Exists: Yes)`
- **Expected Output**: `File opened successfully.
(Displays file content)`
- **Explanation**: The program opens the existing file and prints its content using fgets().

### Test Case 2
- **Input**: `Filename: nofile.txt (File Exists: No)`
- **Expected Output**: `Error: File does not exist!`
- **Explanation**: Since fopen() returns NULL, an error message is displayed instead of reading.

## 💻 Implementation
- Solution code: [problem_126.c](problem_126.c)
