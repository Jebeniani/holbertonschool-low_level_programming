C - Dynamic libraries

#What is a dynamic library ?
```
A dynamic library is a programming concept in which shared libraries with special functionalities are launched only during program execution, which minimizes overall program size and facilitates improved application performance for reduced memory consumption.
```
#how does it work ?
```
Simply put, A shared library/ Dynamic Library is a library that is loaded dynamically at runtime for each application that requires it. Dynamic Linking doesn't require the code to be copied, it is done by just placing name of the library in the binary file.
```
#how to create one ?
```
To create a dynamic library in Linux, simply type the following command: gcc *. c -c -fPIC and hit return. This command essentially generates one object file .o for each source file .
```
#how to use it ?
```
Dynamic or shared libraries occur as separate files outside of the executable files. Thus, it only needs one copy of the library's files at runtime. At compile time, static libraries stay locked into a program. It contains the file's programs holding a copy of the library's files at compile time.
```
