#include "World.h"
#include <iostream>
using namespace std;

World::World() {
    food = 100;
    water = 100;
    energy = 100;
    stability = 100;
}

void World::display() {
    cout << "\nFood: " << food;
    cout << "\nWater: " << water;
    cout << "\nEnergy: " << energy;
    cout << "\nStability: " << stability << "%\n";
}

void World::crisis(int choice) {
    if (choice == 1)
        food -= 30;
    else if (choice == 2)
        water -= 30;
    else if (choice == 3)
        energy -= 30;

    if (food < 0) food = 0;
    if (water < 0) water = 0;
    if (energy < 0) energy = 0;

    stability = (food + water + energy) / 3;
}

void World::saveWorld() {
    int choice;

    cout << "\n1. Food";
    cout << "\n2. Water";
    cout << "\n3. Energy";
    cout << "\nChoose resource to increase: ";
    cin >> choice;

    if (choice == 1)
        food += 20;
    else if (choice == 2)
        water += 20;
    else if (choice == 3)
        energy += 20;

    if (food > 100) food = 100;
    if (water > 100) water = 100;
    if (energy > 100) energy = 100;

    stability = (food + water + energy) / 3;
}

void World::result() {
    if (stability >= 70)
        cout << "\nThe world is stable!";
    else if (stability >= 40)
        cout << "\nThe world is in danger!";
    else
        cout << "\nThe world has collapsed!";
}
