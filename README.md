# Gym Fitness Tracker (C Project)

## Introduction
I made a **Gym Fitness Tracker** program where the user can enter gym member details, and the program calculates BMI and then gives a basic workout suggestion.

I used C concepts like **structures, functions, file handling, loops, and conditions**.  
The project is easy to understand and runs in the terminal.

---

## What the Program Does
- Takes member details (name, age, weight, height)  
- Calculates BMI using the formula  
- Shows the fitness category  
- Suggests a basic gym routine  
- Saves the member data into a file  
- Also shows previously saved members  

This is a beginner-level project and made without any advanced coding.

---

## Project Folder Structure
Gym-Fitness-Tracker/

1 . src  -   main.c and gym.c files
2 . include - gym.h header file
3 . docs - project report, algorithm, flowchart
4 assets - optional 

5 . README.md  this file
6 . sample_input.txt

## How to Compile
I used gcc compiler.  
Run this command in the terminal : gcc src/main.c src/gym.c -Iinclude -o gym


## How to Run
After compiling, run : ./gym


## Sample Input Used
(Content inside sample_input.txt)

1
Rohan
21
58
1.72
2
3


## Files Used
- **main.c** → main menu + input  
- **gym.c** → BMI function, fitness level, workout suggestions, file handling  
- **gym.h** → structure and function declarations  
- **ProjectReport.pdf** → full report  

---

## Concepts Used in This Project
- Structure  
- Functions  
- File Handling  
- Conditional statements  
- Loops  
- Header file usage  


---

## Conclusion
This project helped me understand how to divide programs into multiple files and how to save data permanently using files.  
I also understood how BMI works and how to give simple gym suggestions.


