#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// CS_Player
struct CS_Player_t2885557680;
// CS_LoadStage
struct CS_LoadStage_t3129050249;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_PlayerControl
struct  CS_PlayerControl_t51779981  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera CS_PlayerControl::UICamera
	Camera_t2727095145 * ___UICamera_2;
	// CS_Player CS_PlayerControl::myPlayer
	CS_Player_t2885557680 * ___myPlayer_3;
	// CS_LoadStage CS_PlayerControl::myLoadStage
	CS_LoadStage_t3129050249 * ___myLoadStage_4;
	// System.Single CS_PlayerControl::doubleClickScale
	float ___doubleClickScale_5;
	// System.Single CS_PlayerControl::doubleClickTimer
	float ___doubleClickTimer_6;

public:
	inline static int32_t get_offset_of_UICamera_2() { return static_cast<int32_t>(offsetof(CS_PlayerControl_t51779981, ___UICamera_2)); }
	inline Camera_t2727095145 * get_UICamera_2() const { return ___UICamera_2; }
	inline Camera_t2727095145 ** get_address_of_UICamera_2() { return &___UICamera_2; }
	inline void set_UICamera_2(Camera_t2727095145 * value)
	{
		___UICamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___UICamera_2, value);
	}

	inline static int32_t get_offset_of_myPlayer_3() { return static_cast<int32_t>(offsetof(CS_PlayerControl_t51779981, ___myPlayer_3)); }
	inline CS_Player_t2885557680 * get_myPlayer_3() const { return ___myPlayer_3; }
	inline CS_Player_t2885557680 ** get_address_of_myPlayer_3() { return &___myPlayer_3; }
	inline void set_myPlayer_3(CS_Player_t2885557680 * value)
	{
		___myPlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___myPlayer_3, value);
	}

	inline static int32_t get_offset_of_myLoadStage_4() { return static_cast<int32_t>(offsetof(CS_PlayerControl_t51779981, ___myLoadStage_4)); }
	inline CS_LoadStage_t3129050249 * get_myLoadStage_4() const { return ___myLoadStage_4; }
	inline CS_LoadStage_t3129050249 ** get_address_of_myLoadStage_4() { return &___myLoadStage_4; }
	inline void set_myLoadStage_4(CS_LoadStage_t3129050249 * value)
	{
		___myLoadStage_4 = value;
		Il2CppCodeGenWriteBarrier(&___myLoadStage_4, value);
	}

	inline static int32_t get_offset_of_doubleClickScale_5() { return static_cast<int32_t>(offsetof(CS_PlayerControl_t51779981, ___doubleClickScale_5)); }
	inline float get_doubleClickScale_5() const { return ___doubleClickScale_5; }
	inline float* get_address_of_doubleClickScale_5() { return &___doubleClickScale_5; }
	inline void set_doubleClickScale_5(float value)
	{
		___doubleClickScale_5 = value;
	}

	inline static int32_t get_offset_of_doubleClickTimer_6() { return static_cast<int32_t>(offsetof(CS_PlayerControl_t51779981, ___doubleClickTimer_6)); }
	inline float get_doubleClickTimer_6() const { return ___doubleClickTimer_6; }
	inline float* get_address_of_doubleClickTimer_6() { return &___doubleClickTimer_6; }
	inline void set_doubleClickTimer_6(float value)
	{
		___doubleClickTimer_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
