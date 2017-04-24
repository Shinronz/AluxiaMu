// BuffEffectSlot.h: interface for the CBuffEffectSlot class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUFFEFFECTSLOT_H__C993C98D_6A26_4086_8251_DC502D0BCC40__INCLUDED_)
#define AFX_BUFFEFFECTSLOT_H__C993C98D_6A26_4086_8251_DC502D0BCC40__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BuffScriptLoader.h"
#include "prodef.h"

class OBJECTSTRUCT;
typedef OBJECTSTRUCT* LPOBJECTSTRUCT;

enum eBuffClearType
{
	CLEAR_TYPE_DIEREGEN = 0x1,
	CLEAR_TYPE_LOGOUT = 0x2,
	CLEAR_TYPE_MONSTERREGEN = 0x3,
	CLEAR_TYPE_CHAOSCASTLE_ENTER = 0x4,
	CLEAR_TYPE_PCBANG_SEAL_FINISH = 0x5,
	CLEAR_TYPE_NON_PCS_ITEM_EFFECT = 0x6,
	CLEAR_TYPE_CASTLESIEGE = 0x7,
};

enum eBuffStateType
{
	BUFFSTATE_BUFF_DELETE = 0x0,
	BUFFSTATE_BUFF_ADD = 0x1,
	BUFFSTATE_BUFF_NEW = 0x2,
	BUFFSTATE_BUFF_CLEAR = 0x3,
};

enum eBuffEffectType
{
	BUFFEFFECT_TYPE_POSITIVE = 0x0,
	BUFFEFFECT_TYPE_NEGATIVE = 0x1,
};

enum eBuffEffectIndex
{
	BUFFTYPE_NONE = 0x0,
	BUFFTYPE_ATTACK_POWER_INC = 0x1,
	BUFFTYPE_DEFENSE_POWER_INC = 0x2,
	BUFFTYPE_ATTDEF_POWER_INC = 0x3,
	BUFFTYPE_MELEE_DEFENSE_INC = 0x4,
	BUFFTYPE_CRITICAL_DMG_INC = 0x5,
	BUFFTYPE_INFINITY_ARROW = 0x6,
	BUFFTYPE_AG_RECOVERY_INC = 0x7,
	BUFFTYPE_HP_INC = 0x8,
	BUFFTYPE_MANA_INC = 0x9,
	BUFFTYPE_BLESS_POTION = 0xa,
	BUFFTYPE_SOUL_POTION = 0xb,
	BUFFTYPE_MAGIC_CANCEL = 0xc,
	BUFFTYPE_CASTLE_DOOR_STATE = 0xd,
	BUFFTYPE_CASTLE_DEFENSE_MARK = 0xe,
	BUFFTYPE_CASTLE_ATTACK_MARK = 0xf,
	BUFFTYPE_CASTLE_ATTACK_MARK_2 = 0x10,
	BUFFTYPE_CASTLE_ATTACK_MARK_3 = 0x11,
	BUFFTYPE_INVISABLE = 0x12,
	BUFFTYPE_DARKLORD_CASTLE_SKILL = 0x13,
	BUFFTYPE_CASTLE_CROWN_STATE = 0x14,
	BUFFTYPE_CRYWOLF_CONTRACT_ENABLE = 0x15,
	BUFFTYPE_CRYWOLF_CONTRACT_DISABLE = 0x16,
	BUFFTYPE_CRYWOLF_CONTRACT = 0x17,
	BUFFTYPE_CRYWOLF_CONTRACT_TRY = 0x18,
	BUFFTYPE_CRYWOLF_OCCUPATION = 0x19,
	BUFFTYPE_CRYWOLF_CONTRACT_HERO = 0x1a,
	BUFFTYPE_CRYWOLF_NPC_INVISABLE = 0x1b,
	BUFFTYPE_GM_MARK = 0x1c,
	BUFFTYPE_PCBANG_POINT_MARK1 = 0x1d,
	BUFFTYPE_PCBANG_POINT_MARK2 = 0x1e,
	BUFFTYPE_PCBANG_POINT_MARK3 = 0x1f,
	BUFFTYPE_TEMPLE_QUICKNESS = 0x20,
	BUFFTYPE_TEMPLE_SUBLIMATION = 0x21,
	BUFFTYPE_TEMPLE_PROTECTION = 0x22,
	BUFFTYPE_HALLOWEEN_BLESS = 0x23,
	BUFFTYPE_HALLOWEEN_ANGER = 0x24,
	BUFFTYPE_HALLOWEEN_CRY = 0x25,
	BUFFTYPE_HALLOWEEN_FOOD = 0x26,
	BUFFTYPE_HALLOWEEN_DRINK = 0x27,
	BUFFTYPE_PCS_MARK1 = 0x28,
	BUFFTYPE_PCS_MARK2 = 0x29,
	BUFFTYPE_PCS_MARK3 = 0x2a,
	BUFFTYPE_PCS_MARK4 = 0x2b,
	BUFFTYPE_PCS_SCROLL_HASTE = 0x2c,
	BUFFTYPE_PCS_SCROLL_DEFENSE = 0x2d,
	BUFFTYPE_PCS_SCROLL_ANGER = 0x2e,
	BUFFTYPE_PCS_SCROLL_MAGIC = 0x2f,
	BUFFTYPE_PCS_SCROLL_HEALTH = 0x30,
	BUFFTYPE_PCS_SCROLL_MANA = 0x31,
	BUFFTYPE_PCS_MEDICINE_STRENGTH = 0x32,
	BUFFTYPE_PCS_MEDICINE_DEXTERITY = 0x33,
	BUFFTYPE_PCS_MEDICINE_VITALITY = 0x34,
	BUFFTYPE_PCS_MEDICINE_ENERGY = 0x35,
	BUFFTYPE_PCS_MEDICINE_LEADERSHIP = 0x36,
	BUFFTYPE_POISON = 0x37,
	BUFFTYPE_FREEZE = 0x38,
	BUFFTYPE_STONE = 0x39,
	BUFFTYPE_DEFENSE_POWER_DEC = 0x3a,
	BUFFTYPE_ATTACK_POWER_DEC = 0x3b,
	BUFFTYPE_MAGIC_POWER_DEC = 0x3c,
	BUFFTYPE_STUN = 0x3d,
	BUFFTYPE_MONSTER_MAGIC_DEFENSE = 0x3e,
	BUFFTYPE_MONSTER_MAGIC_IMMUNE = 0x3f,
	BUFFTYPE_MONSTER_MELEE_IMMUNE = 0x40,
	BUFFTYPE_RESTRICTION = 0x41,
	BUFFTYPE_CRYWOLF_STATUE_LV1 = 0x42,
	BUFFTYPE_CRYWOLF_STATUE_LV2 = 0x43,
	BUFFTYPE_CRYWOLF_STATUE_LV3 = 0x44,
	BUFFTYPE_CRYWOLF_STATUE_LV4 = 0x45,
	BUFFTYPE_CRYWOLF_STATUE_LV5 = 0x46,
	BUFFTYPE_DAMAGE_REFLECT = 0x47,
	BUFFTYPE_SLEEP = 0x48,
	BUFFTYPE_BLIND = 0x49,
	BUFFTYPE_BLOODDOT = 0x4a,
	BUFFTYPE_FIREDOT = 0x4b,
	BUFFTYPE_CURSED_ATTACK_DOWN = 0x4c,
	BUFFTYPE_CURSED_DEFENSE_DOWN = 0x4d,
	BUFFTYPE_CHERRYBLOSSOM_DRINK = 0x4e,
	BUFFTYPE_CHERRYBLOSSOM_DUMPLING = 0x4f,
	BUFFTYPE_CHERRYBLOSSOM_PETAL = 0x50,
	BUFFTYPE_BERSERKER = 0x51,
	BUFFTYPE_MAGIC_POWER_INC = 0x52,
	BUFFTYPE_FLAMESTRKE = 0x53,
	BUFFTYPE_GIGANTICSTORM = 0x54,
	BUFFTYPE_LIGHTNINGSHOCK = 0x55,
	BUFFTYPE_COLD = 0x56,
	BUFFTYPE_PCS_MARK5 = 0x57,
	BUFFTYPE_PCS_MARK6 = 0x58,
	BUFFTYPE_PCS_SCROLL_CRITICAL = 0x59,
	BUFFTYPE_PCS_SCROLL_EXCELLENT = 0x5a,
	BUFFTYPE_CHRISTMAS_BLESS = 0x5b,
	BUFFTYPE_SANTA_HEAL = 0x5c,
	BUFFTYPE_SANTA_PROTECT = 0x5d,
	BUFFTYPE_SANTA_POWER = 0x5e,
	BUFFTYPE_SANTA_GUARD = 0x5f,
	BUFFTYPE_SANTA_SPEED = 0x60,
	BUFFTYPE_SANTA_LUCKY = 0x61,
	BUFFTYPE_CHARM_GUARDIAN = 0x63,
	BUFFTYPE_CHARM_PROTECTITEM = 0x64,
	BUFFTYPE_PCS_MARK1_FOR_MASTER = 0x65,
	BUFFTYPE_PCS_MARK2_FOR_MASTER = 0x66,
	BUFFTYPE_OBSERVER = 0x62,
	BUFFTYPE_GLORYOFGLADIATOR = 0x67,
	BUFFTYPE_PCBANG_POINT_MARK4 = 0x68,
	BUFFTYPE_DOPPELGANGER_PORTAL = 0x69,
	BUFFTYPE_PK_PENALTY = 0x6A,
	BUFFTYPE_MUBLUE_TIRED = 0x6B,
	BUFFTYPE_MUBLUE_EXHAUST = 0x6C,
	BUFFTYPE_PARTYITEM_EXP = 0x70,
	BUFFTYPE_PCS_SD = 0x71,
	BUFFTYPE_PCS_AG = 0x72,
	BUFFTYPE_MUBLUE_MINIMUMVITALITY = 0x73,
	BUFFTYPE_MUBLUE_LOWVITALITY = 0x74,
	BUFFTYPE_MUBLUE_MEDIUMVITALITY = 0x75,
	BUFFTYPE_MUBLUE_HIGHVITALITY = 0x76,
	BUFFTYPE_PCS_MARK7 = 0x77,
	BUFFTYPE_HACKTOOL_PENALTY = 0x78,
	BUFFTYPE_PCS_MARK8 = 0x79,
	BUFFTYPE_HAWK_FIGURINE = 0x7A,
	BUFFTYPE_GOAT_FIGURINE = 0x7B,
	BUFFTYPE_OAK_CHARM = 0x7C,
	BUFFTYPE_MAPLE_CHARM = 0x7D,
	BUFFTYPE_GOLDEN_OAK_CHARM = 0x7E,
	BUFFTYPE_GOLDEN_MAPLE_CHARM = 0x7F,
	BUFFTYPE_WORN_HORSESHOE = 0x80,
	BUFFTYPE_MONK_IGNORE_ENEMY_DEFENSE = 0x81,
	BUFFTYPE_MONK_INCREASE_HEALTH = 0x82,
	BUFFTYPE_MONK_INCREASE_DEFENSE_RATE = 0x83,
	BUFFTYPE_MONK_DECREASE_DEFENSE_RATE = 0x84,
	BUFFTYPE_INVISIBLE2 = 0x85,
	BUFFTYPE_IRON_DEFENSE = 0x86,
	BUFFTYPE_HP_INC_STR = 0x87,
	BUFFTYPE_HP_INC_MAS = 0x88,
	BUFFTYPE_BLEEDING = 0x89,
	BUFFTYPE_MAGIC_POWER_INC_STR = 0x8A,
	BUFFTYPE_MAGIC_POWER_INC_MAS = 0x8B,
	BUFFTYPE_MELEE_DEFENSE_INC_STR = 0x8C,
	BUFFTYPE_ATTACK_SPEED_DEC = 0x8D,
	BUFFTYPE_BLESS = 0x8E,
	BUFFTYPE_INFINITY_ARROW_STR = 0x8F,
	BUFFTYPE_BLIND_2 = 0x90,
	BUFFTYPE_VAMPIRIC = 0x91,
	BUFFTYPE_FREEZE_2 = 0x92,
	BUFFTYPE_EARTH_BINDS = 0x93,
	BUFFTYPE_CRITICAL_DMG_INC_STR = 0x94,
	BUFFTYPE_CRITICAL_DMG_INC_MAS = 0x95,
	BUFFTYPE_BERSERKER_STR = 0x96,
	BUFFTYPE_BERSERKER_MAS = 0x97,
	BUFFTYPE_BERSERKER_PRO = 0x98,
	BUFFTYPE_MONK_INCREASE_DEFENSE_RATE_STR = 0x99,
	BUFFTYPE_MONK_INCREASE_DEFENSE_RATE_MAS = 0x9A,
	BUFFTYPE_MONK_INCREASE_HEALTH_STR = 0x9B,
	BUFFTYPE_MONK_IGNORE_ENEMY_DEFENSE_STR = 0x9C,
	BUFFTYPE_DEBUFF_FIRE = 0x9D,
	BUFFTYPE_DEBUFF_FROST = 0x9E,
	BUFFTYPE_DEBUFF_POISON1 = 0x9F,
	BUFFTYPE_DEBUFF_POISON2 = 0xA0,
	BUFFTYPE_BLESSING = 0xA1,
	BUFFTYPE_WEAKEN = 0xA2,
	BUFFTYPE_INNOVATE = 0xA3,
	BUFFTYPE_DECREASE_DEFENSE_RATE = 0xA4,
	BUFFTYPE_IRON_DEFENSE_STR = 0xA5,
	BUFFTYPE_BLOOD_HOWL = 0xA6,
	BUFFTYPE_BLOOD_HOWL_STR = 0xA7,
	BUFFTYPE_PENETRATE_ARMOR = 0xA9,
	BUFFTYPE_ACHERON_FIRE = 0xAE,
	BUFFTYPE_ACHERON_FROST = 0xAF,
	BUFFTYPE_ACHERON_TORNADO = 0xB0,
	BUFFTYPE_ACHERON_BIND = 0xB1,
	BUFFTYPE_ACHERON_DARKNESS = 0xB2,
	BUFFTYPE_ARCA_FIRETOWER = 0xB3,
	BUFFTYPE_ARCA_WATERTOWER = 0xB4,
	BUFFTYPE_ARCA_EARTHTOWER = 0xB5,
	BUFFTYPE_ARCA_WINDTOWER = 0xB6,
	BUFFTYPE_ARCA_DARKNESSTOWER = 0xB7,
	BUFFTYPE_ARCA_DEATHPENALTY = 0xB8,
	BUFFTYPE_VAULT_EXPAND = 0xB9,
	BUFFTYPE_CONFUSION = 0xBA,
	BUFFTYPE_EXP_REWARDS = 0xBB,
	BUFFTYPE_ASCENSION_MARK1 = 0xBE,
	BUFFTYPE_ASCENSION_MARK2 = 0xBF,
	BUFFTYPE_ASCENSION_MARK3 = 0xC0,
	BUFFTYPE_ASCENSION_SEAL1 = 0xC1,
	BUFFTYPE_ASCENSION_SEAL2 = 0xC2,
	BUFFTYPE_LIGHT_BLESSING = 0xC3,
	BUFFTYPE_PCS_SCROLL_DEFENSE_MASTER = 0xC4,
	BUFFTYPE_PCS_SCROLL_WIZARD_MASTER = 0xC5,
	BUFFTYPE_PCS_SCROLL_HEALTH_MASTER = 0xC6,
	BUFFTYPE_PCS_SCROLL_MANA_MASTER = 0xC7,
	BUFFTYPE_PCS_SCROLL_WRATH_MASTER = 0xC8,
	BUFFTYPE_PCS_SCROLL_RECOVERY_MASTER = 0xC9,
	BUFFTYPE_PCS_SCROLL_BATTLE_MASTER = 0xCA,
	BUFFTYPE_PCS_SCROLL_STRENGTH_MASTER = 0xCB,
	BUFFTYPE_PCS_SCROLL_QUICKNESS_MASTER = 0xCC,
	BUFFTYPE_USE_MOUNT_UNIRIA = 0xCD,
	BUFFTYPE_USE_MOUNT_DINORANT = 0xCE,
	BUFFTYPE_USE_MOUNT_DLHORSE = 0xCF,
	BUFFTYPE_USE_MOUNT_FENRIR = 0xD0,
	BUFFTYPE_PCCAFE_1 = 0xD3,
	BUFFTYPE_LIGHT_BLESSING_LOW = 0xD4,
	BUFFTYPE_LIGHT_BLESSING_MIDDLE = 0xD5,
	BUFFTYPE_EVASION = 0xD6,
	BUFFTYPE_PCCAFE_2 = 0xD7,
	BUFFTYPE_CIRCLE_SHIELD = 0xD8,
	BUFFTYPE_OBSIDIAN = 0xD9,
	BUFFTYPE_WRATH = 0xDA,
	BUFFTYPE_BURST = 0xDB,
	BUFFTYPE_OBSIDIAN_STR = 0xDC,
	BUFFTYPE_CIRCLE_SHIELD_STR = 0xDD,
	BUFFTYPE_CIRCLE_SHIELD_MAS = 0xDE,
	BUFFTYPE_WRATH_STR = 0xDF,
	BUFFTYPE_WRATH_PRO = 0xE0,
	BUFFTYPE_WRATH_MAS = 0xE1,
	BUFFTYPE_BURST_STR = 0xE2,
	BUFFTYPE_EVOMON_SUCCESS = 0xE3,
	BUFFTYPE_EVOMON_FAILED = 0xE4,
	BUFFTYPE_NARS_BERSERKER = 0xE5,
	BUFFTYPE_NARS_CLONE = 0xE6,
	BUFFTYPE_NARS_SPIN = 0xE7,
	BUFFTYPE_BASTION = 0xEE,
	BUFFTYPE_HEMORRHAGE = 0xEF,
	BUFFTYPE_PARALYSIS = 0xF0,
	BUFFTYPE_BONDAGE = 0xF1,
	BUFFTYPE_BLINDNES = 0xF2,
	BUFFTYPE_IMMUNE_I = 0xF3,
	BUFFTYPE_IMMUNE_II = 0xF4,
	BUFFTYPE_WIDENED_I = 0xF5
};

typedef struct 
{
	PBMSG_HEAD h;
	WORD wOptionType;
	WORD wEffectType;
	BYTE byEffectOption;
	int iLeftTime;
	BYTE btBuffEffectType;
	BYTE ItemInfo[MAX_ITEM_INFO];
	BYTE Unk; // Season x
	WORD wEffectValue; // Season X addon
} PMSG_USEEFFECTITEM, *LPPMSG_USEEFFECTITEM;

#pragma pack (1)
typedef struct
{
	BYTE btBuffEffect;
	int iLeftTime;
} PMSG_BUFFEFFECTLIST, *LPPMSG_BUFFEFFECTLIST;

typedef struct
{
	PBMSG_HEAD h;
	char Name[MAX_ACCOUNT_LEN+1];
	BYTE btCount;
	PMSG_BUFFEFFECTLIST BuffEffect[MAX_BUFFEFFECT];
} PMSG_BUFFEFFECTLIST_COUNT, *LPPMSG_BUFFEFFECTLIST_COUNT;
#pragma pack ()
class CBuffEffectSlot  
{
public:
	CBuffEffectSlot();
	virtual ~CBuffEffectSlot();

	int SetEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex, BYTE btEffectType1, BYTE btEffectType2, int iEffectValue1, int iEffectValue2, int iDuration);
	bool RemoveEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex);
	bool CheckUsedEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex);
	int ClearEffect(LPOBJECTSTRUCT lpObj, enum eBuffClearType ClearType);
	LPBUFF_EFFECT_DATE GetEffectData(int iBuffIndex);
	LPBUFF_EFFECT_DATE GetEffectDataFromItemCode(WORD wItemCode);
	int GetBuffClearType(int iBuffIndex);
	void RemoveBuffVariable(LPOBJECTSTRUCT lpObj, int iBuffIndex);
	LPPERIOD_BUFF_EFFECT_INFO GetPeriodBuffInfo(WORD wBuffIndex);
};

extern CBuffEffectSlot	g_BuffEffectSlot;

extern void gObjCheckBuffEffectList(LPOBJECTSTRUCT lpObj);
extern bool gObjAddBuffEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex);
extern bool gObjAddBuffEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex, BYTE EffectType1, int EffectValue1, BYTE EffectType2, int EffectValue2, int Duration);
extern bool gObjAddBuffEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex, int Duration);
extern bool gObjAddPeriodBuffEffect(OBJECTSTRUCT *lpObj, _tagPeriodBuffEffectInfo *lpPeriBuff, unsigned int dwDuration);

extern bool gObjAddBuffEffectForInGameShop(LPOBJECTSTRUCT lpObj, WORD wItemCode, int Duration);
extern bool gObjRemoveBuffEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex);
extern bool gObjClearBuffEffect(LPOBJECTSTRUCT lpObj, enum eBuffClearType ClearType);
extern bool gObjCheckUsedBuffEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex);
extern void gObjRemoveOneDebuffEffect(LPOBJECTSTRUCT lpObj);
extern bool gObjChangeBuffValidTime(LPOBJECTSTRUCT lpObj, int iBuffIndex, int iTime);
extern void gObjSetActiveEffectAtTick(LPOBJECTSTRUCT lpObj);
extern int gObjMakeViewportState(LPOBJECTSTRUCT lpObj, BYTE *lpBuffer);
extern bool gObjCheckPowerfulEffect(LPOBJECTSTRUCT lpObj, int iBuffIndex, int EffectValue1, int EffectValue2);
extern int gObjGetTotalValueOfEffect(LPOBJECTSTRUCT lpObj, int EffectType);
extern bool gObjGetValueOfBuffIndex(LPOBJECTSTRUCT lpObj, int iBuffIndex, int *EffectValue1, int *EffectValue2);
extern void GCUseBuffEffect(LPOBJECTSTRUCT lpObj, BYTE BuffEffectIndex, BYTE EffectUseOption, WORD OptionType, WORD EffectType, int LeftTime, DWORD EffectValue);
extern void gObjSendBuffList(LPOBJECTSTRUCT lpObj);
extern BOOL gObjAddBuffEffectWideArea(LPOBJECTSTRUCT lpTargetObj, int nDistance, int& nAffectedCount, int iBuffIndex, BYTE EffectType1, int EffectValue1, BYTE EffectType2, int EffectValue2, int Duration);
extern void CheckItemOptForGetExpExRenewal(LPOBJECTSTRUCT lpObj, LPOBJ lpTargetObj, UINT64 &iExp, UINT64 iDefaultExp, BOOL bRewardExp);

#endif // !defined(AFX_BUFFEFFECTSLOT_H__C993C98D_6A26_4086_8251_DC502D0BCC40__INCLUDED_)


//////////////////////////////////////////////////////////////////////
// iDev.Games - MuOnline S9EP2 IGC9.5 - TRONG.WIN - DAO VAN TRONG     
//////////////////////////////////////////////////////////////////////

