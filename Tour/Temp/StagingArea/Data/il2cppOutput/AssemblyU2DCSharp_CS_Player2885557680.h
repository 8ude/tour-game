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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Player
struct  CS_Player_t2885557680  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D CS_Player::myRigidbody2D
	Rigidbody2D_t1743771669 * ___myRigidbody2D_2;
	// UnityEngine.Vector2 CS_Player::myDirection
	Vector2_t4282066565  ___myDirection_3;
	// System.Boolean CS_Player::onMove
	bool ___onMove_4;
	// UnityEngine.Vector2 CS_Player::moveAxis
	Vector2_t4282066565  ___moveAxis_5;
	// System.Single CS_Player::mySpeed
	float ___mySpeed_6;
	// System.Single CS_Player::moveGravity
	float ___moveGravity_7;
	// System.Single CS_Player::moveSensitivity
	float ___moveSensitivity_8;

public:
	inline static int32_t get_offset_of_myRigidbody2D_2() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___myRigidbody2D_2)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody2D_2() const { return ___myRigidbody2D_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody2D_2() { return &___myRigidbody2D_2; }
	inline void set_myRigidbody2D_2(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody2D_2, value);
	}

	inline static int32_t get_offset_of_myDirection_3() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___myDirection_3)); }
	inline Vector2_t4282066565  get_myDirection_3() const { return ___myDirection_3; }
	inline Vector2_t4282066565 * get_address_of_myDirection_3() { return &___myDirection_3; }
	inline void set_myDirection_3(Vector2_t4282066565  value)
	{
		___myDirection_3 = value;
	}

	inline static int32_t get_offset_of_onMove_4() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___onMove_4)); }
	inline bool get_onMove_4() const { return ___onMove_4; }
	inline bool* get_address_of_onMove_4() { return &___onMove_4; }
	inline void set_onMove_4(bool value)
	{
		___onMove_4 = value;
	}

	inline static int32_t get_offset_of_moveAxis_5() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___moveAxis_5)); }
	inline Vector2_t4282066565  get_moveAxis_5() const { return ___moveAxis_5; }
	inline Vector2_t4282066565 * get_address_of_moveAxis_5() { return &___moveAxis_5; }
	inline void set_moveAxis_5(Vector2_t4282066565  value)
	{
		___moveAxis_5 = value;
	}

	inline static int32_t get_offset_of_mySpeed_6() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___mySpeed_6)); }
	inline float get_mySpeed_6() const { return ___mySpeed_6; }
	inline float* get_address_of_mySpeed_6() { return &___mySpeed_6; }
	inline void set_mySpeed_6(float value)
	{
		___mySpeed_6 = value;
	}

	inline static int32_t get_offset_of_moveGravity_7() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___moveGravity_7)); }
	inline float get_moveGravity_7() const { return ___moveGravity_7; }
	inline float* get_address_of_moveGravity_7() { return &___moveGravity_7; }
	inline void set_moveGravity_7(float value)
	{
		___moveGravity_7 = value;
	}

	inline static int32_t get_offset_of_moveSensitivity_8() { return static_cast<int32_t>(offsetof(CS_Player_t2885557680, ___moveSensitivity_8)); }
	inline float get_moveSensitivity_8() const { return ___moveSensitivity_8; }
	inline float* get_address_of_moveSensitivity_8() { return &___moveSensitivity_8; }
	inline void set_moveSensitivity_8(float value)
	{
		___moveSensitivity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
