// 21_Inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int gHP = 100;


// 포함관계

struct Pos
{
    int x;
    int y;

    int DoJumToSai()
    {

    }

    int distance()
    {

    }
};


struct Stat
{
    int level;
    int hp;
    int stamina;
};

class GameObject
{
private:
    Stat stat;

public:
    virtual void Shouting()
    {

    }

    void Damaged()
    {
        stat.hp -= 10;
    }

    GameObject()
    {

    }

    virtual ~GameObject()
    {

    }
};

struct Player : public GameObject
{
private:
    int mp;
    int att;

public:
    Player()
    {

    }

    ~Player()
    {

    }

    virtual void Shouting() override
    {
        std::cout << "나는 플레이어다.";
    }
};

struct Monster : public GameObject
{
private:
    char* name;

public:
    Monster()
    {
        name = new char[256];
    }

    virtual ~Monster()
    {
        delete[] name;
    }

    virtual void Shouting() override
    {
        std::cout << "나는 몬스터어다.";
    }
};

class NPC : public GameObject
{
private:
    int mp;
    int att;

public:
    NPC()
    {

    }

    virtual ~NPC()
    {

    }

    virtual void Shouting() override
    {
        std::cout << "나는 NPC어다.";
    }
};


int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    //Player pl;
    //pl.Damaged();
    //pl
    //pl.Damaged

    //int* p;
    //char* cp = p;

    NPC* npc = new NPC();
    Monster* mon = new Monster();
    Player* player = new Player();

    player->Shouting();
    
    GameObject* allObject[3] = { npc, mon, player };
    
    npc->Damaged();
    mon->Damaged();
    player->Damaged();

    for (size_t i = 0; i < 3; i++)
    {
        //allObject[i]->Damaged();

        allObject[i]->Shouting();
    }
    int len = sizeof(GameObject);

    for (size_t i = 0; i < 3; i++)
    {
        delete allObject[i];
    }

    return 0;
}

