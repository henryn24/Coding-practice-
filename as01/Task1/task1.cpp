#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int first, second, result;
    cout << "Please enter the first number: ";
    cin >> first;
    cout << "Please enter the second number: ";
    cin >> second;
    result = sum(first, second);
    cout << "The sum is: " << result;
    return 0;
}

/*

Hoang, your solution is correct and satisfies the requirements of AS01: it asks for two numbers, stores them in variables, calculates the sum, and displays the result clearly. The assignment requires input, calculation, and clear output, which your program does properly.

* Good work using meaningful variable names like `first`, `second`, and `result`.

* Your prompts match the assignment wording well:

  ```cpp
  cout << "Please enter the first number: ";
  cout << "Please enter the second number: ";
  ```

* Your output format is correct:

  ```cpp
  cout << "The sum is: " << result;
  ```

* The use of a separate `sum` function is logically correct:

  ```cpp
  int sum(int a, int b) {
      return a + b;
  }
  ```

  For this very first task, a function was not required, but it is acceptable because it keeps the logic clear and simple.

* Coding style is clean overall. Just be consistent with brace style. You used:

  ```cpp
  int sum(int a, int b) {
  ```

  and:

  ```cpp
  int main()
  {
  ```

  Choose one brace style and use it consistently throughout the program.

Overall, this is a strong submission. The program is correct, readable, and follows the assignment instructions well.


*/