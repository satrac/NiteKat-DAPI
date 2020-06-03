#pragma once

#include <map>

#include "Player.h"
#include "Towner.h"
#include "Tile.h"
#include "Trigger.h"
#include "Monster.h"
#include "Object.h"
#include "Missile.h"
#include "Portal.h"


namespace DAPI
{

  enum struct StoreOption;

  struct GameData
  {
    int player;
    char stextflag;
    int pauseMode;
    bool menuOpen;
    int cursor;
    Tile dPiece[112][112];
    bool chrflag;
    bool invflag;
    bool qtextflag;
    std::string qtext;
    
    std::map<int, Player> playerList;
    std::map<int, Item> itemList;
    std::vector<int> groundItems;
    std::map<int, Towner> townerData;
    std::vector<StoreOption> storeList;
    std::vector<int> storeItems;
    std::vector<Trigger> triggerList;
    std::vector<Monster> monsterList;
    std::vector<Object> objectList;
    std::vector<Missile> missileList;
    std::vector<Portal> portalList;
  };
};