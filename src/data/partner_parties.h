static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 42,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 43,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 44,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon sParty_KylePetalburgWoods[] = {
    {
        .species = SPECIES_CHARMANDER,
        .ability = ABILITY_SOLAR_POWER,
        .lvl = 11,
    },
    {
        .species = SPECIES_NIDORAN_M,
        .ability = ABILITY_RIVALRY,
        .lvl = 8,
    }
};

static const struct TrainerMon sParty_BrenPetalburgWoods[] = {
    {
        .species = SPECIES_PIPLUP,
        .ability = ABILITY_COMPETITIVE,
        .lvl = 11,
    },
    {
        .species = SPECIES_ZUBAT,
        .ability = ABILITY_INFILTRATOR,
        .lvl = 6,
    }
};

static const struct TrainerMon sParty_SpencerPetalburgWoods[] = {
    {
        .species = SPECIES_MACHOP,
        .ability = ABILITY_NO_GUARD,
        .lvl = 11,
    },
    {
        .species = SPECIES_TINKATINK,
        .ability = ABILITY_OWN_TEMPO,
        .lvl = 8,
    }
};

static const struct TrainerMon sParty_KyleMuseum[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .lvl = 15,
        .species = SPECIES_CHARMANDER,
        .ability = ABILITY_SOLAR_POWER,
    },
    {
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .lvl = 14,
        .species = SPECIES_NIDORAN_M,
        .ability = ABILITY_RIVALRY,
    }
};

static const struct TrainerMon sParty_BrenMuseum[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .lvl = 15,
        .species = SPECIES_PIPLUP,
        .ability = ABILITY_COMPETITIVE,
    },
    {
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .lvl = 14,
        .species = SPECIES_ZUBAT,
        .ability = ABILITY_INFILTRATOR,
    }
};

static const struct TrainerMon sParty_SpencerMuseum[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .lvl = 15,
        .species = SPECIES_MACHOP,
        .ability = ABILITY_NO_GUARD,
    },
    {
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .lvl = 14,
        .species = SPECIES_TINKATINK,
        .ability = ABILITY_OWN_TEMPO,
    }
};

static const struct TrainerMon sParty_WallyRoute114[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .lvl = 19,
        .species = SPECIES_RALTS,
        .ability = ABILITY_SYNCHRONIZE,
        .moves = {MOVE_DRAINING_KISS, MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_NONE}
    }
};
