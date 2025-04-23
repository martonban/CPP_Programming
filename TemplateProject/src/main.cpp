#include <iostream>
#include "../include/TemplateMap.hpp"

int main() {
    // Create a TemplateMap for integers
    TemplateMap<int> intMap;
    
    // Add data to the map
    intMap.add_data("one", 1);
    intMap.add_data("two", 2);
    intMap.add_data("three", 3);
    
    // Query and display data
    std::cout << "Value for key 'two': " << intMap.get_data("two") << std::endl;
    
    // Create a TemplateMap for strings
    TemplateMap<std::string> stringMap;
    
    // Add data to the map
    stringMap.add_data("greeting", "Hello");
    stringMap.add_data("farewell", "Goodbye");
    
    // Query and display data
    std::cout << "Value for key 'greeting': " << stringMap.get_data("greeting") << std::endl;
    
    return 0;
}