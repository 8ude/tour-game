#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CS_AudioManager
struct CS_AudioManager_t519772806;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_AudioManager
struct  CS_AudioManager_t519772806  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CS_AudioManager::myPrefabSFX
	GameObject_t3674682005 * ___myPrefabSFX_3;
	// UnityEngine.AudioSource CS_AudioManager::myAudioSource
	AudioSource_t1740077639 * ___myAudioSource_4;

public:
	inline static int32_t get_offset_of_myPrefabSFX_3() { return static_cast<int32_t>(offsetof(CS_AudioManager_t519772806, ___myPrefabSFX_3)); }
	inline GameObject_t3674682005 * get_myPrefabSFX_3() const { return ___myPrefabSFX_3; }
	inline GameObject_t3674682005 ** get_address_of_myPrefabSFX_3() { return &___myPrefabSFX_3; }
	inline void set_myPrefabSFX_3(GameObject_t3674682005 * value)
	{
		___myPrefabSFX_3 = value;
		Il2CppCodeGenWriteBarrier(&___myPrefabSFX_3, value);
	}

	inline static int32_t get_offset_of_myAudioSource_4() { return static_cast<int32_t>(offsetof(CS_AudioManager_t519772806, ___myAudioSource_4)); }
	inline AudioSource_t1740077639 * get_myAudioSource_4() const { return ___myAudioSource_4; }
	inline AudioSource_t1740077639 ** get_address_of_myAudioSource_4() { return &___myAudioSource_4; }
	inline void set_myAudioSource_4(AudioSource_t1740077639 * value)
	{
		___myAudioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___myAudioSource_4, value);
	}
};

struct CS_AudioManager_t519772806_StaticFields
{
public:
	// CS_AudioManager CS_AudioManager::instance
	CS_AudioManager_t519772806 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CS_AudioManager_t519772806_StaticFields, ___instance_2)); }
	inline CS_AudioManager_t519772806 * get_instance_2() const { return ___instance_2; }
	inline CS_AudioManager_t519772806 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CS_AudioManager_t519772806 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
