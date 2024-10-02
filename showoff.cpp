#include "showoff.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "enter.h"
using namespace std;



int df;






void showoff::ssgirl() {

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

	cout << "|      1. hii,beach looks good                   2. sitting all alone           3. go back                        " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |hii, beach looks good" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |yes..it does look good" << endl;
	}
	else if (df ==2)
	{
		cout << "|YOU       |sitting all alone" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |yaa..feels good her" << endl;

	}
	else if (df == 3)
	{
		enterc();
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |feels more good in my beach house" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |thats nice," << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |yes, it costed me around 50 million," << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|          |and planning to buy another one," << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |thats so nice, but i wanna be alone right now" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |no problem, see you later" << endl;
	cin.get();
	cin.ignore();

}
void showoff::ssguy() {
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
	cout << "|      1. The beach near my Mansion is way better                   2. I better choose to buy a jacuzzi            3. go back                          " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |The beach near my mansion is way better" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY       |thats nice, well.., i have a party yatch" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if(df == 2) {
		cout << "|YOU       |I better choose to be in a jacuzzi" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY       |i can use the jacuzzi too, but its filled" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 3)
	{
	enterc();
	}
	cout << "|YOU       |I saw a limo outside , bet its yours" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY       |Yes it is indeed, just waiting for my driver to come," << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |i Have the same model, but gold lining" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY       |What ,i always wanted to put a gold lining" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|   1. I 2 have porsches    2 any other collection you have?" << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |Nice, i love Porsche" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 2)
		{
		cout << "|YOU       |any other collection you have?" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY       |Yes i love cars," << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 3)
	{
		enterc();
	}
	cout << "|GUY       |I Had a Porsche Macon Turbo till yesturday" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |yesturday? what happened" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |one guy from the bar asked me if he could borrow it, he is a close friend of my Uncle" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|          |Then just vanished, i dont know what happened" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |Close friend of your Uncle?" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |yess.." << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |You know why was he there" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |He dint say a word to me!" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |Hmm...ok" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|          |Ok, see you later" << endl;
	cin.get();
	cin.ignore();
}

void showoff::bar2people() {
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
	cin.get();
	cin.ignore();

	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |sorry we both drank a lot" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|          |i think my friend passed out" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cin.get();
	enterc();
}
void showoff::bartender() {
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
	cout << "|      1. Do you have Diva Vodka                   2. Do you have Dalmore 62            3. go back                        " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |do you have Diva Vodka" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|BARTENDER |diva vodka? it costs around a million" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if(df == 2)
	{
		cout << "|YOU       |do you have Dalmore 62" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|BARTENDER |Dalmore 62? ..it costs around a million" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 3)
	{
	enterc();
	}
	cout << "|YOU       |I know, i only drink those, no cheap drinks" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|BARTENDER |Well, either buy what i have or shut up and leave" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |fine, i will buy it outside" << endl;


	cin.get();
	cin.ignore();
}
void showoff::baroldman() {
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
	cout << "|      1. why wearing such an old sweater                   2. What are you doin here                   3. go back                   " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |Why wearing an old sweater" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|OLD MAN   |what you mean by that" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |I mean the coat iam wearing is 50,000 ," << endl;
		this_thread::sleep_for(chrono::seconds(2));

	}
	else if(df==2)
	{
		cout << "|YOU       |what are you doin" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|OLD MAN   |Why should i not be here" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |i think this party is too costly for you" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 3)
	{
	enterc();
	}
	cout << "|OLD MAN   |Hey kid, if you are done with your job, please go" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |ya, no use talking to old" << endl;
	this_thread::sleep_for(chrono::seconds(3));

}

void showoff::sagroup() {
	system("CLS");
	cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "|  girl sits by the beach .....                                                                                                                               |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|               llllllllll                                            (((((((((((((                                                                                   |" << endl;
	cout << "|              /          )                  ((((())))))              (     ---  |                                                                      |           " << endl;
	cout << "|            (            |                  ) ~~~~~~ (                |      |  |                                                                          |         " << endl;
	cout << "|            |        (o) |                  /         |               | --   \\ |                                                                       |" << endl;
	cout << "|            |            |                  |  o   o  |               |         /                                                                          |   " << endl;
	cout << "|            | \\        /                   |         |               |        / |                                                                         |   " << endl;
	cout << "|            |  \\     /                     |\\       /|               \\     /  |                                                                           |        " << endl;
	cout << "|            /    -----|                     | \\ ___ / |                \\___/   |                                                                              |           " << endl;
	cout << "|           |          |                 __ /|           |\\                   |    \\                                                                            |    " << endl;
	cout << "|           |          \\                | |                |                 /      |                                                                          |    " << endl;
	cout << "|           |           |                |\\             |  |                /       |                                                                         |   " << endl;
	cout << "|           |           |                | \\            |  |               /        |                                                                         |  " << endl;
	cout << "|                                        |  |           |  |                |        |                                                                          | " << endl;
	cin.get();

	cout << "|      1.What are guys doin here                  2. Iam fed up of seeing kids here               3. go back                       " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU      |What are guys doin here" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1     |we just havind a talk" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY2      |Wait!.. are you wearing Buscemi shoes?" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|YOU      |Yes, and i have a huge collection of them" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|         |not only that i have 3 Guccis" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 2) {
		cout << "|YOU      |Iam fed up of seeing kids here" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY1     |we are college seniors, not kids" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY3     |ya whatever , when i was your age i had a prive beach house" << endl;
		this_thread::sleep_for(chrono::seconds(4));
	}
	else if (df == 3)
	{
	enterc();
	}
	cout << "|GUY1     |ok sir, stop bragging" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU      |we are just a bit busy" << endl;
	cin.get();
	cin.ignore();
}

void showoff::djgroup() {
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

	cout << "|      1. This beach house is small                  2. This a small jacuzzi                   3. go back                  " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU      |This beach house is small" << endl;
		this_thread::sleep_for(chrono::seconds(2));

	}
	else if (df == 2) {
		cout << "|YOU      |This is a small jacuzzi" << endl;
		this_thread::sleep_for(chrono::seconds(2));


	}
	else if (df == 3)
	{
	enterc();
	}
	cout << "|GUY2     |What did you just say" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |This is my beach house" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU      |I have a way bigger one, with a bigger jacuzzi" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY1      |i have a party yatch," << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU      |well i have a private jet" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL     |will you guys stop!!!" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU      |alright fine i will stop" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cin.get();
	cin.ignore();
}
void showoff::djgirl() {
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

	cout << "|      1.You drank some cheap liquir                   2. Iam sure you will passout                    3. go back                 " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU      |You must have drank some cheap liquir" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL     |what do you mean" << endl;

	}
	else if (df == 2) {
		cout << "|YOU      |Iam sure you are goin to passout" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL     |iam sorry,i dont know what i drank" << endl;
	}
	else if (df == 3)
	{
	enterc();
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU      |I never drink anything less that 1,000 " << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL     |iam not that rich" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU      |then dont come to parties like this" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL     |Iam sorry, i will go sit" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cin.get();
	cin.ignore();
}
void showoff::djguy() {
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



	cout << "|GUY      |iam kinda in a moove now, dont interupt" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY      |carry on" << endl;

	cin.get();
	cin.ignore();

	enterc();

}