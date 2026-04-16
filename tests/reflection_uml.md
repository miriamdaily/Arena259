I created this markdown so you could view my UML and reflection on git



# Reflection:
The change I decided to do was to make some unit tests. It tests the construction of a creature, reading instance variables (Name, Health, Damage, etc...) and the attack/isAlive methods.

I did this because I think unit tests are extremely important and fun to write for any kind of program.

I learned how to use the assert function is c++, it is pretty handy for terminating any unexpected behaviour. Although, I do not think it is the best for unit tests since it doesn't run the rest of the file if a test fails.

# UML:
![alt text](Arena_Creature_UML.png "UML")

# Compiling command:
Be sure to run this in Arena259/tests/
    g++ ezra_test.cpp ../src/creature.h -o test1
