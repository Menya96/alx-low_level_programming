#!bin/bash

#create a variabe to stoe the name of the library
LIB_NAME="liball.a"

#create a variabe to store the names of the .c files
C_FILES=$(ls *.c)

#compile the .c files into .o
gcc -c $C_FILES

#create the name of the static lib from the .o files.
ar -rcs $LIB_NAME *.o

# rremove the .o files
rm *.o

#display a message to confirm the creation of the lib
echo "Static library $LIB_NAME created succesfully."

