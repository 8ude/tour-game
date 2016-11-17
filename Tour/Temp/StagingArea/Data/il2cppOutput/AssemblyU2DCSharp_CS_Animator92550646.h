#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Animator
struct  CS_Animator_t92550646  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator CS_Animator::myAnimator
	Animator_t2776330603 * ___myAnimator_2;

public:
	inline static int32_t get_offset_of_myAnimator_2() { return static_cast<int32_t>(offsetof(CS_Animator_t92550646, ___myAnimator_2)); }
	inline Animator_t2776330603 * get_myAnimator_2() const { return ___myAnimator_2; }
	inline Animator_t2776330603 ** get_address_of_myAnimator_2() { return &___myAnimator_2; }
	inline void set_myAnimator_2(Animator_t2776330603 * value)
	{
		___myAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAnimator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
