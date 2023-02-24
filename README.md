Resources
Read or watch:

Makefile
Installing the make utility
make-official documentation
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
OS: Ubuntu 20.04 LTS
Version of gcc: 9.3.0
Version of make: GNU Make 4.2.1
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
More Info
Files
In the following tasks, we are going to use these files. We want to compile these only.

main.c: Main C function that runs the function defined in school.c. Provided by ALX School.

Header File 📁 m.h: Header file defining the function prototype used in school.c. Provided by alx School. Tasks 📃 0. make -f 0-Makefile

0-Makefile: Makefile that creates an executable school based on school.c and main.c. Includes: Rule all that builds the executable.

make -f 1-Makefile
1-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 0-Makefile with: Variable CC that defines the compiler to be used. Variable SRC that defines the .c files to compile. The all rule only recompiles updated source files. 2. make -f 2-Makefile

2-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 1-Makefile with: Variable OBJ that defines the .o files to compile. Variable NAME that defines the name of the executable. 3. make -f 3-Makefile

3-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 2-Makefile with: Rule clean that deletes all Emacs/Vim temporary files as well as the executable. Rule oclean that deletes the object files. Rule fclean that deltes all of the temporary files, executable, and object files. Rule re that forces recompilation of all source files. Variable RM that defines the command to delete files. 4. A complete Makefile

4-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 3-Makefile with: Variable CFLAGS that defines the compiler flags -Wall -Werror -Wextra -pedantic. 5. Island Perimeter

5-island_perimeter.py: Python function that returns the perimeter of an island defined in a grid. Prototype: def island_perimeter(grid): The parameter grid is a list of a list of integers. Water is represented by 0. Land is represented by 1. Each element of the lists represents a cell square of side length 1. Grid cells are connected horizontally/verticaly (not diagonally). The grid is rectangular, with a width and height not exceeding 100. The grid is completely surrounded by water, and there is either exactly one island or nothing. The island does not contain lakes (water inside disconnected from surrounding land). 6. make -f 100-Makefile

100-Makefile: Makefile that creates an executable school based on school.c and main.c. Builds on 4-Makefile with: Does not define the variable RM. Never uses the string $(CFLAGS). Does not compile if the header m.h is missing. Works even if there are existing files of the same name as any of the Makefile rules in the current directory.
