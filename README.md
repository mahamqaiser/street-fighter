🔵 General Overview:

The program simulates a text-based 2-player fighting game in C++.
Players select characters and take turns attacking each other using simple moves like Punch, Kick, and Block.
Player 2's moves are automatically generated using a random number (rand()).

🔵 Key Components of the Code:

Header Files Included:
<iostream>: For input and output (cin, cout).
<cstdlib>: For using the rand() function.
<ctime>: To initialize random seed with srand(time(0)).
Function Declarations:
void fight(); — Controls the battle sequence.
void displayMenu(string& player1, string& player2); — Allows players to select their characters.

🔵 Main Function (main()):

Calls displayMenu() to let Player 1 and Player 2 select their fighters.
Prints "Let the battle begin!" with chosen fighters.
Calls fight() to start the fight.
Displays a "Thank you" message at the end.

🔵 Character Selection (displayMenu()):

Displays a list of 4 fighter characters: Ryu, Ken, Chun-Li, Guile.
Players select characters by entering numbers (1–4).
Assigns the selected character's name to player1 and player2.

🔵 Fight Simulation (fight()):

Initializes both players’ health to 100 points.
While both players have health > 0:
Displays current health for both players.
Player 1 chooses an action:

1: Punch — Deals 15 damage.
2: Kick — Deals 20 damage.
3: Block — No damage taken.

Player 2’s move is randomly generated (1–3):

1: Punch — Deals 10 damage.
2: Kick — Deals 15 damage.
3: Block — No damage dealt.

The fight continues until one player’s health drops to 0 or below.

🔵 End of Fight:

If Player 1’s health is 0 or less → prints "Game Over! Player 1 was defeated."
Otherwise → prints "Victory! Player 1 defeated Player 2."

🔵 Technical Concepts Demonstrated:

Randomization with rand() % 3 + 1 for enemy move generation.
Switch-case control for selecting moves.
Loops (while) for continuous gameplay.
Function passing by reference for character names.
Input validation basics (asking for correct move numbers).
