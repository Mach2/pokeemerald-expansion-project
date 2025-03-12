#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenT[] =
{
#endif

#if P_WURMPLE_PARTY
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
        .height = 3,
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
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(24, 24) : MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 20,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WurmpleParty,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 464) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
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
    },
#endif //P_WURMPLE_PARTY

#ifdef __INTELLISENSE__
};
#endif