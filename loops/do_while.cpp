// ===== DO-WHILE LOOP =====
// Pattern: same as while, but the check happens AFTER the body.
//
//   while    -> check, then do   (can run 0 times)
//   do-while -> do, then check   (runs AT LEAST once)
//
// Syntax:
//   do {
//       body
//   } while (condition);    <- semicolon is REQUIRED here
//
// Which loop?
//   for      -> I know the count
//   while    -> I don't know the count, might need 0 runs
//   do-while -> I don't know the count, needs at least 1 run
//
// Best use: ask for input at least once, repeat if it's bad.
// The cin is written ONCE (body runs first, so it is start + update).
//
// Condition = when the input is BAD (keep looping on bad input).
// Infinite loop check: does the update change the variable in the condition?

#include <iostream>
using namespace std;

int main() {

    // Example 1: proof that do-while runs once even if condition is false
    int x = 10;

    while (x < 5) {
        cout << "while ran" << endl;       // never prints
    }

    do {
        cout << "do-while ran" << endl;    // prints once
    } while (x < 5);

    // Example 2: ask until the number is positive
    int a;
    do {
        cout << "Enter a positive number: ";
        cin >> a;

        if (cin.fail()) {                  // user typed a letter
            cin.clear();                   // repair cin
            cin.ignore(1000, '\n');        // throw away the junk
            a = 0;                         // force "bad" so the loop repeats
        }
    } while (a <= 0);                      // bad = 0 or negative

    cout << "The number is " << a << endl;

    return 0;
}