#include <iostream>
#include <sstream>
#include <string>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    string again;

    do {
        int selection;
        int select;
        int bagSelect;
        int menu;
        int attack;
        int heal;
        int health;
        int wolf;
        int snake;
        int snakeAttack;
        int wolfAttack;
        int swordsman;
        int swordAttack;

        health = 40;
        wolf = 30;
        swordsman = 45;
        snake = 150;

        string name;

        system("cls");
        cout << "\n\n\n                         ============================" << endl;
        cout << "                         Magical Adventure of Destiny" << endl;
        cout << "                         ============================\n\n\n\n" << endl;
        cout << "Press any key to continue\n";
        system("pause >nul");
        system("cls");

        for (int Q = 2; Q > 0; Q--) {

            for (int m = 5; m > 0; m--) {
                cout << " L" << endl;
            }

            for (int n = 5; n > 0; n--) {
                cout << " LO" << endl;
                system(" cls");
            }
            for (int n = 5; n > 0; n--) {
                cout << " LOA" << endl;
                system(" cls");
            }
            for (int n = 5; n > 0; n--) {
                cout << " LOAD" << endl;
                system(" cls");
            }
            for (int n = 5; n > 0; n--) {
                cout << " LOADI" << endl;
                system(" cls");
            }
            for (int m = 5; m > 0; m--) {
                cout << " LOADIN" << endl;
                system(" cls");
            }
            for (int m = 5; m > 0; m--) {
                cout << " LOADING" << endl;
                system(" cls");
            }
            for (int m = 5; m > 0; m--) {
                cout << " LOADING." << endl;
                system(" cls");
            }
            for (int m = 5; m > 0; m--) {
                cout << " LOADING.." << endl;
                system(" cls");
            }
            for (int m = 5; m > 0; m--) {
                cout << " LOADING..." << endl;
                system(" cls");
            }
        }
        while (true) {
            cout << "Enter your name (must contain no spaces)" << endl;
            cin >> name;
            if (name.length() < 2)
                cout << "Must be longer than 1 character.\n" << endl;
            else
                break;
        }
        cout << endl;
        cout << "Cool!" << endl;
        cout << endl;
        cout << "Your name is " << name << "." << endl;


        system("pause");
        system("cls");
        cout << "It's dangerous to go alone. Take this." << endl;
        cout << "  /|" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "  ||" << endl;
        cout << "[====]" << endl;
        cout << "  ||  " << endl;
        cout << "  <>  " << endl;
        cout << "Magical Sword of Destiny" << endl;
        cout << "Damage: 4-8" << endl;

        system("pause");
        system("cls");
        cout << "You, " << name
             << ", are going on a quest to find the magical hat of destiny.\nTo do this you must travel across the land and fight evil monsters.\nGood luck.\n";

        system("pause");
        system("cls");

        cout << "You set out on your journey." << endl;

        system("pause");
        system("cls");

        cout << "You have encountered an enemy!" << endl;

        system("pause");
        system("cls");

        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "1111111111111111111111111111111111111111000000000000000000000000000000000000000"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "0000000000000000000000000000000000000000111111111111111111111111111111111111111"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "1111111111111111111111111111111111111111000000000000000000000000000000000000000"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "0000000000000000000000000000000000000000111111111111111111111111111111111111111"
                    << endl;
        }


        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        system("cls");

        cout << "Prepare for battle!" << endl;
        do {
            system("pause");
            system("cls");

            cout << " _____O>                        Wolf" << endl;
            cout << "/|   |                          HP: " << wolf << "/30" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "                                " << name << endl;
            cout << "                                HP:" << health << "/40" << endl;
            cout << "What will " << name << " do?" << endl;
            cout << "                                                                    1. Attack"
                 << endl;
            cout << "(select number and press enter)                                     2. Heal"
                 << endl;

            cin >> selection;
            switch (selection) {
                case 1:


                    system("cls");

                    attack = rand() % 5 + 4;
                    wolf -= attack;

                    cout << " _____O>                        Wolf" << endl;
                    cout << "/|   |                          HP: " << wolf << "/30" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/40" << endl;
                    cout << "You used attack! It did " << attack << " damage!\n";
                    cout << "                                                                   "
                         << endl;
                    cout << "                                                                   "
                         << endl;
                    if (wolf < 1) {
                        break;
                    } else

                        system("pause");
                    system("cls");

                    wolfAttack = rand() % 4 + 4;
                    health -= wolfAttack;

                    cout << " _____O>                        Wolf" << endl;
                    cout << "/|   |                          HP: " << wolf << "/30" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/40" << endl;
                    cout << "Wolf attacked! It did " << wolfAttack << " damage!\n";
                    cout << "                                                                    "
                         << endl;
                    cout << "																     "
                         << endl;
                    if (health < 1) {
                        cout << "You died! GAME OVER\n";
                        return 0;
                    } else
                        break;

                case 2:


                    system("cls");

                    heal = rand() % 7 + 3;

                    if (health == 40) {
                        cout << " _____O>                        Wolf" << endl;
                        cout << "/|   |                          HP: " << wolf << "/30" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                        cout << "                                " << name << endl;
                        cout << "                                HP:" << health << "/40" << endl;
                        cout << "You are already at full  health!\n";
                        cout << "                                                           "
                             << endl;
                        cout << "															"
                             << endl;
                        system("pause");
                        system("cls");


                    } else if (health + heal > 40) {
                        health = 40;
                        cout << " _____O>                        Wolf" << endl;
                        cout << "/|   |                          HP: " << wolf << "/30" << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                        cout << " " << endl;
                        cout << "                                " << name << endl;
                        cout << "                                HP:" << health << "/40" << endl;
                        cout << "You have healed to full!\n";
                        cout << "                                                           "
                             << endl;
                        cout << "															"
                             << endl;

                        system("pause");
                        system("cls");

                    } else
                        health += heal;
                    cout << " _____O>                        Wolf" << endl;
                    cout << "/|   |                          HP: " << wolf << "/30" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/40" << endl;
                    cout << "Your health is now " << health << "/40.\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;

                    if (wolf < 1) {
                        break;
                    } else

                        system("pause");
                    system("cls");

                    wolfAttack = rand() % 6 + 4;
                    health -= wolfAttack;

                    cout << " _____O>                        Wolf" << endl;
                    cout << "/|   |                          HP: " << wolf << "/30" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/40" << endl;
                    cout << "Wolf attacked! It did " << wolfAttack << " damage!\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;

                    if (health < 1) {
                        cout << "You died! GAME OVER\n";
                        return 0;
                    } else
                        break;
            }

        } while (wolf > 0);

        system("pause");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/40" << endl;
        cout << "You have slain wolf!\n";
        cout << " \n";

        system("pause >nul");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/40" << endl;
        cout << "You have slain wolf!\n";
        cout << "Congratz! \n";

        system("pause >nul");
        system("cls");

        health = 50;

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/50" << endl;
        cout << "You have leveled up to level 2!\n";
        cout << "Health has incresed by 10! Attack has been increased by 3!\n";
        cout << "Heal has increased by 6!\n";

        system("pause");
        system("cls");

        cout << "You continue on your journey." << endl;

        system("pause");
        system("cls");
        select = 0;
        while (select != 1) {

            system("cls");

            cout << "What will you do next?" << endl;
            cout << "1. Continue\n";
            cout << "2. Bag\n";
            cout << "3. Info\n";
            cin >> select;

            switch (select) {

                case 1:


                    break;
                case 2:

                    system("cls");

                    cout << "=====================\n";
                    cout << "         Bag         \n";
                    cout << "=====================\n";
                    cout << " \n";
                    cout << "1. Potion            Heals 20 HP\n";
                    cout << "                     You have 1.\n";
                    cout << "2. Super Potion      Heals 50 HP\n";
                    cout << "                     You have 1.\n";
                    cout << "3. Back\n";
                    cout << "(Type number and enter to use)\n";
                    cin >> bagSelect;
                    switch (bagSelect) {

                        case 1:
                            if (health == 50) {
                                cout << "You are already at full  health!\n";
                                system("pause");
                                break;
                            } else if (health > 29) {
                                health = 50;
                                cout << "You have healed to full!\n";
                                system("pause");
                                break;
                            } else
                                health += 20;
                            cout << "Your health is now " << health << "/50.\n";
                            system("pause");
                            break;

                        case 2:
                            if (health = 50) {
                                cout << "You are already at full  health!\n";
                                system("pause");
                                break;
                            } else if (health > -1) {
                                health = 50;
                                cout << "You have healed to full!\n";
                                system("pause");
                                break;
                            } else
                                health += 50;
                            cout << "Your health is now " << health << "/50.\n";
                            system("pause");
                            break;

                        case 3:
                            break;
                    }
                    break;
                case 3:

                    system("cls");

                    cout << "====================\n";
                    cout << "        Info        \n";
                    cout << "====================\n";
                    cout << " \n";
                    cout << "Level: 2\n";
                    cout << "HP:" << health << "/50\n";
                    cout << "Heal: 9-15\n";
                    cout << "Attack: 3\n";
                    cout << "Weapon: Magical sword of destiny\n";
                    cout << "        Damage: 4-8\n";

                    system("pause");
                    system("cls");

                    break;
            }
        }
        system("cls");

        cout << "You continue to continue on your journey.\n";

        system("pause");
        system("cls");

        cout << "You walk into the Magical Cave of Destiny.\n";
        cout << "                     ___________________     \n";
        cout << "                    (  #             #  )    \n";
        cout << "                   (       _____ #       )   \n";
        cout << "                  (       (####)    #    )   \n";
        cout << "                 (  #    (#######)        )  \n";
        cout << "                (       (########)    #    )  \n";
        cout << "_______________ ( __#___(#########)________)_______________________\n";

        system("pause");
        system("cls");

        cout << "You have encountered an enemy!" << endl;

        system("pause");
        system("cls");

        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "1111111111111111111111111111111111111111000000000000000000000000000000000000000"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "0000000000000000000000000000000000000000111111111111111111111111111111111111111"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "1111111111111111111111111111111111111111000000000000000000000000000000000000000"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "0000000000000000000000000000000000000000111111111111111111111111111111111111111"
                    << endl;
        }


        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        system("cls");

        cout << "Prepare for battle!" << endl;

        do {
            system("pause");
            system("cls");

            cout << "      /	                        Swordsman" << endl;
            cout << "     /                        HP: " << swordsman << "/45" << endl;
            cout << ":(__/_\n";
            cout << "/| /\n";
            cout << "/ )\n";
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "                                " << name << endl;
            cout << "                                HP:" << health << "/50" << endl;
            cout << "What will " << name << " do?" << endl;
            cout << "                                                                    1. Attack"
                 << endl;
            cout << "(select number and press enter)                                     2. Heal"
                 << endl;

            cin >> selection;
            switch (selection) {
                case 1:


                    system("cls");

                    attack = rand() % 7 + 7;
                    swordsman -= attack;

                    cout << "      /	                        Swordsman" << endl;
                    cout << "     /                        HP: " << swordsman << "/45" << endl;
                    cout << ":(__/_\n";
                    cout << "/| /\n";
                    cout << "/ )\n";
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/50" << endl;
                    cout << "You used attack! It did " << attack << " damage!\n";
                    cout << "                                                                   "
                         << endl;
                    cout << "                                                                   "
                         << endl;
                    if (swordsman < 1) {
                        break;
                    } else

                        system("pause");
                    system("cls");

                    swordAttack = rand() % 10 + 5;
                    health -= swordAttack;

                    cout << "      /	                        Swordsman" << endl;
                    cout << "     /                        HP: " << swordsman << "/45" << endl;
                    cout << ":(__/_\n";
                    cout << "/| /\n";
                    cout << "/ )\n";
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/50" << endl;
                    cout << "Swordsman attacked! It did " << swordAttack << " damage!\n";
                    cout << "                                                                    "
                         << endl;
                    cout << "																     "
                         << endl;
                    if (health < 1) {
                        cout << "You died! GAME OVER\n";
                        return 0;
                    } else
                        break;

                case 2:


                    system("cls");


                    heal = rand() % 7 + 9;
                    health += heal;

                    cout << "      /	                        Swordsman" << endl;
                    cout << "     /                        HP: " << swordsman << "/45" << endl;
                    cout << ":(__/_\n";
                    cout << "/| /\n";
                    cout << "/ )\n";
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/50" << endl;
                    cout << "You used heal! It healed " << heal << " HP!\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;
                    if (swordsman < 1) {
                        break;


                    } else

                        system("pause");
                    system("cls");

                    swordAttack = rand() % 10 + 5;
                    health -= swordAttack;

                    cout << "      /	                        Swordsman" << endl;
                    cout << "     /                        HP: " << swordsman << "/45" << endl;
                    cout << ":(__/_\n";
                    cout << "/| /\n";
                    cout << "/ )\n";
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/50" << endl;
                    cout << "Swordsman attacked! It did " << swordAttack << " damage!\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;
                    break;
            }

        } while (swordsman > 0);

        system("pause");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/50" << endl;
        cout << "You have slain swordsman!\n";
        cout << " \n";

        system("pause >nul");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/50" << endl;
        cout << "You have slain swordsman!\n";
        cout << "Congratz! \n";

        system("pause >nul");
        system("cls");

        cout << "You continue your venturing...\n";

        system("pause >nul");
        system("cls");


        for (int o = 20; o > 0; o--) {
            cout << ".\n";
            system("cls");
        }
        for (int o = 20; o > 0; o--) {
            cout << "..\n";
            system("cls");
        }
        for (int o = 20; o > 0; o--) {
            cout << "...\n";
            system("cls");
        }
        for (int o = 20; o > 0; o--) {
            cout << "....\n";
            system("cls");
        }
        for (int o = 20; o > 0; o--) {
            cout << ".....\n";
            system("cls");
        }

        cout << "        ====\n";
        cout << "        &00&            Look! You found the\n";
        cout << "        0&00            Extra Magical Sword of Destiny\n";
        cout << "        &0&0            Attack: 18-30\n";
        cout << "        0&0&            Health: +40\n";
        cout << "[========{}========]\n";
        cout << "[========<>========]\n";
        cout << "       | || |   *\n";
        cout << "   *   | || |\n";
        cout << "       | || |  *\n";
        cout << "     * | || |\n";
        cout << "       | || |\n";
        cout << "       | || |    *\n";
        cout << " *     | || |\n";
        cout << "       | || |    *\n";
        cout << "       | || |\n";
        cout << "   *   | || |\n";
        cout << "       | || |  *\n";
        cout << "     * | || |\n";
        cout << "       | || |       *\n";
        cout << "  *    | ||/|\n";
        cout << "       | |//    *\n";
        cout << "     * | //\n";
        cout << "       |//\n";
        cout << "    *  |/         *\n";

        system("pause");
        system("cls");

        health = 100;
        cout << "You have leveled up to level 3!\n";
        cout << "Health has incresed by 10!\n";
        cout << "Attack has been increased by 5!\n";
        cout << "Heal has increased by 13!\n";

        system("pause");
        system("cls");

        cout << "You continue on your journey." << endl;

        system("pause");
        system("cls");

        select = 0;
        while (select != 1) {

            system("cls");

            cout << "What will you do next?" << endl;
            cout << "1. Continue\n";
            cout << "2. Bag\n";
            cout << "3. Info\n";
            cin >> select;

            switch (select) {

                case 1:


                    break;
                case 2:

                    system("cls");

                    cout << "=====================\n";
                    cout << "         Bag         \n";
                    cout << "=====================\n";
                    cout << " \n";
                    cout << "1. Potion            Heals 20 HP\n";
                    cout << "                     You have 1.\n";
                    cout << "2. Super Potion      Heals 50 HP\n";
                    cout << "                     You have 1.\n";
                    cout << "3. Back\n";
                    cout << "(Type number and enter to use)\n";
                    cin >> bagSelect;
                    switch (bagSelect) {

                        case 1:
                            if (health == 100) {
                                cout << "You are already at full health!\n";
                                system("pause");
                                break;
                            } else if (health > 79) {
                                health = 100;
                                cout << "You have healed to full!\n";
                                system("pause");
                                break;
                            } else
                                health += 20;
                            cout << "Your health is now " << health << "/100.\n";
                            system("pause");
                            break;

                        case 2:
                            if (health = 100) {
                                cout << "You are already at full  health!\n";
                                system("pause");
                                break;
                            } else if (health > 49) {
                                health = 100;
                                cout << "You have healed to full!\n";
                                system("pause");
                                break;
                            } else
                                health += 100;
                            cout << "Your health is now " << health << "/100.\n";
                            system("pause");
                            break;

                        case 3:
                            break;
                    }
                    break;
                case 3:

                    system("cls");

                    cout << "====================\n";
                    cout << "        Info        \n";
                    cout << "====================\n";
                    cout << " \n";
                    cout << "Level: 3\n";
                    cout << "HP:" << health << "/100\n";
                    cout << "Attack: 8\n";
                    cout << "Heal: 22-28\n";
                    cout << "Weapon: Extra Magical sword of destiny\n";
                    cout << "        Damage: 18-31\n";

                    system("pause");
                    system("cls");

                    break;
            }
        }

        system("cls");

        cout << "The adventure continues...\n";

        system("pause");
        system("cls");

        cout << "You see the Magical Hat of Destiny!\n";
        cout << "But it is being guarded by Snake, the giant serphent monster!\n";

        system("pause");
        system("cls");

        cout << "Boss Battle!" << endl;

        system("pause");
        system("cls");

        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "11111111111111111111111111111111111BOSSBATTLE0000000000000000000000000000000000"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "00000000000000000000000000000000000BOSSBATTLE1111111111111111111111111111111111"
                    << endl;
        }

        for (int n = 50; n > 0; n--) {
            cout
                    << "11111111111111111111111111111111111BOSSBATTLE0000000000000000000000000000000000"
                    << endl;
        }
        for (int n = 50; n > 0; n--) {
            cout
                    << "00000000000000000000000000000000000BOSSBATTLE1111111111111111111111111111111111"
                    << endl;
        }


        for (int m = 70; m > 0; m--) {
            cout << "                                                                              "
                 << endl;
        }

        system("cls");

        cout << "Prepare for boss battle!" << endl;
        do {
            system("pause");
            system("cls");

            cout << "    __                          Snake" << endl;
            cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
            cout << "   | | " << endl;
            cout << " __/ / " << endl;
            cout << "/ __/ " << endl;
            cout << "                                " << name << endl;
            cout << "                                HP:" << health << "/100" << endl;
            cout << "What will " << name << " do?" << endl;
            cout << "                                                                    1. Attack"
                 << endl;
            cout << "(select number and press enter)                                     2. Heal"
                 << endl;

            cin >> selection;
            switch (selection) {
                case 1:


                    system("cls");

                    attack = rand() % 17 + 22;
                    snake -= attack;

                    cout << "    __                          Snake" << endl;
                    cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                    cout << "   | | " << endl;
                    cout << " __/ / " << endl;
                    cout << "/ __/ " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/100" << endl;
                    cout << "You used attack! It did " << attack << " damage!\n";
                    cout << "                                                                   "
                         << endl;
                    cout << "                                                                   "
                         << endl;

                    if (snake < 1) {
                        break;
                    } else

                        system("pause");
                    system("cls");

                    snakeAttack = rand() % 15 + 16;
                    health -= snakeAttack;

                    cout << "    __                          Snake" << endl;
                    cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                    cout << "   | | " << endl;
                    cout << " __/ / " << endl;
                    cout << "/ __/ " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/100" << endl;
                    cout << "Snake attacked! It did " << snakeAttack << " damage!\n";
                    cout << "                                                                    "
                         << endl;
                    cout << "																     "
                         << endl;
                    if (health < 1) {
                        cout << " You died! GAME OVER\n";
                        return 0;
                    } else
                        break;

                case 2:

                    system("cls");

                    heal = rand() % 7 + 22;

                    if (health == 100) {
                        cout << "    __                          Snake" << endl;
                        cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                        cout << "   | | " << endl;
                        cout << " __/ / " << endl;
                        cout << "/ __/ " << endl;
                        cout << "                                " << name << endl;
                        cout << "                                HP:" << health << "/100" << endl;
                        cout << "You are already at full  health!\n";
                        cout << "                                                           "
                             << endl;
                        cout << "															"
                             << endl;
                        system("pause");
                        system("cls");


                    } else if (health + heal > 100) {
                        health = 100;
                        cout << "    __                          Snake" << endl;
                        cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                        cout << "   | | " << endl;
                        cout << " __/ / " << endl;
                        cout << "/ __/ " << endl;
                        cout << "                                " << name << endl;
                        cout << "                                HP:" << health << "/100" << endl;
                        cout << "You have healed to full!\n";
                        cout << "                                                           "
                             << endl;
                        cout << "															"
                             << endl;

                        system("pause");
                        system("cls");

                    } else
                        health += heal;
                    cout << "    __                          Snake" << endl;
                    cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                    cout << "   | | " << endl;
                    cout << " __/ / " << endl;
                    cout << "/ __/ " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/100" << endl;
                    cout << "You have healed " << heal << "HP.\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;

                    if (snake < 1) {
                        break;
                    } else

                        system("pause");
                    system("cls");

                    snakeAttack = rand() % 15 + 16;
                    health -= snakeAttack;

                    cout << "    __                          Snake" << endl;
                    cout << "   / *_>--<                     HP: " << snake << "/150" << endl;
                    cout << "   | | " << endl;
                    cout << " __/ / " << endl;
                    cout << "/ __/ " << endl;
                    cout << "                                " << name << endl;
                    cout << "                                HP:" << health << "/100" << endl;
                    cout << "Snake attacked! It did " << snakeAttack << " damage!\n";
                    cout << "                                                           " << endl;
                    cout << "															" << endl;

                    if (health < 1) {
                        cout << " You died! GAME OVER\n";
                        return 0;
                    } else
                        break;
            }

        } while (snake > 0);

        system("pause");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/100" << endl;
        cout << "You have slain Snake!\n";
        cout << " \n";

        system("pause >nul");
        system("cls");

        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << "                                " << name << endl;
        cout << "                                HP:" << health << "/100" << endl;
        cout << "You have slain Snake!\n";
        cout << "Congratz! \n";

        system("pause >nul");
        system("cls");

        cout << "    __________\n";
        cout << "   |          |\n";
        cout << "   |   *      |\n";
        cout << "   |          |\n";
        cout << "   |      *   |\n";
        cout << "   | *        |\n";
        cout << "   |==========|\n";
        cout << " __|==========|__\n";
        cout << "[________________]\n";
        cout << "You have found the Magical Hat of Destiny!\n";

        system("pause >nul");

        cout << "\n Congratulations, " << name << ", You win!\n\n";

        system("pause");
        system("cls");

        cout << "========\n";
        cout << "Credits:\n";
        cout << "========\n";

        system("pause");
        system("cls");

        cout << "Game Design...........Young-Rae Kim\n\n";
        cout << "Art...................Young-Rae Kim\n\n";
        cout << "Animations............Young-Rae Kim\n\n";
        cout << "Story.................Young-Rae Kim\n\n";
        cout << "C++ Training..........Snake\n\n";

        system("pause");
        system("cls");

        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << "                                  =========\n";
        cout << "                                  GAME OVER\n";
        cout << "                                  =========\n";
        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << " \n";

        system("pause >nul");
        system("cls");

        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << " \n";
        cout << "                                  =========\n";
        cout << "                                  GAME OVER\n";
        cout << "                                  =========\n";
        cout << " \n";
        cout << "                               ===============\n";
        cout << "                               Play again? Y/N" << endl;
        cout << "                               ===============\n";
        cin >> again;
    } while (again != "n" && again != "no" && again != "No" && again != "NO" && again != "N" &&
             again != "stop" && again != "STOP" && again != "quit" && again != "enough" &&
             again != "exit" && again != "Exit" && again != "Quit" && again != "never" &&
             again != "NEVER");

    system("cls");

    cout << "Farewell...\n";

    return 0;
}