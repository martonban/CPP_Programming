#include <iostream>
#include <string>

int main() {
    // C like string
    const char* name = "Hello";
    std::cout << name << std::endl;

    // Create own string.
    // It's not going to be good becasue of the null termination character is missing
    // But the VS compiler finished this string with a null termination character based on the bebugger
    char name2[6] = { 'H', 'e', 'l', 'l', 'o', };
    std::cout << name2 << std::endl;

    // This is how it should work
    char name3[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << name3 << std::endl;

    // String type in C++
    // String has a constructor wich get a char[] array so we do the same but much cleaner
    std::string nameString = "Hello";
    std::cout << nameString << std::endl;

    // ofc we have different fuctions for string like:
    int size = nameString.size();

    // If we want to the same in C:
    int size2 = strlen(name3) - 1;
    // String attaching:
    // This will not going to work because we can add two char*    
    // std::string moreSting = "Hello" + "Friend";

    // The real soulution:
    std::string moreString = "Hello";
    moreString += " my Friend";


    // If we want to use string as a parameter we can't use this 
    // becasue std::string is just a copy so that's why 
    void PrintStringFunctions(const std::string& name);

    std::cin.get();
}