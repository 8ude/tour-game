#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_PlaySFX
struct  CS_PlaySFX_t3552923586  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip[] CS_PlaySFX::mySFX
	AudioClipU5BU5D_t3001083477* ___mySFX_2;
	// System.Boolean CS_PlaySFX::playOnStart
	bool ___playOnStart_3;
	// System.Boolean CS_PlaySFX::playRandomly
	bool ___playRandomly_4;
	// System.Boolean CS_PlaySFX::playOnce
	bool ___playOnce_5;
	// System.Single CS_PlaySFX::playVolume
	float ___playVolume_6;

public:
	inline static int32_t get_offset_of_mySFX_2() { return static_cast<int32_t>(offsetof(CS_PlaySFX_t3552923586, ___mySFX_2)); }
	inline AudioClipU5BU5D_t3001083477* get_mySFX_2() const { return ___mySFX_2; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_mySFX_2() { return &___mySFX_2; }
	inline void set_mySFX_2(AudioClipU5BU5D_t3001083477* value)
	{
		___mySFX_2 = value;
		Il2CppCodeGenWriteBarrier(&___mySFX_2, value);
	}

	inline static int32_t get_offset_of_playOnStart_3() { return static_cast<int32_t>(offsetof(CS_PlaySFX_t3552923586, ___playOnStart_3)); }
	inline bool get_playOnStart_3() const { return ___playOnStart_3; }
	inline bool* get_address_of_playOnStart_3() { return &___playOnStart_3; }
	inline void set_playOnStart_3(bool value)
	{
		___playOnStart_3 = value;
	}

	inline static int32_t get_offset_of_playRandomly_4() { return static_cast<int32_t>(offsetof(CS_PlaySFX_t3552923586, ___playRandomly_4)); }
	inline bool get_playRandomly_4() const { return ___playRandomly_4; }
	inline bool* get_address_of_playRandomly_4() { return &___playRandomly_4; }
	inline void set_playRandomly_4(bool value)
	{
		___playRandomly_4 = value;
	}

	inline static int32_t get_offset_of_playOnce_5() { return static_cast<int32_t>(offsetof(CS_PlaySFX_t3552923586, ___playOnce_5)); }
	inline bool get_playOnce_5() const { return ___playOnce_5; }
	inline bool* get_address_of_playOnce_5() { return &___playOnce_5; }
	inline void set_playOnce_5(bool value)
	{
		___playOnce_5 = value;
	}

	inline static int32_t get_offset_of_playVolume_6() { return static_cast<int32_t>(offsetof(CS_PlaySFX_t3552923586, ___playVolume_6)); }
	inline float get_playVolume_6() const { return ___playVolume_6; }
	inline float* get_address_of_playVolume_6() { return &___playVolume_6; }
	inline void set_playVolume_6(float value)
	{
		___playVolume_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
