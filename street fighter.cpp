#include <iostream>
#include <cstdlib>
#include <ctime> // Library for random function
using namespace std;

void fight(); // Function declaration
void displayMenu(string& player1, string& player2);

int main() {
    string player1, player2;
    displayMenu(player1, player2);

    cout << "\nLet the battle begin! \n" << player1 << " vs " << player2 << "\n\n";

    fight();

    cout << "Thank you for playing Text-Based Street Fighter. See you in the next match!\n";

    return 0;
}

void displayMenu(string& player1, string& player2) {
    string characters[] = { "Ryu", "Ken", "Chun-Li", "Guile" };

    cout << "\n========================== Welcome to Text-Based Street Fighter! ==========================\n";
    cout << "================================ Character Selection =========================================\n";
    cout << "=============================== Choose your fighter: ========================================\n";

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << characters[i] << endl;
    }

    int player1Choice, player2Choice;
    cout << "Player 1, choose your fighter (Enter a number (1-4)): ";
    cin >> player1Choice;
    player1 = characters[player1Choice - 1];

    cout << "Player 2, choose your fighter (Enter a number (1-4)): ";
    cin >> player2Choice;
    player2 = characters[player2Choice - 1];
}

void fight() { // Function to simulate a simple fight
    srand(time(0)); // Initialize random seed

    int player1Health = 100;
    int player2Health = 100;

    while (player1Health > 0 && player2Health > 0) {
        cout << "\n============================================================\n";
        cout << "1. Punch\n2. Kick\n3. Block\n";
        cout << "Player 1 Health: " << player1Health << "\tPlayer 2 Health: " << player2Health << "\n";

        int choice;
        cout << "\nPlayer 1, enter your move (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nPlayer 1 punches Player 2! Dealing 15 damage.\n";
                player2Health -= 15;
                break;
            case 2:
                cout << "\nPlayer 1 kicks Player 2! Dealing 20 damage.\n";
                player2Health -= 20;
                break;
            case 3:
                cout << "\nPlayer 1 blocks Player 2's attack. No damage taken.\n";
                break;
            default:
                cout << "Invalid move. Try again.\n";
                continue; // Skip player 2's turn if invalid input
        }

        if (player2Health <= 0) break; // Check if Player 2 is defeated

        // Simulate Player 2 move automatically
        int player2Move = rand() % 3 + 1;
        switch (player2Move) {
            case 1:
                cout << "\nPlayer 2 punches Player 1! Dealing 10 damage.\n";
                player1Health -= 10;
                break;
            case 2:
                cout << "\nPlayer 2 kicks Player 1! Dealing 15 damage.\n";
                player1Health -= 15;
                break;
            case 3:
                cout << "\nPlayer 2 blocks Player 1's attack. No damage dealt.\n";
                break;
        }
    }

    cout << "\n============================================================\n";
    if (player1Health <= 0) {
        cout << "Game Over! Player 1 was defeated.\n";
    } else {
        cout << "Victory! Player 1 defeated Player 2.\n";
    }
}

