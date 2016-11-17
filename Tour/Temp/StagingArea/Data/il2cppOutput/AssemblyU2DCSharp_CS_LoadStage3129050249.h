#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_LoadStage
struct  CS_LoadStage_t3129050249  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CS_LoadStage::mySite
	GameObject_t3674682005 * ___mySite_2;
	// System.Int32 CS_LoadStage::mySiteAmount
	int32_t ___mySiteAmount_3;
	// System.Int32 CS_LoadStage::mySiteFoundAmount
	int32_t ___mySiteFoundAmount_4;
	// UnityEngine.Vector2 CS_LoadStage::mySitePosition
	Vector2_t4282066565  ___mySitePosition_5;
	// System.Single CS_LoadStage::mySiteDistance
	float ___mySiteDistance_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_LoadStage::mySiteList
	List_1_t747900261 * ___mySiteList_7;
	// UnityEngine.GameObject CS_LoadStage::myStation
	GameObject_t3674682005 * ___myStation_8;
	// System.Int32 CS_LoadStage::myStationAmount
	int32_t ___myStationAmount_9;
	// UnityEngine.Vector2 CS_LoadStage::myStationPosition
	Vector2_t4282066565  ___myStationPosition_10;
	// System.Single CS_LoadStage::myStationDistance
	float ___myStationDistance_11;
	// UnityEngine.GameObject CS_LoadStage::myStationLine
	GameObject_t3674682005 * ___myStationLine_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_LoadStage::myStationList
	List_1_t747900261 * ___myStationList_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> CS_LoadStage::myStationPositionList
	List_1_t1355284821 * ___myStationPositionList_14;
	// UnityEngine.GameObject CS_LoadStage::mySubway
	GameObject_t3674682005 * ___mySubway_15;
	// System.Int32 CS_LoadStage::mySubwayAmount
	int32_t ___mySubwayAmount_16;
	// UnityEngine.GameObject CS_LoadStage::myTree
	GameObject_t3674682005 * ___myTree_17;
	// System.Int32 CS_LoadStage::myTreeCenterAmount
	int32_t ___myTreeCenterAmount_18;
	// System.Int32 CS_LoadStage::myTreeAmount
	int32_t ___myTreeAmount_19;
	// UnityEngine.Vector2 CS_LoadStage::myTreePosition
	Vector2_t4282066565  ___myTreePosition_20;
	// System.Single CS_LoadStage::myTreeDistanceToOthers
	float ___myTreeDistanceToOthers_21;
	// System.Single CS_LoadStage::myTreeDistanceMax
	float ___myTreeDistanceMax_22;
	// System.Single CS_LoadStage::myTreeDistanceMin
	float ___myTreeDistanceMin_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_LoadStage::myTreeList
	List_1_t747900261 * ___myTreeList_24;
	// UnityEngine.GameObject CS_LoadStage::myFriend
	GameObject_t3674682005 * ___myFriend_25;
	// System.Int32 CS_LoadStage::myFriendAmount
	int32_t ___myFriendAmount_26;
	// UnityEngine.Vector2 CS_LoadStage::myFriendPosition
	Vector2_t4282066565  ___myFriendPosition_27;
	// System.Single CS_LoadStage::myFriendDistance
	float ___myFriendDistance_28;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_LoadStage::myFriendList
	List_1_t747900261 * ___myFriendList_29;
	// UnityEngine.GameObject CS_LoadStage::myWorker
	GameObject_t3674682005 * ___myWorker_30;
	// System.Int32 CS_LoadStage::myWorkerAmount
	int32_t ___myWorkerAmount_31;
	// UnityEngine.Vector2 CS_LoadStage::myWorkerPosition
	Vector2_t4282066565  ___myWorkerPosition_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_LoadStage::myWorkerList
	List_1_t747900261 * ___myWorkerList_33;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> CS_LoadStage::myWorkerTargetList
	List_1_t1355284821 * ___myWorkerTargetList_34;
	// UnityEngine.GameObject CS_LoadStage::TX_Timer
	GameObject_t3674682005 * ___TX_Timer_35;
	// UnityEngine.GameObject CS_LoadStage::TX_Score
	GameObject_t3674682005 * ___TX_Score_36;
	// System.Single CS_LoadStage::Timer
	float ___Timer_37;
	// System.Single CS_LoadStage::Score
	float ___Score_38;
	// System.Single CS_LoadStage::ScoreTotal
	float ___ScoreTotal_39;
	// UnityEngine.GameObject CS_LoadStage::UI_Pause
	GameObject_t3674682005 * ___UI_Pause_40;

public:
	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySite_2)); }
	inline GameObject_t3674682005 * get_mySite_2() const { return ___mySite_2; }
	inline GameObject_t3674682005 ** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(GameObject_t3674682005 * value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySite_2, value);
	}

	inline static int32_t get_offset_of_mySiteAmount_3() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySiteAmount_3)); }
	inline int32_t get_mySiteAmount_3() const { return ___mySiteAmount_3; }
	inline int32_t* get_address_of_mySiteAmount_3() { return &___mySiteAmount_3; }
	inline void set_mySiteAmount_3(int32_t value)
	{
		___mySiteAmount_3 = value;
	}

	inline static int32_t get_offset_of_mySiteFoundAmount_4() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySiteFoundAmount_4)); }
	inline int32_t get_mySiteFoundAmount_4() const { return ___mySiteFoundAmount_4; }
	inline int32_t* get_address_of_mySiteFoundAmount_4() { return &___mySiteFoundAmount_4; }
	inline void set_mySiteFoundAmount_4(int32_t value)
	{
		___mySiteFoundAmount_4 = value;
	}

	inline static int32_t get_offset_of_mySitePosition_5() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySitePosition_5)); }
	inline Vector2_t4282066565  get_mySitePosition_5() const { return ___mySitePosition_5; }
	inline Vector2_t4282066565 * get_address_of_mySitePosition_5() { return &___mySitePosition_5; }
	inline void set_mySitePosition_5(Vector2_t4282066565  value)
	{
		___mySitePosition_5 = value;
	}

	inline static int32_t get_offset_of_mySiteDistance_6() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySiteDistance_6)); }
	inline float get_mySiteDistance_6() const { return ___mySiteDistance_6; }
	inline float* get_address_of_mySiteDistance_6() { return &___mySiteDistance_6; }
	inline void set_mySiteDistance_6(float value)
	{
		___mySiteDistance_6 = value;
	}

	inline static int32_t get_offset_of_mySiteList_7() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySiteList_7)); }
	inline List_1_t747900261 * get_mySiteList_7() const { return ___mySiteList_7; }
	inline List_1_t747900261 ** get_address_of_mySiteList_7() { return &___mySiteList_7; }
	inline void set_mySiteList_7(List_1_t747900261 * value)
	{
		___mySiteList_7 = value;
		Il2CppCodeGenWriteBarrier(&___mySiteList_7, value);
	}

	inline static int32_t get_offset_of_myStation_8() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStation_8)); }
	inline GameObject_t3674682005 * get_myStation_8() const { return ___myStation_8; }
	inline GameObject_t3674682005 ** get_address_of_myStation_8() { return &___myStation_8; }
	inline void set_myStation_8(GameObject_t3674682005 * value)
	{
		___myStation_8 = value;
		Il2CppCodeGenWriteBarrier(&___myStation_8, value);
	}

	inline static int32_t get_offset_of_myStationAmount_9() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationAmount_9)); }
	inline int32_t get_myStationAmount_9() const { return ___myStationAmount_9; }
	inline int32_t* get_address_of_myStationAmount_9() { return &___myStationAmount_9; }
	inline void set_myStationAmount_9(int32_t value)
	{
		___myStationAmount_9 = value;
	}

	inline static int32_t get_offset_of_myStationPosition_10() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationPosition_10)); }
	inline Vector2_t4282066565  get_myStationPosition_10() const { return ___myStationPosition_10; }
	inline Vector2_t4282066565 * get_address_of_myStationPosition_10() { return &___myStationPosition_10; }
	inline void set_myStationPosition_10(Vector2_t4282066565  value)
	{
		___myStationPosition_10 = value;
	}

	inline static int32_t get_offset_of_myStationDistance_11() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationDistance_11)); }
	inline float get_myStationDistance_11() const { return ___myStationDistance_11; }
	inline float* get_address_of_myStationDistance_11() { return &___myStationDistance_11; }
	inline void set_myStationDistance_11(float value)
	{
		___myStationDistance_11 = value;
	}

	inline static int32_t get_offset_of_myStationLine_12() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationLine_12)); }
	inline GameObject_t3674682005 * get_myStationLine_12() const { return ___myStationLine_12; }
	inline GameObject_t3674682005 ** get_address_of_myStationLine_12() { return &___myStationLine_12; }
	inline void set_myStationLine_12(GameObject_t3674682005 * value)
	{
		___myStationLine_12 = value;
		Il2CppCodeGenWriteBarrier(&___myStationLine_12, value);
	}

	inline static int32_t get_offset_of_myStationList_13() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationList_13)); }
	inline List_1_t747900261 * get_myStationList_13() const { return ___myStationList_13; }
	inline List_1_t747900261 ** get_address_of_myStationList_13() { return &___myStationList_13; }
	inline void set_myStationList_13(List_1_t747900261 * value)
	{
		___myStationList_13 = value;
		Il2CppCodeGenWriteBarrier(&___myStationList_13, value);
	}

	inline static int32_t get_offset_of_myStationPositionList_14() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myStationPositionList_14)); }
	inline List_1_t1355284821 * get_myStationPositionList_14() const { return ___myStationPositionList_14; }
	inline List_1_t1355284821 ** get_address_of_myStationPositionList_14() { return &___myStationPositionList_14; }
	inline void set_myStationPositionList_14(List_1_t1355284821 * value)
	{
		___myStationPositionList_14 = value;
		Il2CppCodeGenWriteBarrier(&___myStationPositionList_14, value);
	}

	inline static int32_t get_offset_of_mySubway_15() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySubway_15)); }
	inline GameObject_t3674682005 * get_mySubway_15() const { return ___mySubway_15; }
	inline GameObject_t3674682005 ** get_address_of_mySubway_15() { return &___mySubway_15; }
	inline void set_mySubway_15(GameObject_t3674682005 * value)
	{
		___mySubway_15 = value;
		Il2CppCodeGenWriteBarrier(&___mySubway_15, value);
	}

	inline static int32_t get_offset_of_mySubwayAmount_16() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___mySubwayAmount_16)); }
	inline int32_t get_mySubwayAmount_16() const { return ___mySubwayAmount_16; }
	inline int32_t* get_address_of_mySubwayAmount_16() { return &___mySubwayAmount_16; }
	inline void set_mySubwayAmount_16(int32_t value)
	{
		___mySubwayAmount_16 = value;
	}

	inline static int32_t get_offset_of_myTree_17() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTree_17)); }
	inline GameObject_t3674682005 * get_myTree_17() const { return ___myTree_17; }
	inline GameObject_t3674682005 ** get_address_of_myTree_17() { return &___myTree_17; }
	inline void set_myTree_17(GameObject_t3674682005 * value)
	{
		___myTree_17 = value;
		Il2CppCodeGenWriteBarrier(&___myTree_17, value);
	}

	inline static int32_t get_offset_of_myTreeCenterAmount_18() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeCenterAmount_18)); }
	inline int32_t get_myTreeCenterAmount_18() const { return ___myTreeCenterAmount_18; }
	inline int32_t* get_address_of_myTreeCenterAmount_18() { return &___myTreeCenterAmount_18; }
	inline void set_myTreeCenterAmount_18(int32_t value)
	{
		___myTreeCenterAmount_18 = value;
	}

	inline static int32_t get_offset_of_myTreeAmount_19() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeAmount_19)); }
	inline int32_t get_myTreeAmount_19() const { return ___myTreeAmount_19; }
	inline int32_t* get_address_of_myTreeAmount_19() { return &___myTreeAmount_19; }
	inline void set_myTreeAmount_19(int32_t value)
	{
		___myTreeAmount_19 = value;
	}

	inline static int32_t get_offset_of_myTreePosition_20() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreePosition_20)); }
	inline Vector2_t4282066565  get_myTreePosition_20() const { return ___myTreePosition_20; }
	inline Vector2_t4282066565 * get_address_of_myTreePosition_20() { return &___myTreePosition_20; }
	inline void set_myTreePosition_20(Vector2_t4282066565  value)
	{
		___myTreePosition_20 = value;
	}

	inline static int32_t get_offset_of_myTreeDistanceToOthers_21() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeDistanceToOthers_21)); }
	inline float get_myTreeDistanceToOthers_21() const { return ___myTreeDistanceToOthers_21; }
	inline float* get_address_of_myTreeDistanceToOthers_21() { return &___myTreeDistanceToOthers_21; }
	inline void set_myTreeDistanceToOthers_21(float value)
	{
		___myTreeDistanceToOthers_21 = value;
	}

	inline static int32_t get_offset_of_myTreeDistanceMax_22() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeDistanceMax_22)); }
	inline float get_myTreeDistanceMax_22() const { return ___myTreeDistanceMax_22; }
	inline float* get_address_of_myTreeDistanceMax_22() { return &___myTreeDistanceMax_22; }
	inline void set_myTreeDistanceMax_22(float value)
	{
		___myTreeDistanceMax_22 = value;
	}

	inline static int32_t get_offset_of_myTreeDistanceMin_23() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeDistanceMin_23)); }
	inline float get_myTreeDistanceMin_23() const { return ___myTreeDistanceMin_23; }
	inline float* get_address_of_myTreeDistanceMin_23() { return &___myTreeDistanceMin_23; }
	inline void set_myTreeDistanceMin_23(float value)
	{
		___myTreeDistanceMin_23 = value;
	}

	inline static int32_t get_offset_of_myTreeList_24() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myTreeList_24)); }
	inline List_1_t747900261 * get_myTreeList_24() const { return ___myTreeList_24; }
	inline List_1_t747900261 ** get_address_of_myTreeList_24() { return &___myTreeList_24; }
	inline void set_myTreeList_24(List_1_t747900261 * value)
	{
		___myTreeList_24 = value;
		Il2CppCodeGenWriteBarrier(&___myTreeList_24, value);
	}

	inline static int32_t get_offset_of_myFriend_25() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myFriend_25)); }
	inline GameObject_t3674682005 * get_myFriend_25() const { return ___myFriend_25; }
	inline GameObject_t3674682005 ** get_address_of_myFriend_25() { return &___myFriend_25; }
	inline void set_myFriend_25(GameObject_t3674682005 * value)
	{
		___myFriend_25 = value;
		Il2CppCodeGenWriteBarrier(&___myFriend_25, value);
	}

	inline static int32_t get_offset_of_myFriendAmount_26() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myFriendAmount_26)); }
	inline int32_t get_myFriendAmount_26() const { return ___myFriendAmount_26; }
	inline int32_t* get_address_of_myFriendAmount_26() { return &___myFriendAmount_26; }
	inline void set_myFriendAmount_26(int32_t value)
	{
		___myFriendAmount_26 = value;
	}

	inline static int32_t get_offset_of_myFriendPosition_27() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myFriendPosition_27)); }
	inline Vector2_t4282066565  get_myFriendPosition_27() const { return ___myFriendPosition_27; }
	inline Vector2_t4282066565 * get_address_of_myFriendPosition_27() { return &___myFriendPosition_27; }
	inline void set_myFriendPosition_27(Vector2_t4282066565  value)
	{
		___myFriendPosition_27 = value;
	}

	inline static int32_t get_offset_of_myFriendDistance_28() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myFriendDistance_28)); }
	inline float get_myFriendDistance_28() const { return ___myFriendDistance_28; }
	inline float* get_address_of_myFriendDistance_28() { return &___myFriendDistance_28; }
	inline void set_myFriendDistance_28(float value)
	{
		___myFriendDistance_28 = value;
	}

	inline static int32_t get_offset_of_myFriendList_29() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myFriendList_29)); }
	inline List_1_t747900261 * get_myFriendList_29() const { return ___myFriendList_29; }
	inline List_1_t747900261 ** get_address_of_myFriendList_29() { return &___myFriendList_29; }
	inline void set_myFriendList_29(List_1_t747900261 * value)
	{
		___myFriendList_29 = value;
		Il2CppCodeGenWriteBarrier(&___myFriendList_29, value);
	}

	inline static int32_t get_offset_of_myWorker_30() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myWorker_30)); }
	inline GameObject_t3674682005 * get_myWorker_30() const { return ___myWorker_30; }
	inline GameObject_t3674682005 ** get_address_of_myWorker_30() { return &___myWorker_30; }
	inline void set_myWorker_30(GameObject_t3674682005 * value)
	{
		___myWorker_30 = value;
		Il2CppCodeGenWriteBarrier(&___myWorker_30, value);
	}

	inline static int32_t get_offset_of_myWorkerAmount_31() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myWorkerAmount_31)); }
	inline int32_t get_myWorkerAmount_31() const { return ___myWorkerAmount_31; }
	inline int32_t* get_address_of_myWorkerAmount_31() { return &___myWorkerAmount_31; }
	inline void set_myWorkerAmount_31(int32_t value)
	{
		___myWorkerAmount_31 = value;
	}

	inline static int32_t get_offset_of_myWorkerPosition_32() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myWorkerPosition_32)); }
	inline Vector2_t4282066565  get_myWorkerPosition_32() const { return ___myWorkerPosition_32; }
	inline Vector2_t4282066565 * get_address_of_myWorkerPosition_32() { return &___myWorkerPosition_32; }
	inline void set_myWorkerPosition_32(Vector2_t4282066565  value)
	{
		___myWorkerPosition_32 = value;
	}

	inline static int32_t get_offset_of_myWorkerList_33() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myWorkerList_33)); }
	inline List_1_t747900261 * get_myWorkerList_33() const { return ___myWorkerList_33; }
	inline List_1_t747900261 ** get_address_of_myWorkerList_33() { return &___myWorkerList_33; }
	inline void set_myWorkerList_33(List_1_t747900261 * value)
	{
		___myWorkerList_33 = value;
		Il2CppCodeGenWriteBarrier(&___myWorkerList_33, value);
	}

	inline static int32_t get_offset_of_myWorkerTargetList_34() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___myWorkerTargetList_34)); }
	inline List_1_t1355284821 * get_myWorkerTargetList_34() const { return ___myWorkerTargetList_34; }
	inline List_1_t1355284821 ** get_address_of_myWorkerTargetList_34() { return &___myWorkerTargetList_34; }
	inline void set_myWorkerTargetList_34(List_1_t1355284821 * value)
	{
		___myWorkerTargetList_34 = value;
		Il2CppCodeGenWriteBarrier(&___myWorkerTargetList_34, value);
	}

	inline static int32_t get_offset_of_TX_Timer_35() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___TX_Timer_35)); }
	inline GameObject_t3674682005 * get_TX_Timer_35() const { return ___TX_Timer_35; }
	inline GameObject_t3674682005 ** get_address_of_TX_Timer_35() { return &___TX_Timer_35; }
	inline void set_TX_Timer_35(GameObject_t3674682005 * value)
	{
		___TX_Timer_35 = value;
		Il2CppCodeGenWriteBarrier(&___TX_Timer_35, value);
	}

	inline static int32_t get_offset_of_TX_Score_36() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___TX_Score_36)); }
	inline GameObject_t3674682005 * get_TX_Score_36() const { return ___TX_Score_36; }
	inline GameObject_t3674682005 ** get_address_of_TX_Score_36() { return &___TX_Score_36; }
	inline void set_TX_Score_36(GameObject_t3674682005 * value)
	{
		___TX_Score_36 = value;
		Il2CppCodeGenWriteBarrier(&___TX_Score_36, value);
	}

	inline static int32_t get_offset_of_Timer_37() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___Timer_37)); }
	inline float get_Timer_37() const { return ___Timer_37; }
	inline float* get_address_of_Timer_37() { return &___Timer_37; }
	inline void set_Timer_37(float value)
	{
		___Timer_37 = value;
	}

	inline static int32_t get_offset_of_Score_38() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___Score_38)); }
	inline float get_Score_38() const { return ___Score_38; }
	inline float* get_address_of_Score_38() { return &___Score_38; }
	inline void set_Score_38(float value)
	{
		___Score_38 = value;
	}

	inline static int32_t get_offset_of_ScoreTotal_39() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___ScoreTotal_39)); }
	inline float get_ScoreTotal_39() const { return ___ScoreTotal_39; }
	inline float* get_address_of_ScoreTotal_39() { return &___ScoreTotal_39; }
	inline void set_ScoreTotal_39(float value)
	{
		___ScoreTotal_39 = value;
	}

	inline static int32_t get_offset_of_UI_Pause_40() { return static_cast<int32_t>(offsetof(CS_LoadStage_t3129050249, ___UI_Pause_40)); }
	inline GameObject_t3674682005 * get_UI_Pause_40() const { return ___UI_Pause_40; }
	inline GameObject_t3674682005 ** get_address_of_UI_Pause_40() { return &___UI_Pause_40; }
	inline void set_UI_Pause_40(GameObject_t3674682005 * value)
	{
		___UI_Pause_40 = value;
		Il2CppCodeGenWriteBarrier(&___UI_Pause_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
