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

// CS_LoadStage
struct CS_LoadStage_t3129050249;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void CS_LoadStage::.ctor()
extern "C"  void CS_LoadStage__ctor_m2819127346 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::Start()
extern "C"  void CS_LoadStage_Start_m1766265138 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::InitSite()
extern "C"  void CS_LoadStage_InitSite_m3035530505 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::InitStation()
extern "C"  void CS_LoadStage_InitStation_m3752859412 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::InitTree()
extern "C"  void CS_LoadStage_InitTree_m3072024480 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::InitFriend()
extern "C"  void CS_LoadStage_InitFriend_m3060111968 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::InitWorker()
extern "C"  void CS_LoadStage_InitWorker_m223554368 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CS_LoadStage::CheckIfFarEnough(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Single)
extern "C"  bool CS_LoadStage_CheckIfFarEnough_m2514632427 (CS_LoadStage_t3129050249 * __this, Vector2_t4282066565  ___g_position0, List_1_t747900261 * ___g_list1, float ___g_distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CS_LoadStage::CheckIfFarEnoughLine(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Single)
extern "C"  bool CS_LoadStage_CheckIfFarEnoughLine_m482066135 (CS_LoadStage_t3129050249 * __this, Vector2_t4282066565  ___g_position0, List_1_t747900261 * ___g_list1, float ___g_distance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::Update()
extern "C"  void CS_LoadStage_Update_m3220463899 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::FindASite()
extern "C"  void CS_LoadStage_FindASite_m3988395807 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::ShowInfo()
extern "C"  void CS_LoadStage_ShowInfo_m3277577437 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::HideInfo()
extern "C"  void CS_LoadStage_HideInfo_m2845529954 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::ShowPause()
extern "C"  void CS_LoadStage_ShowPause_m85095561 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::HidePause()
extern "C"  void CS_LoadStage_HidePause_m3871492772 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_LoadStage::AddScore(System.Int32)
extern "C"  void CS_LoadStage_AddScore_m4196817236 (CS_LoadStage_t3129050249 * __this, int32_t ___g_score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
