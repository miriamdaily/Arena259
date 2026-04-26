#include "arena.h"
#include "creature.h"
#include "./creatures/sumo_sally.h"
#include "./creatures/giantleech.h"

int main()
{
    Creature c1(make_sumo_sally());
    Creature c2(makeGiantleech());

    std::cout << "Total creatures created: " // this will print the total number of creatures created using the static member variable
              << Creature::getCreatureCount() << std::endl; // this will call the static method to get the current count of creatures created

    // Demonstrate the healing enhancement here so the sample program shows the new behavior before battle starts.
    c1.takeDamage(10);
    c1.heal(10);
    std::cout << c1.getName() << " uses healing and is back to "
              << c1.getHealth() << " HP." << std::endl;

    Arena::battle(c1, c2);

    return 0;
}
