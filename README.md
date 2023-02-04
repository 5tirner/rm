# rm
File Deletion Utility\
This is a simple C program to delete files from the command line.\
The program takes in a list of file names as command line arguments and deletes them one by one.

Usage
To use the program simply do `make` and then run the compiled executable `rm_prog` with a list of file names as command line arguments.

Requirements
This program requires the following libraries to be installed on the system:
`
stdio.h
unistd.h
stdlib.h
`

Output
The program will display the number of files that were successfully deleted and the total number of files that were requested to be deleted.
If any files were not deleted, the program will display the number of files that were not deleted and exit with a status code of 1.\
Note :\
Please use caution when running this program as it permanently deletes files and they cannot be recovered.
