#include "enter.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "rude.h"
#include "judge.h"
#include "showoff.h"
#include "introc.h"

using namespace std;


	void enter::enterc(int per) 
	{
		void ssgirl();
		void ssgirl();
		void ssguy();
		void bar2people();
		void bartender();
		void baroldman();
		void sagroup();
		void djgroup();
		void djgirl();
		void djguy();

		start:

		system("CLS");

		int loc,area;


		cout << "_______/   | |= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = | |    \\_________" << endl;
		cout << "_______/   ______________________________________________________________________________________________________________________________________    \\_________" << endl;
		cout << "_______/   --------------------------------------------------------------------------------------------------------------------------------------    \\_________" << endl;
		cout << "_______/   | |= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                    ENTRANCE                                                                    | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/  (   )                            1. SEA SHORE                                2. SITTING AREA                                       (   )   \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                             3. BAR                                      4. DJ area                                             | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                               5.go back                                                                        | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/  (   )                                                                                                                              (   )   \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;
		cout << "_______/   | |  // choose an area to go //                                                                                                    | |    \\_________" << endl;
		cout << "_______/  (   )                                                                                                                              (   )   \\_________" << endl;
		cout << "_______/   | |                                                                                                                                | |    \\_________" << endl;


		cin >> loc;

		while (loc > 4 && loc <= 0)
		{
			cout << "try a valid number .." << endl;
			cin >> loc;
		}
		if (loc == 1)
		{

			system("CLS");


			cin.get();

			cout << "_______________________________________________________________________________________________________________" << endl;
			cout << "| Entering Sea Shore ..." << endl;
			cout << "_______________________________________________________________________________________________________________" << endl;

			cin.get();

			system("CLS");


			cout << "^^^^^^^^.........................................................................................................................................^^^^^^^^^^" << endl;
			cout << "_______/___________________________________________________________________________________________________________________________________________________" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                          )                                          \\__" << endl;
			cout << "__/                                                                                                    )    (                                           \\__" << endl;
			cout << "__/     (There is small camp fire )                                                                   ( ) (    )                                        \\__" << endl;
			cout << "__/                                                                 -- one guy stands by the fire       (  )  (                                         \\__" << endl;
			cout << "__/                                                                                                   )(  (  (  )                                       \\__" << endl;
			cout << "__/                                                                                                  (  )  )  )(                                        \\__" << endl;
			cout << "__/                                                                                                   ) ( (  (  )                                       \\__" << endl;
			cout << "__/                                                                                                   .==.....==..                                      \\__" << endl;
			cout << "__/        a girl sitting next to the water                                                           / / | | \\ \\                                       \\__" << endl;
			cout << "__/                                                                                                  / /  | |  \\ \\                                      \\__" << endl;
			cout << "__/                                                                                            ~~~~ ~~ ~ ~~~~~~~ ~~ ~~ ~                                \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/.................................................................................................................................................... \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/     1. go talk to the guy                    2. go talk to the girl                                                                                 \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                               3. Go back                                                                                                            \\__" << endl;
			cout << "__/ ................................................................................................................................................... \\__" << endl;

			cin >> area;

			while (area > 3 && area <= 0)
			{
				cout << "try a valid number .." << endl;
				cin >> loc;
			}
			if (area == 1)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.ssguy(per);


				}
				else if (per == 2)
				{
					rude rs1;
					rs1.ssguy(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.ssguy(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.ssguy(per);
				}

			}
			else if (area == 2)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.ssgirl(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.ssgirl(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.ssgirl(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.ssgirl(per);
				}

			}
			else if (area == 3)
			{
				goto start;
			}


		}
		else if (loc == 3)
		{
			system("CLS");


			cout << "_______________________________________________________________________________________________________________" << endl;
			cout << "| Entering Bar..." << endl;
			cout << "_______________________________________________________________________________________________________________" << endl;

			cin.get();

			system("CLS");

			std::cout << "^^^^^^^^..........................................................................................................................................^^^^^^^^^^" << endl;
			std::cout << "_______/__________________________________________________________________________________________________________________________________________\_________" << endl;
			std::cout << "__/          _____________________________________________________________________________________________________________________                      \\__" << endl;
			std::cout << "__/          | |                           ___            _                |              |                |                    | |                     \\__" << endl;
			std::cout << "__/          | |              _      ^     /  \\           /\\               |              |                |                    | |                     \\__" << endl;
			std::cout << "__/          | |             /\\     /\\    |___|    __    | |    ___        |              |                |                    | |                     \\__" << endl;
			std::cout << "__/          | |             | |    | |   (   )   |  |   | |   |   |       |      ()      |    ()          |                    | |                     \\__" << endl;
			std::cout << "__/          | |_____________|_|____|_|___|___|___|__|___|_|___|___|_______|              |                |____________________| |                     \\__" << endl;
			std::cout << "__/          |/____________________________________________________________|______________|________________|_____________________\\|                     \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                           An old man                                                                                \\__" << endl;
			std::cout << "__/     Two drunk guys                                                                                                     Bartender mixing a drink     \\__" << endl;
			std::cout << "__/                                                                                                           ______                                    \\__" << endl;
			std::cout << "__/      |                      |                                                                            |______|__________________________________ \\__" << endl;
			std::cout << "__/      |                      |                                                                            |                                         |\\__" << endl;
			std::cout << "__/      |                      |                                                                            |                                         |\\__" << endl;
			std::cout << "__/      |_____           ______|                                                                            |                                         |\\__" << endl;
			std::cout << "__/      |     |          |     |                                                                            |                                         |\\__" << endl;
			std::cout << "__/      |     |          |     |                                                                            |                                         |\\__" << endl;
			std::cout << "__/    ==|=====|==========|=====|=====================                                                                                                  \\__" << endl;
			std::cout << "__/.....................................................................................................................................................\\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                1. talk to the drunk guys                    2. talk to the bartender                                \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                                                                                                                     \\__" << endl;
			std::cout << "__/                                                3. talk to the old man                       4. go back                                              \\__" << endl;
			std::cout << "__/ ....................................................................................................................................................\\__" << endl;

			cin >> area;

			while (area > 4 && area <= 0)
			{
				cout << "try a valid number .." << endl;
				cin >> loc;
			}
			if (area == 1)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.bar2people(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.bar2people(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.bar2people(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.bar2people(per);
				}
			}
			else if (area == 2)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.bartender(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.bartender(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.bartender(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.bartender(per);
				}
			}
			else if (area == 3)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.baroldman(per);

				}
				else if (per == 2)
				{ 
					rude rs1;
					rs1.baroldman(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.baroldman(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.baroldman(per);
				}
			}
			else if (area == 4)
			{
				goto start;
			}

		}
		else if (loc == 2)
		{
			system("CLS");

			cout << "_______________________________________________________________________________________________________________" << endl;
			cout << "| Entering Sitting area ..." << endl;
			cout << "_______________________________________________________________________________________________________________" << endl;

			cin.get();

			system("CLS");

			cout << "^^^^^^^^..........................................................................................................................................^^^^^^^^^^" << endl;
			cout << "_______/__________________________________________________________________________________________________________________________________________\_________" << endl;
			cout << "__/                                   |\\             ||               /|                                                                                \\__" << endl;
			cout << "__/                                   | \\            ||              / |                                                                                \\__" << endl;
			cout << "__/                                   |  \\           ||             /  |                                                                                \\__" << endl;
			cout << "__/                                   |   |          ||             |  |             ___________________________________________________________        \\__" << endl;
			cout << "__/                                   |  <|          ||             |> |             |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||        \\__" << endl;
			cout << "__/                                   |   |          ||             |  |             |_________________________________________________________|        \\__" << endl;
			cout << "__/                                   |  /           ||              \\ |             |                            |                            |        \\__" << endl;
			cout << "__/                                   |_/____________||_______________\\|             |____________________________|____________________________|        \\__" << endl;
			cout << "__/                                                                                  |           |                |              |             |        \\__" << endl;
			cout << "__/                                                                                  |           |                |              |             |        \\__" << endl;
			cout << "__/                                                                                  |           |                |              |             |        \\__" << endl;
			cout << "__/             A group of friends sitting                                           |           |                |              |             |        \\__" << endl;
			cout << "__/                                                                                  |           |                |              |             |        \\__" << endl;
			cout << "__/     _____________________________________________________________                |           |                |              |             |        \\__" << endl;
			cout << "__/    (                                                             )               |           |                |              |             |        \\__" << endl;
			cout << "__/    |                                                             |               |        () | ()             |           () | ()          |        \\__" << endl;
			cout << "__/    |_____________________________________________________________|               |           |                |              |             |        \\__" << endl;
			cout << "__/   /______________________________________________________________\\               |           |                |              |             |        \\__" << endl;
			cout << "__/   | |                                                           | |              |           |                |              |             |        \\__" << endl;
			cout << "__/   | |                                                           | |              |           |                |              |             |        \\__" << endl;
			cout << "__/   |                                                               |              |           |                |              |             |        \\__" << endl;
			cout << "__/..................................................................................|...........|................|..............|.............|........\\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/     1. talk to the group                    2. go back                                                                                              \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/                                                                                                                                                     \\__" << endl;
			cout << "__/ ....................................................................................................................................................\\__" << endl;

			cin >> area;

			while (area > 4 && area <= 0)
			{
				cout << "try a valid number .." << endl;
				cin >> loc;
			}
			if (area == 1)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.sagroup(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.sagroup(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.sagroup(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.sagroup(per);
				}

			}
			else if (area == 2)
			{
				goto start;
			}

		}
		else if (loc == 4)
		{
			system("CLS");

			cout << "_______________________________________________________________________________________________________________" << endl;
			cout << "| Entering DJ area ..." << endl;
			cout << "_______________________________________________________________________________________________________________" << endl;

			cin.get();

			system("CLS");

			cout << "^^^^^^^^..........................................................................................................................................^^^^^^^^^^" << endl;
			cout << "_______/__________________________________________________________________________________________________________________________________________\_________" << endl;
			cout << "__/        |                                                                                                                                  |          \__" << endl;
			cout << "__/        |                                                                                                                                  |          \__" << endl;
			cout << "__/        |                       ______                                                                        ______                       |          \__" << endl;
			cout << "__/        =                       |    |                                                                        |    |                       =          \__" << endl;
			cout << "__/      (   )                   \  |    | /                                                                   \   |    |  /                  (   )        \__" << endl;
			cout << "__/        =                   __  | () |  __                                                               __   | () |   __                  =          \__" << endl;
			cout << "__/                                |____|                                                                        |____|                                  \__" << endl;
			cout << "__/                             /          \                                                                  /           \                              \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/           (There is a Jacuzzi)                                                                                             (Dance floor)             \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/                one girl and two guys in the jacuzzi                                                                                                  \__" << endl;
			cout << "__/          _________________________________________________                                                            a guy having a drink           \__" << endl;
			cout << "__/    _____|_________________________________________________|_____                                                                                     \__" << endl;
			cout << "__/   |                                                             |                                                     a girl dancing                 \__" << endl;
			cout << "__/   |                                                             |                                                                                    \__" << endl;
			cout << "__/   |                                                             |                   ===============================================================  \__" << endl;
			cout << "__/..................................................................................................................................................... \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/     1. talk to the group in jacuzzi                                                                 2. talk to the girl dancing                      \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/     3. talk to the guy                                                                              4. go back                                       \__" << endl;
			cout << "__/                                                                                                                                                      \__" << endl;
			cout << "__/ .................................................................................................................................................... \__" << endl;

			cin >> area;

			while (area > 4 && area <= 0)
			{
				cout << "try a valid number .." << endl;
				cin >> loc;
			}
			if (area == 1)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.djgroup(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.djgroup(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.djgroup(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.djgroup(per);
				}
			}
			else if (area == 2)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.djgirl(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.djgirl(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.djgirl(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.djgirl(per);
				}
			}

			else if (area == 3)
			{
				if (per == 1)
				{
					friendly fs1;
					fs1.djguy(per);

				}
				else if (per == 2)
				{
					rude rs1;
					rs1.djguy(per);

				}
				else if (per == 3)
				{
					judge js1;
					js1.djguy(per);

				}
				else if (per == 4)
				{
					showoff ss1;
					ss1.djguy(per);
				}
			}
			else if (area == 4)
			{
				goto start;
			}

		}
		else if (loc == 5)
		{


		introc i;
		i.intro();



		}
	}

