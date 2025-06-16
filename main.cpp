#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int maxHealth = 100;
int health = maxHealth;
int maxStamina = 100;
int stamina = maxStamina;
int maxMana = 100;
int mana = maxMana;
int gold = 0; // balance uzivatele penizek
int defense = 1; // hodnota kterou se vynasobi prijaty dmg, eg. health -= health-dmg*defense
float attack = 1; // ditto ale s damagem rozdanym

struct Enemy {
  int maxHealth;
  int health;
  float attack;
};

bool inBattle = false;
bool inVillage = false;

void refresh(string enemy1 = "0", int enemy1MaxHealth = 0, int enemy1Health = 0, string enemy2 = "0", int enemy2MaxHealth = 0, int enemy2Health = 0, string enemy3 = "0", int enemy3MaxHealth = 0, int enemy3Health = 0){ // aktualizuje zobrazene informace
  system("clear");
  cout << "Health\tStamina\tMana\tGold\n";
  cout << health << "/" << maxHealth << "\t" << stamina << "/" << maxStamina << "\t" << mana << "/" << maxMana << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

  if(inVillage == true){
    cout << "Nacházíte se ve vesnici\n\n";
    cout << "1) Bylinkářka\t2) Kovář\t3) Vyprovokovat stráže\t4) Fontána fentanylu\t5) Vydat se do lesa (pokračovat)\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
  }
  if(inBattle == true){
    cout << "Jste v bitvě!\n\n";
    cout << "1) Útok\t2) Utéct\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    cout << enemy1 << "\t";
    if(enemy2 != "0"){
      cout << enemy2 << "\t";
    }
    if(enemy3 != "0"){
      cout << enemy3 << "\t";
    }
    cout << endl;

    cout << enemy1Health << "/" << enemy1MaxHealth << "\t";
    if(enemy2 != "0"){
      cout << enemy2Health << "/" << enemy2MaxHealth << "\t";
    }
    if(enemy3 != "0"){
      cout << enemy3Health << "/" << enemy3MaxHealth << "\t";
    }
    cout << endl << endl;

    cout << "\tplayer\n" << "\t" << health << "/" << maxHealth << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
  }
}

void battle(string enemy1Type, string enemy2Type, string enemy3Type){
  Enemy enemy1;
  if(enemy1Type == "0"){
    enemy1.maxHealth = 0;
    enemy1.health = 0;
    enemy1.attack = 0;
  }
  else if(enemy1Type == "slime"){
    enemy1.maxHealth = 30;
    enemy1.health = enemy1.maxHealth;
    enemy1.attack = 1;
  }
  else if(enemy1Type == "goblin"){
    enemy1.maxHealth = 40;
    enemy1.health = enemy1.maxHealth;
    enemy1.attack = 1.5;
  }
  else if(enemy1Type == "direwolf"){
    enemy1.maxHealth = 50;
    enemy1.health = enemy1.maxHealth;
    enemy1.attack = 2;
  }

  Enemy enemy2;
  if(enemy2Type == "0"){
    enemy2.maxHealth = 0;
    enemy2.health = 0;
    enemy2.attack = 0;
  }
  else if(enemy2Type == "slime"){
    enemy2.maxHealth = 30;
    enemy2.health = enemy2.maxHealth;
    enemy2.attack = 1;
  }
  else if(enemy2Type == "goblin"){
    enemy2.maxHealth = 40;
    enemy2.health = enemy2.maxHealth;
    enemy2.attack = 1.5;
  }
  else if(enemy2Type == "direwolf"){
    enemy2.maxHealth = 50;
    enemy2.health = enemy2.maxHealth;
    enemy2.attack = 2;
  }

  Enemy enemy3;
  if(enemy3Type == "0"){
    enemy3.maxHealth = 0;
    enemy3.health = 0;
    enemy3.attack = 0;
  }
  else if(enemy3Type == "slime"){
    enemy3.maxHealth = 30;
    enemy3.health = enemy3.maxHealth;
    enemy3.attack = 1;
  }
  else if(enemy3Type == "goblin"){
    enemy3.maxHealth = 40;
    enemy3.health = enemy3.maxHealth;
    enemy3.attack = 1.5;
  }
  else if(enemy3Type == "direwolf"){
    enemy3.maxHealth = 50;
    enemy3.health = enemy3.maxHealth;
    enemy3.attack = 2;
  }
  inBattle = true;
  refresh(enemy1Type, enemy1.maxHealth, enemy1.health, enemy2Type, enemy2.maxHealth, enemy2.health, enemy3Type, enemy3.maxHealth, enemy3.health);
}

int main()
{
  char input;
  refresh();
  battle("slime", "slime", "slime");
}
