#include "ClassCommand.h"

Command::Command()
{
	dir = stay;
	item = nothing;
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
		cout << "MOVEMENT" << endl << endl;
		cout << "Move using the 'n', 's', 'e', 'w' keys, 'north/south/east/west' or 'go + north/south/east/west' commands." << endl;
		cout << "Open and close doors by using the 'open/close + direction' command" << endl << endl;
		cout << "INFORMATION" << endl << endl;
		cout << "Check door descriptions using 'look + north/south/east/west', player description using 'look + player/me/myself' or room descriptions using 'look room' command" << endl;
		cout << "You can check item descriptions by using the command 'look + <item>'" << endl;
		cout << "Check your inventory at any time by using the command 'look/check + inventory or inventory/inv/i" << endl;
		cout << "Check what the box contains by using 'look/check + box' command" << endl;
		cout << "Check your stats with the 'stats' command and check your equipment with the 'equipment, look equipment or check equipment' command" << endl << endl;
		cout << "INTERACTION" << endl << endl;
		cout << "Pick or drop items by using the 'pick/drop + <item>' command. You can also store items in a Box by using the commands 'put/get + <item> + into/from + box'." << endl;
		cout << "Equip and unequip items by using the commands 'equip/unequip + <item>'" << endl << endl;
		cout << "Use 'quit' command to quit the game" << endl << endl;
	}

	//LOOK EXITS

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

	//LOOK ITEMS

	else if (str == "look sword")
	{
		ModifyItem(sword);
		str = "look!";
	}
	else if (str == "look shield")
	{
		ModifyItem(shield);
		str = "look!";
	}
	else if (str == "look sack of grain")
	{
		ModifyItem(sack);
		str = "look!";
	}
	else if (str == "look copper key")
	{
		ModifyItem(copper);
		str = "look!";
	}
	else if (str == "look silver key")
	{
		ModifyItem(silver);
		str = "look!";
	}
	else if (str == "look grenade")
	{
		ModifyItem(grenade);
		str = "look!";
	}
	else if (str == "look orb")
	{
		ModifyItem(orb);
		str = "look!";
	}

	//LOOK INVENTORY

	else if (str == "look inventory" || str == "check inventory" || str == "inventory" || str == "inv" || str == "i")
	{
		ModifyItem(sword);
		str = "lookinventory";
	}

	//LOOK BOX

	else if (str == "look box" || str == "check box")
	{
		ModifyItem(sword);
		str = "lookbox!";
	}

	//LOOK PLAYER

	else if (str == "look player"|| str == "look myself" || str == "look me")
	{
		ModifyDirection(stay);
		str = "lookplayer";
	}

	//LOOK ROOM
	else if (str == "look room")
	{
		ModifyDirection(stay);
		ModifyItem(sword);
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
	else if (str == "drop sack of grain")
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

	//PUT ITEM INTO BOX

	else if (str == "put sword into box")
	{
		ModifyItem(sword);
		str = "putinto";
	}
	else if (str == "put shield into box")
	{
		ModifyItem(shield);
		str = "putinto";
	}
	else if (str == "put sack of grain into box")
	{
		ModifyItem(sack);
		str = "putinto";
	}
	else if (str == "put copper key into box")
	{
		ModifyItem(copper);
		str = "putinto";
	}
	else if (str == "put silver key into box")
	{
		ModifyItem(silver);
		str = "putinto";
	}
	else if (str == "put grenade into box")
	{
		ModifyItem(grenade);
		str = "putinto";
	}
	else if (str == "put orb into box")
	{
		ModifyItem(orb);
		str = "putinto";
	}

	//GET ITEM FROM BOX

	else if (str == "get sword from box")
	{
		ModifyItem(sword);
		str = "getfrom";
	}
	else if (str == "get shield from box")
	{
		ModifyItem(shield);
		str = "getfrom";
	}
	else if (str == "get sack of grain from box")
	{
		ModifyItem(sack);
		str = "getfrom";
	}
	else if (str == "get copper key from box")
	{
		ModifyItem(copper);
		str = "getfrom";
	}
	else if (str == "get silver key from box")
	{
		ModifyItem(silver);
		str = "getfrom";
	}
	else if (str == "get grenade from box")
	{
		ModifyItem(grenade);
		str = "getfrom";
	}
	else if (str == "get orb from box")
	{
		ModifyItem(orb);
		str = "getfrom";
	}

	//EQUIP ITEM

	else if (str == "equip sword")
	{
		ModifyItem(sword);
		str = "equip!";
	}
	else if (str == "equip shield")
	{
		ModifyItem(shield);
		str = "equip!";
	}
	else if (str == "equip copper key")
	{
		ModifyItem(copper);
		str = "equip!";
	}
	else if (str == "equip silver key")
	{
		ModifyItem(silver);
		str = "equip!";
	}
	else if (str == "equip sack of grain")
	{
		ModifyItem(sack);
		str = "equip!";
	}
	else if (str == "equip grenade")
	{
		ModifyItem(grenade);
		str = "equip!";
	}
	else if (str == "equip orb")
	{
		ModifyItem(orb);
		str = "equip!";
	}

	//UNEQUIP ITEM

	else if (str == "unequip sword")
	{
		ModifyItem(sword);
		str = "unequip!";
	}
	else if (str == "unequip shield")
	{
		ModifyItem(shield);
		str = "unequip!";
	}
	else if (str == "equip copper key")
	{
		ModifyItem(copper);
		str = "unequip!";
	}
	else if (str == "equip silver key")
	{
		ModifyItem(silver);
		str = "unequip!";
	}
	else if (str == "equip sack of grain")
	{
		ModifyItem(sack);
		str = "unequip!";
	}
	else if (str == "equip grenade")
	{
		ModifyItem(grenade);
		str = "unequip!";
	}
	else if (str == "equip orb")
	{
		ModifyItem(orb);
		str = "unequip!";
	}

	//STATS

	else if (str == "stats")
	{
		str = "stats!";
	}

	//EQUIPMENT

	else if (str == "equipment" || str == "look equipment" || str == "check equipment")
	{
		str = "equipment!";
	}

	//ELSE

	else
	{
		cout << "Unknown command" << endl << endl;
	}
}

Command::~Command(){};
