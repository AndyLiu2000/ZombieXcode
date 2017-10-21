#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<F_U_DNA>[]
struct List_1U5BU5D_t2214613008;
// System.Collections.Generic.List`1<F_U_MissionFlag>
struct List_1_t185850750;
// System.Collections.Generic.List`1<System.String>
struct List_1_t934097503;
// System.Collections.Generic.List`1<U_DNA>[]
struct List_1U5BU5D_t1291586516;
// System.Collections.Generic.List`1<U_MissionFlag>
struct List_1_t3245882731;
// System.Char[]
struct CharU5BU5D_t3850815912;
// System.Void
struct Void_t346236799;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3011634166;
// System.Collections.Generic.List`1<Infection_Sheet>
struct List_1_t3000269100;
// System.Collections.Generic.List`1<Damage_Sheet>
struct List_1_t1798217450;
// System.Collections.Generic.List`1<SpecialAbility_Sheet>
struct List_1_t2503190423;
// System.Collections.Generic.List`1<Mission_Sheet>
struct List_1_t330677299;
// System.Collections.Generic.List`1<Virus_Sheet>
struct List_1_t1891562591;
// System.Collections.Generic.List`1<Human_Sheet>
struct List_1_t4098843152;
// System.Collections.Generic.List`1<Zombie_Sheet>
struct List_1_t4242990511;
// System.Collections.Generic.List`1<UnlockMission_Sheet>
struct List_1_t2876651533;
// UnityEngine.GameObject
struct GameObject_t2717650277;
// ObjectPool`2<UnityEngine.GameObject,IAP_Sheet>
struct ObjectPool_2_t155069204;
// UISprite
struct UISprite_t104102433;
// UILabel
struct UILabel_t659981927;
// Battle_C
struct Battle_C_t2125781796;
// ObjectPool`2<UnityEngine.GameObject,Virus_Sheet>
struct ObjectPool_2_t3475253714;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t3938208576;
// UISlider
struct UISlider_t1108210950;
// UIToggle
struct UIToggle_t917154769;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef F_U_DNA_T3019123127_H
#define F_U_DNA_T3019123127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_U_DNA
struct  F_U_DNA_t3019123127  : public RuntimeObject
{
public:
	// System.String F_U_DNA::ID
	String_t* ___ID_0;
	// System.String F_U_DNA::Lv
	String_t* ___Lv_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(F_U_DNA_t3019123127, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ID_0), value);
	}

	inline static int32_t get_offset_of_Lv_1() { return static_cast<int32_t>(offsetof(F_U_DNA_t3019123127, ___Lv_1)); }
	inline String_t* get_Lv_1() const { return ___Lv_1; }
	inline String_t** get_address_of_Lv_1() { return &___Lv_1; }
	inline void set_Lv_1(String_t* value)
	{
		___Lv_1 = value;
		Il2CppCodeGenWriteBarrier((&___Lv_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_U_DNA_T3019123127_H
#ifndef UNLOCKMISSION_SHEET_T1610245607_H
#define UNLOCKMISSION_SHEET_T1610245607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnlockMission_Sheet
struct  UnlockMission_Sheet_t1610245607  : public RuntimeObject
{
public:
	// System.String UnlockMission_Sheet::MissionID
	String_t* ___MissionID_0;
	// System.String UnlockMission_Sheet::UnlockType
	String_t* ___UnlockType_1;
	// System.String UnlockMission_Sheet::Param1
	String_t* ___Param1_2;
	// System.String UnlockMission_Sheet::Param2
	String_t* ___Param2_3;
	// System.String UnlockMission_Sheet::Param3
	String_t* ___Param3_4;
	// System.String UnlockMission_Sheet::Param4
	String_t* ___Param4_5;
	// System.String UnlockMission_Sheet::Param5
	String_t* ___Param5_6;
	// System.String UnlockMission_Sheet::UnlockItemID
	String_t* ___UnlockItemID_7;
	// System.String UnlockMission_Sheet::UnlockCost
	String_t* ___UnlockCost_8;

public:
	inline static int32_t get_offset_of_MissionID_0() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___MissionID_0)); }
	inline String_t* get_MissionID_0() const { return ___MissionID_0; }
	inline String_t** get_address_of_MissionID_0() { return &___MissionID_0; }
	inline void set_MissionID_0(String_t* value)
	{
		___MissionID_0 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_0), value);
	}

	inline static int32_t get_offset_of_UnlockType_1() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___UnlockType_1)); }
	inline String_t* get_UnlockType_1() const { return ___UnlockType_1; }
	inline String_t** get_address_of_UnlockType_1() { return &___UnlockType_1; }
	inline void set_UnlockType_1(String_t* value)
	{
		___UnlockType_1 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockType_1), value);
	}

	inline static int32_t get_offset_of_Param1_2() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___Param1_2)); }
	inline String_t* get_Param1_2() const { return ___Param1_2; }
	inline String_t** get_address_of_Param1_2() { return &___Param1_2; }
	inline void set_Param1_2(String_t* value)
	{
		___Param1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Param1_2), value);
	}

	inline static int32_t get_offset_of_Param2_3() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___Param2_3)); }
	inline String_t* get_Param2_3() const { return ___Param2_3; }
	inline String_t** get_address_of_Param2_3() { return &___Param2_3; }
	inline void set_Param2_3(String_t* value)
	{
		___Param2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Param2_3), value);
	}

	inline static int32_t get_offset_of_Param3_4() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___Param3_4)); }
	inline String_t* get_Param3_4() const { return ___Param3_4; }
	inline String_t** get_address_of_Param3_4() { return &___Param3_4; }
	inline void set_Param3_4(String_t* value)
	{
		___Param3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Param3_4), value);
	}

	inline static int32_t get_offset_of_Param4_5() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___Param4_5)); }
	inline String_t* get_Param4_5() const { return ___Param4_5; }
	inline String_t** get_address_of_Param4_5() { return &___Param4_5; }
	inline void set_Param4_5(String_t* value)
	{
		___Param4_5 = value;
		Il2CppCodeGenWriteBarrier((&___Param4_5), value);
	}

	inline static int32_t get_offset_of_Param5_6() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___Param5_6)); }
	inline String_t* get_Param5_6() const { return ___Param5_6; }
	inline String_t** get_address_of_Param5_6() { return &___Param5_6; }
	inline void set_Param5_6(String_t* value)
	{
		___Param5_6 = value;
		Il2CppCodeGenWriteBarrier((&___Param5_6), value);
	}

	inline static int32_t get_offset_of_UnlockItemID_7() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___UnlockItemID_7)); }
	inline String_t* get_UnlockItemID_7() const { return ___UnlockItemID_7; }
	inline String_t** get_address_of_UnlockItemID_7() { return &___UnlockItemID_7; }
	inline void set_UnlockItemID_7(String_t* value)
	{
		___UnlockItemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockItemID_7), value);
	}

	inline static int32_t get_offset_of_UnlockCost_8() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t1610245607, ___UnlockCost_8)); }
	inline String_t* get_UnlockCost_8() const { return ___UnlockCost_8; }
	inline String_t** get_address_of_UnlockCost_8() { return &___UnlockCost_8; }
	inline void set_UnlockCost_8(String_t* value)
	{
		___UnlockCost_8 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockCost_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKMISSION_SHEET_T1610245607_H
#ifndef U_MISSIONFLAG_T1979476805_H
#define U_MISSIONFLAG_T1979476805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// U_MissionFlag
struct  U_MissionFlag_t1979476805  : public RuntimeObject
{
public:
	// System.Int32 U_MissionFlag::VirusID
	int32_t ___VirusID_0;
	// System.Int32 U_MissionFlag::MissionID
	int32_t ___MissionID_1;
	// System.Boolean U_MissionFlag::Flag
	bool ___Flag_2;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(U_MissionFlag_t1979476805, ___VirusID_0)); }
	inline int32_t get_VirusID_0() const { return ___VirusID_0; }
	inline int32_t* get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(int32_t value)
	{
		___VirusID_0 = value;
	}

	inline static int32_t get_offset_of_MissionID_1() { return static_cast<int32_t>(offsetof(U_MissionFlag_t1979476805, ___MissionID_1)); }
	inline int32_t get_MissionID_1() const { return ___MissionID_1; }
	inline int32_t* get_address_of_MissionID_1() { return &___MissionID_1; }
	inline void set_MissionID_1(int32_t value)
	{
		___MissionID_1 = value;
	}

	inline static int32_t get_offset_of_Flag_2() { return static_cast<int32_t>(offsetof(U_MissionFlag_t1979476805, ___Flag_2)); }
	inline bool get_Flag_2() const { return ___Flag_2; }
	inline bool* get_address_of_Flag_2() { return &___Flag_2; }
	inline void set_Flag_2(bool value)
	{
		___Flag_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U_MISSIONFLAG_T1979476805_H
#ifndef DAMAGE_SHEET_T531811524_H
#define DAMAGE_SHEET_T531811524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Damage_Sheet
struct  Damage_Sheet_t531811524  : public RuntimeObject
{
public:
	// System.String Damage_Sheet::TotalDamage
	String_t* ___TotalDamage_0;
	// System.String Damage_Sheet::GainSP
	String_t* ___GainSP_1;

public:
	inline static int32_t get_offset_of_TotalDamage_0() { return static_cast<int32_t>(offsetof(Damage_Sheet_t531811524, ___TotalDamage_0)); }
	inline String_t* get_TotalDamage_0() const { return ___TotalDamage_0; }
	inline String_t** get_address_of_TotalDamage_0() { return &___TotalDamage_0; }
	inline void set_TotalDamage_0(String_t* value)
	{
		___TotalDamage_0 = value;
		Il2CppCodeGenWriteBarrier((&___TotalDamage_0), value);
	}

	inline static int32_t get_offset_of_GainSP_1() { return static_cast<int32_t>(offsetof(Damage_Sheet_t531811524, ___GainSP_1)); }
	inline String_t* get_GainSP_1() const { return ___GainSP_1; }
	inline String_t** get_address_of_GainSP_1() { return &___GainSP_1; }
	inline void set_GainSP_1(String_t* value)
	{
		___GainSP_1 = value;
		Il2CppCodeGenWriteBarrier((&___GainSP_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAMAGE_SHEET_T531811524_H
#ifndef INFECTION_SHEET_T1733863174_H
#define INFECTION_SHEET_T1733863174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Infection_Sheet
struct  Infection_Sheet_t1733863174  : public RuntimeObject
{
public:
	// System.String Infection_Sheet::TotalInfection
	String_t* ___TotalInfection_0;
	// System.String Infection_Sheet::GainSP
	String_t* ___GainSP_1;

public:
	inline static int32_t get_offset_of_TotalInfection_0() { return static_cast<int32_t>(offsetof(Infection_Sheet_t1733863174, ___TotalInfection_0)); }
	inline String_t* get_TotalInfection_0() const { return ___TotalInfection_0; }
	inline String_t** get_address_of_TotalInfection_0() { return &___TotalInfection_0; }
	inline void set_TotalInfection_0(String_t* value)
	{
		___TotalInfection_0 = value;
		Il2CppCodeGenWriteBarrier((&___TotalInfection_0), value);
	}

	inline static int32_t get_offset_of_GainSP_1() { return static_cast<int32_t>(offsetof(Infection_Sheet_t1733863174, ___GainSP_1)); }
	inline String_t* get_GainSP_1() const { return ___GainSP_1; }
	inline String_t** get_address_of_GainSP_1() { return &___GainSP_1; }
	inline void set_GainSP_1(String_t* value)
	{
		___GainSP_1 = value;
		Il2CppCodeGenWriteBarrier((&___GainSP_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFECTION_SHEET_T1733863174_H
#ifndef F_USER_T1504359451_H
#define F_USER_T1504359451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_User
struct  F_User_t1504359451  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<F_U_DNA>[] F_User::DB_u_dna
	List_1U5BU5D_t2214613008* ___DB_u_dna_0;
	// System.String F_User::Gold
	String_t* ___Gold_1;
	// System.String F_User::Gem
	String_t* ___Gem_2;
	// System.Collections.Generic.List`1<F_U_MissionFlag> F_User::DB_u_mf
	List_1_t185850750 * ___DB_u_mf_3;
	// System.Collections.Generic.List`1<System.String> F_User::DB_u_UnlockedViruses
	List_1_t934097503 * ___DB_u_UnlockedViruses_4;
	// System.Collections.Generic.List`1<System.String> F_User::DB_u_UnlockedZombies
	List_1_t934097503 * ___DB_u_UnlockedZombies_5;

public:
	inline static int32_t get_offset_of_DB_u_dna_0() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___DB_u_dna_0)); }
	inline List_1U5BU5D_t2214613008* get_DB_u_dna_0() const { return ___DB_u_dna_0; }
	inline List_1U5BU5D_t2214613008** get_address_of_DB_u_dna_0() { return &___DB_u_dna_0; }
	inline void set_DB_u_dna_0(List_1U5BU5D_t2214613008* value)
	{
		___DB_u_dna_0 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_dna_0), value);
	}

	inline static int32_t get_offset_of_Gold_1() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___Gold_1)); }
	inline String_t* get_Gold_1() const { return ___Gold_1; }
	inline String_t** get_address_of_Gold_1() { return &___Gold_1; }
	inline void set_Gold_1(String_t* value)
	{
		___Gold_1 = value;
		Il2CppCodeGenWriteBarrier((&___Gold_1), value);
	}

	inline static int32_t get_offset_of_Gem_2() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___Gem_2)); }
	inline String_t* get_Gem_2() const { return ___Gem_2; }
	inline String_t** get_address_of_Gem_2() { return &___Gem_2; }
	inline void set_Gem_2(String_t* value)
	{
		___Gem_2 = value;
		Il2CppCodeGenWriteBarrier((&___Gem_2), value);
	}

	inline static int32_t get_offset_of_DB_u_mf_3() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___DB_u_mf_3)); }
	inline List_1_t185850750 * get_DB_u_mf_3() const { return ___DB_u_mf_3; }
	inline List_1_t185850750 ** get_address_of_DB_u_mf_3() { return &___DB_u_mf_3; }
	inline void set_DB_u_mf_3(List_1_t185850750 * value)
	{
		___DB_u_mf_3 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_mf_3), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedViruses_4() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___DB_u_UnlockedViruses_4)); }
	inline List_1_t934097503 * get_DB_u_UnlockedViruses_4() const { return ___DB_u_UnlockedViruses_4; }
	inline List_1_t934097503 ** get_address_of_DB_u_UnlockedViruses_4() { return &___DB_u_UnlockedViruses_4; }
	inline void set_DB_u_UnlockedViruses_4(List_1_t934097503 * value)
	{
		___DB_u_UnlockedViruses_4 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedViruses_4), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedZombies_5() { return static_cast<int32_t>(offsetof(F_User_t1504359451, ___DB_u_UnlockedZombies_5)); }
	inline List_1_t934097503 * get_DB_u_UnlockedZombies_5() const { return ___DB_u_UnlockedZombies_5; }
	inline List_1_t934097503 ** get_address_of_DB_u_UnlockedZombies_5() { return &___DB_u_UnlockedZombies_5; }
	inline void set_DB_u_UnlockedZombies_5(List_1_t934097503 * value)
	{
		___DB_u_UnlockedZombies_5 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedZombies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_USER_T1504359451_H
#ifndef SPECIALABILITY_SHEET_T1236784497_H
#define SPECIALABILITY_SHEET_T1236784497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialAbility_Sheet
struct  SpecialAbility_Sheet_t1236784497  : public RuntimeObject
{
public:
	// System.String SpecialAbility_Sheet::ID
	String_t* ___ID_0;
	// System.String SpecialAbility_Sheet::ResIcon
	String_t* ___ResIcon_1;
	// System.String SpecialAbility_Sheet::Name
	String_t* ___Name_2;
	// System.String SpecialAbility_Sheet::Value1
	String_t* ___Value1_3;
	// System.String SpecialAbility_Sheet::Value1_Add
	String_t* ___Value1_Add_4;
	// System.String SpecialAbility_Sheet::Value2
	String_t* ___Value2_5;
	// System.String SpecialAbility_Sheet::Value2_Add
	String_t* ___Value2_Add_6;
	// System.String SpecialAbility_Sheet::Value3
	String_t* ___Value3_7;
	// System.String SpecialAbility_Sheet::Value3_Add
	String_t* ___Value3_Add_8;
	// System.String SpecialAbility_Sheet::DesTextID
	String_t* ___DesTextID_9;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ID_0), value);
	}

	inline static int32_t get_offset_of_ResIcon_1() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___ResIcon_1)); }
	inline String_t* get_ResIcon_1() const { return ___ResIcon_1; }
	inline String_t** get_address_of_ResIcon_1() { return &___ResIcon_1; }
	inline void set_ResIcon_1(String_t* value)
	{
		___ResIcon_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResIcon_1), value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value1_3() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value1_3)); }
	inline String_t* get_Value1_3() const { return ___Value1_3; }
	inline String_t** get_address_of_Value1_3() { return &___Value1_3; }
	inline void set_Value1_3(String_t* value)
	{
		___Value1_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_3), value);
	}

	inline static int32_t get_offset_of_Value1_Add_4() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value1_Add_4)); }
	inline String_t* get_Value1_Add_4() const { return ___Value1_Add_4; }
	inline String_t** get_address_of_Value1_Add_4() { return &___Value1_Add_4; }
	inline void set_Value1_Add_4(String_t* value)
	{
		___Value1_Add_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_Add_4), value);
	}

	inline static int32_t get_offset_of_Value2_5() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value2_5)); }
	inline String_t* get_Value2_5() const { return ___Value2_5; }
	inline String_t** get_address_of_Value2_5() { return &___Value2_5; }
	inline void set_Value2_5(String_t* value)
	{
		___Value2_5 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_5), value);
	}

	inline static int32_t get_offset_of_Value2_Add_6() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value2_Add_6)); }
	inline String_t* get_Value2_Add_6() const { return ___Value2_Add_6; }
	inline String_t** get_address_of_Value2_Add_6() { return &___Value2_Add_6; }
	inline void set_Value2_Add_6(String_t* value)
	{
		___Value2_Add_6 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_Add_6), value);
	}

	inline static int32_t get_offset_of_Value3_7() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value3_7)); }
	inline String_t* get_Value3_7() const { return ___Value3_7; }
	inline String_t** get_address_of_Value3_7() { return &___Value3_7; }
	inline void set_Value3_7(String_t* value)
	{
		___Value3_7 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_7), value);
	}

	inline static int32_t get_offset_of_Value3_Add_8() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___Value3_Add_8)); }
	inline String_t* get_Value3_Add_8() const { return ___Value3_Add_8; }
	inline String_t** get_address_of_Value3_Add_8() { return &___Value3_Add_8; }
	inline void set_Value3_Add_8(String_t* value)
	{
		___Value3_Add_8 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_Add_8), value);
	}

	inline static int32_t get_offset_of_DesTextID_9() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1236784497, ___DesTextID_9)); }
	inline String_t* get_DesTextID_9() const { return ___DesTextID_9; }
	inline String_t** get_address_of_DesTextID_9() { return &___DesTextID_9; }
	inline void set_DesTextID_9(String_t* value)
	{
		___DesTextID_9 = value;
		Il2CppCodeGenWriteBarrier((&___DesTextID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALABILITY_SHEET_T1236784497_H
#ifndef F_U_MISSIONFLAG_T3214412120_H
#define F_U_MISSIONFLAG_T3214412120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_U_MissionFlag
struct  F_U_MissionFlag_t3214412120  : public RuntimeObject
{
public:
	// System.String F_U_MissionFlag::VirusID
	String_t* ___VirusID_0;
	// System.String F_U_MissionFlag::MissionID
	String_t* ___MissionID_1;
	// System.String F_U_MissionFlag::Flag
	String_t* ___Flag_2;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3214412120, ___VirusID_0)); }
	inline String_t* get_VirusID_0() const { return ___VirusID_0; }
	inline String_t** get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(String_t* value)
	{
		___VirusID_0 = value;
		Il2CppCodeGenWriteBarrier((&___VirusID_0), value);
	}

	inline static int32_t get_offset_of_MissionID_1() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3214412120, ___MissionID_1)); }
	inline String_t* get_MissionID_1() const { return ___MissionID_1; }
	inline String_t** get_address_of_MissionID_1() { return &___MissionID_1; }
	inline void set_MissionID_1(String_t* value)
	{
		___MissionID_1 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_1), value);
	}

	inline static int32_t get_offset_of_Flag_2() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3214412120, ___Flag_2)); }
	inline String_t* get_Flag_2() const { return ___Flag_2; }
	inline String_t** get_address_of_Flag_2() { return &___Flag_2; }
	inline void set_Flag_2(String_t* value)
	{
		___Flag_2 = value;
		Il2CppCodeGenWriteBarrier((&___Flag_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_U_MISSIONFLAG_T3214412120_H
#ifndef VIRUS_SHEET_T625156665_H
#define VIRUS_SHEET_T625156665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Virus_Sheet
struct  Virus_Sheet_t625156665  : public RuntimeObject
{
public:
	// System.String Virus_Sheet::VirusID
	String_t* ___VirusID_0;
	// System.String Virus_Sheet::InfectSpeed
	String_t* ___InfectSpeed_1;
	// System.String Virus_Sheet::InfectHuman_1
	String_t* ___InfectHuman_1_2;
	// System.String Virus_Sheet::InfectHuman_2
	String_t* ___InfectHuman_2_3;
	// System.String Virus_Sheet::InfectHuman_3
	String_t* ___InfectHuman_3_4;
	// System.String Virus_Sheet::InfectHuman_4
	String_t* ___InfectHuman_4_5;
	// System.String Virus_Sheet::InfectHuman_5
	String_t* ___InfectHuman_5_6;
	// System.String Virus_Sheet::InfectBlock_Climate_1
	String_t* ___InfectBlock_Climate_1_7;
	// System.String Virus_Sheet::InfectBlock_Climate_2
	String_t* ___InfectBlock_Climate_2_8;
	// System.String Virus_Sheet::InfectBlock_Climate_3
	String_t* ___InfectBlock_Climate_3_9;
	// System.String Virus_Sheet::InfectBlock_Envi_1
	String_t* ___InfectBlock_Envi_1_10;
	// System.String Virus_Sheet::InfectBlock_Envi_2
	String_t* ___InfectBlock_Envi_2_11;
	// System.String Virus_Sheet::InfectBlock_Envi_3
	String_t* ___InfectBlock_Envi_3_12;
	// System.String Virus_Sheet::CommunicateRate
	String_t* ___CommunicateRate_13;
	// System.String Virus_Sheet::CommunicateHuman_1
	String_t* ___CommunicateHuman_1_14;
	// System.String Virus_Sheet::CommunicateHuman_2
	String_t* ___CommunicateHuman_2_15;
	// System.String Virus_Sheet::CommunicateHuman_3
	String_t* ___CommunicateHuman_3_16;
	// System.String Virus_Sheet::CommunicateHuman_4
	String_t* ___CommunicateHuman_4_17;
	// System.String Virus_Sheet::CommunicateHuman_5
	String_t* ___CommunicateHuman_5_18;
	// System.String Virus_Sheet::CommunicateBlock_Climate_1
	String_t* ___CommunicateBlock_Climate_1_19;
	// System.String Virus_Sheet::CommunicateBlock_Climate_2
	String_t* ___CommunicateBlock_Climate_2_20;
	// System.String Virus_Sheet::CommunicateBlock_Climate_3
	String_t* ___CommunicateBlock_Climate_3_21;
	// System.String Virus_Sheet::CommunicateBlock_Envi_1
	String_t* ___CommunicateBlock_Envi_1_22;
	// System.String Virus_Sheet::CommunicateBlock_Envi_2
	String_t* ___CommunicateBlock_Envi_2_23;
	// System.String Virus_Sheet::CommunicateBlock_Envi_3
	String_t* ___CommunicateBlock_Envi_3_24;
	// System.String Virus_Sheet::InitialSP
	String_t* ___InitialSP_25;
	// System.String Virus_Sheet::UnlockNum
	String_t* ___UnlockNum_26;
	// System.String Virus_Sheet::Name
	String_t* ___Name_27;
	// System.String Virus_Sheet::Des
	String_t* ___Des_28;
	// System.String Virus_Sheet::Res
	String_t* ___Res_29;
	// System.String Virus_Sheet::StrategyID
	String_t* ___StrategyID_30;
	// System.String Virus_Sheet::Medi_Start
	String_t* ___Medi_Start_31;
	// System.String Virus_Sheet::Medi_Work
	String_t* ___Medi_Work_32;
	// System.String Virus_Sheet::Medi_Spd
	String_t* ___Medi_Spd_33;
	// System.String Virus_Sheet::CommunicationThreshold
	String_t* ___CommunicationThreshold_34;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___VirusID_0)); }
	inline String_t* get_VirusID_0() const { return ___VirusID_0; }
	inline String_t** get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(String_t* value)
	{
		___VirusID_0 = value;
		Il2CppCodeGenWriteBarrier((&___VirusID_0), value);
	}

	inline static int32_t get_offset_of_InfectSpeed_1() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectSpeed_1)); }
	inline String_t* get_InfectSpeed_1() const { return ___InfectSpeed_1; }
	inline String_t** get_address_of_InfectSpeed_1() { return &___InfectSpeed_1; }
	inline void set_InfectSpeed_1(String_t* value)
	{
		___InfectSpeed_1 = value;
		Il2CppCodeGenWriteBarrier((&___InfectSpeed_1), value);
	}

	inline static int32_t get_offset_of_InfectHuman_1_2() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectHuman_1_2)); }
	inline String_t* get_InfectHuman_1_2() const { return ___InfectHuman_1_2; }
	inline String_t** get_address_of_InfectHuman_1_2() { return &___InfectHuman_1_2; }
	inline void set_InfectHuman_1_2(String_t* value)
	{
		___InfectHuman_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_1_2), value);
	}

	inline static int32_t get_offset_of_InfectHuman_2_3() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectHuman_2_3)); }
	inline String_t* get_InfectHuman_2_3() const { return ___InfectHuman_2_3; }
	inline String_t** get_address_of_InfectHuman_2_3() { return &___InfectHuman_2_3; }
	inline void set_InfectHuman_2_3(String_t* value)
	{
		___InfectHuman_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_2_3), value);
	}

	inline static int32_t get_offset_of_InfectHuman_3_4() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectHuman_3_4)); }
	inline String_t* get_InfectHuman_3_4() const { return ___InfectHuman_3_4; }
	inline String_t** get_address_of_InfectHuman_3_4() { return &___InfectHuman_3_4; }
	inline void set_InfectHuman_3_4(String_t* value)
	{
		___InfectHuman_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_3_4), value);
	}

	inline static int32_t get_offset_of_InfectHuman_4_5() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectHuman_4_5)); }
	inline String_t* get_InfectHuman_4_5() const { return ___InfectHuman_4_5; }
	inline String_t** get_address_of_InfectHuman_4_5() { return &___InfectHuman_4_5; }
	inline void set_InfectHuman_4_5(String_t* value)
	{
		___InfectHuman_4_5 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_4_5), value);
	}

	inline static int32_t get_offset_of_InfectHuman_5_6() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectHuman_5_6)); }
	inline String_t* get_InfectHuman_5_6() const { return ___InfectHuman_5_6; }
	inline String_t** get_address_of_InfectHuman_5_6() { return &___InfectHuman_5_6; }
	inline void set_InfectHuman_5_6(String_t* value)
	{
		___InfectHuman_5_6 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_5_6), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_1_7() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Climate_1_7)); }
	inline String_t* get_InfectBlock_Climate_1_7() const { return ___InfectBlock_Climate_1_7; }
	inline String_t** get_address_of_InfectBlock_Climate_1_7() { return &___InfectBlock_Climate_1_7; }
	inline void set_InfectBlock_Climate_1_7(String_t* value)
	{
		___InfectBlock_Climate_1_7 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_1_7), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_2_8() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Climate_2_8)); }
	inline String_t* get_InfectBlock_Climate_2_8() const { return ___InfectBlock_Climate_2_8; }
	inline String_t** get_address_of_InfectBlock_Climate_2_8() { return &___InfectBlock_Climate_2_8; }
	inline void set_InfectBlock_Climate_2_8(String_t* value)
	{
		___InfectBlock_Climate_2_8 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_2_8), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_3_9() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Climate_3_9)); }
	inline String_t* get_InfectBlock_Climate_3_9() const { return ___InfectBlock_Climate_3_9; }
	inline String_t** get_address_of_InfectBlock_Climate_3_9() { return &___InfectBlock_Climate_3_9; }
	inline void set_InfectBlock_Climate_3_9(String_t* value)
	{
		___InfectBlock_Climate_3_9 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_3_9), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_1_10() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Envi_1_10)); }
	inline String_t* get_InfectBlock_Envi_1_10() const { return ___InfectBlock_Envi_1_10; }
	inline String_t** get_address_of_InfectBlock_Envi_1_10() { return &___InfectBlock_Envi_1_10; }
	inline void set_InfectBlock_Envi_1_10(String_t* value)
	{
		___InfectBlock_Envi_1_10 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_1_10), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_2_11() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Envi_2_11)); }
	inline String_t* get_InfectBlock_Envi_2_11() const { return ___InfectBlock_Envi_2_11; }
	inline String_t** get_address_of_InfectBlock_Envi_2_11() { return &___InfectBlock_Envi_2_11; }
	inline void set_InfectBlock_Envi_2_11(String_t* value)
	{
		___InfectBlock_Envi_2_11 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_2_11), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_3_12() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InfectBlock_Envi_3_12)); }
	inline String_t* get_InfectBlock_Envi_3_12() const { return ___InfectBlock_Envi_3_12; }
	inline String_t** get_address_of_InfectBlock_Envi_3_12() { return &___InfectBlock_Envi_3_12; }
	inline void set_InfectBlock_Envi_3_12(String_t* value)
	{
		___InfectBlock_Envi_3_12 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_3_12), value);
	}

	inline static int32_t get_offset_of_CommunicateRate_13() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateRate_13)); }
	inline String_t* get_CommunicateRate_13() const { return ___CommunicateRate_13; }
	inline String_t** get_address_of_CommunicateRate_13() { return &___CommunicateRate_13; }
	inline void set_CommunicateRate_13(String_t* value)
	{
		___CommunicateRate_13 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateRate_13), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_1_14() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateHuman_1_14)); }
	inline String_t* get_CommunicateHuman_1_14() const { return ___CommunicateHuman_1_14; }
	inline String_t** get_address_of_CommunicateHuman_1_14() { return &___CommunicateHuman_1_14; }
	inline void set_CommunicateHuman_1_14(String_t* value)
	{
		___CommunicateHuman_1_14 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_1_14), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_2_15() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateHuman_2_15)); }
	inline String_t* get_CommunicateHuman_2_15() const { return ___CommunicateHuman_2_15; }
	inline String_t** get_address_of_CommunicateHuman_2_15() { return &___CommunicateHuman_2_15; }
	inline void set_CommunicateHuman_2_15(String_t* value)
	{
		___CommunicateHuman_2_15 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_2_15), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_3_16() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateHuman_3_16)); }
	inline String_t* get_CommunicateHuman_3_16() const { return ___CommunicateHuman_3_16; }
	inline String_t** get_address_of_CommunicateHuman_3_16() { return &___CommunicateHuman_3_16; }
	inline void set_CommunicateHuman_3_16(String_t* value)
	{
		___CommunicateHuman_3_16 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_3_16), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_4_17() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateHuman_4_17)); }
	inline String_t* get_CommunicateHuman_4_17() const { return ___CommunicateHuman_4_17; }
	inline String_t** get_address_of_CommunicateHuman_4_17() { return &___CommunicateHuman_4_17; }
	inline void set_CommunicateHuman_4_17(String_t* value)
	{
		___CommunicateHuman_4_17 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_4_17), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_5_18() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateHuman_5_18)); }
	inline String_t* get_CommunicateHuman_5_18() const { return ___CommunicateHuman_5_18; }
	inline String_t** get_address_of_CommunicateHuman_5_18() { return &___CommunicateHuman_5_18; }
	inline void set_CommunicateHuman_5_18(String_t* value)
	{
		___CommunicateHuman_5_18 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_5_18), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_1_19() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Climate_1_19)); }
	inline String_t* get_CommunicateBlock_Climate_1_19() const { return ___CommunicateBlock_Climate_1_19; }
	inline String_t** get_address_of_CommunicateBlock_Climate_1_19() { return &___CommunicateBlock_Climate_1_19; }
	inline void set_CommunicateBlock_Climate_1_19(String_t* value)
	{
		___CommunicateBlock_Climate_1_19 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_1_19), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_2_20() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Climate_2_20)); }
	inline String_t* get_CommunicateBlock_Climate_2_20() const { return ___CommunicateBlock_Climate_2_20; }
	inline String_t** get_address_of_CommunicateBlock_Climate_2_20() { return &___CommunicateBlock_Climate_2_20; }
	inline void set_CommunicateBlock_Climate_2_20(String_t* value)
	{
		___CommunicateBlock_Climate_2_20 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_2_20), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_3_21() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Climate_3_21)); }
	inline String_t* get_CommunicateBlock_Climate_3_21() const { return ___CommunicateBlock_Climate_3_21; }
	inline String_t** get_address_of_CommunicateBlock_Climate_3_21() { return &___CommunicateBlock_Climate_3_21; }
	inline void set_CommunicateBlock_Climate_3_21(String_t* value)
	{
		___CommunicateBlock_Climate_3_21 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_3_21), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_1_22() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Envi_1_22)); }
	inline String_t* get_CommunicateBlock_Envi_1_22() const { return ___CommunicateBlock_Envi_1_22; }
	inline String_t** get_address_of_CommunicateBlock_Envi_1_22() { return &___CommunicateBlock_Envi_1_22; }
	inline void set_CommunicateBlock_Envi_1_22(String_t* value)
	{
		___CommunicateBlock_Envi_1_22 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_1_22), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_2_23() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Envi_2_23)); }
	inline String_t* get_CommunicateBlock_Envi_2_23() const { return ___CommunicateBlock_Envi_2_23; }
	inline String_t** get_address_of_CommunicateBlock_Envi_2_23() { return &___CommunicateBlock_Envi_2_23; }
	inline void set_CommunicateBlock_Envi_2_23(String_t* value)
	{
		___CommunicateBlock_Envi_2_23 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_2_23), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_3_24() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicateBlock_Envi_3_24)); }
	inline String_t* get_CommunicateBlock_Envi_3_24() const { return ___CommunicateBlock_Envi_3_24; }
	inline String_t** get_address_of_CommunicateBlock_Envi_3_24() { return &___CommunicateBlock_Envi_3_24; }
	inline void set_CommunicateBlock_Envi_3_24(String_t* value)
	{
		___CommunicateBlock_Envi_3_24 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_3_24), value);
	}

	inline static int32_t get_offset_of_InitialSP_25() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___InitialSP_25)); }
	inline String_t* get_InitialSP_25() const { return ___InitialSP_25; }
	inline String_t** get_address_of_InitialSP_25() { return &___InitialSP_25; }
	inline void set_InitialSP_25(String_t* value)
	{
		___InitialSP_25 = value;
		Il2CppCodeGenWriteBarrier((&___InitialSP_25), value);
	}

	inline static int32_t get_offset_of_UnlockNum_26() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___UnlockNum_26)); }
	inline String_t* get_UnlockNum_26() const { return ___UnlockNum_26; }
	inline String_t** get_address_of_UnlockNum_26() { return &___UnlockNum_26; }
	inline void set_UnlockNum_26(String_t* value)
	{
		___UnlockNum_26 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockNum_26), value);
	}

	inline static int32_t get_offset_of_Name_27() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Name_27)); }
	inline String_t* get_Name_27() const { return ___Name_27; }
	inline String_t** get_address_of_Name_27() { return &___Name_27; }
	inline void set_Name_27(String_t* value)
	{
		___Name_27 = value;
		Il2CppCodeGenWriteBarrier((&___Name_27), value);
	}

	inline static int32_t get_offset_of_Des_28() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Des_28)); }
	inline String_t* get_Des_28() const { return ___Des_28; }
	inline String_t** get_address_of_Des_28() { return &___Des_28; }
	inline void set_Des_28(String_t* value)
	{
		___Des_28 = value;
		Il2CppCodeGenWriteBarrier((&___Des_28), value);
	}

	inline static int32_t get_offset_of_Res_29() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Res_29)); }
	inline String_t* get_Res_29() const { return ___Res_29; }
	inline String_t** get_address_of_Res_29() { return &___Res_29; }
	inline void set_Res_29(String_t* value)
	{
		___Res_29 = value;
		Il2CppCodeGenWriteBarrier((&___Res_29), value);
	}

	inline static int32_t get_offset_of_StrategyID_30() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___StrategyID_30)); }
	inline String_t* get_StrategyID_30() const { return ___StrategyID_30; }
	inline String_t** get_address_of_StrategyID_30() { return &___StrategyID_30; }
	inline void set_StrategyID_30(String_t* value)
	{
		___StrategyID_30 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_30), value);
	}

	inline static int32_t get_offset_of_Medi_Start_31() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Medi_Start_31)); }
	inline String_t* get_Medi_Start_31() const { return ___Medi_Start_31; }
	inline String_t** get_address_of_Medi_Start_31() { return &___Medi_Start_31; }
	inline void set_Medi_Start_31(String_t* value)
	{
		___Medi_Start_31 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Start_31), value);
	}

	inline static int32_t get_offset_of_Medi_Work_32() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Medi_Work_32)); }
	inline String_t* get_Medi_Work_32() const { return ___Medi_Work_32; }
	inline String_t** get_address_of_Medi_Work_32() { return &___Medi_Work_32; }
	inline void set_Medi_Work_32(String_t* value)
	{
		___Medi_Work_32 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Work_32), value);
	}

	inline static int32_t get_offset_of_Medi_Spd_33() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___Medi_Spd_33)); }
	inline String_t* get_Medi_Spd_33() const { return ___Medi_Spd_33; }
	inline String_t** get_address_of_Medi_Spd_33() { return &___Medi_Spd_33; }
	inline void set_Medi_Spd_33(String_t* value)
	{
		___Medi_Spd_33 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Spd_33), value);
	}

	inline static int32_t get_offset_of_CommunicationThreshold_34() { return static_cast<int32_t>(offsetof(Virus_Sheet_t625156665, ___CommunicationThreshold_34)); }
	inline String_t* get_CommunicationThreshold_34() const { return ___CommunicationThreshold_34; }
	inline String_t** get_address_of_CommunicationThreshold_34() { return &___CommunicationThreshold_34; }
	inline void set_CommunicationThreshold_34(String_t* value)
	{
		___CommunicationThreshold_34 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicationThreshold_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUS_SHEET_T625156665_H
#ifndef XMLIOHELPER_T3028925360_H
#define XMLIOHELPER_T3028925360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XMLIOHelper
struct  XMLIOHelper_t3028925360  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLIOHELPER_T3028925360_H
#ifndef ZOMBIE_SHEET_T2976584585_H
#define ZOMBIE_SHEET_T2976584585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Zombie_Sheet
struct  Zombie_Sheet_t2976584585  : public RuntimeObject
{
public:
	// System.String Zombie_Sheet::ZombieID
	String_t* ___ZombieID_0;
	// System.String Zombie_Sheet::MaxHP
	String_t* ___MaxHP_1;
	// System.String Zombie_Sheet::Atk
	String_t* ___Atk_2;
	// System.String Zombie_Sheet::Heal
	String_t* ___Heal_3;
	// System.String Zombie_Sheet::Def
	String_t* ___Def_4;
	// System.String Zombie_Sheet::Infect
	String_t* ___Infect_5;
	// System.String Zombie_Sheet::Speed
	String_t* ___Speed_6;
	// System.String Zombie_Sheet::HPDecay
	String_t* ___HPDecay_7;
	// System.String Zombie_Sheet::DrainLife
	String_t* ___DrainLife_8;
	// System.String Zombie_Sheet::AbilityID
	String_t* ___AbilityID_9;
	// System.String Zombie_Sheet::ClimateBoost_1
	String_t* ___ClimateBoost_1_10;
	// System.String Zombie_Sheet::ClimateBoost_2
	String_t* ___ClimateBoost_2_11;
	// System.String Zombie_Sheet::ClimateBoost_3
	String_t* ___ClimateBoost_3_12;
	// System.String Zombie_Sheet::EnviBoost_1
	String_t* ___EnviBoost_1_13;
	// System.String Zombie_Sheet::EnviBoost_2
	String_t* ___EnviBoost_2_14;
	// System.String Zombie_Sheet::EnviBoost_3
	String_t* ___EnviBoost_3_15;
	// System.String Zombie_Sheet::Weight
	String_t* ___Weight_16;
	// System.String Zombie_Sheet::Name
	String_t* ___Name_17;
	// System.String Zombie_Sheet::Res
	String_t* ___Res_18;
	// System.String Zombie_Sheet::SkillID
	String_t* ___SkillID_19;

public:
	inline static int32_t get_offset_of_ZombieID_0() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___ZombieID_0)); }
	inline String_t* get_ZombieID_0() const { return ___ZombieID_0; }
	inline String_t** get_address_of_ZombieID_0() { return &___ZombieID_0; }
	inline void set_ZombieID_0(String_t* value)
	{
		___ZombieID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieID_0), value);
	}

	inline static int32_t get_offset_of_MaxHP_1() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___MaxHP_1)); }
	inline String_t* get_MaxHP_1() const { return ___MaxHP_1; }
	inline String_t** get_address_of_MaxHP_1() { return &___MaxHP_1; }
	inline void set_MaxHP_1(String_t* value)
	{
		___MaxHP_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaxHP_1), value);
	}

	inline static int32_t get_offset_of_Atk_2() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Atk_2)); }
	inline String_t* get_Atk_2() const { return ___Atk_2; }
	inline String_t** get_address_of_Atk_2() { return &___Atk_2; }
	inline void set_Atk_2(String_t* value)
	{
		___Atk_2 = value;
		Il2CppCodeGenWriteBarrier((&___Atk_2), value);
	}

	inline static int32_t get_offset_of_Heal_3() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Heal_3)); }
	inline String_t* get_Heal_3() const { return ___Heal_3; }
	inline String_t** get_address_of_Heal_3() { return &___Heal_3; }
	inline void set_Heal_3(String_t* value)
	{
		___Heal_3 = value;
		Il2CppCodeGenWriteBarrier((&___Heal_3), value);
	}

	inline static int32_t get_offset_of_Def_4() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Def_4)); }
	inline String_t* get_Def_4() const { return ___Def_4; }
	inline String_t** get_address_of_Def_4() { return &___Def_4; }
	inline void set_Def_4(String_t* value)
	{
		___Def_4 = value;
		Il2CppCodeGenWriteBarrier((&___Def_4), value);
	}

	inline static int32_t get_offset_of_Infect_5() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Infect_5)); }
	inline String_t* get_Infect_5() const { return ___Infect_5; }
	inline String_t** get_address_of_Infect_5() { return &___Infect_5; }
	inline void set_Infect_5(String_t* value)
	{
		___Infect_5 = value;
		Il2CppCodeGenWriteBarrier((&___Infect_5), value);
	}

	inline static int32_t get_offset_of_Speed_6() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Speed_6)); }
	inline String_t* get_Speed_6() const { return ___Speed_6; }
	inline String_t** get_address_of_Speed_6() { return &___Speed_6; }
	inline void set_Speed_6(String_t* value)
	{
		___Speed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Speed_6), value);
	}

	inline static int32_t get_offset_of_HPDecay_7() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___HPDecay_7)); }
	inline String_t* get_HPDecay_7() const { return ___HPDecay_7; }
	inline String_t** get_address_of_HPDecay_7() { return &___HPDecay_7; }
	inline void set_HPDecay_7(String_t* value)
	{
		___HPDecay_7 = value;
		Il2CppCodeGenWriteBarrier((&___HPDecay_7), value);
	}

	inline static int32_t get_offset_of_DrainLife_8() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___DrainLife_8)); }
	inline String_t* get_DrainLife_8() const { return ___DrainLife_8; }
	inline String_t** get_address_of_DrainLife_8() { return &___DrainLife_8; }
	inline void set_DrainLife_8(String_t* value)
	{
		___DrainLife_8 = value;
		Il2CppCodeGenWriteBarrier((&___DrainLife_8), value);
	}

	inline static int32_t get_offset_of_AbilityID_9() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___AbilityID_9)); }
	inline String_t* get_AbilityID_9() const { return ___AbilityID_9; }
	inline String_t** get_address_of_AbilityID_9() { return &___AbilityID_9; }
	inline void set_AbilityID_9(String_t* value)
	{
		___AbilityID_9 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_9), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_1_10() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___ClimateBoost_1_10)); }
	inline String_t* get_ClimateBoost_1_10() const { return ___ClimateBoost_1_10; }
	inline String_t** get_address_of_ClimateBoost_1_10() { return &___ClimateBoost_1_10; }
	inline void set_ClimateBoost_1_10(String_t* value)
	{
		___ClimateBoost_1_10 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_1_10), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_2_11() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___ClimateBoost_2_11)); }
	inline String_t* get_ClimateBoost_2_11() const { return ___ClimateBoost_2_11; }
	inline String_t** get_address_of_ClimateBoost_2_11() { return &___ClimateBoost_2_11; }
	inline void set_ClimateBoost_2_11(String_t* value)
	{
		___ClimateBoost_2_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_2_11), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_3_12() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___ClimateBoost_3_12)); }
	inline String_t* get_ClimateBoost_3_12() const { return ___ClimateBoost_3_12; }
	inline String_t** get_address_of_ClimateBoost_3_12() { return &___ClimateBoost_3_12; }
	inline void set_ClimateBoost_3_12(String_t* value)
	{
		___ClimateBoost_3_12 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_3_12), value);
	}

	inline static int32_t get_offset_of_EnviBoost_1_13() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___EnviBoost_1_13)); }
	inline String_t* get_EnviBoost_1_13() const { return ___EnviBoost_1_13; }
	inline String_t** get_address_of_EnviBoost_1_13() { return &___EnviBoost_1_13; }
	inline void set_EnviBoost_1_13(String_t* value)
	{
		___EnviBoost_1_13 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_1_13), value);
	}

	inline static int32_t get_offset_of_EnviBoost_2_14() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___EnviBoost_2_14)); }
	inline String_t* get_EnviBoost_2_14() const { return ___EnviBoost_2_14; }
	inline String_t** get_address_of_EnviBoost_2_14() { return &___EnviBoost_2_14; }
	inline void set_EnviBoost_2_14(String_t* value)
	{
		___EnviBoost_2_14 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_2_14), value);
	}

	inline static int32_t get_offset_of_EnviBoost_3_15() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___EnviBoost_3_15)); }
	inline String_t* get_EnviBoost_3_15() const { return ___EnviBoost_3_15; }
	inline String_t** get_address_of_EnviBoost_3_15() { return &___EnviBoost_3_15; }
	inline void set_EnviBoost_3_15(String_t* value)
	{
		___EnviBoost_3_15 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_3_15), value);
	}

	inline static int32_t get_offset_of_Weight_16() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Weight_16)); }
	inline String_t* get_Weight_16() const { return ___Weight_16; }
	inline String_t** get_address_of_Weight_16() { return &___Weight_16; }
	inline void set_Weight_16(String_t* value)
	{
		___Weight_16 = value;
		Il2CppCodeGenWriteBarrier((&___Weight_16), value);
	}

	inline static int32_t get_offset_of_Name_17() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Name_17)); }
	inline String_t* get_Name_17() const { return ___Name_17; }
	inline String_t** get_address_of_Name_17() { return &___Name_17; }
	inline void set_Name_17(String_t* value)
	{
		___Name_17 = value;
		Il2CppCodeGenWriteBarrier((&___Name_17), value);
	}

	inline static int32_t get_offset_of_Res_18() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___Res_18)); }
	inline String_t* get_Res_18() const { return ___Res_18; }
	inline String_t** get_address_of_Res_18() { return &___Res_18; }
	inline void set_Res_18(String_t* value)
	{
		___Res_18 = value;
		Il2CppCodeGenWriteBarrier((&___Res_18), value);
	}

	inline static int32_t get_offset_of_SkillID_19() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t2976584585, ___SkillID_19)); }
	inline String_t* get_SkillID_19() const { return ___SkillID_19; }
	inline String_t** get_address_of_SkillID_19() { return &___SkillID_19; }
	inline void set_SkillID_19(String_t* value)
	{
		___SkillID_19 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIE_SHEET_T2976584585_H
#ifndef VALUETYPE_T982632147_H
#define VALUETYPE_T982632147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t982632147  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t982632147_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t982632147_marshaled_com
{
};
#endif // VALUETYPE_T982632147_H
#ifndef MISSION_SHEET_T3359238669_H
#define MISSION_SHEET_T3359238669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mission_Sheet
struct  Mission_Sheet_t3359238669  : public RuntimeObject
{
public:
	// System.String Mission_Sheet::MissionID
	String_t* ___MissionID_0;
	// System.String Mission_Sheet::MaxHPBoost
	String_t* ___MaxHPBoost_1;
	// System.String Mission_Sheet::InfectionBoost
	String_t* ___InfectionBoost_2;
	// System.String Mission_Sheet::Atk_Boost
	String_t* ___Atk_Boost_3;
	// System.String Mission_Sheet::Heal_Boost
	String_t* ___Heal_Boost_4;
	// System.String Mission_Sheet::Def_Boost
	String_t* ___Def_Boost_5;
	// System.String Mission_Sheet::Cure_Boost
	String_t* ___Cure_Boost_6;
	// System.String Mission_Sheet::Speed_Boost
	String_t* ___Speed_Boost_7;
	// System.String Mission_Sheet::InfectionAntiBoost
	String_t* ___InfectionAntiBoost_8;
	// System.String Mission_Sheet::CommunicationAntiBoost
	String_t* ___CommunicationAntiBoost_9;
	// System.String Mission_Sheet::HPHealingBoost
	String_t* ___HPHealingBoost_10;
	// System.String Mission_Sheet::ClimateBoost
	String_t* ___ClimateBoost_11;
	// System.String Mission_Sheet::EnviBoost
	String_t* ___EnviBoost_12;
	// System.String Mission_Sheet::DistributionParam1
	String_t* ___DistributionParam1_13;
	// System.String Mission_Sheet::DistributionParam2
	String_t* ___DistributionParam2_14;
	// System.String Mission_Sheet::DistributionParam3
	String_t* ___DistributionParam3_15;
	// System.String Mission_Sheet::DistributionParam4
	String_t* ___DistributionParam4_16;
	// System.String Mission_Sheet::AbilityID_1
	String_t* ___AbilityID_1_17;
	// System.String Mission_Sheet::AbilityLv_1
	String_t* ___AbilityLv_1_18;
	// System.String Mission_Sheet::AbilityID_2
	String_t* ___AbilityID_2_19;
	// System.String Mission_Sheet::AbilityLv_2
	String_t* ___AbilityLv_2_20;
	// System.String Mission_Sheet::AbilityID_3
	String_t* ___AbilityID_3_21;
	// System.String Mission_Sheet::AbilityLv_3
	String_t* ___AbilityLv_3_22;
	// System.String Mission_Sheet::ModeType
	String_t* ___ModeType_23;
	// System.String Mission_Sheet::ModeParam1
	String_t* ___ModeParam1_24;
	// System.String Mission_Sheet::ModeParam2
	String_t* ___ModeParam2_25;
	// System.String Mission_Sheet::ModeParam3
	String_t* ___ModeParam3_26;
	// System.String Mission_Sheet::EventMin
	String_t* ___EventMin_27;
	// System.String Mission_Sheet::EventMax
	String_t* ___EventMax_28;
	// System.String Mission_Sheet::EventPackageID
	String_t* ___EventPackageID_29;
	// System.String Mission_Sheet::LootPackageID
	String_t* ___LootPackageID_30;

public:
	inline static int32_t get_offset_of_MissionID_0() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___MissionID_0)); }
	inline String_t* get_MissionID_0() const { return ___MissionID_0; }
	inline String_t** get_address_of_MissionID_0() { return &___MissionID_0; }
	inline void set_MissionID_0(String_t* value)
	{
		___MissionID_0 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_0), value);
	}

	inline static int32_t get_offset_of_MaxHPBoost_1() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___MaxHPBoost_1)); }
	inline String_t* get_MaxHPBoost_1() const { return ___MaxHPBoost_1; }
	inline String_t** get_address_of_MaxHPBoost_1() { return &___MaxHPBoost_1; }
	inline void set_MaxHPBoost_1(String_t* value)
	{
		___MaxHPBoost_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaxHPBoost_1), value);
	}

	inline static int32_t get_offset_of_InfectionBoost_2() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___InfectionBoost_2)); }
	inline String_t* get_InfectionBoost_2() const { return ___InfectionBoost_2; }
	inline String_t** get_address_of_InfectionBoost_2() { return &___InfectionBoost_2; }
	inline void set_InfectionBoost_2(String_t* value)
	{
		___InfectionBoost_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionBoost_2), value);
	}

	inline static int32_t get_offset_of_Atk_Boost_3() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___Atk_Boost_3)); }
	inline String_t* get_Atk_Boost_3() const { return ___Atk_Boost_3; }
	inline String_t** get_address_of_Atk_Boost_3() { return &___Atk_Boost_3; }
	inline void set_Atk_Boost_3(String_t* value)
	{
		___Atk_Boost_3 = value;
		Il2CppCodeGenWriteBarrier((&___Atk_Boost_3), value);
	}

	inline static int32_t get_offset_of_Heal_Boost_4() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___Heal_Boost_4)); }
	inline String_t* get_Heal_Boost_4() const { return ___Heal_Boost_4; }
	inline String_t** get_address_of_Heal_Boost_4() { return &___Heal_Boost_4; }
	inline void set_Heal_Boost_4(String_t* value)
	{
		___Heal_Boost_4 = value;
		Il2CppCodeGenWriteBarrier((&___Heal_Boost_4), value);
	}

	inline static int32_t get_offset_of_Def_Boost_5() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___Def_Boost_5)); }
	inline String_t* get_Def_Boost_5() const { return ___Def_Boost_5; }
	inline String_t** get_address_of_Def_Boost_5() { return &___Def_Boost_5; }
	inline void set_Def_Boost_5(String_t* value)
	{
		___Def_Boost_5 = value;
		Il2CppCodeGenWriteBarrier((&___Def_Boost_5), value);
	}

	inline static int32_t get_offset_of_Cure_Boost_6() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___Cure_Boost_6)); }
	inline String_t* get_Cure_Boost_6() const { return ___Cure_Boost_6; }
	inline String_t** get_address_of_Cure_Boost_6() { return &___Cure_Boost_6; }
	inline void set_Cure_Boost_6(String_t* value)
	{
		___Cure_Boost_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cure_Boost_6), value);
	}

	inline static int32_t get_offset_of_Speed_Boost_7() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___Speed_Boost_7)); }
	inline String_t* get_Speed_Boost_7() const { return ___Speed_Boost_7; }
	inline String_t** get_address_of_Speed_Boost_7() { return &___Speed_Boost_7; }
	inline void set_Speed_Boost_7(String_t* value)
	{
		___Speed_Boost_7 = value;
		Il2CppCodeGenWriteBarrier((&___Speed_Boost_7), value);
	}

	inline static int32_t get_offset_of_InfectionAntiBoost_8() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___InfectionAntiBoost_8)); }
	inline String_t* get_InfectionAntiBoost_8() const { return ___InfectionAntiBoost_8; }
	inline String_t** get_address_of_InfectionAntiBoost_8() { return &___InfectionAntiBoost_8; }
	inline void set_InfectionAntiBoost_8(String_t* value)
	{
		___InfectionAntiBoost_8 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionAntiBoost_8), value);
	}

	inline static int32_t get_offset_of_CommunicationAntiBoost_9() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___CommunicationAntiBoost_9)); }
	inline String_t* get_CommunicationAntiBoost_9() const { return ___CommunicationAntiBoost_9; }
	inline String_t** get_address_of_CommunicationAntiBoost_9() { return &___CommunicationAntiBoost_9; }
	inline void set_CommunicationAntiBoost_9(String_t* value)
	{
		___CommunicationAntiBoost_9 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicationAntiBoost_9), value);
	}

	inline static int32_t get_offset_of_HPHealingBoost_10() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___HPHealingBoost_10)); }
	inline String_t* get_HPHealingBoost_10() const { return ___HPHealingBoost_10; }
	inline String_t** get_address_of_HPHealingBoost_10() { return &___HPHealingBoost_10; }
	inline void set_HPHealingBoost_10(String_t* value)
	{
		___HPHealingBoost_10 = value;
		Il2CppCodeGenWriteBarrier((&___HPHealingBoost_10), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_11() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___ClimateBoost_11)); }
	inline String_t* get_ClimateBoost_11() const { return ___ClimateBoost_11; }
	inline String_t** get_address_of_ClimateBoost_11() { return &___ClimateBoost_11; }
	inline void set_ClimateBoost_11(String_t* value)
	{
		___ClimateBoost_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_11), value);
	}

	inline static int32_t get_offset_of_EnviBoost_12() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___EnviBoost_12)); }
	inline String_t* get_EnviBoost_12() const { return ___EnviBoost_12; }
	inline String_t** get_address_of_EnviBoost_12() { return &___EnviBoost_12; }
	inline void set_EnviBoost_12(String_t* value)
	{
		___EnviBoost_12 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_12), value);
	}

	inline static int32_t get_offset_of_DistributionParam1_13() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___DistributionParam1_13)); }
	inline String_t* get_DistributionParam1_13() const { return ___DistributionParam1_13; }
	inline String_t** get_address_of_DistributionParam1_13() { return &___DistributionParam1_13; }
	inline void set_DistributionParam1_13(String_t* value)
	{
		___DistributionParam1_13 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam1_13), value);
	}

	inline static int32_t get_offset_of_DistributionParam2_14() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___DistributionParam2_14)); }
	inline String_t* get_DistributionParam2_14() const { return ___DistributionParam2_14; }
	inline String_t** get_address_of_DistributionParam2_14() { return &___DistributionParam2_14; }
	inline void set_DistributionParam2_14(String_t* value)
	{
		___DistributionParam2_14 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam2_14), value);
	}

	inline static int32_t get_offset_of_DistributionParam3_15() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___DistributionParam3_15)); }
	inline String_t* get_DistributionParam3_15() const { return ___DistributionParam3_15; }
	inline String_t** get_address_of_DistributionParam3_15() { return &___DistributionParam3_15; }
	inline void set_DistributionParam3_15(String_t* value)
	{
		___DistributionParam3_15 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam3_15), value);
	}

	inline static int32_t get_offset_of_DistributionParam4_16() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___DistributionParam4_16)); }
	inline String_t* get_DistributionParam4_16() const { return ___DistributionParam4_16; }
	inline String_t** get_address_of_DistributionParam4_16() { return &___DistributionParam4_16; }
	inline void set_DistributionParam4_16(String_t* value)
	{
		___DistributionParam4_16 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam4_16), value);
	}

	inline static int32_t get_offset_of_AbilityID_1_17() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityID_1_17)); }
	inline String_t* get_AbilityID_1_17() const { return ___AbilityID_1_17; }
	inline String_t** get_address_of_AbilityID_1_17() { return &___AbilityID_1_17; }
	inline void set_AbilityID_1_17(String_t* value)
	{
		___AbilityID_1_17 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_1_17), value);
	}

	inline static int32_t get_offset_of_AbilityLv_1_18() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityLv_1_18)); }
	inline String_t* get_AbilityLv_1_18() const { return ___AbilityLv_1_18; }
	inline String_t** get_address_of_AbilityLv_1_18() { return &___AbilityLv_1_18; }
	inline void set_AbilityLv_1_18(String_t* value)
	{
		___AbilityLv_1_18 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_1_18), value);
	}

	inline static int32_t get_offset_of_AbilityID_2_19() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityID_2_19)); }
	inline String_t* get_AbilityID_2_19() const { return ___AbilityID_2_19; }
	inline String_t** get_address_of_AbilityID_2_19() { return &___AbilityID_2_19; }
	inline void set_AbilityID_2_19(String_t* value)
	{
		___AbilityID_2_19 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_2_19), value);
	}

	inline static int32_t get_offset_of_AbilityLv_2_20() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityLv_2_20)); }
	inline String_t* get_AbilityLv_2_20() const { return ___AbilityLv_2_20; }
	inline String_t** get_address_of_AbilityLv_2_20() { return &___AbilityLv_2_20; }
	inline void set_AbilityLv_2_20(String_t* value)
	{
		___AbilityLv_2_20 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_2_20), value);
	}

	inline static int32_t get_offset_of_AbilityID_3_21() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityID_3_21)); }
	inline String_t* get_AbilityID_3_21() const { return ___AbilityID_3_21; }
	inline String_t** get_address_of_AbilityID_3_21() { return &___AbilityID_3_21; }
	inline void set_AbilityID_3_21(String_t* value)
	{
		___AbilityID_3_21 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_3_21), value);
	}

	inline static int32_t get_offset_of_AbilityLv_3_22() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___AbilityLv_3_22)); }
	inline String_t* get_AbilityLv_3_22() const { return ___AbilityLv_3_22; }
	inline String_t** get_address_of_AbilityLv_3_22() { return &___AbilityLv_3_22; }
	inline void set_AbilityLv_3_22(String_t* value)
	{
		___AbilityLv_3_22 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_3_22), value);
	}

	inline static int32_t get_offset_of_ModeType_23() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___ModeType_23)); }
	inline String_t* get_ModeType_23() const { return ___ModeType_23; }
	inline String_t** get_address_of_ModeType_23() { return &___ModeType_23; }
	inline void set_ModeType_23(String_t* value)
	{
		___ModeType_23 = value;
		Il2CppCodeGenWriteBarrier((&___ModeType_23), value);
	}

	inline static int32_t get_offset_of_ModeParam1_24() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___ModeParam1_24)); }
	inline String_t* get_ModeParam1_24() const { return ___ModeParam1_24; }
	inline String_t** get_address_of_ModeParam1_24() { return &___ModeParam1_24; }
	inline void set_ModeParam1_24(String_t* value)
	{
		___ModeParam1_24 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam1_24), value);
	}

	inline static int32_t get_offset_of_ModeParam2_25() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___ModeParam2_25)); }
	inline String_t* get_ModeParam2_25() const { return ___ModeParam2_25; }
	inline String_t** get_address_of_ModeParam2_25() { return &___ModeParam2_25; }
	inline void set_ModeParam2_25(String_t* value)
	{
		___ModeParam2_25 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam2_25), value);
	}

	inline static int32_t get_offset_of_ModeParam3_26() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___ModeParam3_26)); }
	inline String_t* get_ModeParam3_26() const { return ___ModeParam3_26; }
	inline String_t** get_address_of_ModeParam3_26() { return &___ModeParam3_26; }
	inline void set_ModeParam3_26(String_t* value)
	{
		___ModeParam3_26 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam3_26), value);
	}

	inline static int32_t get_offset_of_EventMin_27() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___EventMin_27)); }
	inline String_t* get_EventMin_27() const { return ___EventMin_27; }
	inline String_t** get_address_of_EventMin_27() { return &___EventMin_27; }
	inline void set_EventMin_27(String_t* value)
	{
		___EventMin_27 = value;
		Il2CppCodeGenWriteBarrier((&___EventMin_27), value);
	}

	inline static int32_t get_offset_of_EventMax_28() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___EventMax_28)); }
	inline String_t* get_EventMax_28() const { return ___EventMax_28; }
	inline String_t** get_address_of_EventMax_28() { return &___EventMax_28; }
	inline void set_EventMax_28(String_t* value)
	{
		___EventMax_28 = value;
		Il2CppCodeGenWriteBarrier((&___EventMax_28), value);
	}

	inline static int32_t get_offset_of_EventPackageID_29() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___EventPackageID_29)); }
	inline String_t* get_EventPackageID_29() const { return ___EventPackageID_29; }
	inline String_t** get_address_of_EventPackageID_29() { return &___EventPackageID_29; }
	inline void set_EventPackageID_29(String_t* value)
	{
		___EventPackageID_29 = value;
		Il2CppCodeGenWriteBarrier((&___EventPackageID_29), value);
	}

	inline static int32_t get_offset_of_LootPackageID_30() { return static_cast<int32_t>(offsetof(Mission_Sheet_t3359238669, ___LootPackageID_30)); }
	inline String_t* get_LootPackageID_30() const { return ___LootPackageID_30; }
	inline String_t** get_address_of_LootPackageID_30() { return &___LootPackageID_30; }
	inline void set_LootPackageID_30(String_t* value)
	{
		___LootPackageID_30 = value;
		Il2CppCodeGenWriteBarrier((&___LootPackageID_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSION_SHEET_T3359238669_H
#ifndef USER_T151655210_H
#define USER_T151655210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// User
struct  User_t151655210  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<U_DNA>[] User::DB_u_dna
	List_1U5BU5D_t1291586516* ___DB_u_dna_2;
	// System.Int64 User::Gold
	int64_t ___Gold_3;
	// System.Int64 User::Gem
	int64_t ___Gem_4;
	// System.Collections.Generic.List`1<U_MissionFlag> User::DB_u_mf
	List_1_t3245882731 * ___DB_u_mf_5;
	// System.Collections.Generic.List`1<System.String> User::DB_u_UnlockedViruses
	List_1_t934097503 * ___DB_u_UnlockedViruses_6;
	// System.Collections.Generic.List`1<System.String> User::DB_u_UnlockedZombies
	List_1_t934097503 * ___DB_u_UnlockedZombies_10;

public:
	inline static int32_t get_offset_of_DB_u_dna_2() { return static_cast<int32_t>(offsetof(User_t151655210, ___DB_u_dna_2)); }
	inline List_1U5BU5D_t1291586516* get_DB_u_dna_2() const { return ___DB_u_dna_2; }
	inline List_1U5BU5D_t1291586516** get_address_of_DB_u_dna_2() { return &___DB_u_dna_2; }
	inline void set_DB_u_dna_2(List_1U5BU5D_t1291586516* value)
	{
		___DB_u_dna_2 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_dna_2), value);
	}

	inline static int32_t get_offset_of_Gold_3() { return static_cast<int32_t>(offsetof(User_t151655210, ___Gold_3)); }
	inline int64_t get_Gold_3() const { return ___Gold_3; }
	inline int64_t* get_address_of_Gold_3() { return &___Gold_3; }
	inline void set_Gold_3(int64_t value)
	{
		___Gold_3 = value;
	}

	inline static int32_t get_offset_of_Gem_4() { return static_cast<int32_t>(offsetof(User_t151655210, ___Gem_4)); }
	inline int64_t get_Gem_4() const { return ___Gem_4; }
	inline int64_t* get_address_of_Gem_4() { return &___Gem_4; }
	inline void set_Gem_4(int64_t value)
	{
		___Gem_4 = value;
	}

	inline static int32_t get_offset_of_DB_u_mf_5() { return static_cast<int32_t>(offsetof(User_t151655210, ___DB_u_mf_5)); }
	inline List_1_t3245882731 * get_DB_u_mf_5() const { return ___DB_u_mf_5; }
	inline List_1_t3245882731 ** get_address_of_DB_u_mf_5() { return &___DB_u_mf_5; }
	inline void set_DB_u_mf_5(List_1_t3245882731 * value)
	{
		___DB_u_mf_5 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_mf_5), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedViruses_6() { return static_cast<int32_t>(offsetof(User_t151655210, ___DB_u_UnlockedViruses_6)); }
	inline List_1_t934097503 * get_DB_u_UnlockedViruses_6() const { return ___DB_u_UnlockedViruses_6; }
	inline List_1_t934097503 ** get_address_of_DB_u_UnlockedViruses_6() { return &___DB_u_UnlockedViruses_6; }
	inline void set_DB_u_UnlockedViruses_6(List_1_t934097503 * value)
	{
		___DB_u_UnlockedViruses_6 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedViruses_6), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedZombies_10() { return static_cast<int32_t>(offsetof(User_t151655210, ___DB_u_UnlockedZombies_10)); }
	inline List_1_t934097503 * get_DB_u_UnlockedZombies_10() const { return ___DB_u_UnlockedZombies_10; }
	inline List_1_t934097503 ** get_address_of_DB_u_UnlockedZombies_10() { return &___DB_u_UnlockedZombies_10; }
	inline void set_DB_u_UnlockedZombies_10(List_1_t934097503 * value)
	{
		___DB_u_UnlockedZombies_10 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedZombies_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USER_T151655210_H
#ifndef U_DNA_T3944083011_H
#define U_DNA_T3944083011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// U_DNA
struct  U_DNA_t3944083011  : public RuntimeObject
{
public:
	// System.Int32 U_DNA::ID
	int32_t ___ID_0;
	// System.Int32 U_DNA::Lv
	int32_t ___Lv_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(U_DNA_t3944083011, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Lv_1() { return static_cast<int32_t>(offsetof(U_DNA_t3944083011, ___Lv_1)); }
	inline int32_t get_Lv_1() const { return ___Lv_1; }
	inline int32_t* get_address_of_Lv_1() { return &___Lv_1; }
	inline void set_Lv_1(int32_t value)
	{
		___Lv_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U_DNA_T3944083011_H
#ifndef U24ARRAYTYPEU3D32_T1833622975_H
#define U24ARRAYTYPEU3D32_T1833622975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t1833622975 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t1833622975__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T1833622975_H
#ifndef U24ARRAYTYPEU3D8_T4278676378_H
#define U24ARRAYTYPEU3D8_T4278676378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t4278676378 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t4278676378__padding[8];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D8_T4278676378_H
#ifndef ENUM_T137291114_H
#define ENUM_T137291114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t137291114  : public ValueType_t982632147
{
public:

public:
};

struct Enum_t137291114_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3850815912* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t137291114_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3850815912* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3850815912** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3850815912* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t137291114_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t137291114_marshaled_com
{
};
#endif // ENUM_T137291114_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T3090032892_H
#define OBJECT_T3090032892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3090032892  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3090032892, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3090032892_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3090032892_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3090032892_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3090032892_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3090032892_H
#ifndef CLIMATE_T749661744_H
#define CLIMATE_T749661744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Climate
struct  Climate_t749661744 
{
public:
	// System.Int32 Climate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Climate_t749661744, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIMATE_T749661744_H
#ifndef ENVIRONMENT_T2767040801_H
#define ENVIRONMENT_T2767040801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Environment
struct  Environment_t2767040801 
{
public:
	// System.Int32 Environment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Environment_t2767040801, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T2767040801_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1635577407_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1635577407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1635577407  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-68F00C41318114691E02CD7532ACF69A8DBE23C2
	U24ArrayTypeU3D32_t1833622975  ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-D26A27B5531D6252D57917C90488F9C3F7AF8F98
	U24ArrayTypeU3D8_t4278676378  ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields, ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0)); }
	inline U24ArrayTypeU3D32_t1833622975  get_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() const { return ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0; }
	inline U24ArrayTypeU3D32_t1833622975 * get_address_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() { return &___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0; }
	inline void set_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0(U24ArrayTypeU3D32_t1833622975  value)
	{
		___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields, ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1)); }
	inline U24ArrayTypeU3D8_t4278676378  get_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1() const { return ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1; }
	inline U24ArrayTypeU3D8_t4278676378 * get_address_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1() { return &___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1; }
	inline void set_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1(U24ArrayTypeU3D8_t4278676378  value)
	{
		___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1635577407_H
#ifndef COMPONENT_T1570639622_H
#define COMPONENT_T1570639622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1570639622  : public Object_t3090032892
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1570639622_H
#ifndef VIRUS_T141792805_H
#define VIRUS_T141792805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Virus
struct  Virus_t141792805  : public RuntimeObject
{
public:
	// System.Int32 Virus::VirusID
	int32_t ___VirusID_0;
	// System.Int32 Virus::InfectSpeed
	int32_t ___InfectSpeed_1;
	// System.Int32 Virus::InfectHuman_1
	int32_t ___InfectHuman_1_2;
	// System.Int32 Virus::InfectHuman_2
	int32_t ___InfectHuman_2_3;
	// System.Int32 Virus::InfectHuman_3
	int32_t ___InfectHuman_3_4;
	// System.Int32 Virus::InfectHuman_4
	int32_t ___InfectHuman_4_5;
	// System.Int32 Virus::InfectHuman_5
	int32_t ___InfectHuman_5_6;
	// System.Int32 Virus::InfectBlock_Climate_1
	int32_t ___InfectBlock_Climate_1_7;
	// System.Int32 Virus::InfectBlock_Climate_2
	int32_t ___InfectBlock_Climate_2_8;
	// System.Int32 Virus::InfectBlock_Climate_3
	int32_t ___InfectBlock_Climate_3_9;
	// System.Int32 Virus::InfectBlock_Envi_1
	int32_t ___InfectBlock_Envi_1_10;
	// System.Int32 Virus::InfectBlock_Envi_2
	int32_t ___InfectBlock_Envi_2_11;
	// System.Int32 Virus::InfectBlock_Envi_3
	int32_t ___InfectBlock_Envi_3_12;
	// System.Int32 Virus::CommunicateRate
	int32_t ___CommunicateRate_13;
	// System.Int32 Virus::CommunicateHuman_1
	int32_t ___CommunicateHuman_1_14;
	// System.Int32 Virus::CommunicateHuman_2
	int32_t ___CommunicateHuman_2_15;
	// System.Int32 Virus::CommunicateHuman_3
	int32_t ___CommunicateHuman_3_16;
	// System.Int32 Virus::CommunicateHuman_4
	int32_t ___CommunicateHuman_4_17;
	// System.Int32 Virus::CommunicateHuman_5
	int32_t ___CommunicateHuman_5_18;
	// System.Int32 Virus::CommunicateBlock_Climate_1
	int32_t ___CommunicateBlock_Climate_1_19;
	// System.Int32 Virus::CommunicateBlock_Climate_2
	int32_t ___CommunicateBlock_Climate_2_20;
	// System.Int32 Virus::CommunicateBlock_Climate_3
	int32_t ___CommunicateBlock_Climate_3_21;
	// System.Int32 Virus::CommunicateBlock_Envi_1
	int32_t ___CommunicateBlock_Envi_1_22;
	// System.Int32 Virus::CommunicateBlock_Envi_2
	int32_t ___CommunicateBlock_Envi_2_23;
	// System.Int32 Virus::CommunicateBlock_Envi_3
	int32_t ___CommunicateBlock_Envi_3_24;
	// System.Int32 Virus::InitialSP
	int32_t ___InitialSP_25;
	// System.String Virus::Name
	String_t* ___Name_26;
	// System.String Virus::Res
	String_t* ___Res_27;
	// System.String Virus::StrategyID
	String_t* ___StrategyID_28;
	// System.Int32 Virus::Medi_Start
	int32_t ___Medi_Start_29;
	// System.Int32 Virus::Medi_Work
	int32_t ___Medi_Work_30;
	// System.Int32 Virus::Medi_Spd
	int32_t ___Medi_Spd_31;
	// System.Int32 Virus::CommunicationThreshold
	int32_t ___CommunicationThreshold_32;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectHumans
	List_1_t3011634166 * ___InfectHumans_33;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectClims
	List_1_t3011634166 * ___InfectClims_34;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectEnvis
	List_1_t3011634166 * ___InfectEnvis_35;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateHumans
	List_1_t3011634166 * ___CommunicateHumans_36;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateClimates
	List_1_t3011634166 * ___CommunicateClimates_37;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateEnvis
	List_1_t3011634166 * ___CommunicateEnvis_38;
	// Environment Virus::Envi
	int32_t ___Envi_39;
	// Climate Virus::Clim
	int32_t ___Clim_40;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___VirusID_0)); }
	inline int32_t get_VirusID_0() const { return ___VirusID_0; }
	inline int32_t* get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(int32_t value)
	{
		___VirusID_0 = value;
	}

	inline static int32_t get_offset_of_InfectSpeed_1() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectSpeed_1)); }
	inline int32_t get_InfectSpeed_1() const { return ___InfectSpeed_1; }
	inline int32_t* get_address_of_InfectSpeed_1() { return &___InfectSpeed_1; }
	inline void set_InfectSpeed_1(int32_t value)
	{
		___InfectSpeed_1 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_1_2() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHuman_1_2)); }
	inline int32_t get_InfectHuman_1_2() const { return ___InfectHuman_1_2; }
	inline int32_t* get_address_of_InfectHuman_1_2() { return &___InfectHuman_1_2; }
	inline void set_InfectHuman_1_2(int32_t value)
	{
		___InfectHuman_1_2 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_2_3() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHuman_2_3)); }
	inline int32_t get_InfectHuman_2_3() const { return ___InfectHuman_2_3; }
	inline int32_t* get_address_of_InfectHuman_2_3() { return &___InfectHuman_2_3; }
	inline void set_InfectHuman_2_3(int32_t value)
	{
		___InfectHuman_2_3 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_3_4() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHuman_3_4)); }
	inline int32_t get_InfectHuman_3_4() const { return ___InfectHuman_3_4; }
	inline int32_t* get_address_of_InfectHuman_3_4() { return &___InfectHuman_3_4; }
	inline void set_InfectHuman_3_4(int32_t value)
	{
		___InfectHuman_3_4 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_4_5() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHuman_4_5)); }
	inline int32_t get_InfectHuman_4_5() const { return ___InfectHuman_4_5; }
	inline int32_t* get_address_of_InfectHuman_4_5() { return &___InfectHuman_4_5; }
	inline void set_InfectHuman_4_5(int32_t value)
	{
		___InfectHuman_4_5 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_5_6() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHuman_5_6)); }
	inline int32_t get_InfectHuman_5_6() const { return ___InfectHuman_5_6; }
	inline int32_t* get_address_of_InfectHuman_5_6() { return &___InfectHuman_5_6; }
	inline void set_InfectHuman_5_6(int32_t value)
	{
		___InfectHuman_5_6 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_1_7() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Climate_1_7)); }
	inline int32_t get_InfectBlock_Climate_1_7() const { return ___InfectBlock_Climate_1_7; }
	inline int32_t* get_address_of_InfectBlock_Climate_1_7() { return &___InfectBlock_Climate_1_7; }
	inline void set_InfectBlock_Climate_1_7(int32_t value)
	{
		___InfectBlock_Climate_1_7 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_2_8() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Climate_2_8)); }
	inline int32_t get_InfectBlock_Climate_2_8() const { return ___InfectBlock_Climate_2_8; }
	inline int32_t* get_address_of_InfectBlock_Climate_2_8() { return &___InfectBlock_Climate_2_8; }
	inline void set_InfectBlock_Climate_2_8(int32_t value)
	{
		___InfectBlock_Climate_2_8 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_3_9() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Climate_3_9)); }
	inline int32_t get_InfectBlock_Climate_3_9() const { return ___InfectBlock_Climate_3_9; }
	inline int32_t* get_address_of_InfectBlock_Climate_3_9() { return &___InfectBlock_Climate_3_9; }
	inline void set_InfectBlock_Climate_3_9(int32_t value)
	{
		___InfectBlock_Climate_3_9 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_1_10() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Envi_1_10)); }
	inline int32_t get_InfectBlock_Envi_1_10() const { return ___InfectBlock_Envi_1_10; }
	inline int32_t* get_address_of_InfectBlock_Envi_1_10() { return &___InfectBlock_Envi_1_10; }
	inline void set_InfectBlock_Envi_1_10(int32_t value)
	{
		___InfectBlock_Envi_1_10 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_2_11() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Envi_2_11)); }
	inline int32_t get_InfectBlock_Envi_2_11() const { return ___InfectBlock_Envi_2_11; }
	inline int32_t* get_address_of_InfectBlock_Envi_2_11() { return &___InfectBlock_Envi_2_11; }
	inline void set_InfectBlock_Envi_2_11(int32_t value)
	{
		___InfectBlock_Envi_2_11 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_3_12() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectBlock_Envi_3_12)); }
	inline int32_t get_InfectBlock_Envi_3_12() const { return ___InfectBlock_Envi_3_12; }
	inline int32_t* get_address_of_InfectBlock_Envi_3_12() { return &___InfectBlock_Envi_3_12; }
	inline void set_InfectBlock_Envi_3_12(int32_t value)
	{
		___InfectBlock_Envi_3_12 = value;
	}

	inline static int32_t get_offset_of_CommunicateRate_13() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateRate_13)); }
	inline int32_t get_CommunicateRate_13() const { return ___CommunicateRate_13; }
	inline int32_t* get_address_of_CommunicateRate_13() { return &___CommunicateRate_13; }
	inline void set_CommunicateRate_13(int32_t value)
	{
		___CommunicateRate_13 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_1_14() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHuman_1_14)); }
	inline int32_t get_CommunicateHuman_1_14() const { return ___CommunicateHuman_1_14; }
	inline int32_t* get_address_of_CommunicateHuman_1_14() { return &___CommunicateHuman_1_14; }
	inline void set_CommunicateHuman_1_14(int32_t value)
	{
		___CommunicateHuman_1_14 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_2_15() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHuman_2_15)); }
	inline int32_t get_CommunicateHuman_2_15() const { return ___CommunicateHuman_2_15; }
	inline int32_t* get_address_of_CommunicateHuman_2_15() { return &___CommunicateHuman_2_15; }
	inline void set_CommunicateHuman_2_15(int32_t value)
	{
		___CommunicateHuman_2_15 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_3_16() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHuman_3_16)); }
	inline int32_t get_CommunicateHuman_3_16() const { return ___CommunicateHuman_3_16; }
	inline int32_t* get_address_of_CommunicateHuman_3_16() { return &___CommunicateHuman_3_16; }
	inline void set_CommunicateHuman_3_16(int32_t value)
	{
		___CommunicateHuman_3_16 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_4_17() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHuman_4_17)); }
	inline int32_t get_CommunicateHuman_4_17() const { return ___CommunicateHuman_4_17; }
	inline int32_t* get_address_of_CommunicateHuman_4_17() { return &___CommunicateHuman_4_17; }
	inline void set_CommunicateHuman_4_17(int32_t value)
	{
		___CommunicateHuman_4_17 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_5_18() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHuman_5_18)); }
	inline int32_t get_CommunicateHuman_5_18() const { return ___CommunicateHuman_5_18; }
	inline int32_t* get_address_of_CommunicateHuman_5_18() { return &___CommunicateHuman_5_18; }
	inline void set_CommunicateHuman_5_18(int32_t value)
	{
		___CommunicateHuman_5_18 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_1_19() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Climate_1_19)); }
	inline int32_t get_CommunicateBlock_Climate_1_19() const { return ___CommunicateBlock_Climate_1_19; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_1_19() { return &___CommunicateBlock_Climate_1_19; }
	inline void set_CommunicateBlock_Climate_1_19(int32_t value)
	{
		___CommunicateBlock_Climate_1_19 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_2_20() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Climate_2_20)); }
	inline int32_t get_CommunicateBlock_Climate_2_20() const { return ___CommunicateBlock_Climate_2_20; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_2_20() { return &___CommunicateBlock_Climate_2_20; }
	inline void set_CommunicateBlock_Climate_2_20(int32_t value)
	{
		___CommunicateBlock_Climate_2_20 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_3_21() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Climate_3_21)); }
	inline int32_t get_CommunicateBlock_Climate_3_21() const { return ___CommunicateBlock_Climate_3_21; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_3_21() { return &___CommunicateBlock_Climate_3_21; }
	inline void set_CommunicateBlock_Climate_3_21(int32_t value)
	{
		___CommunicateBlock_Climate_3_21 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_1_22() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Envi_1_22)); }
	inline int32_t get_CommunicateBlock_Envi_1_22() const { return ___CommunicateBlock_Envi_1_22; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_1_22() { return &___CommunicateBlock_Envi_1_22; }
	inline void set_CommunicateBlock_Envi_1_22(int32_t value)
	{
		___CommunicateBlock_Envi_1_22 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_2_23() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Envi_2_23)); }
	inline int32_t get_CommunicateBlock_Envi_2_23() const { return ___CommunicateBlock_Envi_2_23; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_2_23() { return &___CommunicateBlock_Envi_2_23; }
	inline void set_CommunicateBlock_Envi_2_23(int32_t value)
	{
		___CommunicateBlock_Envi_2_23 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_3_24() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateBlock_Envi_3_24)); }
	inline int32_t get_CommunicateBlock_Envi_3_24() const { return ___CommunicateBlock_Envi_3_24; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_3_24() { return &___CommunicateBlock_Envi_3_24; }
	inline void set_CommunicateBlock_Envi_3_24(int32_t value)
	{
		___CommunicateBlock_Envi_3_24 = value;
	}

	inline static int32_t get_offset_of_InitialSP_25() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InitialSP_25)); }
	inline int32_t get_InitialSP_25() const { return ___InitialSP_25; }
	inline int32_t* get_address_of_InitialSP_25() { return &___InitialSP_25; }
	inline void set_InitialSP_25(int32_t value)
	{
		___InitialSP_25 = value;
	}

	inline static int32_t get_offset_of_Name_26() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Name_26)); }
	inline String_t* get_Name_26() const { return ___Name_26; }
	inline String_t** get_address_of_Name_26() { return &___Name_26; }
	inline void set_Name_26(String_t* value)
	{
		___Name_26 = value;
		Il2CppCodeGenWriteBarrier((&___Name_26), value);
	}

	inline static int32_t get_offset_of_Res_27() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Res_27)); }
	inline String_t* get_Res_27() const { return ___Res_27; }
	inline String_t** get_address_of_Res_27() { return &___Res_27; }
	inline void set_Res_27(String_t* value)
	{
		___Res_27 = value;
		Il2CppCodeGenWriteBarrier((&___Res_27), value);
	}

	inline static int32_t get_offset_of_StrategyID_28() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___StrategyID_28)); }
	inline String_t* get_StrategyID_28() const { return ___StrategyID_28; }
	inline String_t** get_address_of_StrategyID_28() { return &___StrategyID_28; }
	inline void set_StrategyID_28(String_t* value)
	{
		___StrategyID_28 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_28), value);
	}

	inline static int32_t get_offset_of_Medi_Start_29() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Medi_Start_29)); }
	inline int32_t get_Medi_Start_29() const { return ___Medi_Start_29; }
	inline int32_t* get_address_of_Medi_Start_29() { return &___Medi_Start_29; }
	inline void set_Medi_Start_29(int32_t value)
	{
		___Medi_Start_29 = value;
	}

	inline static int32_t get_offset_of_Medi_Work_30() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Medi_Work_30)); }
	inline int32_t get_Medi_Work_30() const { return ___Medi_Work_30; }
	inline int32_t* get_address_of_Medi_Work_30() { return &___Medi_Work_30; }
	inline void set_Medi_Work_30(int32_t value)
	{
		___Medi_Work_30 = value;
	}

	inline static int32_t get_offset_of_Medi_Spd_31() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Medi_Spd_31)); }
	inline int32_t get_Medi_Spd_31() const { return ___Medi_Spd_31; }
	inline int32_t* get_address_of_Medi_Spd_31() { return &___Medi_Spd_31; }
	inline void set_Medi_Spd_31(int32_t value)
	{
		___Medi_Spd_31 = value;
	}

	inline static int32_t get_offset_of_CommunicationThreshold_32() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicationThreshold_32)); }
	inline int32_t get_CommunicationThreshold_32() const { return ___CommunicationThreshold_32; }
	inline int32_t* get_address_of_CommunicationThreshold_32() { return &___CommunicationThreshold_32; }
	inline void set_CommunicationThreshold_32(int32_t value)
	{
		___CommunicationThreshold_32 = value;
	}

	inline static int32_t get_offset_of_InfectHumans_33() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectHumans_33)); }
	inline List_1_t3011634166 * get_InfectHumans_33() const { return ___InfectHumans_33; }
	inline List_1_t3011634166 ** get_address_of_InfectHumans_33() { return &___InfectHumans_33; }
	inline void set_InfectHumans_33(List_1_t3011634166 * value)
	{
		___InfectHumans_33 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHumans_33), value);
	}

	inline static int32_t get_offset_of_InfectClims_34() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectClims_34)); }
	inline List_1_t3011634166 * get_InfectClims_34() const { return ___InfectClims_34; }
	inline List_1_t3011634166 ** get_address_of_InfectClims_34() { return &___InfectClims_34; }
	inline void set_InfectClims_34(List_1_t3011634166 * value)
	{
		___InfectClims_34 = value;
		Il2CppCodeGenWriteBarrier((&___InfectClims_34), value);
	}

	inline static int32_t get_offset_of_InfectEnvis_35() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___InfectEnvis_35)); }
	inline List_1_t3011634166 * get_InfectEnvis_35() const { return ___InfectEnvis_35; }
	inline List_1_t3011634166 ** get_address_of_InfectEnvis_35() { return &___InfectEnvis_35; }
	inline void set_InfectEnvis_35(List_1_t3011634166 * value)
	{
		___InfectEnvis_35 = value;
		Il2CppCodeGenWriteBarrier((&___InfectEnvis_35), value);
	}

	inline static int32_t get_offset_of_CommunicateHumans_36() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateHumans_36)); }
	inline List_1_t3011634166 * get_CommunicateHumans_36() const { return ___CommunicateHumans_36; }
	inline List_1_t3011634166 ** get_address_of_CommunicateHumans_36() { return &___CommunicateHumans_36; }
	inline void set_CommunicateHumans_36(List_1_t3011634166 * value)
	{
		___CommunicateHumans_36 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHumans_36), value);
	}

	inline static int32_t get_offset_of_CommunicateClimates_37() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateClimates_37)); }
	inline List_1_t3011634166 * get_CommunicateClimates_37() const { return ___CommunicateClimates_37; }
	inline List_1_t3011634166 ** get_address_of_CommunicateClimates_37() { return &___CommunicateClimates_37; }
	inline void set_CommunicateClimates_37(List_1_t3011634166 * value)
	{
		___CommunicateClimates_37 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateClimates_37), value);
	}

	inline static int32_t get_offset_of_CommunicateEnvis_38() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___CommunicateEnvis_38)); }
	inline List_1_t3011634166 * get_CommunicateEnvis_38() const { return ___CommunicateEnvis_38; }
	inline List_1_t3011634166 ** get_address_of_CommunicateEnvis_38() { return &___CommunicateEnvis_38; }
	inline void set_CommunicateEnvis_38(List_1_t3011634166 * value)
	{
		___CommunicateEnvis_38 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateEnvis_38), value);
	}

	inline static int32_t get_offset_of_Envi_39() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Envi_39)); }
	inline int32_t get_Envi_39() const { return ___Envi_39; }
	inline int32_t* get_address_of_Envi_39() { return &___Envi_39; }
	inline void set_Envi_39(int32_t value)
	{
		___Envi_39 = value;
	}

	inline static int32_t get_offset_of_Clim_40() { return static_cast<int32_t>(offsetof(Virus_t141792805, ___Clim_40)); }
	inline int32_t get_Clim_40() const { return ___Clim_40; }
	inline int32_t* get_address_of_Clim_40() { return &___Clim_40; }
	inline void set_Clim_40(int32_t value)
	{
		___Clim_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUS_T141792805_H
#ifndef SCRIPTABLEOBJECT_T3894479169_H
#define SCRIPTABLEOBJECT_T3894479169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3894479169  : public Object_t3090032892
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3894479169_marshaled_pinvoke : public Object_t3090032892_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3894479169_marshaled_com : public Object_t3090032892_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3894479169_H
#ifndef SPLIST_T1665843870_H
#define SPLIST_T1665843870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPList
struct  SPList_t1665843870  : public ScriptableObject_t3894479169
{
public:
	// System.Collections.Generic.List`1<Infection_Sheet> SPList::InfectionSheet
	List_1_t3000269100 * ___InfectionSheet_2;
	// System.Collections.Generic.List`1<Damage_Sheet> SPList::DamageSheet
	List_1_t1798217450 * ___DamageSheet_3;

public:
	inline static int32_t get_offset_of_InfectionSheet_2() { return static_cast<int32_t>(offsetof(SPList_t1665843870, ___InfectionSheet_2)); }
	inline List_1_t3000269100 * get_InfectionSheet_2() const { return ___InfectionSheet_2; }
	inline List_1_t3000269100 ** get_address_of_InfectionSheet_2() { return &___InfectionSheet_2; }
	inline void set_InfectionSheet_2(List_1_t3000269100 * value)
	{
		___InfectionSheet_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionSheet_2), value);
	}

	inline static int32_t get_offset_of_DamageSheet_3() { return static_cast<int32_t>(offsetof(SPList_t1665843870, ___DamageSheet_3)); }
	inline List_1_t1798217450 * get_DamageSheet_3() const { return ___DamageSheet_3; }
	inline List_1_t1798217450 ** get_address_of_DamageSheet_3() { return &___DamageSheet_3; }
	inline void set_DamageSheet_3(List_1_t1798217450 * value)
	{
		___DamageSheet_3 = value;
		Il2CppCodeGenWriteBarrier((&___DamageSheet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPLIST_T1665843870_H
#ifndef SPECIALABILITY_T4169042086_H
#define SPECIALABILITY_T4169042086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialAbility
struct  SpecialAbility_t4169042086  : public ScriptableObject_t3894479169
{
public:
	// System.Collections.Generic.List`1<SpecialAbility_Sheet> SpecialAbility::Ability
	List_1_t2503190423 * ___Ability_2;

public:
	inline static int32_t get_offset_of_Ability_2() { return static_cast<int32_t>(offsetof(SpecialAbility_t4169042086, ___Ability_2)); }
	inline List_1_t2503190423 * get_Ability_2() const { return ___Ability_2; }
	inline List_1_t2503190423 ** get_address_of_Ability_2() { return &___Ability_2; }
	inline void set_Ability_2(List_1_t2503190423 * value)
	{
		___Ability_2 = value;
		Il2CppCodeGenWriteBarrier((&___Ability_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALABILITY_T4169042086_H
#ifndef MISSION_T2298149371_H
#define MISSION_T2298149371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mission
struct  Mission_t2298149371  : public ScriptableObject_t3894479169
{
public:
	// System.Collections.Generic.List`1<Mission_Sheet> Mission::Parameter
	List_1_t330677299 * ___Parameter_2;

public:
	inline static int32_t get_offset_of_Parameter_2() { return static_cast<int32_t>(offsetof(Mission_t2298149371, ___Parameter_2)); }
	inline List_1_t330677299 * get_Parameter_2() const { return ___Parameter_2; }
	inline List_1_t330677299 ** get_address_of_Parameter_2() { return &___Parameter_2; }
	inline void set_Parameter_2(List_1_t330677299 * value)
	{
		___Parameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___Parameter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSION_T2298149371_H
#ifndef BEHAVIOUR_T3931619386_H
#define BEHAVIOUR_T3931619386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3931619386  : public Component_t1570639622
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3931619386_H
#ifndef MODEL_T1061252852_H
#define MODEL_T1061252852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Model
struct  Model_t1061252852  : public ScriptableObject_t3894479169
{
public:
	// System.Collections.Generic.List`1<Virus_Sheet> Model::Virus_Sheet
	List_1_t1891562591 * ___Virus_Sheet_2;
	// System.Collections.Generic.List`1<Human_Sheet> Model::Human_Sheet
	List_1_t4098843152 * ___Human_Sheet_3;
	// System.Collections.Generic.List`1<Zombie_Sheet> Model::Zombie_Sheet
	List_1_t4242990511 * ___Zombie_Sheet_4;

public:
	inline static int32_t get_offset_of_Virus_Sheet_2() { return static_cast<int32_t>(offsetof(Model_t1061252852, ___Virus_Sheet_2)); }
	inline List_1_t1891562591 * get_Virus_Sheet_2() const { return ___Virus_Sheet_2; }
	inline List_1_t1891562591 ** get_address_of_Virus_Sheet_2() { return &___Virus_Sheet_2; }
	inline void set_Virus_Sheet_2(List_1_t1891562591 * value)
	{
		___Virus_Sheet_2 = value;
		Il2CppCodeGenWriteBarrier((&___Virus_Sheet_2), value);
	}

	inline static int32_t get_offset_of_Human_Sheet_3() { return static_cast<int32_t>(offsetof(Model_t1061252852, ___Human_Sheet_3)); }
	inline List_1_t4098843152 * get_Human_Sheet_3() const { return ___Human_Sheet_3; }
	inline List_1_t4098843152 ** get_address_of_Human_Sheet_3() { return &___Human_Sheet_3; }
	inline void set_Human_Sheet_3(List_1_t4098843152 * value)
	{
		___Human_Sheet_3 = value;
		Il2CppCodeGenWriteBarrier((&___Human_Sheet_3), value);
	}

	inline static int32_t get_offset_of_Zombie_Sheet_4() { return static_cast<int32_t>(offsetof(Model_t1061252852, ___Zombie_Sheet_4)); }
	inline List_1_t4242990511 * get_Zombie_Sheet_4() const { return ___Zombie_Sheet_4; }
	inline List_1_t4242990511 ** get_address_of_Zombie_Sheet_4() { return &___Zombie_Sheet_4; }
	inline void set_Zombie_Sheet_4(List_1_t4242990511 * value)
	{
		___Zombie_Sheet_4 = value;
		Il2CppCodeGenWriteBarrier((&___Zombie_Sheet_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODEL_T1061252852_H
#ifndef UNLOCK_T2491154220_H
#define UNLOCK_T2491154220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unlock
struct  Unlock_t2491154220  : public ScriptableObject_t3894479169
{
public:
	// System.Collections.Generic.List`1<UnlockMission_Sheet> Unlock::UnlockMission
	List_1_t2876651533 * ___UnlockMission_2;

public:
	inline static int32_t get_offset_of_UnlockMission_2() { return static_cast<int32_t>(offsetof(Unlock_t2491154220, ___UnlockMission_2)); }
	inline List_1_t2876651533 * get_UnlockMission_2() const { return ___UnlockMission_2; }
	inline List_1_t2876651533 ** get_address_of_UnlockMission_2() { return &___UnlockMission_2; }
	inline void set_UnlockMission_2(List_1_t2876651533 * value)
	{
		___UnlockMission_2 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockMission_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCK_T2491154220_H
#ifndef MONOBEHAVIOUR_T114833016_H
#define MONOBEHAVIOUR_T114833016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t114833016  : public Behaviour_t3931619386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T114833016_H
#ifndef MODES_C_T3877619868_H
#define MODES_C_T3877619868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Modes_C
struct  Modes_C_t3877619868  : public MonoBehaviour_t114833016
{
public:
	// UnityEngine.GameObject Modes_C::Modes_BackBtn
	GameObject_t2717650277 * ___Modes_BackBtn_2;
	// UnityEngine.GameObject Modes_C::Modes_CampaignBtn
	GameObject_t2717650277 * ___Modes_CampaignBtn_3;
	// UnityEngine.GameObject Modes_C::Modes_ContinueBtn
	GameObject_t2717650277 * ___Modes_ContinueBtn_4;
	// UnityEngine.GameObject Modes_C::Modes_TrialBtn
	GameObject_t2717650277 * ___Modes_TrialBtn_5;
	// UnityEngine.GameObject Modes_C::Modes_RandomBtn
	GameObject_t2717650277 * ___Modes_RandomBtn_6;

public:
	inline static int32_t get_offset_of_Modes_BackBtn_2() { return static_cast<int32_t>(offsetof(Modes_C_t3877619868, ___Modes_BackBtn_2)); }
	inline GameObject_t2717650277 * get_Modes_BackBtn_2() const { return ___Modes_BackBtn_2; }
	inline GameObject_t2717650277 ** get_address_of_Modes_BackBtn_2() { return &___Modes_BackBtn_2; }
	inline void set_Modes_BackBtn_2(GameObject_t2717650277 * value)
	{
		___Modes_BackBtn_2 = value;
		Il2CppCodeGenWriteBarrier((&___Modes_BackBtn_2), value);
	}

	inline static int32_t get_offset_of_Modes_CampaignBtn_3() { return static_cast<int32_t>(offsetof(Modes_C_t3877619868, ___Modes_CampaignBtn_3)); }
	inline GameObject_t2717650277 * get_Modes_CampaignBtn_3() const { return ___Modes_CampaignBtn_3; }
	inline GameObject_t2717650277 ** get_address_of_Modes_CampaignBtn_3() { return &___Modes_CampaignBtn_3; }
	inline void set_Modes_CampaignBtn_3(GameObject_t2717650277 * value)
	{
		___Modes_CampaignBtn_3 = value;
		Il2CppCodeGenWriteBarrier((&___Modes_CampaignBtn_3), value);
	}

	inline static int32_t get_offset_of_Modes_ContinueBtn_4() { return static_cast<int32_t>(offsetof(Modes_C_t3877619868, ___Modes_ContinueBtn_4)); }
	inline GameObject_t2717650277 * get_Modes_ContinueBtn_4() const { return ___Modes_ContinueBtn_4; }
	inline GameObject_t2717650277 ** get_address_of_Modes_ContinueBtn_4() { return &___Modes_ContinueBtn_4; }
	inline void set_Modes_ContinueBtn_4(GameObject_t2717650277 * value)
	{
		___Modes_ContinueBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___Modes_ContinueBtn_4), value);
	}

	inline static int32_t get_offset_of_Modes_TrialBtn_5() { return static_cast<int32_t>(offsetof(Modes_C_t3877619868, ___Modes_TrialBtn_5)); }
	inline GameObject_t2717650277 * get_Modes_TrialBtn_5() const { return ___Modes_TrialBtn_5; }
	inline GameObject_t2717650277 ** get_address_of_Modes_TrialBtn_5() { return &___Modes_TrialBtn_5; }
	inline void set_Modes_TrialBtn_5(GameObject_t2717650277 * value)
	{
		___Modes_TrialBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___Modes_TrialBtn_5), value);
	}

	inline static int32_t get_offset_of_Modes_RandomBtn_6() { return static_cast<int32_t>(offsetof(Modes_C_t3877619868, ___Modes_RandomBtn_6)); }
	inline GameObject_t2717650277 * get_Modes_RandomBtn_6() const { return ___Modes_RandomBtn_6; }
	inline GameObject_t2717650277 ** get_address_of_Modes_RandomBtn_6() { return &___Modes_RandomBtn_6; }
	inline void set_Modes_RandomBtn_6(GameObject_t2717650277 * value)
	{
		___Modes_RandomBtn_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modes_RandomBtn_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODES_C_T3877619868_H
#ifndef PERFORMANCE_T1482225160_H
#define PERFORMANCE_T1482225160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Performance
struct  Performance_t1482225160  : public MonoBehaviour_t114833016
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCE_T1482225160_H
#ifndef SHOP_C_T1280865277_H
#define SHOP_C_T1280865277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shop_C
struct  Shop_C_t1280865277  : public MonoBehaviour_t114833016
{
public:
	// UnityEngine.GameObject Shop_C::ShopGrid
	GameObject_t2717650277 * ___ShopGrid_2;
	// UnityEngine.GameObject Shop_C::prefabs_Cell
	GameObject_t2717650277 * ___prefabs_Cell_3;
	// UnityEngine.GameObject Shop_C::Shop_BackBtn
	GameObject_t2717650277 * ___Shop_BackBtn_4;
	// ObjectPool`2<UnityEngine.GameObject,IAP_Sheet> Shop_C::OP
	ObjectPool_2_t155069204 * ___OP_5;

public:
	inline static int32_t get_offset_of_ShopGrid_2() { return static_cast<int32_t>(offsetof(Shop_C_t1280865277, ___ShopGrid_2)); }
	inline GameObject_t2717650277 * get_ShopGrid_2() const { return ___ShopGrid_2; }
	inline GameObject_t2717650277 ** get_address_of_ShopGrid_2() { return &___ShopGrid_2; }
	inline void set_ShopGrid_2(GameObject_t2717650277 * value)
	{
		___ShopGrid_2 = value;
		Il2CppCodeGenWriteBarrier((&___ShopGrid_2), value);
	}

	inline static int32_t get_offset_of_prefabs_Cell_3() { return static_cast<int32_t>(offsetof(Shop_C_t1280865277, ___prefabs_Cell_3)); }
	inline GameObject_t2717650277 * get_prefabs_Cell_3() const { return ___prefabs_Cell_3; }
	inline GameObject_t2717650277 ** get_address_of_prefabs_Cell_3() { return &___prefabs_Cell_3; }
	inline void set_prefabs_Cell_3(GameObject_t2717650277 * value)
	{
		___prefabs_Cell_3 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_3), value);
	}

	inline static int32_t get_offset_of_Shop_BackBtn_4() { return static_cast<int32_t>(offsetof(Shop_C_t1280865277, ___Shop_BackBtn_4)); }
	inline GameObject_t2717650277 * get_Shop_BackBtn_4() const { return ___Shop_BackBtn_4; }
	inline GameObject_t2717650277 ** get_address_of_Shop_BackBtn_4() { return &___Shop_BackBtn_4; }
	inline void set_Shop_BackBtn_4(GameObject_t2717650277 * value)
	{
		___Shop_BackBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___Shop_BackBtn_4), value);
	}

	inline static int32_t get_offset_of_OP_5() { return static_cast<int32_t>(offsetof(Shop_C_t1280865277, ___OP_5)); }
	inline ObjectPool_2_t155069204 * get_OP_5() const { return ___OP_5; }
	inline ObjectPool_2_t155069204 ** get_address_of_OP_5() { return &___OP_5; }
	inline void set_OP_5(ObjectPool_2_t155069204 * value)
	{
		___OP_5 = value;
		Il2CppCodeGenWriteBarrier((&___OP_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOP_C_T1280865277_H
#ifndef ZOMBIE_T3460476251_H
#define ZOMBIE_T3460476251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Zombie
struct  Zombie_t3460476251  : public MonoBehaviour_t114833016
{
public:
	// System.Single Zombie::ATTACK_INTERVAL
	float ___ATTACK_INTERVAL_2;
	// System.Single Zombie::HEALTH_INTERVAL
	float ___HEALTH_INTERVAL_3;
	// System.Single Zombie::ZombieID
	float ___ZombieID_4;
	// System.Int32 Zombie::MaxHP
	int32_t ___MaxHP_5;
	// System.Int32 Zombie::Atk
	int32_t ___Atk_6;
	// System.Int32 Zombie::Heal
	int32_t ___Heal_7;
	// System.Int32 Zombie::Def
	int32_t ___Def_8;
	// System.Int32 Zombie::Infect
	int32_t ___Infect_9;
	// System.Int32 Zombie::Speed
	int32_t ___Speed_10;
	// System.Int32 Zombie::HPDecay
	int32_t ___HPDecay_11;
	// System.Int32 Zombie::DrainLife
	int32_t ___DrainLife_12;
	// System.String Zombie::AbilityID
	String_t* ___AbilityID_13;
	// System.String Zombie::Name
	String_t* ___Name_14;
	// System.String Zombie::Res
	String_t* ___Res_15;
	// System.String Zombie::SkillID
	String_t* ___SkillID_16;
	// System.Int32 Zombie::param
	int32_t ___param_17;
	// System.Int32 Zombie::HP
	int32_t ___HP_18;
	// System.Int32 Zombie::ClimateBoost
	int32_t ___ClimateBoost_19;
	// System.Int32 Zombie::EnviBoost
	int32_t ___EnviBoost_20;
	// Environment Zombie::Envi
	int32_t ___Envi_21;
	// Climate Zombie::Clim
	int32_t ___Clim_22;
	// UnityEngine.GameObject Zombie::HumanModel
	GameObject_t2717650277 * ___HumanModel_23;
	// Zombie Zombie::self
	Zombie_t3460476251 * ___self_24;
	// UISprite Zombie::Image
	UISprite_t104102433 * ___Image_25;
	// UILabel Zombie::LabelName
	UILabel_t659981927 * ___LabelName_26;
	// UnityEngine.GameObject Zombie::HPBar
	GameObject_t2717650277 * ___HPBar_27;
	// UISprite Zombie::ClimIcon
	UISprite_t104102433 * ___ClimIcon_28;
	// UISprite Zombie::EnviIcon
	UISprite_t104102433 * ___EnviIcon_29;
	// UISprite Zombie::SkillIcon
	UISprite_t104102433 * ___SkillIcon_30;
	// Battle_C Zombie::Battle
	Battle_C_t2125781796 * ___Battle_31;
	// System.Single Zombie::healDeltaTime
	float ___healDeltaTime_32;
	// System.Single Zombie::skillDeltaTime
	float ___skillDeltaTime_33;

public:
	inline static int32_t get_offset_of_ATTACK_INTERVAL_2() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___ATTACK_INTERVAL_2)); }
	inline float get_ATTACK_INTERVAL_2() const { return ___ATTACK_INTERVAL_2; }
	inline float* get_address_of_ATTACK_INTERVAL_2() { return &___ATTACK_INTERVAL_2; }
	inline void set_ATTACK_INTERVAL_2(float value)
	{
		___ATTACK_INTERVAL_2 = value;
	}

	inline static int32_t get_offset_of_HEALTH_INTERVAL_3() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___HEALTH_INTERVAL_3)); }
	inline float get_HEALTH_INTERVAL_3() const { return ___HEALTH_INTERVAL_3; }
	inline float* get_address_of_HEALTH_INTERVAL_3() { return &___HEALTH_INTERVAL_3; }
	inline void set_HEALTH_INTERVAL_3(float value)
	{
		___HEALTH_INTERVAL_3 = value;
	}

	inline static int32_t get_offset_of_ZombieID_4() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___ZombieID_4)); }
	inline float get_ZombieID_4() const { return ___ZombieID_4; }
	inline float* get_address_of_ZombieID_4() { return &___ZombieID_4; }
	inline void set_ZombieID_4(float value)
	{
		___ZombieID_4 = value;
	}

	inline static int32_t get_offset_of_MaxHP_5() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___MaxHP_5)); }
	inline int32_t get_MaxHP_5() const { return ___MaxHP_5; }
	inline int32_t* get_address_of_MaxHP_5() { return &___MaxHP_5; }
	inline void set_MaxHP_5(int32_t value)
	{
		___MaxHP_5 = value;
	}

	inline static int32_t get_offset_of_Atk_6() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Atk_6)); }
	inline int32_t get_Atk_6() const { return ___Atk_6; }
	inline int32_t* get_address_of_Atk_6() { return &___Atk_6; }
	inline void set_Atk_6(int32_t value)
	{
		___Atk_6 = value;
	}

	inline static int32_t get_offset_of_Heal_7() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Heal_7)); }
	inline int32_t get_Heal_7() const { return ___Heal_7; }
	inline int32_t* get_address_of_Heal_7() { return &___Heal_7; }
	inline void set_Heal_7(int32_t value)
	{
		___Heal_7 = value;
	}

	inline static int32_t get_offset_of_Def_8() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Def_8)); }
	inline int32_t get_Def_8() const { return ___Def_8; }
	inline int32_t* get_address_of_Def_8() { return &___Def_8; }
	inline void set_Def_8(int32_t value)
	{
		___Def_8 = value;
	}

	inline static int32_t get_offset_of_Infect_9() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Infect_9)); }
	inline int32_t get_Infect_9() const { return ___Infect_9; }
	inline int32_t* get_address_of_Infect_9() { return &___Infect_9; }
	inline void set_Infect_9(int32_t value)
	{
		___Infect_9 = value;
	}

	inline static int32_t get_offset_of_Speed_10() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Speed_10)); }
	inline int32_t get_Speed_10() const { return ___Speed_10; }
	inline int32_t* get_address_of_Speed_10() { return &___Speed_10; }
	inline void set_Speed_10(int32_t value)
	{
		___Speed_10 = value;
	}

	inline static int32_t get_offset_of_HPDecay_11() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___HPDecay_11)); }
	inline int32_t get_HPDecay_11() const { return ___HPDecay_11; }
	inline int32_t* get_address_of_HPDecay_11() { return &___HPDecay_11; }
	inline void set_HPDecay_11(int32_t value)
	{
		___HPDecay_11 = value;
	}

	inline static int32_t get_offset_of_DrainLife_12() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___DrainLife_12)); }
	inline int32_t get_DrainLife_12() const { return ___DrainLife_12; }
	inline int32_t* get_address_of_DrainLife_12() { return &___DrainLife_12; }
	inline void set_DrainLife_12(int32_t value)
	{
		___DrainLife_12 = value;
	}

	inline static int32_t get_offset_of_AbilityID_13() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___AbilityID_13)); }
	inline String_t* get_AbilityID_13() const { return ___AbilityID_13; }
	inline String_t** get_address_of_AbilityID_13() { return &___AbilityID_13; }
	inline void set_AbilityID_13(String_t* value)
	{
		___AbilityID_13 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_13), value);
	}

	inline static int32_t get_offset_of_Name_14() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Name_14)); }
	inline String_t* get_Name_14() const { return ___Name_14; }
	inline String_t** get_address_of_Name_14() { return &___Name_14; }
	inline void set_Name_14(String_t* value)
	{
		___Name_14 = value;
		Il2CppCodeGenWriteBarrier((&___Name_14), value);
	}

	inline static int32_t get_offset_of_Res_15() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Res_15)); }
	inline String_t* get_Res_15() const { return ___Res_15; }
	inline String_t** get_address_of_Res_15() { return &___Res_15; }
	inline void set_Res_15(String_t* value)
	{
		___Res_15 = value;
		Il2CppCodeGenWriteBarrier((&___Res_15), value);
	}

	inline static int32_t get_offset_of_SkillID_16() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___SkillID_16)); }
	inline String_t* get_SkillID_16() const { return ___SkillID_16; }
	inline String_t** get_address_of_SkillID_16() { return &___SkillID_16; }
	inline void set_SkillID_16(String_t* value)
	{
		___SkillID_16 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_16), value);
	}

	inline static int32_t get_offset_of_param_17() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___param_17)); }
	inline int32_t get_param_17() const { return ___param_17; }
	inline int32_t* get_address_of_param_17() { return &___param_17; }
	inline void set_param_17(int32_t value)
	{
		___param_17 = value;
	}

	inline static int32_t get_offset_of_HP_18() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___HP_18)); }
	inline int32_t get_HP_18() const { return ___HP_18; }
	inline int32_t* get_address_of_HP_18() { return &___HP_18; }
	inline void set_HP_18(int32_t value)
	{
		___HP_18 = value;
	}

	inline static int32_t get_offset_of_ClimateBoost_19() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___ClimateBoost_19)); }
	inline int32_t get_ClimateBoost_19() const { return ___ClimateBoost_19; }
	inline int32_t* get_address_of_ClimateBoost_19() { return &___ClimateBoost_19; }
	inline void set_ClimateBoost_19(int32_t value)
	{
		___ClimateBoost_19 = value;
	}

	inline static int32_t get_offset_of_EnviBoost_20() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___EnviBoost_20)); }
	inline int32_t get_EnviBoost_20() const { return ___EnviBoost_20; }
	inline int32_t* get_address_of_EnviBoost_20() { return &___EnviBoost_20; }
	inline void set_EnviBoost_20(int32_t value)
	{
		___EnviBoost_20 = value;
	}

	inline static int32_t get_offset_of_Envi_21() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Envi_21)); }
	inline int32_t get_Envi_21() const { return ___Envi_21; }
	inline int32_t* get_address_of_Envi_21() { return &___Envi_21; }
	inline void set_Envi_21(int32_t value)
	{
		___Envi_21 = value;
	}

	inline static int32_t get_offset_of_Clim_22() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Clim_22)); }
	inline int32_t get_Clim_22() const { return ___Clim_22; }
	inline int32_t* get_address_of_Clim_22() { return &___Clim_22; }
	inline void set_Clim_22(int32_t value)
	{
		___Clim_22 = value;
	}

	inline static int32_t get_offset_of_HumanModel_23() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___HumanModel_23)); }
	inline GameObject_t2717650277 * get_HumanModel_23() const { return ___HumanModel_23; }
	inline GameObject_t2717650277 ** get_address_of_HumanModel_23() { return &___HumanModel_23; }
	inline void set_HumanModel_23(GameObject_t2717650277 * value)
	{
		___HumanModel_23 = value;
		Il2CppCodeGenWriteBarrier((&___HumanModel_23), value);
	}

	inline static int32_t get_offset_of_self_24() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___self_24)); }
	inline Zombie_t3460476251 * get_self_24() const { return ___self_24; }
	inline Zombie_t3460476251 ** get_address_of_self_24() { return &___self_24; }
	inline void set_self_24(Zombie_t3460476251 * value)
	{
		___self_24 = value;
		Il2CppCodeGenWriteBarrier((&___self_24), value);
	}

	inline static int32_t get_offset_of_Image_25() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Image_25)); }
	inline UISprite_t104102433 * get_Image_25() const { return ___Image_25; }
	inline UISprite_t104102433 ** get_address_of_Image_25() { return &___Image_25; }
	inline void set_Image_25(UISprite_t104102433 * value)
	{
		___Image_25 = value;
		Il2CppCodeGenWriteBarrier((&___Image_25), value);
	}

	inline static int32_t get_offset_of_LabelName_26() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___LabelName_26)); }
	inline UILabel_t659981927 * get_LabelName_26() const { return ___LabelName_26; }
	inline UILabel_t659981927 ** get_address_of_LabelName_26() { return &___LabelName_26; }
	inline void set_LabelName_26(UILabel_t659981927 * value)
	{
		___LabelName_26 = value;
		Il2CppCodeGenWriteBarrier((&___LabelName_26), value);
	}

	inline static int32_t get_offset_of_HPBar_27() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___HPBar_27)); }
	inline GameObject_t2717650277 * get_HPBar_27() const { return ___HPBar_27; }
	inline GameObject_t2717650277 ** get_address_of_HPBar_27() { return &___HPBar_27; }
	inline void set_HPBar_27(GameObject_t2717650277 * value)
	{
		___HPBar_27 = value;
		Il2CppCodeGenWriteBarrier((&___HPBar_27), value);
	}

	inline static int32_t get_offset_of_ClimIcon_28() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___ClimIcon_28)); }
	inline UISprite_t104102433 * get_ClimIcon_28() const { return ___ClimIcon_28; }
	inline UISprite_t104102433 ** get_address_of_ClimIcon_28() { return &___ClimIcon_28; }
	inline void set_ClimIcon_28(UISprite_t104102433 * value)
	{
		___ClimIcon_28 = value;
		Il2CppCodeGenWriteBarrier((&___ClimIcon_28), value);
	}

	inline static int32_t get_offset_of_EnviIcon_29() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___EnviIcon_29)); }
	inline UISprite_t104102433 * get_EnviIcon_29() const { return ___EnviIcon_29; }
	inline UISprite_t104102433 ** get_address_of_EnviIcon_29() { return &___EnviIcon_29; }
	inline void set_EnviIcon_29(UISprite_t104102433 * value)
	{
		___EnviIcon_29 = value;
		Il2CppCodeGenWriteBarrier((&___EnviIcon_29), value);
	}

	inline static int32_t get_offset_of_SkillIcon_30() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___SkillIcon_30)); }
	inline UISprite_t104102433 * get_SkillIcon_30() const { return ___SkillIcon_30; }
	inline UISprite_t104102433 ** get_address_of_SkillIcon_30() { return &___SkillIcon_30; }
	inline void set_SkillIcon_30(UISprite_t104102433 * value)
	{
		___SkillIcon_30 = value;
		Il2CppCodeGenWriteBarrier((&___SkillIcon_30), value);
	}

	inline static int32_t get_offset_of_Battle_31() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___Battle_31)); }
	inline Battle_C_t2125781796 * get_Battle_31() const { return ___Battle_31; }
	inline Battle_C_t2125781796 ** get_address_of_Battle_31() { return &___Battle_31; }
	inline void set_Battle_31(Battle_C_t2125781796 * value)
	{
		___Battle_31 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_31), value);
	}

	inline static int32_t get_offset_of_healDeltaTime_32() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___healDeltaTime_32)); }
	inline float get_healDeltaTime_32() const { return ___healDeltaTime_32; }
	inline float* get_address_of_healDeltaTime_32() { return &___healDeltaTime_32; }
	inline void set_healDeltaTime_32(float value)
	{
		___healDeltaTime_32 = value;
	}

	inline static int32_t get_offset_of_skillDeltaTime_33() { return static_cast<int32_t>(offsetof(Zombie_t3460476251, ___skillDeltaTime_33)); }
	inline float get_skillDeltaTime_33() const { return ___skillDeltaTime_33; }
	inline float* get_address_of_skillDeltaTime_33() { return &___skillDeltaTime_33; }
	inline void set_skillDeltaTime_33(float value)
	{
		___skillDeltaTime_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIE_T3460476251_H
#ifndef SHOPCELL_T4092949794_H
#define SHOPCELL_T4092949794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShopCell
struct  ShopCell_t4092949794  : public MonoBehaviour_t114833016
{
public:
	// UILabel ShopCell::LabelIAPName
	UILabel_t659981927 * ___LabelIAPName_2;
	// UILabel ShopCell::LabelIAPPrice
	UILabel_t659981927 * ___LabelIAPPrice_3;
	// ShopCell ShopCell::cell
	ShopCell_t4092949794 * ___cell_4;
	// System.Int32 ShopCell::CellID
	int32_t ___CellID_5;

public:
	inline static int32_t get_offset_of_LabelIAPName_2() { return static_cast<int32_t>(offsetof(ShopCell_t4092949794, ___LabelIAPName_2)); }
	inline UILabel_t659981927 * get_LabelIAPName_2() const { return ___LabelIAPName_2; }
	inline UILabel_t659981927 ** get_address_of_LabelIAPName_2() { return &___LabelIAPName_2; }
	inline void set_LabelIAPName_2(UILabel_t659981927 * value)
	{
		___LabelIAPName_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelIAPName_2), value);
	}

	inline static int32_t get_offset_of_LabelIAPPrice_3() { return static_cast<int32_t>(offsetof(ShopCell_t4092949794, ___LabelIAPPrice_3)); }
	inline UILabel_t659981927 * get_LabelIAPPrice_3() const { return ___LabelIAPPrice_3; }
	inline UILabel_t659981927 ** get_address_of_LabelIAPPrice_3() { return &___LabelIAPPrice_3; }
	inline void set_LabelIAPPrice_3(UILabel_t659981927 * value)
	{
		___LabelIAPPrice_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelIAPPrice_3), value);
	}

	inline static int32_t get_offset_of_cell_4() { return static_cast<int32_t>(offsetof(ShopCell_t4092949794, ___cell_4)); }
	inline ShopCell_t4092949794 * get_cell_4() const { return ___cell_4; }
	inline ShopCell_t4092949794 ** get_address_of_cell_4() { return &___cell_4; }
	inline void set_cell_4(ShopCell_t4092949794 * value)
	{
		___cell_4 = value;
		Il2CppCodeGenWriteBarrier((&___cell_4), value);
	}

	inline static int32_t get_offset_of_CellID_5() { return static_cast<int32_t>(offsetof(ShopCell_t4092949794, ___CellID_5)); }
	inline int32_t get_CellID_5() const { return ___CellID_5; }
	inline int32_t* get_address_of_CellID_5() { return &___CellID_5; }
	inline void set_CellID_5(int32_t value)
	{
		___CellID_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOPCELL_T4092949794_H
#ifndef VIRUSSELECTCELL_T3638526584_H
#define VIRUSSELECTCELL_T3638526584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirusSelectCell
struct  VirusSelectCell_t3638526584  : public MonoBehaviour_t114833016
{
public:
	// UILabel VirusSelectCell::LabelVirusName
	UILabel_t659981927 * ___LabelVirusName_2;
	// UILabel VirusSelectCell::LabelVirusDes
	UILabel_t659981927 * ___LabelVirusDes_3;
	// UILabel VirusSelectCell::LabelMissionIndex
	UILabel_t659981927 * ___LabelMissionIndex_4;
	// VirusSelectCell VirusSelectCell::cell
	VirusSelectCell_t3638526584 * ___cell_5;
	// System.Int32 VirusSelectCell::CellID
	int32_t ___CellID_6;

public:
	inline static int32_t get_offset_of_LabelVirusName_2() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3638526584, ___LabelVirusName_2)); }
	inline UILabel_t659981927 * get_LabelVirusName_2() const { return ___LabelVirusName_2; }
	inline UILabel_t659981927 ** get_address_of_LabelVirusName_2() { return &___LabelVirusName_2; }
	inline void set_LabelVirusName_2(UILabel_t659981927 * value)
	{
		___LabelVirusName_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelVirusName_2), value);
	}

	inline static int32_t get_offset_of_LabelVirusDes_3() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3638526584, ___LabelVirusDes_3)); }
	inline UILabel_t659981927 * get_LabelVirusDes_3() const { return ___LabelVirusDes_3; }
	inline UILabel_t659981927 ** get_address_of_LabelVirusDes_3() { return &___LabelVirusDes_3; }
	inline void set_LabelVirusDes_3(UILabel_t659981927 * value)
	{
		___LabelVirusDes_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelVirusDes_3), value);
	}

	inline static int32_t get_offset_of_LabelMissionIndex_4() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3638526584, ___LabelMissionIndex_4)); }
	inline UILabel_t659981927 * get_LabelMissionIndex_4() const { return ___LabelMissionIndex_4; }
	inline UILabel_t659981927 ** get_address_of_LabelMissionIndex_4() { return &___LabelMissionIndex_4; }
	inline void set_LabelMissionIndex_4(UILabel_t659981927 * value)
	{
		___LabelMissionIndex_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelMissionIndex_4), value);
	}

	inline static int32_t get_offset_of_cell_5() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3638526584, ___cell_5)); }
	inline VirusSelectCell_t3638526584 * get_cell_5() const { return ___cell_5; }
	inline VirusSelectCell_t3638526584 ** get_address_of_cell_5() { return &___cell_5; }
	inline void set_cell_5(VirusSelectCell_t3638526584 * value)
	{
		___cell_5 = value;
		Il2CppCodeGenWriteBarrier((&___cell_5), value);
	}

	inline static int32_t get_offset_of_CellID_6() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3638526584, ___CellID_6)); }
	inline int32_t get_CellID_6() const { return ___CellID_6; }
	inline int32_t* get_address_of_CellID_6() { return &___CellID_6; }
	inline void set_CellID_6(int32_t value)
	{
		___CellID_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUSSELECTCELL_T3638526584_H
#ifndef VIRUSSELECT_T967594650_H
#define VIRUSSELECT_T967594650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirusSelect
struct  VirusSelect_t967594650  : public MonoBehaviour_t114833016
{
public:
	// UnityEngine.GameObject VirusSelect::prefabs_Cell
	GameObject_t2717650277 * ___prefabs_Cell_2;
	// UnityEngine.GameObject VirusSelect::VirusSelectGrid
	GameObject_t2717650277 * ___VirusSelectGrid_3;
	// UnityEngine.GameObject VirusSelect::VirusSelectBackBtn
	GameObject_t2717650277 * ___VirusSelectBackBtn_4;
	// System.Int32 VirusSelect::UnlockedMissionNum
	int32_t ___UnlockedMissionNum_5;
	// ObjectPool`2<UnityEngine.GameObject,Virus_Sheet> VirusSelect::OP
	ObjectPool_2_t3475253714 * ___OP_6;
	// UILabel VirusSelect::LabelUnlockedMissionNum
	UILabel_t659981927 * ___LabelUnlockedMissionNum_7;

public:
	inline static int32_t get_offset_of_prefabs_Cell_2() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___prefabs_Cell_2)); }
	inline GameObject_t2717650277 * get_prefabs_Cell_2() const { return ___prefabs_Cell_2; }
	inline GameObject_t2717650277 ** get_address_of_prefabs_Cell_2() { return &___prefabs_Cell_2; }
	inline void set_prefabs_Cell_2(GameObject_t2717650277 * value)
	{
		___prefabs_Cell_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_2), value);
	}

	inline static int32_t get_offset_of_VirusSelectGrid_3() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___VirusSelectGrid_3)); }
	inline GameObject_t2717650277 * get_VirusSelectGrid_3() const { return ___VirusSelectGrid_3; }
	inline GameObject_t2717650277 ** get_address_of_VirusSelectGrid_3() { return &___VirusSelectGrid_3; }
	inline void set_VirusSelectGrid_3(GameObject_t2717650277 * value)
	{
		___VirusSelectGrid_3 = value;
		Il2CppCodeGenWriteBarrier((&___VirusSelectGrid_3), value);
	}

	inline static int32_t get_offset_of_VirusSelectBackBtn_4() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___VirusSelectBackBtn_4)); }
	inline GameObject_t2717650277 * get_VirusSelectBackBtn_4() const { return ___VirusSelectBackBtn_4; }
	inline GameObject_t2717650277 ** get_address_of_VirusSelectBackBtn_4() { return &___VirusSelectBackBtn_4; }
	inline void set_VirusSelectBackBtn_4(GameObject_t2717650277 * value)
	{
		___VirusSelectBackBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___VirusSelectBackBtn_4), value);
	}

	inline static int32_t get_offset_of_UnlockedMissionNum_5() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___UnlockedMissionNum_5)); }
	inline int32_t get_UnlockedMissionNum_5() const { return ___UnlockedMissionNum_5; }
	inline int32_t* get_address_of_UnlockedMissionNum_5() { return &___UnlockedMissionNum_5; }
	inline void set_UnlockedMissionNum_5(int32_t value)
	{
		___UnlockedMissionNum_5 = value;
	}

	inline static int32_t get_offset_of_OP_6() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___OP_6)); }
	inline ObjectPool_2_t3475253714 * get_OP_6() const { return ___OP_6; }
	inline ObjectPool_2_t3475253714 ** get_address_of_OP_6() { return &___OP_6; }
	inline void set_OP_6(ObjectPool_2_t3475253714 * value)
	{
		___OP_6 = value;
		Il2CppCodeGenWriteBarrier((&___OP_6), value);
	}

	inline static int32_t get_offset_of_LabelUnlockedMissionNum_7() { return static_cast<int32_t>(offsetof(VirusSelect_t967594650, ___LabelUnlockedMissionNum_7)); }
	inline UILabel_t659981927 * get_LabelUnlockedMissionNum_7() const { return ___LabelUnlockedMissionNum_7; }
	inline UILabel_t659981927 ** get_address_of_LabelUnlockedMissionNum_7() { return &___LabelUnlockedMissionNum_7; }
	inline void set_LabelUnlockedMissionNum_7(UILabel_t659981927 * value)
	{
		___LabelUnlockedMissionNum_7 = value;
		Il2CppCodeGenWriteBarrier((&___LabelUnlockedMissionNum_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUSSELECT_T967594650_H
#ifndef SINGLETON_T1545675408_H
#define SINGLETON_T1545675408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton
struct  Singleton_t1545675408  : public MonoBehaviour_t114833016
{
public:

public:
};

struct Singleton_t1545675408_StaticFields
{
public:
	// UnityEngine.GameObject Singleton::m_Container
	GameObject_t2717650277 * ___m_Container_2;
	// System.String Singleton::m_Name
	String_t* ___m_Name_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Singleton::m_SingletonMap
	Dictionary_2_t3938208576 * ___m_SingletonMap_4;
	// System.Boolean Singleton::m_IsDestroying
	bool ___m_IsDestroying_5;

public:
	inline static int32_t get_offset_of_m_Container_2() { return static_cast<int32_t>(offsetof(Singleton_t1545675408_StaticFields, ___m_Container_2)); }
	inline GameObject_t2717650277 * get_m_Container_2() const { return ___m_Container_2; }
	inline GameObject_t2717650277 ** get_address_of_m_Container_2() { return &___m_Container_2; }
	inline void set_m_Container_2(GameObject_t2717650277 * value)
	{
		___m_Container_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Container_2), value);
	}

	inline static int32_t get_offset_of_m_Name_3() { return static_cast<int32_t>(offsetof(Singleton_t1545675408_StaticFields, ___m_Name_3)); }
	inline String_t* get_m_Name_3() const { return ___m_Name_3; }
	inline String_t** get_address_of_m_Name_3() { return &___m_Name_3; }
	inline void set_m_Name_3(String_t* value)
	{
		___m_Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_3), value);
	}

	inline static int32_t get_offset_of_m_SingletonMap_4() { return static_cast<int32_t>(offsetof(Singleton_t1545675408_StaticFields, ___m_SingletonMap_4)); }
	inline Dictionary_2_t3938208576 * get_m_SingletonMap_4() const { return ___m_SingletonMap_4; }
	inline Dictionary_2_t3938208576 ** get_address_of_m_SingletonMap_4() { return &___m_SingletonMap_4; }
	inline void set_m_SingletonMap_4(Dictionary_2_t3938208576 * value)
	{
		___m_SingletonMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SingletonMap_4), value);
	}

	inline static int32_t get_offset_of_m_IsDestroying_5() { return static_cast<int32_t>(offsetof(Singleton_t1545675408_StaticFields, ___m_IsDestroying_5)); }
	inline bool get_m_IsDestroying_5() const { return ___m_IsDestroying_5; }
	inline bool* get_address_of_m_IsDestroying_5() { return &___m_IsDestroying_5; }
	inline void set_m_IsDestroying_5(bool value)
	{
		___m_IsDestroying_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_T1545675408_H
#ifndef OPTION_C_T2658585434_H
#define OPTION_C_T2658585434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Option_C
struct  Option_C_t2658585434  : public MonoBehaviour_t114833016
{
public:
	// UILabel Option_C::LabelOption
	UILabel_t659981927 * ___LabelOption_2;
	// UILabel Option_C::LabelLanguageName
	UILabel_t659981927 * ___LabelLanguageName_3;
	// UILabel Option_C::LabelLanguage
	UILabel_t659981927 * ___LabelLanguage_4;
	// UnityEngine.GameObject Option_C::MusicBar
	GameObject_t2717650277 * ___MusicBar_5;
	// UnityEngine.GameObject Option_C::SoundSwitch
	GameObject_t2717650277 * ___SoundSwitch_6;
	// UnityEngine.GameObject Option_C::Option_BackBtn
	GameObject_t2717650277 * ___Option_BackBtn_7;
	// UnityEngine.GameObject Option_C::LanguageRight
	GameObject_t2717650277 * ___LanguageRight_8;
	// UnityEngine.GameObject Option_C::LanguageLeft
	GameObject_t2717650277 * ___LanguageLeft_9;
	// UISlider Option_C::musicBarSlider
	UISlider_t1108210950 * ___musicBarSlider_10;
	// UIToggle Option_C::soundToggle
	UIToggle_t917154769 * ___soundToggle_11;

public:
	inline static int32_t get_offset_of_LabelOption_2() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___LabelOption_2)); }
	inline UILabel_t659981927 * get_LabelOption_2() const { return ___LabelOption_2; }
	inline UILabel_t659981927 ** get_address_of_LabelOption_2() { return &___LabelOption_2; }
	inline void set_LabelOption_2(UILabel_t659981927 * value)
	{
		___LabelOption_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelOption_2), value);
	}

	inline static int32_t get_offset_of_LabelLanguageName_3() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___LabelLanguageName_3)); }
	inline UILabel_t659981927 * get_LabelLanguageName_3() const { return ___LabelLanguageName_3; }
	inline UILabel_t659981927 ** get_address_of_LabelLanguageName_3() { return &___LabelLanguageName_3; }
	inline void set_LabelLanguageName_3(UILabel_t659981927 * value)
	{
		___LabelLanguageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelLanguageName_3), value);
	}

	inline static int32_t get_offset_of_LabelLanguage_4() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___LabelLanguage_4)); }
	inline UILabel_t659981927 * get_LabelLanguage_4() const { return ___LabelLanguage_4; }
	inline UILabel_t659981927 ** get_address_of_LabelLanguage_4() { return &___LabelLanguage_4; }
	inline void set_LabelLanguage_4(UILabel_t659981927 * value)
	{
		___LabelLanguage_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelLanguage_4), value);
	}

	inline static int32_t get_offset_of_MusicBar_5() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___MusicBar_5)); }
	inline GameObject_t2717650277 * get_MusicBar_5() const { return ___MusicBar_5; }
	inline GameObject_t2717650277 ** get_address_of_MusicBar_5() { return &___MusicBar_5; }
	inline void set_MusicBar_5(GameObject_t2717650277 * value)
	{
		___MusicBar_5 = value;
		Il2CppCodeGenWriteBarrier((&___MusicBar_5), value);
	}

	inline static int32_t get_offset_of_SoundSwitch_6() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___SoundSwitch_6)); }
	inline GameObject_t2717650277 * get_SoundSwitch_6() const { return ___SoundSwitch_6; }
	inline GameObject_t2717650277 ** get_address_of_SoundSwitch_6() { return &___SoundSwitch_6; }
	inline void set_SoundSwitch_6(GameObject_t2717650277 * value)
	{
		___SoundSwitch_6 = value;
		Il2CppCodeGenWriteBarrier((&___SoundSwitch_6), value);
	}

	inline static int32_t get_offset_of_Option_BackBtn_7() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___Option_BackBtn_7)); }
	inline GameObject_t2717650277 * get_Option_BackBtn_7() const { return ___Option_BackBtn_7; }
	inline GameObject_t2717650277 ** get_address_of_Option_BackBtn_7() { return &___Option_BackBtn_7; }
	inline void set_Option_BackBtn_7(GameObject_t2717650277 * value)
	{
		___Option_BackBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___Option_BackBtn_7), value);
	}

	inline static int32_t get_offset_of_LanguageRight_8() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___LanguageRight_8)); }
	inline GameObject_t2717650277 * get_LanguageRight_8() const { return ___LanguageRight_8; }
	inline GameObject_t2717650277 ** get_address_of_LanguageRight_8() { return &___LanguageRight_8; }
	inline void set_LanguageRight_8(GameObject_t2717650277 * value)
	{
		___LanguageRight_8 = value;
		Il2CppCodeGenWriteBarrier((&___LanguageRight_8), value);
	}

	inline static int32_t get_offset_of_LanguageLeft_9() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___LanguageLeft_9)); }
	inline GameObject_t2717650277 * get_LanguageLeft_9() const { return ___LanguageLeft_9; }
	inline GameObject_t2717650277 ** get_address_of_LanguageLeft_9() { return &___LanguageLeft_9; }
	inline void set_LanguageLeft_9(GameObject_t2717650277 * value)
	{
		___LanguageLeft_9 = value;
		Il2CppCodeGenWriteBarrier((&___LanguageLeft_9), value);
	}

	inline static int32_t get_offset_of_musicBarSlider_10() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___musicBarSlider_10)); }
	inline UISlider_t1108210950 * get_musicBarSlider_10() const { return ___musicBarSlider_10; }
	inline UISlider_t1108210950 ** get_address_of_musicBarSlider_10() { return &___musicBarSlider_10; }
	inline void set_musicBarSlider_10(UISlider_t1108210950 * value)
	{
		___musicBarSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___musicBarSlider_10), value);
	}

	inline static int32_t get_offset_of_soundToggle_11() { return static_cast<int32_t>(offsetof(Option_C_t2658585434, ___soundToggle_11)); }
	inline UIToggle_t917154769 * get_soundToggle_11() const { return ___soundToggle_11; }
	inline UIToggle_t917154769 ** get_address_of_soundToggle_11() { return &___soundToggle_11; }
	inline void set_soundToggle_11(UIToggle_t917154769 * value)
	{
		___soundToggle_11 = value;
		Il2CppCodeGenWriteBarrier((&___soundToggle_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTION_C_T2658585434_H
#ifndef MAIN_C_T95128986_H
#define MAIN_C_T95128986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main_C
struct  Main_C_t95128986  : public MonoBehaviour_t114833016
{
public:
	// UILabel Main_C::LabelGold
	UILabel_t659981927 * ___LabelGold_2;
	// UILabel Main_C::LabelGem
	UILabel_t659981927 * ___LabelGem_3;
	// UnityEngine.GameObject Main_C::Main_StartBtn
	GameObject_t2717650277 * ___Main_StartBtn_4;
	// UnityEngine.GameObject Main_C::Main_DNABtn
	GameObject_t2717650277 * ___Main_DNABtn_5;
	// UnityEngine.GameObject Main_C::Main_OptionBtn
	GameObject_t2717650277 * ___Main_OptionBtn_6;
	// UnityEngine.GameObject Main_C::Main_ShopBtn
	GameObject_t2717650277 * ___Main_ShopBtn_7;

public:
	inline static int32_t get_offset_of_LabelGold_2() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___LabelGold_2)); }
	inline UILabel_t659981927 * get_LabelGold_2() const { return ___LabelGold_2; }
	inline UILabel_t659981927 ** get_address_of_LabelGold_2() { return &___LabelGold_2; }
	inline void set_LabelGold_2(UILabel_t659981927 * value)
	{
		___LabelGold_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGold_2), value);
	}

	inline static int32_t get_offset_of_LabelGem_3() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___LabelGem_3)); }
	inline UILabel_t659981927 * get_LabelGem_3() const { return ___LabelGem_3; }
	inline UILabel_t659981927 ** get_address_of_LabelGem_3() { return &___LabelGem_3; }
	inline void set_LabelGem_3(UILabel_t659981927 * value)
	{
		___LabelGem_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGem_3), value);
	}

	inline static int32_t get_offset_of_Main_StartBtn_4() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___Main_StartBtn_4)); }
	inline GameObject_t2717650277 * get_Main_StartBtn_4() const { return ___Main_StartBtn_4; }
	inline GameObject_t2717650277 ** get_address_of_Main_StartBtn_4() { return &___Main_StartBtn_4; }
	inline void set_Main_StartBtn_4(GameObject_t2717650277 * value)
	{
		___Main_StartBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___Main_StartBtn_4), value);
	}

	inline static int32_t get_offset_of_Main_DNABtn_5() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___Main_DNABtn_5)); }
	inline GameObject_t2717650277 * get_Main_DNABtn_5() const { return ___Main_DNABtn_5; }
	inline GameObject_t2717650277 ** get_address_of_Main_DNABtn_5() { return &___Main_DNABtn_5; }
	inline void set_Main_DNABtn_5(GameObject_t2717650277 * value)
	{
		___Main_DNABtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___Main_DNABtn_5), value);
	}

	inline static int32_t get_offset_of_Main_OptionBtn_6() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___Main_OptionBtn_6)); }
	inline GameObject_t2717650277 * get_Main_OptionBtn_6() const { return ___Main_OptionBtn_6; }
	inline GameObject_t2717650277 ** get_address_of_Main_OptionBtn_6() { return &___Main_OptionBtn_6; }
	inline void set_Main_OptionBtn_6(GameObject_t2717650277 * value)
	{
		___Main_OptionBtn_6 = value;
		Il2CppCodeGenWriteBarrier((&___Main_OptionBtn_6), value);
	}

	inline static int32_t get_offset_of_Main_ShopBtn_7() { return static_cast<int32_t>(offsetof(Main_C_t95128986, ___Main_ShopBtn_7)); }
	inline GameObject_t2717650277 * get_Main_ShopBtn_7() const { return ___Main_ShopBtn_7; }
	inline GameObject_t2717650277 ** get_address_of_Main_ShopBtn_7() { return &___Main_ShopBtn_7; }
	inline void set_Main_ShopBtn_7(GameObject_t2717650277 * value)
	{
		___Main_ShopBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___Main_ShopBtn_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAIN_C_T95128986_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4400 = { sizeof (Main_C_t95128986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4400[6] = 
{
	Main_C_t95128986::get_offset_of_LabelGold_2(),
	Main_C_t95128986::get_offset_of_LabelGem_3(),
	Main_C_t95128986::get_offset_of_Main_StartBtn_4(),
	Main_C_t95128986::get_offset_of_Main_DNABtn_5(),
	Main_C_t95128986::get_offset_of_Main_OptionBtn_6(),
	Main_C_t95128986::get_offset_of_Main_ShopBtn_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4401 = { sizeof (Mission_t2298149371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4401[1] = 
{
	Mission_t2298149371::get_offset_of_Parameter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4402 = { sizeof (Mission_Sheet_t3359238669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4402[31] = 
{
	Mission_Sheet_t3359238669::get_offset_of_MissionID_0(),
	Mission_Sheet_t3359238669::get_offset_of_MaxHPBoost_1(),
	Mission_Sheet_t3359238669::get_offset_of_InfectionBoost_2(),
	Mission_Sheet_t3359238669::get_offset_of_Atk_Boost_3(),
	Mission_Sheet_t3359238669::get_offset_of_Heal_Boost_4(),
	Mission_Sheet_t3359238669::get_offset_of_Def_Boost_5(),
	Mission_Sheet_t3359238669::get_offset_of_Cure_Boost_6(),
	Mission_Sheet_t3359238669::get_offset_of_Speed_Boost_7(),
	Mission_Sheet_t3359238669::get_offset_of_InfectionAntiBoost_8(),
	Mission_Sheet_t3359238669::get_offset_of_CommunicationAntiBoost_9(),
	Mission_Sheet_t3359238669::get_offset_of_HPHealingBoost_10(),
	Mission_Sheet_t3359238669::get_offset_of_ClimateBoost_11(),
	Mission_Sheet_t3359238669::get_offset_of_EnviBoost_12(),
	Mission_Sheet_t3359238669::get_offset_of_DistributionParam1_13(),
	Mission_Sheet_t3359238669::get_offset_of_DistributionParam2_14(),
	Mission_Sheet_t3359238669::get_offset_of_DistributionParam3_15(),
	Mission_Sheet_t3359238669::get_offset_of_DistributionParam4_16(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityID_1_17(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityLv_1_18(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityID_2_19(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityLv_2_20(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityID_3_21(),
	Mission_Sheet_t3359238669::get_offset_of_AbilityLv_3_22(),
	Mission_Sheet_t3359238669::get_offset_of_ModeType_23(),
	Mission_Sheet_t3359238669::get_offset_of_ModeParam1_24(),
	Mission_Sheet_t3359238669::get_offset_of_ModeParam2_25(),
	Mission_Sheet_t3359238669::get_offset_of_ModeParam3_26(),
	Mission_Sheet_t3359238669::get_offset_of_EventMin_27(),
	Mission_Sheet_t3359238669::get_offset_of_EventMax_28(),
	Mission_Sheet_t3359238669::get_offset_of_EventPackageID_29(),
	Mission_Sheet_t3359238669::get_offset_of_LootPackageID_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4403 = { sizeof (Model_t1061252852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4403[3] = 
{
	Model_t1061252852::get_offset_of_Virus_Sheet_2(),
	Model_t1061252852::get_offset_of_Human_Sheet_3(),
	Model_t1061252852::get_offset_of_Zombie_Sheet_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4404 = { sizeof (Modes_C_t3877619868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4404[5] = 
{
	Modes_C_t3877619868::get_offset_of_Modes_BackBtn_2(),
	Modes_C_t3877619868::get_offset_of_Modes_CampaignBtn_3(),
	Modes_C_t3877619868::get_offset_of_Modes_ContinueBtn_4(),
	Modes_C_t3877619868::get_offset_of_Modes_TrialBtn_5(),
	Modes_C_t3877619868::get_offset_of_Modes_RandomBtn_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4405 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4405[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4406 = { sizeof (Option_C_t2658585434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4406[10] = 
{
	Option_C_t2658585434::get_offset_of_LabelOption_2(),
	Option_C_t2658585434::get_offset_of_LabelLanguageName_3(),
	Option_C_t2658585434::get_offset_of_LabelLanguage_4(),
	Option_C_t2658585434::get_offset_of_MusicBar_5(),
	Option_C_t2658585434::get_offset_of_SoundSwitch_6(),
	Option_C_t2658585434::get_offset_of_Option_BackBtn_7(),
	Option_C_t2658585434::get_offset_of_LanguageRight_8(),
	Option_C_t2658585434::get_offset_of_LanguageLeft_9(),
	Option_C_t2658585434::get_offset_of_musicBarSlider_10(),
	Option_C_t2658585434::get_offset_of_soundToggle_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4407 = { sizeof (Performance_t1482225160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4408 = { sizeof (Shop_C_t1280865277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4408[4] = 
{
	Shop_C_t1280865277::get_offset_of_ShopGrid_2(),
	Shop_C_t1280865277::get_offset_of_prefabs_Cell_3(),
	Shop_C_t1280865277::get_offset_of_Shop_BackBtn_4(),
	Shop_C_t1280865277::get_offset_of_OP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4409 = { sizeof (ShopCell_t4092949794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4409[4] = 
{
	ShopCell_t4092949794::get_offset_of_LabelIAPName_2(),
	ShopCell_t4092949794::get_offset_of_LabelIAPPrice_3(),
	ShopCell_t4092949794::get_offset_of_cell_4(),
	ShopCell_t4092949794::get_offset_of_CellID_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4410 = { sizeof (Singleton_t1545675408), -1, sizeof(Singleton_t1545675408_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4410[4] = 
{
	Singleton_t1545675408_StaticFields::get_offset_of_m_Container_2(),
	Singleton_t1545675408_StaticFields::get_offset_of_m_Name_3(),
	Singleton_t1545675408_StaticFields::get_offset_of_m_SingletonMap_4(),
	Singleton_t1545675408_StaticFields::get_offset_of_m_IsDestroying_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4411 = { sizeof (SpecialAbility_t4169042086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4411[1] = 
{
	SpecialAbility_t4169042086::get_offset_of_Ability_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4412 = { sizeof (SpecialAbility_Sheet_t1236784497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4412[10] = 
{
	SpecialAbility_Sheet_t1236784497::get_offset_of_ID_0(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_ResIcon_1(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Name_2(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value1_3(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value1_Add_4(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value2_5(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value2_Add_6(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value3_7(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_Value3_Add_8(),
	SpecialAbility_Sheet_t1236784497::get_offset_of_DesTextID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4413 = { sizeof (SPList_t1665843870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4413[2] = 
{
	SPList_t1665843870::get_offset_of_InfectionSheet_2(),
	SPList_t1665843870::get_offset_of_DamageSheet_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4414 = { sizeof (Infection_Sheet_t1733863174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4414[2] = 
{
	Infection_Sheet_t1733863174::get_offset_of_TotalInfection_0(),
	Infection_Sheet_t1733863174::get_offset_of_GainSP_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4415 = { sizeof (Damage_Sheet_t531811524), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4415[2] = 
{
	Damage_Sheet_t531811524::get_offset_of_TotalDamage_0(),
	Damage_Sheet_t531811524::get_offset_of_GainSP_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4416 = { sizeof (Unlock_t2491154220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4416[1] = 
{
	Unlock_t2491154220::get_offset_of_UnlockMission_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4417 = { sizeof (UnlockMission_Sheet_t1610245607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4417[9] = 
{
	UnlockMission_Sheet_t1610245607::get_offset_of_MissionID_0(),
	UnlockMission_Sheet_t1610245607::get_offset_of_UnlockType_1(),
	UnlockMission_Sheet_t1610245607::get_offset_of_Param1_2(),
	UnlockMission_Sheet_t1610245607::get_offset_of_Param2_3(),
	UnlockMission_Sheet_t1610245607::get_offset_of_Param3_4(),
	UnlockMission_Sheet_t1610245607::get_offset_of_Param4_5(),
	UnlockMission_Sheet_t1610245607::get_offset_of_Param5_6(),
	UnlockMission_Sheet_t1610245607::get_offset_of_UnlockItemID_7(),
	UnlockMission_Sheet_t1610245607::get_offset_of_UnlockCost_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4418 = { sizeof (User_t151655210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4418[14] = 
{
	0,
	0,
	User_t151655210::get_offset_of_DB_u_dna_2(),
	User_t151655210::get_offset_of_Gold_3(),
	User_t151655210::get_offset_of_Gem_4(),
	User_t151655210::get_offset_of_DB_u_mf_5(),
	User_t151655210::get_offset_of_DB_u_UnlockedViruses_6(),
	0,
	0,
	0,
	User_t151655210::get_offset_of_DB_u_UnlockedZombies_10(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4419 = { sizeof (U_DNA_t3944083011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4419[2] = 
{
	U_DNA_t3944083011::get_offset_of_ID_0(),
	U_DNA_t3944083011::get_offset_of_Lv_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4420 = { sizeof (U_MissionFlag_t1979476805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4420[3] = 
{
	U_MissionFlag_t1979476805::get_offset_of_VirusID_0(),
	U_MissionFlag_t1979476805::get_offset_of_MissionID_1(),
	U_MissionFlag_t1979476805::get_offset_of_Flag_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4421 = { sizeof (F_User_t1504359451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4421[6] = 
{
	F_User_t1504359451::get_offset_of_DB_u_dna_0(),
	F_User_t1504359451::get_offset_of_Gold_1(),
	F_User_t1504359451::get_offset_of_Gem_2(),
	F_User_t1504359451::get_offset_of_DB_u_mf_3(),
	F_User_t1504359451::get_offset_of_DB_u_UnlockedViruses_4(),
	F_User_t1504359451::get_offset_of_DB_u_UnlockedZombies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4422 = { sizeof (F_U_DNA_t3019123127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4422[2] = 
{
	F_U_DNA_t3019123127::get_offset_of_ID_0(),
	F_U_DNA_t3019123127::get_offset_of_Lv_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4423 = { sizeof (F_U_MissionFlag_t3214412120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4423[3] = 
{
	F_U_MissionFlag_t3214412120::get_offset_of_VirusID_0(),
	F_U_MissionFlag_t3214412120::get_offset_of_MissionID_1(),
	F_U_MissionFlag_t3214412120::get_offset_of_Flag_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4424 = { sizeof (Virus_t141792805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4424[41] = 
{
	Virus_t141792805::get_offset_of_VirusID_0(),
	Virus_t141792805::get_offset_of_InfectSpeed_1(),
	Virus_t141792805::get_offset_of_InfectHuman_1_2(),
	Virus_t141792805::get_offset_of_InfectHuman_2_3(),
	Virus_t141792805::get_offset_of_InfectHuman_3_4(),
	Virus_t141792805::get_offset_of_InfectHuman_4_5(),
	Virus_t141792805::get_offset_of_InfectHuman_5_6(),
	Virus_t141792805::get_offset_of_InfectBlock_Climate_1_7(),
	Virus_t141792805::get_offset_of_InfectBlock_Climate_2_8(),
	Virus_t141792805::get_offset_of_InfectBlock_Climate_3_9(),
	Virus_t141792805::get_offset_of_InfectBlock_Envi_1_10(),
	Virus_t141792805::get_offset_of_InfectBlock_Envi_2_11(),
	Virus_t141792805::get_offset_of_InfectBlock_Envi_3_12(),
	Virus_t141792805::get_offset_of_CommunicateRate_13(),
	Virus_t141792805::get_offset_of_CommunicateHuman_1_14(),
	Virus_t141792805::get_offset_of_CommunicateHuman_2_15(),
	Virus_t141792805::get_offset_of_CommunicateHuman_3_16(),
	Virus_t141792805::get_offset_of_CommunicateHuman_4_17(),
	Virus_t141792805::get_offset_of_CommunicateHuman_5_18(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Climate_1_19(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Climate_2_20(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Climate_3_21(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Envi_1_22(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Envi_2_23(),
	Virus_t141792805::get_offset_of_CommunicateBlock_Envi_3_24(),
	Virus_t141792805::get_offset_of_InitialSP_25(),
	Virus_t141792805::get_offset_of_Name_26(),
	Virus_t141792805::get_offset_of_Res_27(),
	Virus_t141792805::get_offset_of_StrategyID_28(),
	Virus_t141792805::get_offset_of_Medi_Start_29(),
	Virus_t141792805::get_offset_of_Medi_Work_30(),
	Virus_t141792805::get_offset_of_Medi_Spd_31(),
	Virus_t141792805::get_offset_of_CommunicationThreshold_32(),
	Virus_t141792805::get_offset_of_InfectHumans_33(),
	Virus_t141792805::get_offset_of_InfectClims_34(),
	Virus_t141792805::get_offset_of_InfectEnvis_35(),
	Virus_t141792805::get_offset_of_CommunicateHumans_36(),
	Virus_t141792805::get_offset_of_CommunicateClimates_37(),
	Virus_t141792805::get_offset_of_CommunicateEnvis_38(),
	Virus_t141792805::get_offset_of_Envi_39(),
	Virus_t141792805::get_offset_of_Clim_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4425 = { sizeof (Virus_Sheet_t625156665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4425[35] = 
{
	Virus_Sheet_t625156665::get_offset_of_VirusID_0(),
	Virus_Sheet_t625156665::get_offset_of_InfectSpeed_1(),
	Virus_Sheet_t625156665::get_offset_of_InfectHuman_1_2(),
	Virus_Sheet_t625156665::get_offset_of_InfectHuman_2_3(),
	Virus_Sheet_t625156665::get_offset_of_InfectHuman_3_4(),
	Virus_Sheet_t625156665::get_offset_of_InfectHuman_4_5(),
	Virus_Sheet_t625156665::get_offset_of_InfectHuman_5_6(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Climate_1_7(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Climate_2_8(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Climate_3_9(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Envi_1_10(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Envi_2_11(),
	Virus_Sheet_t625156665::get_offset_of_InfectBlock_Envi_3_12(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateRate_13(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateHuman_1_14(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateHuman_2_15(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateHuman_3_16(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateHuman_4_17(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateHuman_5_18(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Climate_1_19(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Climate_2_20(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Climate_3_21(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Envi_1_22(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Envi_2_23(),
	Virus_Sheet_t625156665::get_offset_of_CommunicateBlock_Envi_3_24(),
	Virus_Sheet_t625156665::get_offset_of_InitialSP_25(),
	Virus_Sheet_t625156665::get_offset_of_UnlockNum_26(),
	Virus_Sheet_t625156665::get_offset_of_Name_27(),
	Virus_Sheet_t625156665::get_offset_of_Des_28(),
	Virus_Sheet_t625156665::get_offset_of_Res_29(),
	Virus_Sheet_t625156665::get_offset_of_StrategyID_30(),
	Virus_Sheet_t625156665::get_offset_of_Medi_Start_31(),
	Virus_Sheet_t625156665::get_offset_of_Medi_Work_32(),
	Virus_Sheet_t625156665::get_offset_of_Medi_Spd_33(),
	Virus_Sheet_t625156665::get_offset_of_CommunicationThreshold_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4426 = { sizeof (VirusSelect_t967594650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4426[6] = 
{
	VirusSelect_t967594650::get_offset_of_prefabs_Cell_2(),
	VirusSelect_t967594650::get_offset_of_VirusSelectGrid_3(),
	VirusSelect_t967594650::get_offset_of_VirusSelectBackBtn_4(),
	VirusSelect_t967594650::get_offset_of_UnlockedMissionNum_5(),
	VirusSelect_t967594650::get_offset_of_OP_6(),
	VirusSelect_t967594650::get_offset_of_LabelUnlockedMissionNum_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4427 = { sizeof (VirusSelectCell_t3638526584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4427[5] = 
{
	VirusSelectCell_t3638526584::get_offset_of_LabelVirusName_2(),
	VirusSelectCell_t3638526584::get_offset_of_LabelVirusDes_3(),
	VirusSelectCell_t3638526584::get_offset_of_LabelMissionIndex_4(),
	VirusSelectCell_t3638526584::get_offset_of_cell_5(),
	VirusSelectCell_t3638526584::get_offset_of_CellID_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4428 = { sizeof (XMLIOHelper_t3028925360), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4429 = { sizeof (Zombie_t3460476251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4429[32] = 
{
	Zombie_t3460476251::get_offset_of_ATTACK_INTERVAL_2(),
	Zombie_t3460476251::get_offset_of_HEALTH_INTERVAL_3(),
	Zombie_t3460476251::get_offset_of_ZombieID_4(),
	Zombie_t3460476251::get_offset_of_MaxHP_5(),
	Zombie_t3460476251::get_offset_of_Atk_6(),
	Zombie_t3460476251::get_offset_of_Heal_7(),
	Zombie_t3460476251::get_offset_of_Def_8(),
	Zombie_t3460476251::get_offset_of_Infect_9(),
	Zombie_t3460476251::get_offset_of_Speed_10(),
	Zombie_t3460476251::get_offset_of_HPDecay_11(),
	Zombie_t3460476251::get_offset_of_DrainLife_12(),
	Zombie_t3460476251::get_offset_of_AbilityID_13(),
	Zombie_t3460476251::get_offset_of_Name_14(),
	Zombie_t3460476251::get_offset_of_Res_15(),
	Zombie_t3460476251::get_offset_of_SkillID_16(),
	Zombie_t3460476251::get_offset_of_param_17(),
	Zombie_t3460476251::get_offset_of_HP_18(),
	Zombie_t3460476251::get_offset_of_ClimateBoost_19(),
	Zombie_t3460476251::get_offset_of_EnviBoost_20(),
	Zombie_t3460476251::get_offset_of_Envi_21(),
	Zombie_t3460476251::get_offset_of_Clim_22(),
	Zombie_t3460476251::get_offset_of_HumanModel_23(),
	Zombie_t3460476251::get_offset_of_self_24(),
	Zombie_t3460476251::get_offset_of_Image_25(),
	Zombie_t3460476251::get_offset_of_LabelName_26(),
	Zombie_t3460476251::get_offset_of_HPBar_27(),
	Zombie_t3460476251::get_offset_of_ClimIcon_28(),
	Zombie_t3460476251::get_offset_of_EnviIcon_29(),
	Zombie_t3460476251::get_offset_of_SkillIcon_30(),
	Zombie_t3460476251::get_offset_of_Battle_31(),
	Zombie_t3460476251::get_offset_of_healDeltaTime_32(),
	Zombie_t3460476251::get_offset_of_skillDeltaTime_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4430 = { sizeof (Zombie_Sheet_t2976584585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4430[20] = 
{
	Zombie_Sheet_t2976584585::get_offset_of_ZombieID_0(),
	Zombie_Sheet_t2976584585::get_offset_of_MaxHP_1(),
	Zombie_Sheet_t2976584585::get_offset_of_Atk_2(),
	Zombie_Sheet_t2976584585::get_offset_of_Heal_3(),
	Zombie_Sheet_t2976584585::get_offset_of_Def_4(),
	Zombie_Sheet_t2976584585::get_offset_of_Infect_5(),
	Zombie_Sheet_t2976584585::get_offset_of_Speed_6(),
	Zombie_Sheet_t2976584585::get_offset_of_HPDecay_7(),
	Zombie_Sheet_t2976584585::get_offset_of_DrainLife_8(),
	Zombie_Sheet_t2976584585::get_offset_of_AbilityID_9(),
	Zombie_Sheet_t2976584585::get_offset_of_ClimateBoost_1_10(),
	Zombie_Sheet_t2976584585::get_offset_of_ClimateBoost_2_11(),
	Zombie_Sheet_t2976584585::get_offset_of_ClimateBoost_3_12(),
	Zombie_Sheet_t2976584585::get_offset_of_EnviBoost_1_13(),
	Zombie_Sheet_t2976584585::get_offset_of_EnviBoost_2_14(),
	Zombie_Sheet_t2976584585::get_offset_of_EnviBoost_3_15(),
	Zombie_Sheet_t2976584585::get_offset_of_Weight_16(),
	Zombie_Sheet_t2976584585::get_offset_of_Name_17(),
	Zombie_Sheet_t2976584585::get_offset_of_Res_18(),
	Zombie_Sheet_t2976584585::get_offset_of_SkillID_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4431 = { sizeof (U3CPrivateImplementationDetailsU3E_t1635577407), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4431[2] = 
{
	U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields::get_offset_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0(),
	U3CPrivateImplementationDetailsU3E_t1635577407_StaticFields::get_offset_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4432 = { sizeof (U24ArrayTypeU3D32_t1833622975)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t1833622975 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4433 = { sizeof (U24ArrayTypeU3D8_t4278676378)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D8_t4278676378 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
