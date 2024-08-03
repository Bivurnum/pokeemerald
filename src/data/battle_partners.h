//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 45
    [PARTNER_KYLE_WOODS] =
    {
#line 46
        .trainerName = _("KYLE"),
#line 47
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 48
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 55
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .ability = ABILITY_SOLAR_POWER,
#line 53
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 56
            .species = SPECIES_NIDORAN_M,
#line 56
            .gender = TRAINER_MON_MALE,
#line 59
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 58
            .ability = ABILITY_RIVALRY,
#line 57
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 60
    [PARTNER_BREN_WOODS] =
    {
#line 61
        .trainerName = _("BREN"),
#line 62
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 63
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 65
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 67
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 69
            .ability = ABILITY_COMPETITIVE,
#line 68
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 71
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 74
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 73
            .ability = ABILITY_INFILTRATOR,
#line 72
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 75
    [PARTNER_SPENCER_WOODS] =
    {
#line 76
        .trainerName = _("SPENCER"),
#line 77
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 78
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 80
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 82
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 85
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 84
            .ability = ABILITY_NO_GUARD,
#line 83
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 86
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 89
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 88
            .ability = ABILITY_OWN_TEMPO,
#line 87
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 90
    [PARTNER_KYLE_MUSEUM] =
    {
#line 91
        .trainerName = _("KYLE"),
#line 92
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 93
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 95
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 97
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 99
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 100
            .ability = ABILITY_SOLAR_POWER,
#line 98
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 102
            .species = SPECIES_NIDORAN_M,
#line 102
            .gender = TRAINER_MON_MALE,
#line 104
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 105
            .ability = ABILITY_RIVALRY,
#line 103
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 107
    [PARTNER_BREN_MUSEUM] =
    {
#line 108
        .trainerName = _("BREN"),
#line 109
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 110
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 112
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 114
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 117
            .ability = ABILITY_COMPETITIVE,
#line 115
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 122
            .ability = ABILITY_INFILTRATOR,
#line 120
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 124
    [PARTNER_SPENCER_MUSEUM] =
    {
#line 125
        .trainerName = _("SPENCER"),
#line 126
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 127
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender = 
#line 129
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 131
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 134
            .ability = ABILITY_NO_GUARD,
#line 132
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 136
            .species = SPECIES_TINKATINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 139
            .ability = ABILITY_OWN_TEMPO,
#line 137
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 141
    [PARTNER_WALLY_ROUTE_114] =
    {
#line 142
        .trainerName = _("WALLY"),
#line 143
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 144
        .trainerPic = TRAINER_BACK_PIC_WALLY,
        .encounterMusic_gender = 
#line 146
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 148
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 151
            .ability = ABILITY_SYNCHRONIZE,
#line 149
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 152
                MOVE_DRAINING_KISS,
                MOVE_CONFUSION,
                MOVE_HYPNOSIS,
            },
            },
        },
    },
