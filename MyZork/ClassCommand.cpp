#include "ClassCommand.h"

Command::Command()
{
	dir = stay;
	item = nothing;
}

Command::~Command()
{

}

void Command::ModifyDirection(int dir)
{
	this->dir = dir;
}
void Command::ModifyItem(int item)
{
	this->item = item;
}
int Command::GetDirection()const
{
	return dir;
}
int Command::GetItem()const
{
	return item;
}

void Command::ReadInstruction(String& str)
{

	//HELP

	if (str == "help")
	{
		cout << "Move using the 'n', 's', 'e', 'w' keys, 'north/south/east/west' or 'go + north/south/east/west' commands." << endl;
		cout << "Check door descriptions using 'look + north/south/east/west', player description using 'look + player/me/myself' or room descriptions using 'look room' command" << endl;
		cout << "Open and close doors by using the 'open/close + direction' command" << endl;
		cout << "Use 'quit' command to quit the game" << endl << endl;
		dir = stay;
	}

	//LOOK

	else if (str == "look north") 
	{
		ModifyDirection(north);
		str = "look!";
	}
	else if (str == "look south") 
	{
		ModifyDirection(south);
		str = "look!";
	}
	else if (str == "look east") 
	{
		ModifyDirection(east);
		str = "look!";
	}
	else if (str == "look west") 
	{
		ModifyDirection(west);
		str = "look!";
	}
	else if (str == "look player"|| str == "look myself" || str == "look me")
	{
		ModifyDirection(stay);
		str = "lookplayer";
	}
	else if (str == "look room")
	{
		ModifyDirection(stay);
		str = "lookroom";
	}

	//GO

	else if (str == "go north"|| str == "north"|| str == "n") 
	{
		ModifyDirection(north);
		str = "go!";
	}
	else if (str == "go south" || str == "south" || str == "s")
	{
		ModifyDirection(south);
		str = "go!";
	}
	else if (str == "go east" || str == "east" || str == "e")
	{
		ModifyDirection(east);
		str = "go!";
	}
	else if (str == "go west" || str == "west" || str == "w")
	{
		ModifyDirection(west);
		str = "go!";
	}
	

	//OPEN

	else if (str == "open north") 
	{
		ModifyDirection(north);
		str = "open!";
	}
	else if (str == "open south")
	{
		ModifyDirection(south);
		str = "open!";
	}
	else if (str == "open east")
	{
		ModifyDirection(east);
		str = "open!";
	}
	else if (str == "open west")
	{
		ModifyDirection(west);
		str = "open!";
	}

	//CLOSE

	else if (str == "close north") 
	{
		ModifyDirection(north);
		str = "close!";
	}
	else if (str == "close south")
	{
		ModifyDirection(south);
		str = "close!";
	}
	else if (str == "close east")
	{
		ModifyDirection(east);
		str = "close!";
	}
	else if (str == "close west")
	{
		ModifyDirection(west);
		str = "close!";
	}

	//PICK

	else if (str == "pick sword")
	{
		ModifyItem(sword);
		str = "pick!";
	}
	else if (str == "pick shield")
	{
		ModifyItem(shield);
		str = "pick!";
	}
	else if (str == "pick sack of grain")
	{
		ModifyItem(sack);
		str = "pick!";
	}
	else if (str == "pick copper key")
	{
		ModifyItem(copper);
		str = "pick!";
	}
	else if (str == "pick silver key")
	{
		ModifyItem(silver);
		str = "pick!";
	}
	else if (str == "pick grenade")
	{
		ModifyItem(grenade);
		str = "pick!";
	}
	else if (str == "pick orb")
	{
		ModifyItem(orb);
		str = "pick!";
	}

	//DROP

	else if (str == "drop sword")
	{
		ModifyItem(sword);
		str = "drop!";
	}
	else if (str == "drop shield")
	{
		ModifyItem(shield);
		str = "drop!";
	}
	else if (str == "pick sack of grain")
	{
		ModifyItem(sack);
		str = "drop!";
	}
	else if (str == "drop copper key")
	{
		ModifyItem(copper);
		str = "drop!";
	}
	else if (str == "drop silver key")
	{
		ModifyItem(silver);
		str = "drop!";
	}
	else if (str == "drop grenade")
	{
		ModifyItem(grenade);
		str = "drop!";
	}
	else if (str == "drop orb")
	{
		ModifyItem(orb);
		str = "drop!";
	}

	//ELSE

	else
	{
		cout << "Unknown command" << endl << endl;
		ModifyDirection(stay);
		ModifyItem(nothing);
	}
}
