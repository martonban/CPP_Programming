#include <iostream>

class Entity {
public:
    float X, Y;

    void Move(float dx, float dy) {
        X += dx;
        Y += dy; 
    }
};

class Player : public Entity {
    const char* Name;

    void PrintName() {
        std::cout << Name;
    }
};

int main() {
    Player player;
    player.Move(1.0f, 1.0f);


}