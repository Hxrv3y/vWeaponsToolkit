#pragma once
#include <wx/string.h>
#include <vector>
#include <string>
#include "cWeaponComponent.h"
#include "cWeaponAsset.h"

class cWeapon
{
public:
	cWeapon();

	void setWeaponTemplate(std::string weaponTemplate);
	void setWeaponName(std::string weaponName);
	void setWeaponId(std::string weaponId);
	void setWeaponModel(std::string weaponModel);
	void addWeaponAsset(cWeaponAsset* weaponAsset);
	void setValidWeaponModelFound(bool found);
	void setAudioItem(std::string weaponAudio);
	void setWeaponDamage(float weaponDamage);
	void setWeaponRange(float weaponRange);
	void setAmmoType(std::string ammoType);
	void setWeaponLOD(int weaponLOD);
	void setWeaponReloadSpeedMultiplier(float weaponReloadSpeedMultiplier);
	void setWeaponFireRateMultiplier(float weaponFireRateMultiplier);
	void setWeaponDamageType(std::string damageType);
	void setWeaponAudioItem(std::string audioItem);
	void setWeaponHeadShotDamageModifierPlayer(float headShotDamageModifierPlayer);

	bool getValidWeaponModelFound();
	std::string getWeaponTemplate();
	std::string getWeaponName();
	std::string getWeaponId();
	std::string getWeaponModel();
	std::string getAudioItem();
	float getWeaponDamage();
	float getWeaponRange();
	std::string getAmmoType();
	int getWeaponLOD();
	float getWeaponReloadSpeedMultiplier();
	float getWeaponFireRateMultiplier();
	float getWeaponHeadShotDamageModifierPlayer();
	std::string getWeaponDamageType();
	std::string getWeaponAudioItem();

	const char* nativeWeapons[100] = {
		"WEAPON_ADVANCEDRIFLE",
		"WEAPON_APPISTOL",
		"WEAPON_ASSAULTRIFLE",
		"WEAPON_ASSAULTRIFLEMK2",
		"WEAPON_ASSAULTSHOTGUN",
		"WEAPON_ASSAULTSMG",
		"WEAPON_BALL",
		"WEAPON_BAT",
		"WEAPON_CARBINERIFLE",
		"WEAPON_COMBATMG",
		"WEAPON_COMBATPISTOL",
		"WEAPON_COMBATSHOTGUN",
		"WEAPON_CROWBAR",
		"WEAPON_GADGETPISTOL",
		"WEAPON_GOLFCLUB",
		"WEAPON_GRENADELAUNCHER",
		"WEAPON_GUSENBERG",
		"WEAPON_HAMMER",
		"WEAPON_HATCHET",
		"WEAPON_HEAVYPISTOL",
		"WEAPON_HEAVYSNIPER",
		"WEAPON_KNIFE",
		"WEAPON_KNUCKLE",
		"WEAPON_MACHETE",
		"WEAPON_MACHINEPISTOL",
		"WEAPON_MARKSMANRIFLE",
		"WEAPON_MG",
		"WEAPON_MICROSMG",
		"WEAPON_MINISMG",
		"WEAPON_NIGHTSTICK",
		"WEAPON_PISTOL",
		"WEAPON_PISTOL50",
		"WEAPON_PRECISIONRIFLE",
		"WEAPON_PUMPSHOTGUN",
		"WEAPON_RAYCARBINE",
		"WEAPON_REVOLVER",
		"WEAPON_RPG",
		"WEAPON_SAWNOFFSHOTGUN",
		"WEAPON_SMG",
		"WEAPON_SNIPERRIFLE",
		"WEAPON_SPECIALCARBINE",
		"WEAPON_STUNGUN",
		"WEAPON_SNSPISTOL",
		"WEAPON_SWITCHBLADE",
		"WEAPON_TECPISTOL",
	};

	const char* audioItems[100] = {
		"AUDIO_ITEM_ADVANCEDRIFLE",
		"AUDIO_ITEM_APPISTOL",
		"AUDIO_ITEM_ARMORDILLO_TURRET",
		"AUDIO_ITEM_ASSAULTRIFLE",
		"AUDIO_ITEM_ASSAULTRIFLE_MK2",
		"AUDIO_ITEM_ASSAULTSHOTGUN",
		"AUDIO_ITEM_ASSAULTSMG",
		"AUDIO_ITEM_AUTOSHOTGUN",
		"AUDIO_ITEM_BULLPUP",
		"AUDIO_ITEM_BULLPUP_RIFLE_MK2",
		"AUDIO_ITEM_BULLPUPSHOTGUN",
		"AUDIO_ITEM_CARBINE_SPECIAL",
		"AUDIO_ITEM_CARBINE_SPECIAL_MK2",
		"AUDIO_ITEM_CARBINERIFLE",
		"AUDIO_ITEM_CARBINERIFLE_MK2",
		"AUDIO_ITEM_COMBATSHOTGUN",
		"AUDIO_ITEM_COMBATMG",
		"AUDIO_ITEM_COMBATMG_MK2",
		"AUDIO_ITEM_COMBATPISTOL",
		"AUDIO_ITEM_COMBAT_PDW",
		"AUDIO_ITEM_COMPACT_RIFLE",
		"AUDIO_ITEM_DMRSNIPER",
		"AUDIO_ITEM_DOUBLEACTION_REVOLVER",
		"AUDIO_ITEM_FLARE_GUN",
		"AUDIO_ITEM_GADGET_PISTOL",
		"AUDIO_ITEM_GR_VEHICLE_TAMPA_DUALMINIGUN",
		"AUDIO_ITEM_GR_VEHICLE_TRAILER_QUADMG",
		"AUDIO_ITEM_GRENADE",
		"AUDIO_ITEM_GRENADELAUNCHER",
		"AUDIO_ITEM_GUSENBERG",
		"AUDIO_ITEM_NAVYREVOLVER",
		"AUDIO_ITEM_HEAVY_REVOLVER_MK2",
		"AUDIO_ITEM_HEAVYPISTOL",
		"AUDIO_ITEM_HEAVYSHOTGUN",
		"AUDIO_ITEM_HEAVYSNIPER",
		"AUDIO_ITEM_HEAVYSNIPER_MK2",
		"AUDIO_ITEM_MACHINE_PISTOL",
		"AUDIO_ITEM_MARKSMAN_PTL",
		"AUDIO_ITEM_MARKSMAN_RIFLE_MK2",
		"AUDIO_ITEM_MELEE_SWITCHBLADE",
		"AUDIO_ITEM_MG",
		"AUDIO_ITEM_MICROSMG",
		"AUDIO_ITEM_MINISMG",
		"AUDIO_ITEM_MINIGUN",
		"AUDIO_ITEM_MOLOTOV",
		"AUDIO_ITEM_MUSKET",
		"AUDIO_ITEM_PISTOL",
		"AUDIO_ITEM_PISTOL50",
		"AUDIO_ITEM_PISTOL_MK2",
		"AUDIO_ITEM_PUMP_SHOTGUN_MK2",
		"AUDIO_ITEM_PUMPSHOTGUN",
		"AUDIO_ITEM_PRECISION_RIFLE",
		"AUDIO_ITEM_RAILGUN",
		"AUDIO_ITEM_RAYCARBINE",
		"AUDIO_ITEM_RAYMINIGUN",
		"AUDIO_ITEM_RAYPISTOL",
		"AUDIO_ITEM_REMOTESNIPER",
		"AUDIO_ITEM_REVOLVER",
		"AUDIO_ITEM_SNSPISTOL"
		"AUDIO_ITEM_RPG",
		"AUDIO_ITEM_SAWNOFFSHOTGUN",
		"AUDIO_ITEM_SERVICE_CARBINE",
		"AUDIO_ITEM_SM_VEHICLE_TULA_MG",
		"AUDIO_ITEM_SMG",
		"AUDIO_ITEM_SMG_MK2",
		"AUDIO_ITEM_SMOKEGRENADE",
		"AUDIO_ITEM_SNIPERRIFLE",
		"AUDIO_ITEM_SNOWBALL",
		"AUDIO_ITEM_SNS_PISTOL_MK2",
		"AUDIO_ITEM_SNSPISTOL",
		"AUDIO_ITEM_STICKYBOMB",
		"AUDIO_ITEM_STUNGUN",
		"AUDIO_ITEM_TECHNICAL_TURRET",
		"AUDIO_ITEM_TEC_PISTOL",
		"AUDIO_ITEM_VALKYRIE_MINIGUN",
		"AUDIO_ITEM_VALKYRIE_NOSE",
		"AUDIO_ITEM_VEHICLE_TANK",
		"AUDIO_ITEM_VEHICLE_WEAPON_DUAL_50_CAL_TURRET",
	};

	const char* ammoTypes[100] = {
		"AMMO_BALL",
		"AMMO_BIRD_CRAP",
		"AMMO_BZGAS",
		"AMMO_ENEMY_LASER",
		"AMMO_FIREEXTINGUISHER",
		"AMMO_FLARE",
		"AMMO_GRENADE",
		"AMMO_GRENADELAUNCHER",
		"AMMO_GRENADELAUNCHER_SMOKE",
		"AMMO_MG",
		"AMMO_MG_ARMORPIERCING",
		"AMMO_MG_FMJ",
		"AMMO_MG_INCENDIARY",
		"AMMO_MG_TRACER",
		"AMMO_MINIGUN",
		"AMMO_MOLOTOV",
		"AMMO_PETROLCAN",
		"AMMO_PISTOL",
		"AMMO_PISTOL_FMJ",
		"AMMO_PISTOL_HOLLOWPOINT",
		"AMMO_PISTOL_INCENDIARY",
		"AMMO_PISTOL_TRACER",
		"AMMO_PLANE_ROCKET",
		"AMMO_PLAYER_LASER",
		"AMMO_RAYPISTOL",
		"AMMO_RIFLE",
		"AMMO_RIFLE_ARMORPIERCING",
		"AMMO_RIFLE_FMJ",
		"AMMO_RIFLE_INCENDIARY",
		"AMMO_RIFLE_TRACER",
		"AMMO_RPG",
		"AMMO_SHOTGUN",
		"AMMO_SHOTGUN_ARMORPIERCING",
		"AMMO_SHOTGUN_EXPLOSIVE",
		"AMMO_SHOTGUN_HOLLOWPOINT",
		"AMMO_SHOTGUN_INCENDIARY",
		"AMMO_SMG",
		"AMMO_SMG_FMJ",
		"AMMO_SMG_HOLLOWPOINT",
		"AMMO_SMG_INCENDIARY",
		"AMMO_SMG_TRACER",
		"AMMO_SMOKEGRENADE",
		"AMMO_SNIPER",
		"AMMO_SNIPER_ARMORPIERCING",
		"AMMO_SNIPER_EXPLOSIVE",
		"AMMO_SNIPER_FMJ",
		"AMMO_SNIPER_INCENDIARY",
		"AMMO_SNIPER_REMOTE",
		"AMMO_SNIPER_TRACER",
		"AMMO_SPACE_ROCKET",
		"AMMO_STICKYBOMB",
		"AMMO_STINGER",
		"AMMO_STUNGUN",
		"AMMO_TANK",
	};

	const char* damageTypes[100] = {
		"BULLET",
		"ELECTRIC",
		"EXPLOSIVE",
		"FIRE",
		"MELEE",
		"NONE",
		"SMOKE",
		"WATER_CANNON",
	}; 

	const char* nativeComponents[100] = {
		"COMPONENT_ADVANCEDRIFLE_CLIP_01",
		"COMPONENT_ADVANCEDRIFLE_CLIP_02",
		"COMPONENT_APPISTOL_CLIP_01",
		"COMPONENT_APPISTOL_CLIP_02",
		"COMPONENT_ASSAULTRIFLE_CLIP_01",
		"COMPONENT_ASSAULTRIFLE_CLIP_02",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_01",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_02",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY",
		"COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER",
		"COMPONENT_ASSAULTSHOTGUN_CLIP_01",
		"COMPONENT_ASSAULTSHOTGUN_CLIP_02",
		"COMPONENT_ASSAULTSMG_CLIP_01",
		"COMPONENT_ASSAULTSMG_CLIP_02",
		"COMPONENT_AT_AR_AFGRIP",
		"COMPONENT_AT_AR_AFGRIP_02",
		"COMPONENT_AT_AR_BARREL_01",
		"COMPONENT_AT_AR_BARREL_02",	
		"COMPONENT_AT_AR_FLSH",
		"COMPONENT_AT_AR_SUPP",
		"COMPONENT_AT_AR_SUPP_02",
		"COMPONENT_AT_PI_FLSH",
		"COMPONENT_AT_PI_SUPP",
		"COMPONENT_AT_RAILCOVER_01",
		"COMPONENT_AT_SCOPE_LARGE",
		"COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM",
		"COMPONENT_AT_SCOPE_MACRO",
		"COMPONENT_AT_SCOPE_MAX",
		"COMPONENT_AT_SCOPE_MEDIUM",
		"COMPONENT_AT_SCOPE_SMALL",
		"COMPONENT_AT_SR_SUPP",
		"COMPONENT_CARBINERIFLE_CLIP_01",
		"COMPONENT_CARBINERIFLE_CLIP_02",
    	"COMPONENT_CARBINERIFLE_BOXMAG",
		"COMPONENT_COMBATMG_CLIP_01",
		"COMPONENT_COMBATMG_CLIP_02",
		"COMPONENT_COMBATPISTOL_CLIP_01",
		"COMPONENT_COMBATPISTOL_CLIP_02",
		"COMPONENT_COMBATSHOTGUN_CLIP_01",
		"COMPONENT_GADGETPISTOL_CLIP_01",
		"COMPONENT_GRENADELAUNCHER_CLIP_01",
		"COMPONENT_GUSENBERG_CLIP_01",
		"COMPONENT_GUSENBERG_CLIP_02",
		"COMPONENT_HEAVYPISTOL_CLIP_01",
		"COMPONENT_HEAVYPISTOL_CLIP_02",
		"COMPONENT_HEAVYSNIPER_CLIP_01",
		"COMPONENT_MARKSMANRIFLE_CLIP_01",
		"COMPONENT_MARKSMANRIFLE_CLIP_02",
		"COMPONENT_MACHINEPISTOL_CLIP_01",
		"COMPONENT_MACHINEPISTOL_CLIP_02",
		"COMPONENT_MACHINEPISTOL_CLIP_03",
		"COMPONENT_MG_CLIP_01",
		"COMPONENT_MG_CLIP_02",
		"COMPONENT_MICROSMG_CLIP_01",
		"COMPONENT_MICROSMG_CLIP_02",
		"COMPONENT_MINISMG_CLIP_01",
		"COMPONENT_MINISMG_CLIP_02",
		"COMPONENT_AT_MUZZLE_01",
		"COMPONENT_AT_MUZZLE_02",
		"COMPONENT_AT_MUZZLE_03",
		"COMPONENT_AT_MUZZLE_04",
		"COMPONENT_AT_MUZZLE_05",
		"COMPONENT_AT_MUZZLE_06",
		"COMPONENT_AT_MUZZLE_07",
		"COMPONENT_PISTOL50_CLIP_01",
		"COMPONENT_PISTOL50_CLIP_02",
		"COMPONENT_PISTOL_CLIP_02",
		"COMPONENT_PRECISIONRIFLE_CLIP_01",
		"COMPONENT_PUMPSHOTGUN_CLIP_01",
		"COMPONENT_REVOLVER_CLIP_01",
		"COMPONENT_SAWNOFFSHOTGUN_CLIP_01",
		"COMPONENT_SMG_CLIP_01",
		"COMPONENT_SMG_CLIP_02",
		"COMPONENT_SNIPERRIFLE_CLIP_01",
		"COMPONENT_SPECIALCARBINE_CLIP_01",
		"COMPONENT_SPECIALCARBINE_CLIP_02",
		"COMPONENT_SNSPISTOL_CLIP_01",
		"COMPONENT_SNSPISTOL_CLIP_02",
		"COMPONENT_PISTOL_CLIP_01",
		"COMPONENT_TECPISTOL_CLIP_01",
		"COMPONENT_TECPISTOL_CLIP_02",
	};

	const char* nativeAmmoInfos[100] = {
		"Default Ammo",
		"AMMO_MG_ARMORPIERCING",
		"AMMO_MG_FMJ",
		"AMMO_MG_INCENDIARY",
		"AMMO_MG_TRACER",
		"AMMO_PISTOL_FMJ",
		"AMMO_PISTOL_HOLLOWPOINT",
		"AMMO_PISTOL_INCENDIARY",
		"AMMO_PISTOL_TRACER",
		"AMMO_RIFLE_ARMORPIERCING",
		"AMMO_RIFLE_FMJ",
		"AMMO_RIFLE_INCENDIARY",
		"AMMO_RIFLE_TRACER",
		"AMMO_SHOTGUN_ARMORPIERCING",
		"AMMO_SHOTGUN_EXPLOSIVE",
		"AMMO_SHOTGUN_HOLLOWPOINT",
		"AMMO_SHOTGUN_INCENDIARY",
		"AMMO_SMG_FMJ",
		"AMMO_SMG_HOLLOWPOINT",
		"AMMO_SMG_INCENDIARY",
		"AMMO_SMG_TRACER",
		"AMMO_SNIPER_ARMORPIERCING",
		"AMMO_SNIPER_EXPLOSIVE",
		"AMMO_SNIPER_FMJ",
		"AMMO_SNIPER_INCENDIARY",
		"AMMO_SNIPER_TRACER",
	};

	std::vector<cWeaponComponent*> components = {};
	std::vector<cWeaponAsset*> weaponAssets = {};

private:
	std::string weaponTemplate;
	std::string weaponName;
	std::string weaponId;
	std::string weaponModel;

	std::string audioItem;
	float weaponDamage;
	float weaponRange;
	std::string ammoType;
	int weaponLOD;
	float weaponReloadSpeedMultiplier;
	float weaponFireRateMultiplier;
	float headShotDamageModifierPlayer;
	std::string damageType;

	bool validWeaponModelFound;
};
