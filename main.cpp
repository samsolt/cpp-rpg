#include <iostream>
#include <pthread.h>
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

bool inBattle = false;
bool inVillage = false;

void refresh(){ // aktualizuje zobrazene informace
  system("clear");
  cout << "Health\tStamina\tMana\tGold\n";
  cout << health << "/" << maxHealth << "\t" << stamina << "/" << maxStamina << "\t" << mana << "/" << maxMana << endl;
  cout << "-----------------------------\n";

  if(inVillage == true){
    cout << "Nacházíte se ve vesnici\n\n";
    cout << "1) Bylinkářka\t2) Kovář\t3) Vyprovokovat stráže\t4) Fontána fentanylu\t5) Vydat se do lesa (pokračovat)\n";
  }
  if(inBattle == true){
    cout << "Jste v bitvě!\n\n";
    cout << "1) Útok\t2) Utéct\n";
  }
}

int main()
{
  char input;

  refresh();
}
