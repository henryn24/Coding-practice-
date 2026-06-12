Understood. Then Hoang’s feedback should be adjusted like this:

Hoang, your program is a good submission. You correctly read the mark, validate that it is between `0` and `100`, determine the pass/fail result, and assign the correct letter grade based on the assignment rules. Your validation loop is also a good improvement because it prevents invalid marks from being processed. 

Points to improve:

* You did **not display the entered mark**, but the assignment specifically asks that the program clearly displays the entered mark, the character grade, and whether it is pass or fail. 
* You used the C++ `string` class for `result`, but `std::string` is not covered or permitted at this point in OOP244. The purpose is to practise null-terminated character arrays and manual C-string handling. For this program, use a C-string such as `char result[5]`, or simply print `"Pass"` or `"Fail"` directly.
* If you use a C-string and copy text into it, remember to include the proper header file, such as `<cstring>`, when using functions like `strcpy`.
* The `done` flag works, but the loop could be simpler by directly repeating while the mark is invalid.
* Your coding style is mostly clean and readable. There are a few extra blank lines between the `if` and `else if` blocks, but this is minor.

Overall, this is well done logically, but the use of `string` is not allowed for this task. The other main missing requirement is displaying the entered mark in the output.

Correct the points above and let me know when you are done. 