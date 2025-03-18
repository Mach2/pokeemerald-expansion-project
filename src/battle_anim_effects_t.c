#include "global.h"
#include "malloc.h"
#include "battle_anim.h"
#include "battle_interface.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "main.h"
#include "math_util.h"
#include "palette.h"
#include "random.h"
#include "reshow_battle_screen.h"
#include "scanline_effect.h"
#include "sound.h"
#include "trig.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/moves.h"



static void AnimPartyCannonParticle(struct Sprite *);
static void AnimPartyCannonParticle_Step1(struct Sprite *);
static void AnimPartyCannonParticle_Step2(struct Sprite *);



const union AnimCmd gPartyCannonCutterAnimCmds[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 3, .vFlip = TRUE, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 3, .vFlip = TRUE),
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const gPartyCannonCutterAnimTable[] =
{
    gPartyCannonCutterAnimCmds,
};

const union AnimCmd gPartyCannonParticleAnimCmds1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(4, 5),
    ANIMCMD_FRAME(8, 5),
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(20, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME(8, 5),
    ANIMCMD_FRAME(4, 5),
    ANIMCMD_JUMP(0),
};

const union AnimCmd gPartyCannonParticleAnimCmds2[] =
{
    ANIMCMD_FRAME(24, 5),
    ANIMCMD_FRAME(28, 5),
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_END,
};

const union AnimCmd *const gPartyCannonParticleAnimTable[] =
{
    gPartyCannonParticleAnimCmds1,
    gPartyCannonParticleAnimCmds2,
};

const struct SpriteTemplate gPartyCannonParticleSpriteTemplate =
{
    .tileTag = ANIM_TAG_CONFETTI_RAIN,
    .paletteTag = ANIM_TAG_CONFETTI_RAIN,
    .oam = &gOamData_AffineOff_ObjNormal_16x16,
    .anims = gPartyCannonParticleAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = AnimPartyCannonParticle,
};

const struct SpriteTemplate gPartyCannonCutterSpriteTemplate =
{
    .tileTag = ANIM_TAG_PARTY_CANNON,
    .paletteTag = ANIM_TAG_PARTY_CANNON,
    .oam = &gOamData_AffineOff_ObjNormal_32x16,
    .anims = gPartyCannonCutterAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = AnimTranslateLinearSingleSineWave,
};


// Shoots a leaf upward, then floats it downward while swaying back and forth.
// arg 0: upward x delta per frame
// arg 1: upward y delta per frame
// arg 2: upward duration
static void AnimPartyCannonParticle(struct Sprite *sprite)
{
    sprite->x = GetBattlerSpriteCoord(gBattleAnimAttacker, BATTLER_COORD_X_2);
    sprite->y = GetBattlerSpriteCoord(gBattleAnimAttacker, BATTLER_COORD_Y_PIC_OFFSET);
    sprite->data[0] = gBattleAnimArgs[0];
    sprite->data[1] = gBattleAnimArgs[1];
    sprite->data[2] = gBattleAnimArgs[2];
    sprite->callback = AnimPartyCannonParticle_Step1;
}

static void AnimPartyCannonParticle_Step1(struct Sprite *sprite)
{
    if (!sprite->data[2])
    {
        if (sprite->data[1] & 1)
        {
            sprite->data[0] = 0x80;
            sprite->data[1] = 0;
            sprite->data[2] = 0;
        }
        else
        {
            sprite->data[0] = 0;
            sprite->data[1] = 0;
            sprite->data[2] = 0;
        }
        sprite->callback = AnimPartyCannonParticle_Step2;
    }
    else
    {
        sprite->data[2]--;
        sprite->x += sprite->data[0];
        sprite->y += sprite->data[1];
    }
}

static void AnimPartyCannonParticle_Step2(struct Sprite *sprite)
{
    if (GetBattlerSide(gBattleAnimAttacker))
        sprite->x2 = -Sin(sprite->data[0], 25);
    else
        sprite->x2 = Sin(sprite->data[0], 25);

    sprite->data[0] += 2;
    sprite->data[0] &= 0xFF;
    sprite->data[1]++;
    if (!(sprite->data[1] & 1))
        sprite->y2++;

    if (sprite->data[1] > 80)
        DestroyAnimSprite(sprite);
}
