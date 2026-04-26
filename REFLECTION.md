# Reflection

1. What changes did you make?
Updated the Creature class to use behavior methods for combat and added a healing ability and added a static creature counter. I also changed Arena::battle to use creature accessor and behavior methods instead of using private, and I updated main.cpp to print the total numbe of creatures created and healing

2. How did you improve encapsulation?
I improved encapsulation by keeping the creature data members private and accessing them through public methods such as getName(), getHealth(), getDamage(), takeDamage(), heal(), and attack(). This keeps the battle logic from directly changing inside which makes the class easier to maintain

3. Where did you use const and why?
I used const on the getter methods like getName(), getHealth(), getDamage(), and isAlive() because they only read state and should not modify the object. I also kept name and damage as const data members so a creature’s identity and attack power stay fixed after constructing

4. What does your static member track?
The static member creatureCount tracks how many Creature objects have been created. It is incremented and Creature::getCreatureCount() returns the current total

5. What enhancement did you add and why?
I added a healing ability with Creature::heal(int). I chose healing because it is something my unicorn does and adds a useful gameplay mechanic without changing the battle loop, and I capped healing at MAX_HEALTH so the feature stays balanced