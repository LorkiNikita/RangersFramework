#pragma once
#include "VMT.h"

struct TStarDist {
    int dist;
    TStar* star;
};

namespace TStarM {
    int StarShips(TStar* star);
    TShip* StarShips(TStar* star, int index);
};

struct TStar {
    VMT cls;

    uint32_t id;
    int32_t gen_seed;
    int32_t rnd_seed;
    STR name;
    _pair_float pos;

    word _01C;
    _gap _01E;
    _gap _01F;

    _gap _020;
    _gap _021;
    _gap _022;
    _gap _023;

    TList* planets;
    TList* asteroids;
    TList* ships;
    TList* items_in_space;
    TList* drop_list;
    TList* missiles;
    STR process_str; // Process normal?

    _gap _040;  // TStarStatus ?
    _gap _041;
    byte owner;
    _gap _043;

    byte custom_faction;
    _gap _045;
    _gap _046;
    _gap _047;

    byte battle;
    byte series;
    _gap _04A;
    _gap _04B;

    _gap _04C;
    _gap _04D;
    _gap _04E;
    _gap _04F;

    _gap _050;
    _gap _051;
    _gap _052;
    _gap _053;

    _gap _054;
    _gap _055;
    _gap _056;
    _gap _057;

    _gap _058;
    _gap _059;
    _gap _05A;
    _gap _05B;

    float safe_radius;
    
    float damage_radius;

    _gap _064;
    _gap _065;
    _gap _066;
    _gap _067;

    int radius;
    TObjectSE* graph_object;
    _gap_32 _070;
    _gap_32 _074;
    _gap_32 _078;
    int fon_image;

    _gap _080;
    _gap _081;
    _gap _082;
    _gap _083;

    _gap _084;
    _gap _085;
    _gap _086;
    _gap _087;

    _gap _088;
    _gap _089;
    _gap _08A;
    _gap _08B;

    _gap _08C;
    _gap _08D;
    _gap _08E;
    _gap _08F;

    _gap _090;
    _gap _091;
    _gap _092;
    _gap _093;

    TStarDist* stars;

    uint32_t domikscount;

    _gap _09C;
    _gap _09D;
    _gap _09E;
    _gap _09F;

    _gap _0A0;
    _gap _0A1;
    _gap _0A2;
    _gap _0A3;

    _gap _0A4;
    _gap _0A5;
    _gap _0A6;
    _gap _0A7;

    _gap _0A8;
    _gap _0A9;
    _gap _0AA;
    _gap _0AB;

    _gap _0AC;
    _gap _0AD;
    _gap _0AE;
    _gap _0AF;

    _gap _0B0;
    _gap _0B1;
    _gap _0B2;
    _gap _0B3;

    _gap _0B4;
    _gap _0B5;
    _gap _0B6;
    _gap _0B7;

    _gap _0B8;
    _gap _0B9;
    _gap _0BA;
    _gap _0BB;

    _gap _0BC;
    _gap _0BD;
    _gap _0BE;
    _gap _0BF;

    _gap _0C0;
    _gap _0C1;
    _gap _0C2;
    _gap _0C3;

    _gap _0C4;
    _gap _0C5;
    _gap _0C6;
    _gap _0C7;

    _gap _0C8;
    _gap _0C9;
    _gap _0CA;
    _gap _0CB;
    
    _gap _0CC;
    _gap _0CD;
    _gap _0CE;
    _gap _0CF;

    TConstellation* con;

    _gap _0D4;
    _gap _0D5;
    _gap _0D6;
    _gap _0D7;

    byte no_come_kling;
    _gap _0D9;
    _gap _0DA;
    _gap _0DB;

    _gap _0DC;
    _gap _0DD;
    _gap _0DE;
    _gap _0DF;

    _gap _0E0;
    _gap _0E1;
    _gap _0E2;
    _gap _0E3;

    TList* _0E4;

    _gap _0E8;
    _gap _0E9;
    _gap _0EA;
    _gap _0EB;

    _gap _0EC;
    _gap _0ED;
    _gap _0EE;
    _gap _0EF;

    byte filmbuild;
    _gap _0F1;
    _gap _0F2;
    _gap _0F3;

    _gap _0F4;
    _gap _0F5;
    _gap _0F6;
    _gap _0F7;

    _gap _0F8;
    _gap _0F9;
    _gap _0FA;
    _gap _0FB;

    _gap _0FC;
    _gap _0FD;
    _gap _0FE;
    _gap _0FF;

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

    _gap _10C;
    _gap _10D;
    _gap _10E;
    _gap _10F;

    _gap _110;
    _gap _111;
    _gap _112;
    _gap _113;
};