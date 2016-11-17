#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CS_AudioManager
struct CS_AudioManager_t519772806;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void CS_AudioManager::.ctor()
extern "C"  void CS_AudioManager__ctor_m2977637285 (CS_AudioManager_t519772806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::.cctor()
extern "C"  void CS_AudioManager__cctor_m1630346408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CS_AudioManager CS_AudioManager::get_Instance()
extern "C"  CS_AudioManager_t519772806 * CS_AudioManager_get_Instance_m22287600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::Awake()
extern "C"  void CS_AudioManager_Awake_m3215242504 (CS_AudioManager_t519772806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::PlaySFX(UnityEngine.AudioClip)
extern "C"  void CS_AudioManager_PlaySFX_m1038878063 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_SFX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::PlaySFX(UnityEngine.AudioClip,System.Single)
extern "C"  void CS_AudioManager_PlaySFX_m2912739860 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_SFX0, float ___g_Volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::PlayBGM(UnityEngine.AudioClip)
extern "C"  void CS_AudioManager_PlayBGM_m3466373580 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_BGM0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::PlayBGM(UnityEngine.AudioClip,System.Single)
extern "C"  void CS_AudioManager_PlayBGM_m2132025265 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_BGM0, float ___g_Volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_AudioManager::StopBGM()
extern "C"  void CS_AudioManager_StopBGM_m2310586409 (CS_AudioManager_t519772806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
