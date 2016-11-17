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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Worker
struct  CS_Worker_t3089225293  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> CS_Worker::myTargetList
	List_1_t1355284821 * ___myTargetList_2;
	// UnityEngine.Vector2 CS_Worker::myTarget
	Vector2_t4282066565  ___myTarget_3;
	// UnityEngine.Vector2 CS_Worker::myRandomDestination
	Vector2_t4282066565  ___myRandomDestination_4;
	// System.Single CS_Worker::myRandomDestinationPosibility
	float ___myRandomDestinationPosibility_5;
	// System.Single CS_Worker::myVelocity
	float ___myVelocity_6;

public:
	inline static int32_t get_offset_of_myTargetList_2() { return static_cast<int32_t>(offsetof(CS_Worker_t3089225293, ___myTargetList_2)); }
	inline List_1_t1355284821 * get_myTargetList_2() const { return ___myTargetList_2; }
	inline List_1_t1355284821 ** get_address_of_myTargetList_2() { return &___myTargetList_2; }
	inline void set_myTargetList_2(List_1_t1355284821 * value)
	{
		___myTargetList_2 = value;
		Il2CppCodeGenWriteBarrier(&___myTargetList_2, value);
	}

	inline static int32_t get_offset_of_myTarget_3() { return static_cast<int32_t>(offsetof(CS_Worker_t3089225293, ___myTarget_3)); }
	inline Vector2_t4282066565  get_myTarget_3() const { return ___myTarget_3; }
	inline Vector2_t4282066565 * get_address_of_myTarget_3() { return &___myTarget_3; }
	inline void set_myTarget_3(Vector2_t4282066565  value)
	{
		___myTarget_3 = value;
	}

	inline static int32_t get_offset_of_myRandomDestination_4() { return static_cast<int32_t>(offsetof(CS_Worker_t3089225293, ___myRandomDestination_4)); }
	inline Vector2_t4282066565  get_myRandomDestination_4() const { return ___myRandomDestination_4; }
	inline Vector2_t4282066565 * get_address_of_myRandomDestination_4() { return &___myRandomDestination_4; }
	inline void set_myRandomDestination_4(Vector2_t4282066565  value)
	{
		___myRandomDestination_4 = value;
	}

	inline static int32_t get_offset_of_myRandomDestinationPosibility_5() { return static_cast<int32_t>(offsetof(CS_Worker_t3089225293, ___myRandomDestinationPosibility_5)); }
	inline float get_myRandomDestinationPosibility_5() const { return ___myRandomDestinationPosibility_5; }
	inline float* get_address_of_myRandomDestinationPosibility_5() { return &___myRandomDestinationPosibility_5; }
	inline void set_myRandomDestinationPosibility_5(float value)
	{
		___myRandomDestinationPosibility_5 = value;
	}

	inline static int32_t get_offset_of_myVelocity_6() { return static_cast<int32_t>(offsetof(CS_Worker_t3089225293, ___myVelocity_6)); }
	inline float get_myVelocity_6() const { return ___myVelocity_6; }
	inline float* get_address_of_myVelocity_6() { return &___myVelocity_6; }
	inline void set_myVelocity_6(float value)
	{
		___myVelocity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
