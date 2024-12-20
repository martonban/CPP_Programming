
If you want to compile an application you need the followings.
- Compiler
- Linker
- Archiver

## Compiler
The Compiler takes the source files and create object files. These files can be a lot of types, libe .o or binary files

## Archiver
It takes the object files and createa static libary or a collection of object files grouped for convenient use.

## Linker
The linker will collect all of those objects files wich the compiler did, the libaries wich we linked and put them together. End of the project we will get a dynamic or au executeable.


After tha compiler finished. We can get following:
- executable 
- dynamic libary
- static libary
## Executable
Executable are a program you can run on an OS.

## Static Libaries
We simply copile the code into the project. We called this process as "static linking". It's compile time wich means everytime you make a change on the libary you havet to compile the whole project again. Static libaries extension can be .lib or .a. If you use this the application size will increase significantly.

## Dynamic Libaries
These libaries are also called shared libaries. In this case we don't need to compile the libary into the main project every time when we have a change in the libary.  We need to link it once and after we make any changes in the libary we need to compile only the libary nothing else. Of course if you cahnge the project you have to copile it agin but you don't need to compile the libary. That's why it is dynamic and it's happaning in the run time.  Dynamic libaries extension can be .dll, .dylib or .so. The biggest problem wit this is really simple. If somehow the libary is missig we cannot use the application wich we developed. 


### Sources:
- [C++ Cookbook](https://www.oreilly.com/library/view/c-cookbook/0596007612/index.html)
- [C++ Dynamic Linking vs Static Linking - YT](https://www.youtube.com/watch?v=Jzh4ZULXsvo)
- [Static vs. Shared Libraries - YT](https://youtu.be/-vp9cFQCQCo?si=mUeS0q8PG625wit6)
