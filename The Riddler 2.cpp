//The Riddler 2
//
//  Created by Christopher Ramirez on 1/28/13.
//  Copyright (c) 2013 AI. All rights reserved.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void intro();
int difficulty();
void fam();
void del_Fam();
char game_Chooser(int num);
char easy();
char normal();
char hard();
char insane();
char game_Over();
char game_Win();

vector<string> family;
const string difficult[4]={"Easy","Normal","Hard","Insane"};

int main()
{
	char again;
	do
	{
		intro();
		system("cls");
		family.clear();
		string member;
		cout<<"\n\n\n\n\n\n\n\nLet's begin shall we.....\n\n";
		cout<<"Enter the first name of a loved one: ";
			cin>>member;
			family.push_back(member);
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\nEnter another: ";
			cin>>member;
			family.push_back(member);
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\nEnter another: ";
			cin>>member;
			family.push_back(member);

		int num;
		string dif;

		num=difficulty();
		dif=difficult[num-1];
		
		system("cls");
		
		cout<<"\n\n\n\n\n\n\n\n\n\nYou chose "<<dif<<".\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		system("pause");
		system("cls");
		again=game_Chooser(num);
	}
	while(again=='y');
	return 0;
}

void intro()
{
		cout <<"\n\n\n\n\n\n\n\n\n _______ __               ______ __     __     __ __"<<endl;
		cout <<"|_     _|  |--.-----.    |   __ /__|.--|  |.--|  |  |.-----.----."<<endl;
		cout <<"  |   | |     |  -__|    |      <  ||  _  ||  _  |  ||  -__|   _|"<<endl;
		cout <<"  |___| |__|__|_____|    |___|__|__||_____||_____|__||_____|__|\n"<<endl;
		cout<<"                             ___ \n"
			  "                            |_  |\n"
              "                            |  _|\n"
              "                            |___|\n";
		
		cout<<"\nMade by: Christopher Ramirez, Vincent Estrada, Christopher Bonine, Angel Beltran\n\n\n\n\n\n\n\n"; 
		system("pause");
}
int difficulty()
{
	
	int num=0;
	for (;num > 4 || num<1;)
		{	
			system("cls");
			cout << "\n\n\n\n\n\n\nPlease choose a difficulty level\n\n"
			<< "1 - Easy\n"
			<< "2 - Normal\n"
			<< "3 - Hard\n"
			<< "4 - Insane\n\n"
			<< "Choice: ";
			cin >> num;
			if(!cin)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
		} 
	
return num;
}
void fam()
{
	system("cls");
	int num[3]={1,2,3};
	int choice=0;
	vector<string>::iterator myIterator;
	for(;choice<1||choice>3;)
	{
		int t=0;
		cout<<"\n\n\n\n\n\n\nHA HA HA Wrong\n\n";
		cout<<"You must now choose a loved one to kill.\n\n";
		
		for(unsigned int i=0;i<family.size();++i)
		{
			cout<<num[t]<<"-"<<family[t]<<"\n";
			++t;
		}
		cout<<"\n";
		cin>>choice;
		if(!cin)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
			}
		system("cls");
	}
	
	myIterator=family.begin()+choice-1;
	system("cls");
	cout<<"\n\n\n\n\n\n\nYou chose to kill "<<*myIterator<<".\n"
		<<"GOOD CHOICE!!!!!\n\n\n";
	family.erase((myIterator));
	cout<<"Here's who still remain alive\n\n";
	int y=0;
	for(unsigned int z=0;z<family.size();++z)
	{
		cout<<family[y]<<"\n";
			++y;
	}
	cout<<"\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

}
char game_Chooser(int num)
{
	char win_Lose='l';
	if (num==1)
	{
		win_Lose=easy();
	}
	else if (num==2)
	{
		win_Lose=normal();	
	}
	else if (num==3)
	{
		win_Lose=hard();
	}
	else
	{
		win_Lose=insane();
	}
	
	char again;
	if(win_Lose=='l')
	{
		again=game_Over();
	}
	else
	{
		again=game_Win();
	}
	return again;
}
char game_Win()
{
	char again='y';
	do
	{
		cout<<"\n\n\n\n\n\n\n\n\nWell, I bet your pretty proud of yourself now aren't you\n"
			"Yes yes yes, take your loved ones and get out of my face...\n"
			"I HATE YOU    I HATE YOU    I HATE YOU\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		system("pause");
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\nYOU WIN!!!!!!\n\n"
			"And you saved ";
		int y=0;
		for(unsigned int z=0;z<family.size();++z)
		{
			cout<<family[y]<<" ";
			++y;
		}
		cout<<".\n\nWould you like to play again? (y/n): ";
		cin>>again;
		system("cls");
	}
	while (again!='y'&&again!='n');
	return again;
}
char game_Over()
{
	char again='y';
	do
	{
	cout<<"\n\n\n\n\n\n\n\n\nHA HA HA HA HA HA\n"
		"Your loved ones are all dead! \n"
		"Well I guess I will see you next year when I take the rest\n"
		"of your silly little loved ones .... Ciao\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\nYOU LOSE!!!!!!\n\n";
	cout<<"Would you like to play again? (y/n): ";
	cin>>again;
	system("cls");
	}
	while (again!='y'&&again!='n');
return again;	
}

char easy()
{
	cout<<"\n\n\n\n\nHello friend...\n"
		"My name is the Riddler, and I have in my possession three very close loved ones.\n"
		"Can you guess who's loved ones they are???\n"
		"NO NO NO they are not mine silly little person you, they are yours.\n"
		"That is right my smart piggy, your loved ones are in my basement waiting to be\n"
		"shot, stabbed, beaten, sawed, ripped, and well anything to death really.\n"
		"Would you like them back??? Well too freaking bad you cry baby,\n"
		"they can only go home if you solve one of my three riddles.\n"
		"Yes Yes Yes only one, because you are a baby and chose easy didn't you.\n"
		"Yes quite, only babies choose easy ....\n"
		"Don't get anxious and give more than one word answers,\n"
		"that will just ruin the fun.\n"
		"Let us begin .........\n\n\n\n\n\n\n\n";
		system("pause");
	string correct;
	char outcome='l';
	system("cls");
	cout<<"\n:::::First Riddle:::::\n\n";
	cout<<"It is greater than God and more evil than the devil.\n"
		"The poor have it, the rich need it and if you eat it you'll die. What is it?\n\n";
	cin>>correct;
	if(correct!="Nothing"&&correct!="nothing"&&correct!="NOTHING")
	{
		fam();
		cout<<"\nNow for the next riddle\n\n"
			":::::Second Riddle:::::\n\n"
			"At night they come without being fetched.\n"
			"By day they are lost without being stolen.\n"
			"What are they?\n\n";
			cin>>correct;
		if(correct!="Stars"&&correct!="stars"&&correct!="STARS")
		{
			fam();
			cout<<"\nNow for the last riddle\n\n"
				":::::Third Riddle:::::\n\n"
				"The more you have of it, the less you see.\n"
				"What is it?\n\n";
			cin>>correct;
			if(correct!="Darkness"&&correct!="darkness"&&correct!="DARKNESS")
			{
				
				outcome='l';
			}
			else
			{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\n\nDang! Almost had you.\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				outcome='w';
				system("pause");
			}
		}
		else
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\nYou got lucky\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			outcome='w';
			system("pause");
		}
	}
	else
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\nYou got lucky\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		outcome='w';
		system("pause");
	}
	system("cls");
	return outcome;
}
char normal()
{
	cout<<"\n\n\n\n\nHello friend...\n"
		"My name is the Riddler, and I have in my possession three very close loved ones.\n"
		"Can you guess who's loved ones they are???\n"
		"NO NO NO they are not mine silly little person you, they are yours.\n"
		"That is right my smart piggy, your loved ones are in my basement waiting to be\n"
		"shot, stabbed, beaten, sawed, ripped, and well anything to death really.\n"
		"Would you like them back??? Well too freaking bad you cry baby,\n"
		"they can only go home if you solve two of my three riddles.\n"
		"Yes Yes Yes only two, because I feel like being generous today.\n"
		"BUT ONLY FOR TODAY!!!!!!!\n"
		"Don't get anxious and give more than one word answers,\n"
		"that will just ruin the fun.\n"
		"Let us begin .........\n\n\n\n\n\n\n\n";
	system("pause");
	string correct;
	int num_Right=0;
	int num_Wrong=0;
	char outcome='l';
	system("cls");
	cout<<"\n:::::First Riddle:::::\n\n"
		"At the sound of me, men may dream\n"
		"Or stamp their feet\n"
		"At the sound of me, women may laugh\n"
		"Or sometimes weep\n\n";
	cin>>correct;
	if(correct!="Music"&&correct!="music"&&correct!="MUSIC")
	{
		fam();
		++num_Wrong;
		cout<<"\nIf you get this wrong, you can kiss your family goodbye.\n\n";
	}
	else
	{
		system("cls");
		cout<<"\nHmmmm... Maybe I should make it harder....\n\n";
		++num_Right;
	}
	cout<<"\n:::::Second Riddle:::::\n\n"
		"Forward I'm heavy, but backwards I'm not.\n"
		"What am I?\n\n";
		cin>>correct;
	if(correct!="Ton"&&correct!="ton"&&correct!="TON")
	{
		if(num_Wrong==1)
		{
			cout<<"\n\n\n\n\n\n\n\n\nHA HA HA two wrong.... Can you do the math?\n"
				"Wait don't answer that, you probably can't ...\n"
				"Two wrong means you lose, fish for brains, HA HA HA!\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			
			outcome='l';
		}
		else
		{
			++num_Wrong;
			fam();
			cout<<"\nWell then, this is you last chance smarty pants....\n\n";
			cout<<"\n:::::Third Riddle:::::\n\n"
				"Alive without breath,\n"
				"As cold as death,\n"
				"Clad in mail never clinking,\n"
				"Never thirsty, ever drinking.\n\n";
				cin>>correct;
				if(correct!="Fish"&&correct!="fish"&&correct!="FISH")
				{
					outcome='l';
				}
				else
				{
					outcome='w';
				}
		}
	}
	else
	{
		if(num_Right==1)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\nYou lucky son of a female dog in heat!!!\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			outcome='w';
			system("pause");
		}
		else
		{
			++num_Right;
			system("cls");
			cout<<"\nWell then, this is you last chance smarty pants....\n\n";
			cout<<"\n:::::Third Riddle:::::\n\n"
				"Alive without breath,\n"
				"As cold as death,\n"
				"Clad in mail never clinking,\n"
				"Never thirsty, ever drinking\n\n";
				cin>>correct;
				if(correct!="Fish"&&correct!="fish"&&correct!="FISH")
				{
					outcome='l';
				}
				else
				{
					outcome='w';
				}
		}
	}
	system("cls");
	return outcome;
}
char hard()
{
	cout<<"\n\n\n\n\nHello friend...\n"
		"My name is the Riddler, and I have in my possession three very close loved ones.\n"
		"Can you guess who's loved ones they are???\n"
		"NO NO NO they are not mine silly little person you, they are yours.\n"
		"That is right my smart piggy, your loved ones are in my basement waiting to be\n"
		"shot, stabbed, beaten, sawed, ripped, and well anything to death really.\n"
		"Would you like them back??? Well too freaking bad you cry baby,\n"
		"they can only go home if you solve my three riddles.\n"
		"Yes Yes Yes all three because I like watching people struggle and suffer.\n"
		"DON'T JUDGE ME!!!!!!!\n"
		"Don't get anxious and give more than one word answers,\n"
		"that will just ruin the fun.\n"
		"Let us begin .........\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	string correct;
	char outcome='l';
	cout<<"\n:::::First Riddle:::::\n\n"
		"The person who makes it, sells it.\n"
		"The person who buys it never uses it\n"
		"and the person who uses it doesn't know they are.\n"
		"What is it?\n\n";
	cin>>correct;
	if(correct!="Coffin"&&correct!="coffin"&&correct!="COFFIN")
	{
		outcome='l';
	}
	else
	{
		system("cls");
		cout<<"\nWell then ... didn't think you'd get that one\n\n"
			"\n:::::Second Riddle:::::\n\n"
			"What has a head, a tail, is brown, and has no legs?\n\n";
		cin>>correct;
		if(correct!="Penny"&&correct!="penny"&&correct!="PENNY")
		{
			outcome='l';
		}
		else
		{
			system("cls");
			cout<<"\nThat was all luck ... Here's another even harder one\n\n"
				"\n:::::Third Riddle:::::\n\n"
				"What's black when you get it, \n"
				"red when you use it, \n"
				"and white when you're all through with it?\n\n";
			cin>>correct;
			if(correct!="Charcoal"&&correct!="charcoal"&&correct!="CHARCOAL")
			{
				outcome='l';
			}
			else
			{
				outcome='w';
			}
		}
	}
	system("cls");
	return outcome;
}
char insane()
{
	cout<<"\n\n\n\n\nHello friend...\n"
		"My name is the Riddler, and I have in my possession three very close loved ones.\n"
		"Can you guess who's loved ones they are???\n"
		"NO NO NO they are not mine silly little person you, they are yours.\n"
		"That is right my smart piggy, your loved ones are in my basement waiting to be\n"
		"shot, stabbed, beaten, sawed, ripped, and well anything to death really.\n"
		"Would you like them back??? Well too freaking bad you cry baby,\n"
		"they can only go home if you solve my three riddles.\n"
		"Yes Yes Yes you are a daring young penguin aren't you, choosing insane and such.\n"
		"Good luck ...... you'll need it.\n"
		"Don't get anxious and give more than one word answers,\n"
		"that will just ruin the fun.\n"
		"Let us begin .........\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	string correct;
	char outcome='l';
	cout<<"\n:::::First Riddle:::::\n\n"
		"When young, I am sweet in the sun.\n"
		"When middle-aged, I make you gay.\n"
		"When old, I am valued more than ever.\n\n";
	cin>>correct;
	if(correct!="Wine"&&correct!="wine"&&correct!="WINE")
	{
		outcome='l';
	}
	else
	{
		system("cls");
		cout<<"\nToo easy ... Dang I forgot you chose insane for a second.\n"
			"Here's a harder one.\n\n"
			"\n:::::Second Riddle:::::\n\n"
			"If you break me\n"
			"I do not stop working,\n"
			"If you touch me\n"
			"I may be snared,\n"
			"If you lose me\n"
			"Nothing will matter.\n\n";
		cin>>correct;
		if(correct!="Heart"&&correct!="heart"&&correct!="HEART")
		{
			outcome='l';
		}
		else
		{
			system("cls");
			cout<<"\nI was so sure that would stump you...\n\n"
				"\n:::::Third Riddle:::::\n\n"
				"Until I am measured\n"
				"I am not known,\n"
				"Yet how you miss me\n"
				"When I have flown.\n\n";
			cin>>correct;
			if(correct!="Time"&&correct!="time"&&correct!="TIME")
			{
				outcome='l';
			}
			else
			{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\nWell would you look at that, you got all three\n"
					"correct. Good for you, you chubby monkey, but I have\n"
					"unfortunate news....\n\n"
					"The bomb I had strapped to your loved ones pre-detonated\n"
					"before I even had a chance to ask the first riddle...\n\n"
					"So I guess your effort was for not.\n\n\n\n\n\n\n\n\n\n\n";
				system("pause");					
				outcome='l';
			}
		}
	}
	system("cls");
	return outcome;
}



