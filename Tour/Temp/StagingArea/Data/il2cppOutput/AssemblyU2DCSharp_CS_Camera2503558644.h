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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Camera
struct  CS_Camera_t2503558644  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CS_Camera::myPlayer
	GameObject_t3674682005 * ___myPlayer_2;
	// System.Boolean CS_Camera::isClear
	bool ___isClear_3;
	// UnityEngine.Vector3 CS_Camera::myDeltaPostion
	Vector3_t4282066566  ___myDeltaPostion_4;
	// System.Single CS_Camera::myMoveSpeed
	float ___myMoveSpeed_5;
	// System.Single CS_Camera::myPreMoveDistance
	float ___myPreMoveDistance_6;
	// UnityEngine.Vector3 CS_Camera::myPreMovePosition
	Vector3_t4282066566  ___myPreMovePosition_7;
	// System.Single CS_Camera::mySize
	float ___mySize_8;
	// System.Single CS_Camera::mySizeRatio
	float ___mySizeRatio_9;

public:
	inline static int32_t get_offset_of_myPlayer_2() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___myPlayer_2)); }
	inline GameObject_t3674682005 * get_myPlayer_2() const { return ___myPlayer_2; }
	inline GameObject_t3674682005 ** get_address_of_myPlayer_2() { return &___myPlayer_2; }
	inline void set_myPlayer_2(GameObject_t3674682005 * value)
	{
		___myPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___myPlayer_2, value);
	}

	inline static int32_t get_offset_of_isClear_3() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___isClear_3)); }
	inline bool get_isClear_3() const { return ___isClear_3; }
	inline bool* get_address_of_isClear_3() { return &___isClear_3; }
	inline void set_isClear_3(bool value)
	{
		___isClear_3 = value;
	}

	inline static int32_t get_offset_of_myDeltaPostion_4() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___myDeltaPostion_4)); }
	inline Vector3_t4282066566  get_myDeltaPostion_4() const { return ___myDeltaPostion_4; }
	inline Vector3_t4282066566 * get_address_of_myDeltaPostion_4() { return &___myDeltaPostion_4; }
	inline void set_myDeltaPostion_4(Vector3_t4282066566  value)
	{
		___myDeltaPostion_4 = value;
	}

	inline static int32_t get_offset_of_myMoveSpeed_5() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___myMoveSpeed_5)); }
	inline float get_myMoveSpeed_5() const { return ___myMoveSpeed_5; }
	inline float* get_address_of_myMoveSpeed_5() { return &___myMoveSpeed_5; }
	inline void set_myMoveSpeed_5(float value)
	{
		___myMoveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_myPreMoveDistance_6() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___myPreMoveDistance_6)); }
	inline float get_myPreMoveDistance_6() const { return ___myPreMoveDistance_6; }
	inline float* get_address_of_myPreMoveDistance_6() { return &___myPreMoveDistance_6; }
	inline void set_myPreMoveDistance_6(float value)
	{
		___myPreMoveDistance_6 = value;
	}

	inline static int32_t get_offset_of_myPreMovePosition_7() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___myPreMovePosition_7)); }
	inline Vector3_t4282066566  get_myPreMovePosition_7() const { return ___myPreMovePosition_7; }
	inline Vector3_t4282066566 * get_address_of_myPreMovePosition_7() { return &___myPreMovePosition_7; }
	inline void set_myPreMovePosition_7(Vector3_t4282066566  value)
	{
		___myPreMovePosition_7 = value;
	}

	inline static int32_t get_offset_of_mySize_8() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___mySize_8)); }
	inline float get_mySize_8() const { return ___mySize_8; }
	inline float* get_address_of_mySize_8() { return &___mySize_8; }
	inline void set_mySize_8(float value)
	{
		___mySize_8 = value;
	}

	inline static int32_t get_offset_of_mySizeRatio_9() { return static_cast<int32_t>(offsetof(CS_Camera_t2503558644, ___mySizeRatio_9)); }
	inline float get_mySizeRatio_9() const { return ___mySizeRatio_9; }
	inline float* get_address_of_mySizeRatio_9() { return &___mySizeRatio_9; }
	inline void set_mySizeRatio_9(float value)
	{
		___mySizeRatio_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
