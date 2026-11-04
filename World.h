#ifndef WORLD_H
#define WORLD_H

class World {
private:
    int food;
    int water;
    int energy;
    int stability;

public:
    World();

    void display();
    void crisis(int choice);
    void saveWorld();
    void result();
};

#endif
