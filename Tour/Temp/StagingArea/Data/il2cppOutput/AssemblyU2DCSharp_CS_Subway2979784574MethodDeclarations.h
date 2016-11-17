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

// CS_Subway
struct CS_Subway_t2979784574;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void CS_Subway::.ctor()
extern "C"  void CS_Subway__ctor_m3944266669 (CS_Subway_t2979784574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_Subway::Update()
extern "C"  void CS_Subway_Update_m3740044544 (CS_Subway_t2979784574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_Subway::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void CS_Subway_OnTriggerEnter2D_m3634842987 (CS_Subway_t2979784574 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_Subway::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C"  void CS_Subway_OnTriggerExit2D_m2006752727 (CS_Subway_t2979784574 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CS_Subway::Init(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32)
extern "C"  void CS_Subway_Init_m4075837172 (CS_Subway_t2979784574 * __this, List_1_t1355284821 * ___g_stationPositionList0, int32_t ___g_nextStationNumber1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
