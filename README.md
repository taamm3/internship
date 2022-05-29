# internship

Clone the repository and move into the directory.
Write "make" in your terminal to compile the code.
In case my Makefile doesn't work on your OS write:<br>
> c++ *.cpp -o cache<br>

instead.<br>
Run the code by typing "./cache" in your terminal.
Input one of the following test cases to see how the code works.

Test cases<br>
1. the case of the subject<br>
INPUT<br>
3 1<br>
set 1 2<br>
get 1<br>
get 2<br>
OUTPUT<br>
2<br>
-1<br>

2. a case to test what happens if a key is set more than once<br>
INPUT<br>
4 3<br>
set 3 5<br>
get 3<br>
set 3 8<br>
get 3<br>
OUTPUT<br>
5<br>
8<br>

3. a case to test what happens if the capacity is reached<br>
INPUT<br>
6 2<br>
set 1 2<br>
set 3 5<br>
get 1<br>
set 7 3<br>
get 7<br>
get 3<br>
OUTPUT<br>
2<br>
3<br>
-1<br>
