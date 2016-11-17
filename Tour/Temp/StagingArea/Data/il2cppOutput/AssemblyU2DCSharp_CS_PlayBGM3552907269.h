#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_PlayBGM
struct  CS_PlayBGM_t3552907269  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip CS_PlayBGM::myBGM
	AudioClip_t794140988 * ___myBGM_2;
	// System.Single CS_PlayBGM::myVolume
	float ___myVolume_3;

public:
	inline static int32_t get_offset_of_myBGM_2() { return static_cast<int32_t>(offsetof(CS_PlayBGM_t3552907269, ___myBGM_2)); }
	inline AudioClip_t794140988 * get_myBGM_2() const { return ___myBGM_2; }
	inline AudioClip_t794140988 ** get_address_of_myBGM_2() { return &___myBGM_2; }
	inline void set_myBGM_2(AudioClip_t794140988 * value)
	{
		___myBGM_2 = value;
		Il2CppCodeGenWriteBarrier(&___myBGM_2, value);
	}

	inline static int32_t get_offset_of_myVolume_3() { return static_cast<int32_t>(offsetof(CS_PlayBGM_t3552907269, ___myVolume_3)); }
	inline float get_myVolume_3() const { return ___myVolume_3; }
	inline float* get_address_of_myVolume_3() { return &___myVolume_3; }
	inline void set_myVolume_3(float value)
	{
		___myVolume_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
