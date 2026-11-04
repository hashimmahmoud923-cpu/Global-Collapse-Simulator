#include <iostream>
using namespace std;

class World {
private:
    int food;
    int water;
    int energy;
    int stability;

public:

    World() {
        food = 100;
        water = 100;
        energy = 100;
        stability = 100;
    }

    void display() {
        cout << "\n--- WORLD STATUS ---\n";
        cout << "Food: " << food << "%\n";
        cout << "Water: " << water << "%\n";
        cout << "Energy: " << energy << "%\n";
        cout << "Stability: " << stability << "%\n";
    }

    void crisis(int choice) {

        if (choice == 1) {
            food = food - 30;
            cout << "\nFood crisis happened!\n";
        }

        else if (choice == 2) {
            water = water - 30;
            cout << "\nWater crisis happened!\n";
        }

        else if (choice == 3) {
            energy = energy - 30;
            cout << "\nEnergy crisis happened!\n";
        }

        stability = (food + water + energy) / 3;
    }

    void saveWorld() {

        int choice;

        cout << "\n1. Increase Food";
        cout << "\n2. Increase Water";
        cout << "\n3. Increase Energy";
        cout << "\nChoose: ";
        cin >> choice;

        if (choice == 1)
            food = food + 20;

        else if (choice == 2)
            water = water + 20;

        else if (choice == 3)
            energy = energy + 20;

        if (food > 100) food = 100;
        if (water > 100) water = 100;
        if (energy > 100) energy = 100;

        stability = (food + water + energy) / 3;

        cout << "\nWorld resources updated!\n";
    }

    void result() {

        cout << "\n--- FINAL RESULT ---\n";

        if (stability >= 70)
            cout << "World is Stable\n";

        else if (stability >= 40)
            cout << "World is in Danger\n";

        else
            cout << "World has Collapsed\n";

        cout << "Stability: " << stability << "%\n";
    }
};

int main() {

    World w;
    int choice;

    do {

        cout << "\n============================\n";
        cout << " GLOBAL COLLAPSE SIMULATOR\n";
        cout << "============================\n";

        cout << "\n1. Display World";
        cout << "\n2. Food Crisis";
        cout << "\n3. Water Crisis";
        cout << "\n4. Energy Crisis";
        cout << "\n5. Save World";
        cout << "\n6. Final Result";
        cout << "\n0. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            w.display();
            break;

        case 2:
            w.crisis(1);
            break;

        case 3:
            w.crisis(2);
            break;

        case 4:
            w.crisis(3);
            break;

        case 5:
            w.saveWorld();
            break;

        case 6:
            w.result();
            break;

        case 0:
            cout << "\nSimulation Ended\n";
            break;

        default:
            cout << "\nWrong Choice!\n";
        }

    } while (choice != 0);

    return 0;
}
