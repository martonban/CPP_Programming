#ifndef TEMPLATE_MAP_HPP
#define TEMPLATE_MAP_HPP

#include <map>

template <typename T>
class TemplateMap {
public:
    void add_data(std::string key, T value);
    T get_data(std::string key);
private:
    std::map<std::string, T> storage_map;
};

template <typename T>
void TemplateMap<T>::add_data(std::string key, T value) {
    storage_map[key] = value;
}

template <typename T>
T TemplateMap<T>::get_data(std::string key) {
    return storage_map[key];
}

#endif