#include <string>
#include "player.h"
using namespace std;

// These are command valid to use
const string HELP = "help";
const string END = "end";
const string QUIT = "quit";
const string DRAW = "draw";
const string DSICARD = "discard";
const string ATK = "attack";
const string PLAY = "play";
const string USE = "use";
const string DES = "describe";
const string HAND = "hand";
const string BOARD = "board";

int main(int argc, char* argv[]){

	while(true){
		// take user's command
		string cmd;
		while(true)
		{
			cin >> cmd;
			if(cmd == HELP)
			{
				cout << "Commands: ";
				cout << "help -- Display this message." << endl;
				cout << "          end -- End the current player's turn." << endl;
				cout << "          quit -- End the game." << endl;
				cout << "          attack minion other-minion -- Orders minion to attack other-minion." << endl;
				cout << "          use minion [target-player target-card] -- Orders minion to attack the opponent." << endl;
				cout << "          play card [target-player target-card] -- Play card, optionally targeting target-card owned by target-player." << endl;
				cout << "          use minion [target-player target-card] -- Use minion’s special ability,"; 
				cout << "optionally targeting target-card owned by target-player." << endl;
				cout << "          inspect minion -- View a minion’s card and all enchantments on that minion." << endl; 
				cout << "          hand -- Describe all cards in your hand. board -- Describe all cards on the board." << endl;
			} else if (cmd == END)
			{
				break;
			} else if(cmd == QUIT)
			{
				cout << "Game Over" << endl;
				return 0;
			} else if(cmd == DISCARD)
			{
				cout << cmd << endl;
			} else if (cmd == ATK)
			{
				cout << cmd << endl;
			} else if(cmd == PLAY)
			{
				cout << cmd << endl;
			} else if(cmd == USE)
			{
				cout << cmd << endl;
			} else if(cmd == DES)
			{
				cout << cmd << endl;
			} else if(cmd == HAND)
			{
				cout << cmd << endl;
			} else if(cmd == BOARD)
			{
				cout << cmd << endl;
			} else
			{
				cout << "invalid" << endl;
			}
		}
	}
}