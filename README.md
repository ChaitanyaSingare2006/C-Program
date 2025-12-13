# C-Program
# TASK-1.[Student_Mark_Analyzer]

# 1. Program Title
Student Marks Management and Report Generator

# 2. Purpose of the Program
•	To input student names and marks.
•	To store the data for later display and analysis.
•	To print all stored student information.
•	To calculate highest, lowest, and average marks.

# 3. What the Program Does
•	Reads the number of students from the user.
•	Collects each student's name and marks.
•	Stores these values in arrays.
•	Displays all student records.
•	Computes summary statistics such as highest, lowest, and average marks.

# 4. Inputs Taken by the Program
•	Number of students (integer n)
•	For each student:
o	A name (string)
o	Marks (integer)
# 5. Outputs Given by the Program
•	Prints each student's name and marks.
•	Prints the highest marks.
•	Prints the lowest marks.
•	Prints the average marks.
# 6. Global Variables Used
•	int n: Holds the count of students.
•	int marks[100]: Stores marks for each student.
•	char name[100][50]: Stores names for each student.
# 7. Logic Explanation
•	The value of n controls how many times loops run.
•	Arrays name and marks store data for reuse across functions.
•	inputdata() fills these arrays with user input.
•	displaydata() reads and prints the stored data.
•	showreport() processes marks to determine highest, lowest, and average.
•	Program follows a simple sequence: input → display → report.
# 8. Use of Functions in the Code

# Function: inputdata()
•	Purpose: Collects student names and marks.
•	How it works:
o	Loops from 0 to n-1.
o	Reads each student's name and marks.
o	Stores them in the global arrays.
•	Reason for use: Keeps input logic separate from output and calculations.

#Function: displaydata()
•	Purpose: Prints all stored student names and marks.
•	How it works:
o	Loops through stored data.
o	Reads values from global arrays and prints them.
•	Reason for use: Organizes printing logic clearly.

# Function: showreport()
•	Purpose: Calculates highest, lowest, and average marks.
•	How it works:
o	Initializes highest and lowest with the first mark.
o	Loops through all marks to update highest, lowest, and sum.
o	Calculates average by dividing sum by n.
o	Prints the findings.
•	Reason for use: Makes calculation code modular and readable.

# 9. Program Flow
•	User enters the number of students.
•	inputdata() collects all names and marks.
•	displaydata() prints the stored information.
•	showreport() generates the summary of marks.
•	Program ends after printing the report.

