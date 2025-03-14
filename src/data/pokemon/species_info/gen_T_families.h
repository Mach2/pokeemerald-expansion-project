#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenT[] =
{
#endif

    [SPECIES_WURMPLE_PARTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP = 1,
		.itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 120,
        .friendship = 70,
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
            "It sticks to tree branches and toots\n"
            "its horn. Thread it spits from the horn\n"
            "becomes gooey on contact with air,\n"
            "slowing movements of its shocked foes."),
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
        .friendship = 70,
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
        .friendship = 70,
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


#ifdef __INTELLISENSE__
};
#endif