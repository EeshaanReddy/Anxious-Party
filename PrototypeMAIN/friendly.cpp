#include "friendly.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "enter.h"
#include "introc.h"
using namespace std;



int df;



void friendly::ssgirl(int per) {

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

	cout << "|      1. hi can i get you a drink                   2. you are alone, what happened           3. go back                           " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |hi can i get you a drink" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |ohh no thanks, my friend is already drunk and dnacing , i need to take her home too," << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |thats very thoughtful of you, .. and you are sitting alone here .. why?" << endl;
	}
	else if (df == 2) {
		cout << "|YOU       |hii,  i just cant help but notice you sitting all alone, is there a problem" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |thats so nice of you," << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |so is there a problem" << endl;
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |noo..nothing like that..its just my moods all down" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|   " << endl;
	cout << "|   1. Iam sorry, i shouldnt have asked       2. Is it about the murder last night?                           " << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |Iam sorry i shouldnt have asked.." << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |dont be sorry, ..hahaha.." << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |its just about last night, you must have read the news" << endl;
	}
	else
	{
		cout << "|you       |Is it about last night" << endl;
		cout << "|GIRL      |oh so you know about that, yaa i mean ..yes it is about last night" << endl;
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |..hmm..  so what happened" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |my friend ,i just told you about, she knows one of the guy, well i dont know how she met him but iam just scared anything gonna happen to her" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|YOU       |well iam sure its not her mistake, you dont worry, nothing is gonna happen to her" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |iam Zarra by the way, nice to meet, you carry on with the party, i just want some free time.." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |dont worry, see you later" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);


}
void friendly::ssguy(int per) {
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
	cout << "|      1. its chill out here right?                   2. This fire place near beach is nice                3. go back                      " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |its chill out here right" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY       |never seen you here before, and i dont need a fire place..i can sit in my private Limo with a heater" << endl;

	}
	else if (df == 2) {
		cout << "|YOU       |This fire place near beach is nice" << endl;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "|GUY       |never seen you here before, and i dont need a fire place..i can sit in my private Limo with a heater" << endl;
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|YOU       |wooo...iam sorry , i was just having a little convo" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY       |leave it, you will never understand living with all these mediocres" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |carry on" << endl;


	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);
}

void friendly::bar2people(int per) {

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


	cout << "|GUY1      |sorry we both drank a lot" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|          |i think my friend passed out" << endl;
	this_thread::sleep_for(chrono::seconds(2));

	cin.get();

	enter e;
	e.enterc(per);

}
void friendly::bartender(int per) {
	system("CLS");
	cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "|  BARTENDER MIXING A DRINK..                                                                                                                                 |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                             _________                                                                                                       |" << endl;
	cout << "|                                            (         )                                                                                                      |" << endl;
	cout << "|                                            |         |                                                                                                      |" << endl;
	cout << "|                                            |         |                                                                                                      |           " << endl;
	cout << "|                                            ----------                                                                                                       |         " << endl;
	cout << "|                                            /  \\   /  |                                                                                                      |" << endl;
	cout << "|                                            |  .    . |                                                                                                      |   " << endl;
	cout << "|                                            |         |    /                                                                                                 |   " << endl;
	cout << "|                                            |\\  `````/|    __                                                                                                |        " << endl;
	cout << "|                                            | \\ ___ / |                                                                                                      |           " << endl;
	cout << "|                                          /|           |\\  \\                                                                                                 |    " << endl;
	cout << "|                                         / |             \\                                                                                                   |    " << endl;
	cout << "|                                        |\\ \            |  |                                                                                                  |   " << endl;
	cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
	cout << "|                                        |  |           |  |                                                                                                  | " << endl;

	cin.get();
	cout << "|      1. Hii sir, How was your day                   2. Do you have a mango shake                    3. go back                  " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|BARTENDER |It is none of your damn job" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |i was just asking!!" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 2)
	{
		cout << "|BARTENDER |This is not a damn fruit shop!!" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU        |i was just asking" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	cout << "|BARTENDER |Take a drink and leave" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |no, i will come by later." << endl;

	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);
}
void friendly::baroldman(int per) {
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
	cout << "|      1. Hi wise man                   2. Mind if i take a seat here                      3. go back                " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{

		cout << "|OLD MAN   |wise man?, nobody ever called me that" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|OLD MAN   |Yes i was in the army, am Ossifer , nice to meet you" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 2)
	{
		cout << "|OLD MAN   |Yes , sure why not" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |Thank you wise man" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|OLD MAN   |wise man?, nobody ever called me that" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|OLD MAN   |Yes i was in the army, am Ossifer , nice to meet you" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	cout << "|OSSIFER   |hi ossifer, Nice to meet you" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |nice to meet you too, " << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|OSSIFER   |feels good to meet people like you, unlike the guy yesterday, so rude was" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|OSSIFER   |Then after that incident, he just vanished!!" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |Hmm... can you describe him" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|OSSIFER   |well..He was mexican, i can catch that from his accent" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |mexican?.. anything else" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|OSSIFER   |i was a bit drunk, really dont remember how he looks" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |no problem sir, i will get goin, see you later" << endl;
	this_thread::sleep_for(chrono::seconds(2));

	cin.get();
	enter e;
	e.enterc(per);
}

void friendly::sagroup(int per) {
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

	cout << "|      1. hii guys                   2. can i have a seat here                   3. go back                   " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |hii guys" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |you do not look like a party guy, and why are you wearing a coat, its a beach party" << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|GUY2      |you must be those dork who does not know about parties" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 2) {
		cout << "|YOU       |can i sit here" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |you do not look like a party guy, and why are you wearing a coat, its a beach party," << endl;
		this_thread::sleep_for(chrono::seconds(4));
		cout << "|GUY2      |you must be those dork who does not know about parties" << endl;
		this_thread::sleep_for(chrono::seconds(3));
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	cout << "|YOU       |sorry, you dont have to judge like that" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |never mind.. carry on" << endl;

	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);
}

void friendly::djgroup(int per) {
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

	cout << "|      1. hii guys, pretty relaxing i think                   2. you guys must be enjoying the heat             3. go back                        " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |hii guys, pretty relaxing i think " << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |Yess,  i own this beach house," << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (df == 2) {
		cout << "|GUY1      |you guys must be enjoying the heat" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |Yess, i own this beach house," << endl;

	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |and not only this, i have a party yacht" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |Jason Stop!  you dont have to tell that to everyone" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |no problen, i will leave now" << endl;

	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);
}
void friendly::djgirl(int per) {
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

	cout << "|      1. hi,                   2. are you ok?                3. go back                      " << endl;
	cin >> df;
	while (df > 4)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{
		cout << "|YOU       |hi " << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |oh no, iam tripping" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |what happened, let me help you" << endl;
	}
	else if (df == 2) {
		cout << "|YOU       |are you ok,i think you drank alot," << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |what happened, let me help you" << endl;
	}
	else if (df == 3)
	{
		enter e;
		e.enterc(per);
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |thank you for asking" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |and Yes.. i drank alot" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |ohh, what happened" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |one guy asked me out yesturday...and...umm...and" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU      |no problem, tell me, its ok" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |after the incident, i saw him putting on the hoddie and running away, following the murderer.." << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "    1.can you tell about the guy              2.I think you should relax" << endl;
	cin >> df;
	while (df > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> df;
	}
	if (df == 1)
	{

		cout << "|YOU       |can you tell about that guy" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |umm...i will but please dont tell anyone" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |i wont , tell" << endl;
	}
	else if (df == 2) {
		cout << "|YOU       |I think you should relax" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |hmm..i think so, i just cant Stop thinking about it" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |you were drunk right, i hope you dint remember him much " << endl;
	}
	
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |i dont remember him but he told about his house in mexico." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |mexico?...hmm" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |please dont tell anyone, ok?" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |i wont, promise" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|          |you relax for now" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);
}
void friendly::djguy(int per) {
	system("CLS");

	cout << "______________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "|  GUY DANCING...                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                                                                                                                             |" << endl;
	cout << "|                                                     )))                                                                                                     |           " << endl;
	cout << "|                                              ~~~~~~                                                                                                         |         " << endl;
	cout << "|                                            (         |                                                                                                      |" << endl;
	cout << "|                                            |  ^    ^ |                                                                                                      |   " << endl;
	cout << "|                                            |    ___  |     /                                                                                                |   " << endl;
	cout << "|                                            |\\   --  /|    __                                                                                                |        " << endl;
	cout << "|                                            | \\ ___ / |                                                                                                      |           " << endl;
	cout << "|                                          /|           |\\  \\                                                                                                 |    " << endl;
	cout << "|                                         / |             \\                                                                                                   |    " << endl;
	cout << "|                                        |\\ \           |  |                                                                                                   |   " << endl;
	cout << "|                                        | \\            |  |                                                                                                  |  " << endl;
	cout << "|                                        |  |           |  |                                                                                                  | " << endl;



	cout << "|GUY       |iam kinda in a moove now, dont interupt" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |carry on" << endl;

	cin.get();
	cin.ignore();
	enter e;
	e.enterc(per);



}






