#include "rude.h"
#include<iostream>
#include<string>
#include <thread>
#include <chrono>
#include <ctime>
#include"friendly.h"
#include "enter.h"
using namespace std;



int dr;



void rude::ssgirl() {

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

	cout << "|      1. trying to jump in water                   2. did your bf leave you here              3. go back                       " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|GIRL      |try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|YOUN      |trying to jump in water?" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |dont talk to me like that" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (dr == 2) {
		cout << "|YOU       |did your bf leave you here" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |none of your bussiness" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (dr == 3)
	{
		enterc();
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GIRL      |and please leave, have no time for people like you" << endl;
	this_thread::sleep_for(chrono::seconds(3));

	cin.get();
	cin.ignore();

}
void rude::ssguy() {
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
	cout << "|      1.fire place near beach is a bad idea                   2. why cant you just sit in the jacuzzi            3. go back                         " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|YOU       |fire place near jacuzzi is a bad idea" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY       |heyy.. its my with where i want to stand" << endl;
	}
	else if (dr == 2) {
		cout << "|YOU       |Why cant you just sit in the jacuzzi" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY       |because i love the heat from fire, you dont tell me what to do" << endl;
	}
	else if (dr == 3)
	{
	enterc();
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY       |you know what, its useless talking to you" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |the only thing thats useless is you standing here" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|          |carry on" << endl;


	cin.get();
	cin.ignore();
}

void rude::bar2people() {

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
	enterc();

}
void rude::bartender() {
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
	cout << "|      1. Give me a damn drink                   2. What are mixing? mango juice                   3. go back                   " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|BARTENDER |try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{

		cout << "|YOU       |Just give a damn drink" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (dr == 2)
	{
		cout << "|YOU       |What are you mixing? mango shake!" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (dr == 3)
	{
	enterc();
	}
	cout << "|BARTENDER |Watch your mouth son!" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |how can i watch it, its under my nose" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |you remind me of my brother" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |What?!?" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |He was an ass like you" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY       |dont call me that again" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |Dont go all around with this attitude, you know what happened last night right" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|YOU       |Yes and am not scared of things like that!   are you?" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|BARTENDER |No son, iam not!, but no attitude can stop a knif in your stomach" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|         " << endl;
	cout << "|  1. what Knife?             2.Thats a goood saying" << endl;

	cin >> dr;
	while (dr > 2)
	{
		cout << "try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{

		cout << "|YOU       |What knife are you talking about?" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|BARTENDER |There is something you dont know" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |about what? spill it out" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else
	{
		cout << "|YOU       |Thats a good saying" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|BARTENDER |Its not just a saying, there is something you dont know" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|YOU       |about what, spill it out" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	cout << "|BARTENDER |yesturday a guy asked me for a drink, i saw a vintage eagle in his pocket" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|GUY       |isnt Vintage eagle a Mexicon knife" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|BARTENDER |yes, the same knife was used in the murder" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |god !! did you see his face" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |yes, i saw him talking with that guy outside in the fire place" << endl;
	this_thread::sleep_for(chrono::seconds(4));
	cout << "|YOU       |ohh.. " << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|BARTENDER |Here is your drink" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |thank you!" << endl;
	this_thread::sleep_for(chrono::seconds(2));

	cin.get();
	cin.ignore();
}
void rude::baroldman() {
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
	cout << "|      1. Did your son leave you here                  2. you must be from 16th century                   3. go back                  " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|OLD MAN   |try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|YOU       |Did your son leave you here" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if(dr == 2)
	{
		cout << "|YOU       |You must be from the 16th century" << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	else if (dr == 3)
	{
	enterc();
	}
	cout << "|OLD MAN   |Iam an elder, Dont you dare talk like that, leave" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|YOU       |Yes, no use talking to you anyways" << endl;

}

void rude::sagroup() {
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

	cout << "|      1. Remove your clothes from locker                   2. You kids, leave this area                   3. go back                   " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|YOU       |I need this locker,take out your cloths" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY       |i booked that locker, why should i remove" << endl;

	}
	else if (dr == 2) {
		cout << "|YOU       |You kids leave this area, i need a place to drink" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY1      |pretty much sure this ia a sitting area not a bar" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY2      |and why are you so rude, go drink in the bar " << endl;

	}
	else if (dr == 3)
	{
	enterc();
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |i dont care, this place is bad anyways" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY3      |you must be a rich guy's son, with that attitude " << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |stop talking about me, iam leaving " << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY       |never mind.. carry on" << endl;

	cin.get();
	cin.ignore();
}

void rude::djgroup() {
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

	cout << "|      1. can you guys move                   2. How long will you sit here                    3. go back               " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "|try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|GUY1      |Can you move, i need to sit" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GUY1      |heyy, dont be an ass," << endl;
	}
	else if(dr == 2)
	{
		cout << "|GUY1      |you guys sat here for too long, now move" << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GUY1      |mind that attitude,mam!" << endl;

	}
	else if (dr == 3)
	{
	enterc();
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |we are not your workers to move when you want to" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY1      |i own this beach house!!" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |yess, keep that in mind and leave" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |i also own a party yatch" << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "|GUY1      |Jason Stop!  you dont have to tell that to everyone" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GUY1      |whatever!!" << endl;

	cin.get();
	cin.ignore();


}
void rude::djgirl() {
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

	cout << "|      1. You are hopping all around,mind your steps                   2. if you cant handle then dont drink             3. go back                       " << endl;
	cin >> dr;
	while (dr > 2)
	{
		cout << "||try a valid number...." << endl;
		cin >> dr;
	}
	if (dr == 1)
	{
		cout << "|YOU       |you are jumping all around, get off me!! " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "|GIRL      |oh no, iam tripping" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|YOU       |then stop drinking" << endl;
	}
	else if(dr == 2) {
		cout << "|YOU       |if you cant handle it, dont drink" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "|GIRL      |oh no, iam tripping" << endl;
	}
	else if (dr == 3)
	{
	enterc();
	}
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |iam sorry, i wont come in your way" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|YOU       |and from next time dont drink too much" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "|GIRL      |iam sorry, i will go sit" << endl;
	cin.get();
	cin.ignore();
}
void rude::djguy() {
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
	enterc();
}