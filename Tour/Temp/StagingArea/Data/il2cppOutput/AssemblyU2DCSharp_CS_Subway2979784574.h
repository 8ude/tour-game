#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Subway
struct  CS_Subway_t2979784574  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CS_Subway::myNextStationNum
	int32_t ___myNextStationNum_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> CS_Subway::myStationPositionList
	List_1_t1355284821 * ___myStationPositionList_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CS_Subway::myPassengerList
	List_1_t747900261 * ___myPassengerList_4;
	// System.Boolean CS_Subway::isOn
	bool ___isOn_5;
	// System.Single CS_Subway::myVelocity
	float ___myVelocity_6;
	// System.Single CS_Subway::myStopTime
	float ___myStopTime_7;
	// System.Single CS_Subway::myTimer
	float ___myTimer_8;

public:
	inline static int32_t get_offset_of_myNextStationNum_2() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myNextStationNum_2)); }
	inline int32_t get_myNextStationNum_2() const { return ___myNextStationNum_2; }
	inline int32_t* get_address_of_myNextStationNum_2() { return &___myNextStationNum_2; }
	inline void set_myNextStationNum_2(int32_t value)
	{
		___myNextStationNum_2 = value;
	}

	inline static int32_t get_offset_of_myStationPositionList_3() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myStationPositionList_3)); }
	inline List_1_t1355284821 * get_myStationPositionList_3() const { return ___myStationPositionList_3; }
	inline List_1_t1355284821 ** get_address_of_myStationPositionList_3() { return &___myStationPositionList_3; }
	inline void set_myStationPositionList_3(List_1_t1355284821 * value)
	{
		___myStationPositionList_3 = value;
		Il2CppCodeGenWriteBarrier(&___myStationPositionList_3, value);
	}

	inline static int32_t get_offset_of_myPassengerList_4() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myPassengerList_4)); }
	inline List_1_t747900261 * get_myPassengerList_4() const { return ___myPassengerList_4; }
	inline List_1_t747900261 ** get_address_of_myPassengerList_4() { return &___myPassengerList_4; }
	inline void set_myPassengerList_4(List_1_t747900261 * value)
	{
		___myPassengerList_4 = value;
		Il2CppCodeGenWriteBarrier(&___myPassengerList_4, value);
	}

	inline static int32_t get_offset_of_isOn_5() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___isOn_5)); }
	inline bool get_isOn_5() const { return ___isOn_5; }
	inline bool* get_address_of_isOn_5() { return &___isOn_5; }
	inline void set_isOn_5(bool value)
	{
		___isOn_5 = value;
	}

	inline static int32_t get_offset_of_myVelocity_6() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myVelocity_6)); }
	inline float get_myVelocity_6() const { return ___myVelocity_6; }
	inline float* get_address_of_myVelocity_6() { return &___myVelocity_6; }
	inline void set_myVelocity_6(float value)
	{
		___myVelocity_6 = value;
	}

	inline static int32_t get_offset_of_myStopTime_7() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myStopTime_7)); }
	inline float get_myStopTime_7() const { return ___myStopTime_7; }
	inline float* get_address_of_myStopTime_7() { return &___myStopTime_7; }
	inline void set_myStopTime_7(float value)
	{
		___myStopTime_7 = value;
	}

	inline static int32_t get_offset_of_myTimer_8() { return static_cast<int32_t>(offsetof(CS_Subway_t2979784574, ___myTimer_8)); }
	inline float get_myTimer_8() const { return ___myTimer_8; }
	inline float* get_address_of_myTimer_8() { return &___myTimer_8; }
	inline void set_myTimer_8(float value)
	{
		___myTimer_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
