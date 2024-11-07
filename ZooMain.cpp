#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Lion.h"

using namespace std;

int main() {
    vector<Animal*> zoo;  // Vector to store Animal pointers
    int choice;

    while (true) {
        cout << "Select the animal to send to Zoo:\n";
        cout << "(1) Dog  (2) Cat  (3) Lion  (4) Move all animals  (5) Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, owner;
            int color;
            cout << "Enter Dog's name: ";
            cin >> name;
            cout << "Enter Dog's color (0: Green, 1: Blue, 2: White, 3: Black, 4: Brown): ";
            cin >> color;
            cout << "Enter Dog's owner: ";
            cin >> owner;
            zoo.push_back(new Dog(name, static_cast<COLOR>(color), owner));
        } else if (choice == 2) {
            string name;
            int color;
            cout << "Enter Cat's name: ";
            cin >> name;
            cout << "Enter Cat's color (0: Green, 1: Blue, 2: White, 3: Black, 4: Brown): ";
            cin >> color;
            zoo.push_back(new Cat(name, static_cast<COLOR>(color)));
        } else if (choice == 3) {
            string name;
            int color;
            cout << "Enter Lion's name: ";
            cin >> name;
            cout << "Enter Lion's color (0: Green, 1: Blue, 2: White, 3: Black, 4: Brown): ";
            cin >> color;
            zoo.push_back(new Lion(name, static_cast<COLOR>(color)));
        } else if (choice == 4) {
            // Move all animals
            for (Animal* animal : zoo) {
                animal->move();
                animal->speak();
                if (Mammal* mammal = dynamic_cast<Mammal*>(animal)) {
                    mammal->eat();
                }
            }
        } else if (choice == 5) {
            // Quit and cleanup
            for (Animal* animal : zoo) {
                delete animal;  // Free memory
            }
            zoo.clear();
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
