/**Jacob Ntesang
*Ntsjac002
*26 March 2017
*Tuturial1 ReadMe.txt file
*/

There are 3 source files:
- A hearder(database.h) file: Which contains the intended database functionality(method) definitions/declarations.
    It contains 5 methods to be implemented in the database.cpp file.
   
- A source(database.cpp) file: In this, these contains the student record's struct and all the methods declared in the header file mentioned above.
    This provides the actual functionality(methods implementation) to our driver.
   
- A driver(DatabaseMenu.cpp) file: The driver contains the main() method and also processes the user's options regarding what actions they want to perform.
    The user knows which options(functionality) are available to them because when it is ran the first time the Menu is printed out with all the keys
    to be entered for specific actions.
   
There is also a makefile that is easy to use:
    compilation of the files to produce an executable is done with one command: "make" compiles everything.
    Running or executing the executable: "make run" is the command to be used.
    Cleaning all the created object files and other binary files: "make clean" does the job.
   
#Notes on the database implementation:
After the driver is ran with "make run", the user can choose any option: (add student, display student data, grade student, read/write),
And after every one of those you can choose another one once you are done with your last task/option. You can add a student, then view their record and
grade them successfully in one run(running the executable). You can also add more students and do all of that in one run.
The vector that acts as a database is only alive and with students records entered by the user until the user exits and re-run the driver again,
in which case the user would lose all the previously stored records.
