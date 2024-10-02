#include "judge.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "enter.h"
#include "introc.h"
using namespace std;



int dj;




	
	void judge::ssgirl(int per) {

		system("CLS");

		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  GIRL SITS BY THE WATER...                                                                                                                                  |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                            ()(~~~ ~~~ (                                                                                                     |           " << endl;
		cout << "|                                           )) ~~~~~~ ( ((                                                                                                    |         " << endl;
		cout << "|                                          ((/         | ))                                                                                                   |" << endl;
		cout << "|                                          )(|  ^    ^ | ((                                                                                                   |   " << endl;
		cout << "|                                           )|         | ))                                                                                                   |   " << endl;
		cout << "|                                            |\\  __   /| ((                                                                                                   |        " << endl;
		cout << "|                                            | \\ ___ / | ))                                                                                                   |           " << endl;
		cout << "|                                          /|           |\\                                                                                                    |    " << endl;
		cout << "|                                         / |           | \\                                                                                                   |    " << endl;
		cout << "|                                        |\\ \\________/  |  |                                                                                                  |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;

		cin.get();

		cout << "|      1. what are you doin here                   2. sitting alone is lame             3. go back                           " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "|try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |what are you doin here" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GIRL      |unn..what!? , i can be where ever i want," << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GIRL      |is there a problem" << endl;
		}
		else if (dj == 2) {
			cout << "|YOU       |sitting here alone is lame" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GIRL      |excuse me, is there a problem" << endl;

		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |no, you look like those girls who just likes to be sad for atention" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|GIRL      |i got no time for people like you" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |fine, goodbye" << endl;
		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);

	}
	void  judge::ssguy(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  GUY STANDS BY THE FIREPLACE...                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                             ))))))))))                                                                                                      |           " << endl;
		cout << "|                                            ) ~~~~~~ (                                                                                                       |         " << endl;
		cout << "|                                            /         |                                                                                                      |" << endl;
		cout << "|                                            |  ^    ^ |                                                                                                      |   " << endl;
		cout << "|                                            |         |    /                                                                                                 |   " << endl;
		cout << "|                                            |\\  ()   /|    __                                                                                                |        " << endl;
		cout << "|                                            | \\ ___ / |                                                                                                      |           " << endl;
		cout << "|                                          /|           |\\  \\                                                                                                 |    " << endl;
		cout << "|                                         / |             \\                                                                                                   |    " << endl;
		cout << "|                                        |\\ \           |  |                                                                                                   |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;

		cin.get();
		cout << "|      1. did you build this fire place                   2. poor guy, they must have thrown you away              3. go back                        " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |did you build this fire place" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GUY       |noo, do i look like a person who would do that" << endl;
			this_thread::sleep_for(chrono::seconds(3));
		}
		else if (dj == 2) {
			cout << "|YOU       |poor guy, they must have thrown you out from the party" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GUY       |poor!!, who the hell you calling poor" << endl;
			this_thread::sleep_for(chrono::seconds(3));
		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		cout << "|YOU       |i thought you dint had money for the party, so they sent you out" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|GUY       |stop it , i am poor, i own a privet jet" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|          |and a 70 million mansion" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|          |and 4 lambos, 2 limos, 3 porsche " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |all right all right , stop!" << endl;


		cin.get();
		cin.ignore();

		enter e;
		e.enterc(per);
	}

	void  judge::bar2people(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  TWO DRUNK GUYS...                                                                                                                                          |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                      ( --------                                                                             |" << endl;
		cout << "|                                            ________)))              (     ---  |                                                                            |           " << endl;
		cout << "|                                            ) ~~~~~~ (                |      |  |                                                                            |         " << endl;
		cout << "|                                            /         |               | <     \\ |                                                                            |" << endl;
		cout << "|                                            |  x    x |               |         /                                                                            |   " << endl;
		cout << "|                                            |         |            \\  |      / |                                                                             |   " << endl;
		cout << "|                                            |\\       /|          __   \\     /  |                                                                             |        " << endl;
		cout << "|                                            | \\ ___ / |                \\___/   |                                                                             |           " << endl;
		cout << "|                                        __ /|           |\\        /          |    \\                                                                          |    " << endl;
		cout << "|                                        | |               |                  /     |                                                                        |    " << endl;
		cout << "|                                        |\\             |  |                /       |                                                                         |   " << endl;
		cout << "|                                        | \\            |  |               /        |                                                                         |  " << endl;
		cout << "|                                        |  |           |  |               |        |                                                                        | " << endl;

		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |sorry we both drank a lot" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|          |i think my friend passed out" << endl;
		this_thread::sleep_for(chrono::seconds(2));

		cin.get();
		enter e;
		e.enterc(per);

	}
	void  judge::bartender(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  girl sits by the beach .....                                                                                                                               |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                             _________                                                                                                                |" << endl;
		cout << "|                                            (         )                                                                                                        |" << endl;
		cout << "|                                            |         |                                                                                                        |" << endl;
		cout << "|                                            |         |                                                                                       |           " << endl;
		cout << "|                                            ----------                                                                                                                |         " << endl;
		cout << "|                                            /  \\   / |                                                                                                    |" << endl;
		cout << "|                                            |  .    . |                                                                                                    |   " << endl;
		cout << "|                                            |         |    //                                                                                                |   " << endl;
		cout << "|                                            |\\  `````/|    __                                                                                               |        " << endl;
		cout << "|                                            | \\ ___ / |                                                                                                   |           " << endl;
		cout << "|                                          /|           |\\  \                                                                                                 |    " << endl;
		cout << "|                                         / |             \\                                                                                                  |    " << endl;
		cout << "|                                        |\\ \           |  |                                                                                                |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                 |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;

		cin.get();
		cout << "|      1. you dont look like a bartender                   2. you must be paid less                   3. go back                   " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "|try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |you dont look like a bartender" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|BARTENDER |then what do i look like, uhh..tell me" << endl;
			this_thread::sleep_for(chrono::seconds(2));
		}
		else if (dj == 2)
		{
			cout << "|YOU       |you must be paid less" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|BARTENDER |What the hell you mean by that" << endl;
			this_thread::sleep_for(chrono::seconds(2));
		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		cout << "|YOU       |You look like a not so hard working guy" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|BARTENDER |say that one more time and you will regret it" << endl;


		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);
	}
	void  judge::baroldman(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  AN OLD MAN HAVING A DRINK                                                                                                                                  |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |           " << endl;
		cout << "|                                             __________                                                                                                      |         " << endl;
		cout << "|                                            /          \\                                                                                                     |" << endl;
		cout << "|                                            |  .    .  |                                                                                                     |   " << endl;
		cout << "|                                            |  ~    ~  |    /                                                                                                |   " << endl;
		cout << "|                                            |\\        /|    __                                                                                               |        " << endl;
		cout << "|                                            | \\  ___ / |                                                                                                     |           " << endl;
		cout << "|                                          /|           |\\  \\                                                                                                 |    " << endl;
		cout << "|                                         / |             \\                                                                                                   |    " << endl;
		cout << "|                                        |\\ \            |  |                                                                                                  |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;

		cin.get();
		cout << "|      1. one more drink and you will pass out                   2. you are too old to drink                3. go back                      " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "|try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |you dont look really stong with drinks" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|YOU       |I can have how much i want, who are you" << endl;
			this_thread::sleep_for(chrono::seconds(3));

		}
		else if (dj == 2)
		{
			cout << "|YOU       |you are too old to drink" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|YOU       |i can handle it, " << endl;
			this_thread::sleep_for(chrono::seconds(2));
		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		cout << "|YOU       |and please dont judge, leave" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |i was just telling the truth, see ya" << endl;
		this_thread::sleep_for(chrono::seconds(3));

		cin.get();

		enter e;
		e.enterc(per);
	}

	void  judge::sagroup(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  GROUP OF FRIENDS...                                                                                                                                        |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|               llllllllll                                            (((((((((((((                                                                           |" << endl;
		cout << "|              /          )                  ((((())))))              (     ---  |                                                                            |           " << endl;
		cout << "|            (            |                  ) ~~~~~~ (                |      |  |                                                                            |         " << endl;
		cout << "|            |        (o) |                  /         |               | --   \\ |                                                                             |" << endl;
		cout << "|            |            |                  |  o   o  |               |         /                                                                            |   " << endl;
		cout << "|            | \\        /                    |         |               |        / |                                                                           |   " << endl;
		cout << "|            |  \\     /                      |\\       /|                \\     /  |                                                                            |        " << endl;
		cout << "|            /    -----|                     | \\ ___ / |                 \\___/   |                                                                            |           " << endl;
		cout << "|           |          |                 __ /|           |\\                   |    \\                                                                          |    " << endl;
		cout << "|           |          \\                 | |               |                 /      |                                                                         |    " << endl;
		cout << "|           |           |                |\\             |  |                /       |                                                                         |   " << endl;
		cout << "|           |           |                | \\            |  |               /        |                                                                         |  " << endl;
		cout << "|                                        |  |           |  |               |        |                                                                         | " << endl;
		cin.get();

		cout << "|      1.kids are not allowed here                  2. you guys must be scared of the loud music              3. go back                        " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "|try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |kids are not allowed here" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GUY1     |kids? whom you calling kids" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GUY2     |yes we are college seniors" << endl;
			this_thread::sleep_for(chrono::seconds(2));
		}
		else if (dj == 2) {
			cout << "|YOU       |you guys must be scared of loud music" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GUY1      |what do mean by that" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "|GUY2      |we just having a normal chat" << endl;
			this_thread::sleep_for(chrono::seconds(2));
		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		cout << "|YOU       |you guys look young, and immeture" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY2      |no, stop saying that, we are not" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY3      |we just talking about our car" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY1      |yes, last night one car hit ours, iam just scared to tell my parents" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|GUY2      |i still remember the car,Black Porsche Macan Turbo " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|          |there were 4 dudes in that car, wearing hoodies" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |hoodies..hmm! " << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY2      |yes, i dont know how to answer my parents" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |ok, relax here, i will get going" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);
	}

	void  judge::djgroup(int per) {
		system("CLS");
		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  GROUP SITTING IN A JACUZZI                                                                                                                                 |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|              ----------                                             (((((((((((()))                                                                         |" << endl;
		cout << "|             |          )                    --------                (     ---  |(((                                                                         |           " << endl;
		cout << "|            (            |                  ( ~~~~~~ )                |      |  |)))                                                                         |         " << endl;
		cout << "|            |          0 |          )       /         |               | <    \\ |(((                                                                           |" << endl;
		cout << "|            |            |          (       |  --  -- |               |         /)))                                                                        |   " << endl;
		cout << "|            | \\        /                    |         |               \\        / |((                                                                        |   " << endl;
		cout << "|            |  \\     /                      |\\       /|            )   \\ ____ /  |((                                                                          |        " << endl;
		cout << "|            /    -----|       (             | \\ ___ / |            (             |                                                                           |           " << endl;
		cout << "|           |          |       )         __ /|           |\\      )             |    \\                                                                         |    " << endl;
		cout << "|           |          \\                 | |               |     (            /      |                                                                        |    " << endl;
		cout << "|        ___|           |________________|\\             |  |_______________ /        |___                                                                     |   " << endl;
		cout << "|       (   |           |                | \\            |  |               /         |   )                                                                    |  " << endl;
		cout << "|                                        |  |           |  |               |         |                                                                        | " << endl;
		cin.get();

		cout << "|      1. jacuzzi? really                  2. lazy               3. go back                      " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "|try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |jacuzzi? in a beach party, thats bad" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GIRL      |they have it, what can we do" << endl;
			this_thread::sleep_for(chrono::seconds(3));
		}
		else if (dj == 2) {
			cout << "|YOU       |Why so lazy, just go move your bodies" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GIRL      |dont say that, its comfy here" << endl;

		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |i own this beach house,and i will do whatever i want" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |you own this??" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |and not only this, i have a party yacht" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |Jason Stop!  you dont have to tell that to everyone" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |no problen, i will leave now" << endl;

		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);
	}
	void  judge::djgirl(int per) {
		system("CLS");

		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  GIRL DANCING...                                                                                                                                            |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                            ()()))))))(                                                                                                      |           " << endl;
		cout << "|                                           )) ~~~~~~ ( ((                                                                                                    |         " << endl;
		cout << "|                                          ((/         | ))                                                                                                   |" << endl;
		cout << "|                                          )(|  >    < | ((                                                                                                   |   " << endl;
		cout << "|                                           )|         | ))                                                                                                   |   " << endl;
		cout << "|                                            |\\  __   /| ((                                                                                                   |        " << endl;
		cout << "|                                            | \\ ___ / | ))                                                                                                   |           " << endl;
		cout << "|                                          /|           |\\                                                                                                    |    " << endl;
		cout << "|                                         / |           | \\                                                                                                   |    " << endl;
		cout << "|                                        |\\ \\________/  |  |                                                                                                  |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;

		cin.get();

		cout << "|      1.why drink when you cant                   2. stop dancing           3. go back                          " << endl;
		cin >> dj;
		while (dj > 4)
		{
			cout << "try a valid number...." << endl;
			cin >> dj;
		}
		if (dj == 1)
		{
			cout << "|YOU       |why do you drink when you cant handdle" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GIRL      |iam sorry," << endl;

		}
		else if (dj == 2) {
			cout << "|YOU       |stop dancing, you are about to fall" << endl;
			this_thread::sleep_for(chrono::seconds(3));
			cout << "|GIRL      |iam sorry" << endl;
		}
		else if (dj == 3)
		{
			enter e;
			e.enterc(per);
		}
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |people like you try to act meture but fail like this" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |no, its not like that" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |i think you came here just to meet guys" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |noo, i will go sit now, and iam sorry" << endl;

		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);
	}
	void  judge::djguy(int per) {
		system("CLS");

		cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
		cout << "|  girl sits by the beach .....                                                                                                                               |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                                                                                                                             |" << endl;
		cout << "|                                                     )))                                                                                                        |           " << endl;
		cout << "|                                              ~~~~~~                                                                                                         |         " << endl;
		cout << "|                                            (         |                                                                                                      |" << endl;
		cout << "|                                            |  ^    ^ |                                                                                                      |   " << endl;
		cout << "|                                            |    ___  |    //                                                                                                |   " << endl;
		cout << "|                                            |\\   --  /|    __                                                                                               |        " << endl;
		cout << "|                                            | \\ ___ / |                                                                                                     |           " << endl;
		cout << "|                                          /|           |\\  \                                                                                                |    " << endl;
		cout << "|                                         / |             \\                                                                                                  |    " << endl;
		cout << "|                                        |\\ \           |  |                                                                                                 |   " << endl;
		cout << "|                                        | \\            |  |                                                                                                 |  " << endl;
		cout << "|                                        |  |           |  |                                                                                                  | " << endl;


		cout << "|GUY       |iam kinda in a moove now, dont interupt" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "|YOU       |carry on" << endl;

		cin.get();
		cin.ignore();
		enter e;
		e.enterc(per);
	}
