#include "introc.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "rude.h"
#include "judge.h"
#include "showoff.h"
#include "enter.h"

using namespace std;

int main();

void introc::intro()
{

	int per;
			system("CLS");

			cout << "^^^^^^^^..............................................................................................................................................^^^^^^^^^^" << endl;
			cout << "_______/______________________________________________________________________________________________________________________________________________\_________" << endl;
			cout << "_______\______________________________________________________________________________________________________________________________________________/_________" << endl;
			cout << "_______/______________________________________________________________________________________________________________________________________________\_________" << endl;
			cout << "_______\______________________________________________________________________________________________________________________________________________/_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                 CHOOSE A PERSONALITY                                                                         \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                             1. Friendly                                           2. Rude                                                    \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                             3. judgmental                                         4. Show off                                                \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                    5.MAIN MENU                                                                               \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/   /      choose by selecting the number                                                                                                      \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;
			cout << "_______/                                                                                                                                              \_________" << endl;

			cin >> per;



			if (per > 4 && per < 1)
			{
				cout << "Try a valid number" << endl;



			}
			else if (per == 1)
			{

				system("CLS");
				cout << "Friendly" << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;
				cout << "| Entering the beach party ..." << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;

				cin.get();

				enter item;
				item.enterc(per);

				cin.ignore();



			}
			else if (per == 2)
			{

				system("CLS");
				cout << "rude" << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;
				cout << "| Entering the beach party ..." << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;

				cin.get();

				enter item;
				item.enterc(per);

				cin.ignore();



			}
			else if (per == 3)
			{

				system("CLS");
				cout << "Judgemental" << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;
				cout << "| Entering the beach party ..." << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;

				cin.get();

				enter item;
				item.enterc(per);


			}
			else if (per == 4)
			{

				system("CLS");
				cout << "Show off" << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;
				cout << "| Entering the beach party ..." << endl;
				cout << "_______________________________________________________________________________________________________________" << endl;

				cin.get();

				enter item;
				item.enterc(per);

				cin.ignore();


			}
			else if (per == 5)
			{
				send();
			}


			cin.get();
		}


		int introc::send()
		{

			main();

			return 0;
		}

	






