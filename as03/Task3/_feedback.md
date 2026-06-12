Hoang, your solution has the main AS03 logic working. You ask for the number of marks, use a loop to process multiple marks, show the row number using `Mark 1:`, `Mark 2:`, etc., calculate the correct grade, display pass/fail, count passes and failures, and calculate the average at the end. This matches the main required behaviour of the assignment. 

Things to improve:

* You should have reused the AS02 logic as functions instead of writing everything inside `main()`. For example, grade calculation and pass/fail checking could be placed in separate functions.

* There is no validation for the number of marks. If the user enters `0`, the program divides by zero when calculating the average. If the user enters a negative number, the loop will not run correctly.

* There is no validation for each mark. Marks below `0` or above `100` should not be accepted.

* Variable names like `n` are too short. A clearer name would be `numberOfMarks` or `markCount`.

* The pass/fail logic is repeated separately from the grade logic. That is acceptable, but it would be cleaner to use a function such as `isPass(mark)`.

Overall, Hoang, your basic loop and calculation logic are good, but the program needs input validation and better structure. To improve, focus on moving the AS02-style logic into functions and making sure invalid input does not break the program.

Correct your AS03 by appylying the improvements and let me know when done. 