#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Friend
struct  CS_Friend_t2605026669  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D CS_Friend::myRigidbody2D
	Rigidbody2D_t1743771669 * ___myRigidbody2D_2;
	// System.Single CS_Friend::mySpeed
	float ___mySpeed_3;
	// UnityEngine.Vector2 CS_Friend::myDirection
	Vector2_t4282066565  ___myDirection_4;
	// UnityEngine.GameObject CS_Friend::myTarget
	GameObject_t3674682005 * ___myTarget_5;
	// UnityEngine.Vector2 CS_Friend::myTargetPositionDelta
	Vector2_t4282066565  ___myTargetPositionDelta_6;

public:
	inline static int32_t get_offset_of_myRigidbody2D_2() { return static_cast<int32_t>(offsetof(CS_Friend_t2605026669, ___myRigidbody2D_2)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody2D_2() const { return ___myRigidbody2D_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody2D_2() { return &___myRigidbody2D_2; }
	inline void set_myRigidbody2D_2(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody2D_2, value);
	}

	inline static int32_t get_offset_of_mySpeed_3() { return static_cast<int32_t>(offsetof(CS_Friend_t2605026669, ___mySpeed_3)); }
	inline float get_mySpeed_3() const { return ___mySpeed_3; }
	inline float* get_address_of_mySpeed_3() { return &___mySpeed_3; }
	inline void set_mySpeed_3(float value)
	{
		___mySpeed_3 = value;
	}

	inline static int32_t get_offset_of_myDirection_4() { return static_cast<int32_t>(offsetof(CS_Friend_t2605026669, ___myDirection_4)); }
	inline Vector2_t4282066565  get_myDirection_4() const { return ___myDirection_4; }
	inline Vector2_t4282066565 * get_address_of_myDirection_4() { return &___myDirection_4; }
	inline void set_myDirection_4(Vector2_t4282066565  value)
	{
		___myDirection_4 = value;
	}

	inline static int32_t get_offset_of_myTarget_5() { return static_cast<int32_t>(offsetof(CS_Friend_t2605026669, ___myTarget_5)); }
	inline GameObject_t3674682005 * get_myTarget_5() const { return ___myTarget_5; }
	inline GameObject_t3674682005 ** get_address_of_myTarget_5() { return &___myTarget_5; }
	inline void set_myTarget_5(GameObject_t3674682005 * value)
	{
		___myTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___myTarget_5, value);
	}

	inline static int32_t get_offset_of_myTargetPositionDelta_6() { return static_cast<int32_t>(offsetof(CS_Friend_t2605026669, ___myTargetPositionDelta_6)); }
	inline Vector2_t4282066565  get_myTargetPositionDelta_6() const { return ___myTargetPositionDelta_6; }
	inline Vector2_t4282066565 * get_address_of_myTargetPositionDelta_6() { return &___myTargetPositionDelta_6; }
	inline void set_myTargetPositionDelta_6(Vector2_t4282066565  value)
	{
		___myTargetPositionDelta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
