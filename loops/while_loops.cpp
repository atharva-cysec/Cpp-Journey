// ===== WHILE LOOP =====
// Pattern: a while loop is a for loop with its 3 parts spread out.
//   1. START     -> written OUTSIDE, before the loop
//   2. CONDITION -> inside the brackets, checked BEFORE every run
//   3. UPDATE    -> written INSIDE, at the end of the body (my job to write it!)
//
// Order: start once > condition > body > update > condition > ...
// Condition is checked BEFORE the body, so it can run 0 times.
//
// for   -> I KNOW how many times
// while -> I DON'T know how many times, I loop until something happens
//
// Infinite loop check:
//   1. Does start reach the condition?
//   2. Does update change the variable being checked?
//   3. Does it move toward false?
// If I forget the update (i++), the loop never ends.

#include <iostream>
using namespace std;

int main() {

    // Example 1: print 1 to 5 (same as the for loop version)
    int i = 1;                  // 1. START
    while (i <= 5) {            // 2. CONDITION
        cout << i << endl;
        i++;                    // 3. UPDATE
    }

    // Example 2: input validation (keep asking while the input is BAD)
    // Start     = the first cin before the loop
    // Condition = is the input still bad?
    // Update    = the cin inside the loop (user types something new)
    int age;
    cout << "Enter age (1-100): ";
    cin >> age;

    while (age < 1 || age > 100) {
        cout << "Invalid! Enter again: ";
        cin >> age;
    }
    cout << "Got it: " << age << endl;

    // Note: typing a letter instead of a number breaks cin and makes
    // the loop infinite. Fix (later): cin.clear() + cin.ignore(1000, '\n')

    return 0;
}