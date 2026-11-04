#include <iostream>
#include "World.h"
using namespace std;

int main() {
    World world;
    int choice;

    do {
        cout << "\n===== GLOBAL COLLAPSE SIMULATOR =====";
        cout << "\n1. Display World Status";
        cout << "\n2. Create Crisis";
        cout << "\n3. Save the World";
        cout << "\n4. Show Final Result";
        cout << "\n5. Exit";
        cout << "\nChoose: ";

        cin >> choice;

        switch (choice) {
            case 1:
                world.display();
                break;

            case 2: {
                int crisisChoice;
                cout << "\n1. Food Crisis";
                cout << "\n2. Water Crisis";
                cout << "\n3. Energy Crisis";
                cout << "\nChoose crisis: ";
                cin >> crisisChoice;

                world.crisis(crisisChoice);
                break;
            }

            case 3:
                world.saveWorld();
                break;

            case 4:
                world.result();
                break;

            case 5:
                cout << "\nGoodbye!";
                break;

            default:
                cout << "\nInvalid choice!";
        }

    } while (choice != 5);

    return 0;
}
