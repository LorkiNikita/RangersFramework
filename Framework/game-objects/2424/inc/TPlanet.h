#pragma once
#include "VMT.h"

struct TPlanetNews 
{
    int _00;
    int date;
    byte type;
    _gap _09;
    _gap _0A;
    _gap _0B;
    STR text;
};

struct TPlanetTempl 
{
    VMT cls;
    int type;
    STR mask_0;
    STR light_0;
    STR mask_1;
    STR light_1;
    int _14;
};

namespace TPlanetM 
{
    const wchar_t* PlanetOwnerString(TPlanet* planet);
}
struct TPlanet 
{
    VMT cls;

    uint32_t id;
    int32_t gen_seed;
    int32_t rnd_seed;
    int graph_no;
    STR name;
    TStar* star;
    _gap_32 _1C;
    _pair_double polar_pos;
    
    _gap _030;
    _gap _031;
    _gap _032;
    _gap _033;

    _gap _034;
    _gap _035;
    _gap _036;
    _gap _037;

    int radius;

    _gap _03C[4];

    double angle_speed;

    byte invention_levels[20];

    byte cur_invention;
    _gap _05D;
    _gap _05E;
    _gap _05F;

    float cur_invention_points;

    _gap _064;
    _gap _065;
    _gap _066;
    _gap _067;

    int population;

    byte eco;
    _gap _06D;
    _gap _06E;
    _gap _06F;

    _gap _070;
    _gap _071;
    _gap _072;
    _gap _073;

    byte owner;
    byte owner_faction; // 1 - coals
    byte race;
    byte gov;

    TGoodsShopItem goods[8];

    _gap_32 _0F8;
    _gap_32 _0FC;

    _gap _100;
    _gap _101;
    _gap _102;
    _gap _103;

    _gap _104;
    _gap _105;
    _gap _106;
    _gap _107;

    _gap _108;
    _gap _109;
    _gap _10A;
    _gap _10B;

    TList* relation_to_rangers;
    TList* equipment_store_items;
    TList* warriors;
    int spawned_rangers_count;
    int spawned_transports_count;

    int water_total;
    int water_researched;
    int land_total;
    int land_researched;
    int mountains_total;
    int mountains_researched;

    byte orbit_cnt;
    bool is_visited;
    _gap _143[2];
    
    TList* gone_items;
    int graph_raduis;
    TObjectSE* graph_planet;
    WSTR graph_name;
    _gap_32 _158;
    _gap_32 _15C;

    _gap _160;
    _gap _161;
    _gap _162;
    _gap _163;

    _gap _164;
    _gap _165;
    _gap _166;
    _gap _167;

    byte no_landing;
    byte no_shop_update;
    bool is_rogeria;
    _gap _16B;

    _gap _16C;
    _gap _16D;
    _gap _16E;
    _gap _16F;

    WSTR custom_faction;
};