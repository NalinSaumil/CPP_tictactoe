#include <iostream>
using namespace std;

char grid[10] = {'o','1','2','3','4','5','6','7','8','9'};

int whoWon();
void game();

int main()
{
	int player = 1,err,choice;

    char mark;
    do
    {
        game();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && grid[1] == '1')

            grid[1] = mark;
        else if (choice == 2 && grid[2] == '2')

            grid[2] = mark;
        else if (choice == 3 && grid[3] == '3')

            grid[3] = mark;
        else if (choice == 4 && grid[4] == '4')

            grid[4] = mark;
        else if (choice == 5 && grid[5] == '5')

            grid[5] = mark;
        else if (choice == 6 && grid[6] == '6')

            grid[6] = mark;
        else if (choice == 7 && grid[7] == '7')

            grid[7] = mark;
        else if (choice == 8 && grid[8] == '8')

            grid[8] = mark;
        else if (choice == 9 && grid[9] == '9')

            grid[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        err=whoWon();

        player++;
    }while(err==-1);
    game();
    if(err==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}


int whoWon()
{
    if (grid[1] == grid[2] && grid[2] == grid[3])

        return 1;
    else if (grid[4] == grid[5] && grid[5] == grid[6])

        return 1;
    else if (grid[7] == grid[8] && grid[8] == grid[9])

        return 1;
    else if (grid[1] == grid[4] && grid[4] == grid[7])

        return 1;
    else if (grid[2] == grid[5] && grid[5] == grid[8])

        return 1;
    else if (grid[3] == grid[6] && grid[6] == grid[9])

        return 1;
    else if (grid[1] == grid[5] && grid[5] == grid[9])

        return 1;
    else if (grid[3] == grid[5] && grid[5] == grid[7])

        return 1;
    else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3'
                    && grid[4] != '4' && grid[5] != '5' && grid[6] != '6'
                  && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')

        return 0;
    else
        return -1;
}




void game()
{

    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << grid[1] << "  |  " << grid[2] << "  |  " << grid[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[4] << "  |  " << grid[5] << "  |  " << grid[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[7] << "  |  " << grid[8] << "  |  " << grid[9] << endl;

    cout << "     |     |     " << endl << endl;
}

