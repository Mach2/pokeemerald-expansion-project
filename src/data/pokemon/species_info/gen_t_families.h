#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenT[] =
{
#endif

    [SPECIES_BOBBUG] =
    {
        .baseHP        = 46,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 22,
        .baseSpAttack  = 32,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 32,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Bobbug"),
        .cryId = CRY_BOBBUG,
        .natDexNum = NATIONAL_DEX_BOBBUG,
        .categoryName = _("Thread Bug"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 9, SPECIES_CHRYSTITCH}),
    },

    [SPECIES_CHRYSTITCH] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 10,
        .baseSpAttack  = 30,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 220,
        .expYield = 70,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Chrystitch"),
        .cryId = CRY_CHRYSTITCH,
        .natDexNum = NATIONAL_DEX_CHRYSTITCH,
        .categoryName = _("Chrysalis"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_EMBROIDLE}),
    },

    [SPECIES_EMBROIDLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 188,
        .expYield = 144,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Embroidle"),
        .cryId = CRY_EMBROIDLE,
        .natDexNum = NATIONAL_DEX_EMBROIDLE,
        .categoryName = _("Sew Beetle"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
    },

    [SPECIES_DIRBUNY] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 36,
        .baseSpeed     = 62,
        .baseSpAttack  = 28,
        .baseSpDefense = 34,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 188,
        .expYield = 50,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Dirbuny"),
        .cryId = CRY_DIRBUNY,
        .natDexNum = NATIONAL_DEX_DIRBUNY,
        .categoryName = _("Dust Bunny"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DEILINT}),
    },

    [SPECIES_DEILINT] =
    {
        .baseHP        = 66,
        .baseAttack    = 72,
        .baseDefense   = 66,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 188,
        .expYield = 150,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Deilint"),
        .cryId = CRY_DEILINT,
        .natDexNum = NATIONAL_DEX_DEILINT,
        .categoryName = _("Dust Bunny"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DEILINT}),
    },

    [SPECIES_EYRSTLING] =
    {
        .baseHP        = 40,
        .baseAttack    = 57,
        .baseDefense   = 47,
        .baseSpeed     = 63,
        .baseSpAttack    = 26,
        .baseSpDefense    = 47,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Eyrstling"),
        .cryId = CRY_EYRSTLING,
        .natDexNum = NATIONAL_DEX_EYRSTLING,
        .categoryName = _("Eaglet"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "They hunt in pairs, with one acting as\n"
            "a spotter for the other. Until they can\n"
            "work together well enough to defeat their\n"
            "parent, they will not leave the nest."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_SKEYRIE}),
    },

    [SPECIES_SKEYRIE] =
    {
        .baseHP        = 64,
        .baseAttack    = 74,
        .baseDefense   = 56,
        .baseSpeed     = 90,
        .baseSpAttack    = 44,
        .baseSpDefense    = 52,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Skeyrie"),
        .cryId = CRY_SKEYRIE,
        .natDexNum = NATIONAL_DEX_SKEYRIE,
        .categoryName = _("Fledgling"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "They seek territory by challenging the\n"
            "strongest foes around. Unfortunately,\n"
            "it is overconfident, and easily tricked\n"
            "into unwinnable fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_HUNTALON}),
    },

    [SPECIES_HUNTALON] =
    {
        .baseHP        = 86,
        .baseAttack    = 90,
        .baseDefense   = 72,
        .baseSpeed     = 124,
        .baseSpAttack    = 58,
        .baseSpDefense    = 70,
        .types = MON_TYPES(TYPE_FLYING),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP, // PLACEHOLDER
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Huntalon"),
        .cryId = CRY_HUNTALON,
        .natDexNum = NATIONAL_DEX_HUNTALON,
        .categoryName = _("Taunt Eagle"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Skilled aerial fighters, Huntalon spend\n"
            "their fights preening and chuckling,\n"
            "driving their foes to frenzy. Once off-\n"
            "guard, Huntalon strikes them decisively."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
    },

    [SPECIES_TADDLE] =
    {
        .baseHP        = 48,
        .baseAttack    = 38,
        .baseDefense   = 32,
        .baseSpeed     = 50,
        .baseSpAttack    = 32,
        .baseSpDefense    = 20,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Taddle"),
        .cryId = CRY_TADDLE,
        .natDexNum = NATIONAL_DEX_TADDLE,
        .categoryName = _("Little Newt"), // PLACEHOLDER
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "They seek territory by challenging the\n"
            "strongest foes around. Unfortunately,\n"
            "it is overconfident, and easily tricked\n"
            "into unwinnable fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_TUTARAIN}),
    },

    [SPECIES_TUTARAIN] =
    {
        .baseHP        = 80,
        .baseAttack    = 56,
        .baseDefense   = 58,
        .baseSpeed     = 65,
        .baseSpAttack    = 39,
        .baseSpDefense    = 42,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Tutarain"),
        .cryId = CRY_TUTARAIN,
        .natDexNum = NATIONAL_DEX_TUTARAIN,
        .categoryName = _("Tuatara"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "They seek territory by challenging the\n"
            "strongest foes around. Unfortunately,\n"
            "it is overconfident, and easily tricked\n"
            "into unwinnable fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_TUATIDE}),
    },

    [SPECIES_TUATIDE] =
    {
        .baseHP        = 110,
        .baseAttack    = 82,
        .baseDefense   = 65,
        .baseSpeed     = 82,
        .baseSpAttack    = 45,
        .baseSpDefense    = 96,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_LEAF_GUARD, ABILITY_RUN_AWAY }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Tuatide"),
        .cryId = CRY_TUATIDE,
        .natDexNum = NATIONAL_DEX_TUATIDE,
        .categoryName = _("Tuatara"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "They seek territory by challenging the\n"
            "strongest foes around. Unfortunately,\n"
            "it is overconfident, and easily tricked\n"
            "into unwinnable fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark, // PLACEHOLDER
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
    },
    
    [SPECIES_GOOZE] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GRASS, TYPE_NORMAL),
        .catchRate = 210,
        .expYield = 70,
        .evYield_SpAttack= 2,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_GRASS),
        .abilities = { ABILITY_GOOEY, ABILITY_SAP_SIPPER, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gooze"),
        .cryId = CRY_GOOZE,
        .natDexNum = NATIONAL_DEX_GOOZE,
        .categoryName = _("Sap"),
        .height = 4,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Gooze congregate in forests and hang from\n"
            "trees, imitating sap. It is said that\n"
            "wherever Gooze live, plants flourish."),
        .pokemonScale = 560,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gooze,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 38),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gooze,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gooze,
        .shinyPalette = gMonShinyPalette_Gooze,
        .iconSprite = gMonIcon_Gooze,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gooze)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BIKE_TIRE,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sGoozeLevelUpLearnset,
        .teachableLearnset = sGoozeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SYROOP}),
    },

    [SPECIES_SYROOP] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS),
        .catchRate = 160,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_GRASS),
        .abilities = { ABILITY_GOOEY, ABILITY_SAP_SIPPER, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Syroop"),
        .cryId = CRY_SYROOP,
        .natDexNum = NATIONAL_DEX_SYROOP,
        .categoryName = _("Sap"),
        .height = 6,
        .weight = 16,
        .description = COMPOUND_STRING(
            "Syroop attach to plants or Grass Pokémon\n"
            "to feed on bacteria and assist growth.\n"
            "If they mistakenly attach to Sudowoodo,\n"
            "they become sick from lack of nutrition."),
        .pokemonScale = 480,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Syroop,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 26),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_STRETCH_FAR_SLOW,
        .backPic = gMonBackPic_Syroop,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Syroop,
        .shinyPalette = gMonShinyPalette_Syroop,
        .iconSprite = gMonIcon_Syroop,
        .iconPalIndex = 3,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Syroop)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BIKE_TIRE,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sSyroopLevelUpLearnset,
        .teachableLearnset = sGoozeTeachableLearnset,
    },

    [SPECIES_CRIAQUA] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack    = 80,
        .baseSpDefense    = 60,
        .types = MON_TYPES(TYPE_WATER, TYPE_NORMAL),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Criaqua"),
        .cryId = CRY_CRIAQUA,
        .natDexNum = NATIONAL_DEX_CRIAQUA,
        .height = 8,
        .weight = 310,
        .description = COMPOUND_STRING(
            "They spend most of their time frolicking\n"
            "and are known for their playful nature.\n"
            "They often scare off potential friends\n"
            "by playfully spitting water at them."),
        .pokemonScale = 460,
        .pokemonOffset = 12,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Criaqua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Criaqua,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Criaqua,
        .shinyPalette = gMonShinyPalette_Criaqua,
        .iconSprite = gMonIcon_Criaqua,
        .iconPalIndex = 3,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Criaqua)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sCriaquaLevelUpLearnset,
        .teachableLearnset = sCriaquaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ALPAQUA}),
    },
    
    [SPECIES_ALPAQUA] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 98,
        .baseSpAttack    = 106,
        .baseSpDefense    = 86,
        .types = MON_TYPES(TYPE_WATER, TYPE_NORMAL),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Alpaqua"),
        .cryId = CRY_ALPAQUA,
        .natDexNum = NATIONAL_DEX_ALPAQUA,
        .height = 14,
        .weight = 450,
        .description = COMPOUND_STRING(
            "Alpaqua are good-natured, but have a bad\n"
            "reputation. They flood farmlands while\n"
            "trying to help farmers, then take produce\n"
            "to 'reward' themselves."),
        .pokemonScale = 412,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Alpaqua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Alpaqua,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Alpaqua,
        .shinyPalette = gMonShinyPalette_Alpaqua,
        .iconSprite = gMonIcon_Alpaqua,
        .iconPalIndex = 3,
        SHADOW(-2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Alpaqua)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sAlpaquaLevelUpLearnset,
        .teachableLearnset = sCriaquaTeachableLearnset,
    },

    [SPECIES_BHUNSEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 75,
        .baseSpAttack    = 70,
        .baseSpDefense    = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Bhunsen"),
        .cryId = CRY_BHUNSEN,
        .natDexNum = NATIONAL_DEX_BHUNSEN,
        .height = 4,
        .weight = 450,
        .description = COMPOUND_STRING(
            "Despite their docile appearance, these\n"
            "adorable Pokémon are vicious pack hunters.\n"
            "When they establish an alpha, that Bhunsen\n"
            "will evolve into a powerful Bhurnur."),
        .pokemonScale = 460,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bhunsen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Bhunsen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Bhunsen,
        .shinyPalette = gMonShinyPalette_Bhunsen,
        .iconSprite = gMonIcon_Bhunsen,
        .iconPalIndex = 5,
        SHADOW(-2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Bhunsen)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sBhunsenLevelUpLearnset,
        .teachableLearnset = sBhunsenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_BHURNUR}),
    },

    [SPECIES_BHURNUR] =
    {
        .baseHP        = 85,
        .baseAttack    = 106,
        .baseDefense   = 72,
        .baseSpeed     = 80,
        .baseSpAttack    = 85,
        .baseSpDefense    = 72,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .catchRate = 188, // PLACEHOLDER
        .expYield = 144, // PLACEHOLDER
        .evYield_HP = 2, // PLACEHOLDER
        .genderRatio = PERCENT_FEMALE(50), // PLACEHOLDER
        .eggCycles = 20, // PLACEHOLDER
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST, // PLACEHOLDER
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG), // PLACEHOLDER
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE }, // PLACEHOLDER
        .bodyColor = BODY_COLOR_BLACK, // PLACEHOLDER
        .speciesName = _("Bhurnur"),
        .cryId = CRY_BHURNUR,
        .natDexNum = NATIONAL_DEX_BHURNUR,
        .height = 16,
        .weight = 450,
        .description = COMPOUND_STRING(
            "If a new alpha is established in a pack\n"
            "of Bhunsen, their previous leader will\n"
            "be shunned from the group. Thus, lonely\n"
            "Bhurner are often found in the desert."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bhurnur,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Bhurnur,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Bhurnur,
        .shinyPalette = gMonShinyPalette_Bhurnur,
        .iconSprite = gMonIcon_Bhurnur,
        .iconPalIndex = 5,
        SHADOW(-2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Bhurnur)
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
        .levelUpLearnset = sBhurnurLevelUpLearnset,
        .teachableLearnset = sBhunsenTeachableLearnset,
    },

    [SPECIES_WURMPLE_PARTY] =
    {
        .baseHP        = 65,
        .baseAttack    = 63,
        .baseDefense   = 41,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP = 1,
		.itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 120,
        .friendship = 120,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wurmple"),
        .cryId = CRY_WURMPLE_PARTY,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("Worm"),
        .height = 4,
        .weight = 36,
        .description = COMPOUND_STRING(
            "A weak creature that hides in trees\n"
            "and bushes. It loves its silly hat and\n"
            "always seems to be celebrating.\n"
            "It can spit sticky thread to slow foes."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WurmpleParty,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_WurmpleParty,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_WurmpleParty,
        .shinyPalette = gMonShinyPalette_WurmpleParty,
        .iconSprite = gMonIcon_WurmpleParty,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Wurmple)
        OVERWORLD(
            sPicTable_Wurmple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Wurmple,
            gShinyOverworldPalette_Wurmple
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWurmplePartyLevelUpLearnset,
        .teachableLearnset = sWurmpleTeachableLearnset,
        .formSpeciesIdTable = sWurmpleFormSpeciesIdTable,
    },


#ifdef __INTELLISENSE__
};
#endif
