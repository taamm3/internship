# internship

Clone the repository and move into the directory.
Write "make" in your terminal to compile the code.
In case my Makefile doesn't work on your OS write "c++ shell find "." -name "*.cpp" -o cache" instead.
Run the code by typing "./cache" in your terminal.
Input one of the following test cases to see how the code works.

Test cases
1. the case of the subject
INPUT
3 1
set 1 2
get 1
get 2
OUTPUT
2
-1
2. a case to test what happens if a key is set more than once
INPUT
4 3
set 3 5
get 3
set 3 8
get 3
OUTPUT
5
8
3. a case to test what happens if the capacity is reached
INPUT
6 2
set 1 2
set 3 5
get 1
set 7 3
get 7
get 3
OUTPUT
2
3
-1
