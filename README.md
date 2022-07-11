# Calculator-Design-UI---1.5-Lab-Software-Engineering

Created for Software Engineering class at Full Sail University, Term C202207, Section 02. 

7/10/22 Note: Created from an empty C++ Project in Visual Studio, and including use of wxWidgets. Per lab instructions, use a text control and buttons to create a calculator layout based on a design we drew with pencil and paper. Only requirements for design were a text box, a button that makes the number in the text box negative, and buttons (Numbers 0-9, +, -, *, /,=, c, mod, binary, hex, decimal).

7/11/22 Per lab instructions, implement an event table that handles click events for every button (such that the face value of each button appears in the text box when the button is clicked). I used the EVT_COMMAND_RANGE in the Event Table as opposed to EVT_BUTTON for each button, but I still had to use the switch case in the actual method. I hope after the next lab section (ButtonFactory), I will be able to optimize the onButtonClick method.
