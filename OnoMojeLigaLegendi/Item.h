#ifndef ITEM_DEF
#define ITEM_DEF
#include <iostream>
#include "Map.h"
#include "dinstring.hpp"
using namespace std;

enum ItemType
{
    VISION, CONSUMABLE, MOVEMENT, MANA,
    MANA_REGEN, AP, CDR, MAGIC_PEN, DMG, CRIT,
    AS, LS, ARMOR_PEN, HEALTH, HEALTH_REGEN, MR, ARMOR
};

class Item
{
private:
    Map gamemode;
    DinString name;
    ItemType type;
    bool active;
    int price;
public:
    Item(){}
    Item(DinString name, int num, List<DinString> l, DinString n, ItemType t, bool a, int p) : gamemode(name, num, l)
    {
        name = n;
        type = t;
        active = a;
        price = p;
    }
    Item(const Item &i) : gamemode(i.gamemode.name, i.gamemode.numPlayers, i.gamemode.lanes)
    {
        name = i.name;
        type = i.type;
        active = i.active;
        price = i.price;
    }
    ~Item(){}
};

#endif