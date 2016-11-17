#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CS_AddScore
struct CS_AddScore_t3935313280;
// CS_LoadStage
struct CS_LoadStage_t3129050249;
// System.Object
struct Il2CppObject;
// CS_Animator
struct CS_Animator_t92550646;
// CS_AudioManager
struct CS_AudioManager_t519772806;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// CS_Button
struct CS_Button_t2493622785;
// CS_Camera
struct CS_Camera_t2503558644;
// UnityEngine.Camera
struct Camera_t2727095145;
// CS_Friend
struct CS_Friend_t2605026669;
// CS_Subway
struct CS_Subway_t2979784574;
// CS_Worker
struct CS_Worker_t3089225293;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// CS_PlaySFX
struct CS_PlaySFX_t3552923586;
// CS_MessageBox
struct CS_MessageBox_t1036826515;
// System.String
struct String_t;
// CS_PlayBGM
struct CS_PlayBGM_t3552907269;
// CS_Player
struct CS_Player_t2885557680;
// CS_PlayerControl
struct CS_PlayerControl_t51779981;
// CS_PreView
struct CS_PreView_t3727372025;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// CS_Site
struct CS_Site_t1799735766;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_AddScore3935313280.h"
#include "AssemblyU2DCSharp_CS_AddScore3935313280MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_LoadStage3129050249MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_Global2628290162.h"
#include "AssemblyU2DCSharp_CS_Global2628290162MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_CS_LoadStage3129050249.h"
#include "mscorlib_System_Int321153838500.h"
#include "AssemblyU2DCSharp_CS_Animator92550646.h"
#include "AssemblyU2DCSharp_CS_Animator92550646MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_CS_AudioManager519772806.h"
#include "AssemblyU2DCSharp_CS_AudioManager519772806MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClip794140988MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "mscorlib_System_Single4291918972.h"
#include "AssemblyU2DCSharp_CS_Button2493622785.h"
#include "AssemblyU2DCSharp_CS_Button2493622785MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_MessageBox1036826515MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_MessageBox1036826515.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_CS_Camera2503558644.h"
#include "AssemblyU2DCSharp_CS_Camera2503558644MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_Friend2605026669.h"
#include "AssemblyU2DCSharp_CS_Friend2605026669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen747900261MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284821MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen747900261.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284821.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "AssemblyU2DCSharp_CS_Subway2979784574MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "AssemblyU2DCSharp_CS_Subway2979784574.h"
#include "AssemblyU2DCSharp_CS_Worker3089225293MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_Worker3089225293.h"
#include "UnityEngine_UnityEngine_TextMesh2567681854MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextMesh2567681854.h"
#include "mscorlib_System_Single4291918972MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_PlaySFX3552923586MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_PlaySFX3552923586.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag2940962239MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_PlayBGM3552907269.h"
#include "AssemblyU2DCSharp_CS_PlayBGM3552907269MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_Player2885557680.h"
#include "AssemblyU2DCSharp_CS_Player2885557680MethodDeclarations.h"
#include "AssemblyU2DCSharp_CS_PlayerControl51779981.h"
#include "AssemblyU2DCSharp_CS_PlayerControl51779981MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "AssemblyU2DCSharp_CS_PreView3727372025.h"
#include "AssemblyU2DCSharp_CS_PreView3727372025MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "AssemblyU2DCSharp_CS_Site1799735766.h"
#include "AssemblyU2DCSharp_CS_Site1799735766MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m441016515_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m441016515(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CS_LoadStage>()
#define GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420(__this, method) ((  CS_LoadStage_t3129050249 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m1790518574_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m1790518574(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m1790518574_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t3674682005_m2622475422(__this /* static, unused */, p0, method) ((  GameObject_t3674682005 * (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m1790518574_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(__this, method) ((  AudioSource_t1740077639 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t2727095145_m1005433449(__this, method) ((  Camera_t2727095145 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CS_Subway>()
#define GameObject_GetComponent_TisCS_Subway_t2979784574_m1158276643(__this, method) ((  CS_Subway_t2979784574 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CS_Worker>()
#define GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708(__this, method) ((  CS_Worker_t3089225293 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
#define GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284(__this, method) ((  TextMesh_t2567681854 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CS_PlaySFX>()
#define Component_GetComponent_TisCS_PlaySFX_t3552923586_m2170439171(__this, method) ((  CS_PlaySFX_t3552923586 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CS_Camera>()
#define Component_GetComponent_TisCS_Camera_t2503558644_m2172164933(__this, method) ((  CS_Camera_t2503558644 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CS_Player>()
#define GameObject_GetComponent_TisCS_Player_t2885557680_m2953489073(__this, method) ((  CS_Player_t2885557680 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m441016515_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CS_AddScore::.ctor()
extern "C"  void CS_AddScore__ctor_m3240398315 (CS_AddScore_t3935313280 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AddScore::Start()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var;
extern const uint32_t CS_AddScore_Start_m2187536107_MetadataUsageId;
extern "C"  void CS_AddScore_Start_m2187536107 (CS_AddScore_t3935313280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AddScore_Start_m2187536107_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_LOADSTAGE_2();
		GameObject_t3674682005 * L_1 = GameObject_Find_m332785498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		CS_LoadStage_t3129050249 * L_2 = GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420(L_1, /*hidden argument*/GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var);
		int32_t L_3 = __this->get_myScore_2();
		CS_LoadStage_AddScore_m4196817236(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Animator::.ctor()
extern "C"  void CS_Animator__ctor_m891656757 (CS_Animator_t92550646 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Animator::DestroyMyAnimator()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_Animator_DestroyMyAnimator_m2368713056_MetadataUsageId;
extern "C"  void CS_Animator_DestroyMyAnimator_m2368713056 (CS_Animator_t92550646 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Animator_DestroyMyAnimator_m2368713056_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t2776330603 * L_0 = __this->get_myAnimator_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::.ctor()
extern "C"  void CS_AudioManager__ctor_m2977637285 (CS_AudioManager_t519772806 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::.cctor()
extern "C"  void CS_AudioManager__cctor_m1630346408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// CS_AudioManager CS_AudioManager::get_Instance()
extern Il2CppClass* CS_AudioManager_t519772806_il2cpp_TypeInfo_var;
extern const uint32_t CS_AudioManager_get_Instance_m22287600_MetadataUsageId;
extern "C"  CS_AudioManager_t519772806 * CS_AudioManager_get_Instance_m22287600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_get_Instance_m22287600_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_0 = ((CS_AudioManager_t519772806_StaticFields*)CS_AudioManager_t519772806_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		return L_0;
	}
}
// System.Void CS_AudioManager::Awake()
extern Il2CppClass* CS_AudioManager_t519772806_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_AudioManager_Awake_m3215242504_MetadataUsageId;
extern "C"  void CS_AudioManager_Awake_m3215242504 (CS_AudioManager_t519772806 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_Awake_m3215242504_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_0 = ((CS_AudioManager_t519772806_StaticFields*)CS_AudioManager_t519772806_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_2 = ((CS_AudioManager_t519772806_StaticFields*)CS_AudioManager_t519772806_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		((CS_AudioManager_t519772806_StaticFields*)CS_AudioManager_t519772806_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
	}

IL_0036:
	{
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4064482788(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::PlaySFX(UnityEngine.AudioClip)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m2622475422_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2542746;
extern const uint32_t CS_AudioManager_PlaySFX_m1038878063_MetadataUsageId;
extern "C"  void CS_AudioManager_PlaySFX_m1038878063 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_SFX0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_PlaySFX_m1038878063_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_myPrefabSFX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_1 = Object_Instantiate_TisGameObject_t3674682005_m2622475422(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m2622475422_MethodInfo_var);
		V_0 = L_1;
		GameObject_t3674682005 * L_2 = V_0;
		AudioClip_t794140988 * L_3 = ___g_SFX0;
		String_t* L_4 = Object_get_name_m3709440845(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2542746, L_4, /*hidden argument*/NULL);
		Object_set_name_m1123518500(L_2, L_5, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = V_0;
		AudioSource_t1740077639 * L_7 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_6, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		AudioClip_t794140988 * L_8 = ___g_SFX0;
		AudioSource_set_clip_m19502010(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_9 = V_0;
		AudioSource_t1740077639 * L_10 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_9, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		AudioSource_Play_m1360558992(L_10, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_11 = V_0;
		AudioClip_t794140988 * L_12 = ___g_SFX0;
		float L_13 = AudioClip_get_length_m1976537364(L_12, /*hidden argument*/NULL);
		Object_DestroyObject_m3324336244(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::PlaySFX(UnityEngine.AudioClip,System.Single)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m2622475422_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2542746;
extern const uint32_t CS_AudioManager_PlaySFX_m2912739860_MetadataUsageId;
extern "C"  void CS_AudioManager_PlaySFX_m2912739860 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_SFX0, float ___g_Volume1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_PlaySFX_m2912739860_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_myPrefabSFX_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_1 = Object_Instantiate_TisGameObject_t3674682005_m2622475422(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m2622475422_MethodInfo_var);
		V_0 = L_1;
		GameObject_t3674682005 * L_2 = V_0;
		AudioClip_t794140988 * L_3 = ___g_SFX0;
		String_t* L_4 = Object_get_name_m3709440845(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2542746, L_4, /*hidden argument*/NULL);
		Object_set_name_m1123518500(L_2, L_5, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = V_0;
		AudioSource_t1740077639 * L_7 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_6, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		AudioClip_t794140988 * L_8 = ___g_SFX0;
		AudioSource_set_clip_m19502010(L_7, L_8, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_9 = V_0;
		AudioSource_t1740077639 * L_10 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_9, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		float L_11 = ___g_Volume1;
		AudioSource_set_volume_m1410546616(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_12 = V_0;
		AudioSource_t1740077639 * L_13 = GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151(L_12, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t1740077639_m1155306151_MethodInfo_var);
		AudioSource_Play_m1360558992(L_13, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_14 = V_0;
		AudioClip_t794140988 * L_15 = ___g_SFX0;
		float L_16 = AudioClip_get_length_m1976537364(L_15, /*hidden argument*/NULL);
		Object_DestroyObject_m3324336244(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::PlayBGM(UnityEngine.AudioClip)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_AudioManager_PlayBGM_m3466373580_MetadataUsageId;
extern "C"  void CS_AudioManager_PlayBGM_m3466373580 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_BGM0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_PlayBGM_m3466373580_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t1740077639 * L_0 = __this->get_myAudioSource_4();
		bool L_1 = AudioSource_get_isPlaying_m4213444423(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		AudioSource_t1740077639 * L_2 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_3 = ___g_BGM0;
		AudioSource_set_clip_m19502010(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_4 = __this->get_myAudioSource_4();
		AudioSource_Play_m1360558992(L_4, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		AudioClip_t794140988 * L_5 = ___g_BGM0;
		AudioSource_t1740077639 * L_6 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_7 = AudioSource_get_clip_m2410835857(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		AudioSource_t1740077639 * L_9 = __this->get_myAudioSource_4();
		AudioSource_Stop_m1454243038(L_9, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_10 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_11 = ___g_BGM0;
		AudioSource_set_clip_m19502010(L_10, L_11, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_12 = __this->get_myAudioSource_4();
		AudioSource_Play_m1360558992(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::PlayBGM(UnityEngine.AudioClip,System.Single)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_AudioManager_PlayBGM_m2132025265_MetadataUsageId;
extern "C"  void CS_AudioManager_PlayBGM_m2132025265 (CS_AudioManager_t519772806 * __this, AudioClip_t794140988 * ___g_BGM0, float ___g_Volume1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_AudioManager_PlayBGM_m2132025265_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t1740077639 * L_0 = __this->get_myAudioSource_4();
		bool L_1 = AudioSource_get_isPlaying_m4213444423(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		AudioSource_t1740077639 * L_2 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_3 = ___g_BGM0;
		AudioSource_set_clip_m19502010(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_4 = __this->get_myAudioSource_4();
		float L_5 = ___g_Volume1;
		AudioSource_set_volume_m1410546616(L_4, L_5, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_6 = __this->get_myAudioSource_4();
		AudioSource_Play_m1360558992(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		AudioClip_t794140988 * L_7 = ___g_BGM0;
		AudioSource_t1740077639 * L_8 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_9 = AudioSource_get_clip_m2410835857(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		AudioSource_t1740077639 * L_11 = __this->get_myAudioSource_4();
		float L_12 = ___g_Volume1;
		AudioSource_set_volume_m1410546616(L_11, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0057:
	{
		AudioSource_t1740077639 * L_13 = __this->get_myAudioSource_4();
		AudioSource_Stop_m1454243038(L_13, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_14 = __this->get_myAudioSource_4();
		AudioClip_t794140988 * L_15 = ___g_BGM0;
		AudioSource_set_clip_m19502010(L_14, L_15, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_16 = __this->get_myAudioSource_4();
		float L_17 = ___g_Volume1;
		AudioSource_set_volume_m1410546616(L_16, L_17, /*hidden argument*/NULL);
		AudioSource_t1740077639 * L_18 = __this->get_myAudioSource_4();
		AudioSource_Play_m1360558992(L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_AudioManager::StopBGM()
extern "C"  void CS_AudioManager_StopBGM_m2310586409 (CS_AudioManager_t519772806 * __this, const MethodInfo* method)
{
	{
		AudioSource_t1740077639 * L_0 = __this->get_myAudioSource_4();
		AudioSource_Stop_m1454243038(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Button::.ctor()
extern "C"  void CS_Button__ctor_m1191320714 (CS_Button_t2493622785 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Button::OnMouseDown()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* CS_MessageBox_t1036826515_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t CS_Button_OnMouseDown_m2699071024_MetadataUsageId;
extern "C"  void CS_Button_OnMouseDown_m2699071024 (CS_Button_t2493622785 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Button_OnMouseDown_m2699071024_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = __this->get_myTargetGameObject_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_MessageBox_t1036826515_il2cpp_TypeInfo_var);
		CS_MessageBox_t1036826515 * L_2 = CS_MessageBox_get_Instance_m4170976330(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(L_2, /*hidden argument*/NULL);
		__this->set_myTargetGameObject_2(L_3);
	}

IL_0021:
	{
		String_t* L_4 = __this->get_myMessage_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t3674682005 * L_7 = __this->get_myTargetGameObject_2();
		String_t* L_8 = __this->get_myTargetFunction_3();
		GameObject_SendMessage_m2244324713(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_004c:
	{
		GameObject_t3674682005 * L_9 = __this->get_myTargetGameObject_2();
		String_t* L_10 = __this->get_myTargetFunction_3();
		String_t* L_11 = __this->get_myMessage_4();
		GameObject_SendMessage_m3364342903(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void CS_Camera::.ctor()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const uint32_t CS_Camera__ctor_m1501512183_MetadataUsageId;
extern "C"  void CS_Camera__ctor_m1501512183 (CS_Camera_t2503558644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Camera__ctor_m1501512183_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		float L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_CAMERA_SIZE_DEFAULT_6();
		__this->set_mySize_8(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Camera::Start()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const uint32_t CS_Camera_Start_m448649975_MetadataUsageId;
extern "C"  void CS_Camera_Start_m448649975 (CS_Camera_t2503558644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Camera_Start_m448649975_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_PLAYER_1();
		GameObject_t3674682005 * L_1 = GameObject_Find_m332785498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_myPlayer_2(L_1);
		Vector3_t4282066566  L_2 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_myPreMovePosition_7(L_2);
		return;
	}
}
// System.Void CS_Camera::Update()
extern const MethodInfo* Component_GetComponent_TisCamera_t2727095145_m1005433449_MethodInfo_var;
extern const uint32_t CS_Camera_Update_m1029099510_MetadataUsageId;
extern "C"  void CS_Camera_Update_m1029099510 (CS_Camera_t2503558644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Camera_Update_m1029099510_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_isClear_3();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Transform_get_position_m2211398607(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = __this->get_myDeltaPostion_4();
		Vector3_t4282066566  L_6 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = __this->get_myMoveSpeed_5();
		Vector3_t4282066566  L_9 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_3, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_1, L_9, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0047:
	{
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_13 = __this->get_myPlayer_2();
		Transform_t1659122786 * L_14 = GameObject_get_transform_m1278640159(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		Vector3_t4282066566  L_16 = __this->get_myDeltaPostion_4();
		Vector3_t4282066566  L_17 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t4282066566  L_18 = __this->get_myPreMovePosition_7();
		Vector3_t4282066566  L_19 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = __this->get_myMoveSpeed_5();
		Vector3_t4282066566  L_22 = Vector3_Lerp_m650470329(NULL /*static, unused*/, L_12, L_19, ((float)((float)L_20*(float)L_21)), /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_10, L_22, /*hidden argument*/NULL);
	}

IL_0094:
	{
		float L_23 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = __this->get_mySizeRatio_9();
		V_0 = ((float)((float)L_23*(float)L_24));
		float L_25 = V_0;
		if ((!(((float)L_25) > ((float)(1.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_00b2:
	{
		Camera_t2727095145 * L_26 = Component_GetComponent_TisCamera_t2727095145_m1005433449(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m1005433449_MethodInfo_var);
		float L_27 = V_0;
		Camera_t2727095145 * L_28 = Component_GetComponent_TisCamera_t2727095145_m1005433449(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m1005433449_MethodInfo_var);
		float L_29 = Camera_get_orthographicSize_m3215515490(L_28, /*hidden argument*/NULL);
		float L_30 = V_0;
		float L_31 = __this->get_mySize_8();
		Camera_set_orthographicSize_m3910539041(L_26, ((float)((float)((float)((float)((float)((float)(1.0f)-(float)L_27))*(float)L_29))+(float)((float)((float)L_30*(float)L_31)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Camera::SetPreMovePosition(UnityEngine.Vector2)
extern "C"  void CS_Camera_SetPreMovePosition_m3046171762 (CS_Camera_t2503558644 * __this, Vector2_t4282066565  ___t_position0, const MethodInfo* method)
{
	{
		Vector2_t4282066565  L_0 = ___t_position0;
		float L_1 = __this->get_myPreMoveDistance_6();
		Vector2_t4282066565  L_2 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_myPreMovePosition_7(L_3);
		return;
	}
}
// System.Void CS_Camera::SetIsClear(System.Boolean)
extern "C"  void CS_Camera_SetIsClear_m3902672037 (CS_Camera_t2503558644 * __this, bool ___t_isClear0, const MethodInfo* method)
{
	{
		bool L_0 = ___t_isClear0;
		__this->set_isClear_3(L_0);
		return;
	}
}
// System.Void CS_Camera::SetSize(System.Single)
extern "C"  void CS_Camera_SetSize_m390067155 (CS_Camera_t2503558644 * __this, float ___t_size0, const MethodInfo* method)
{
	{
		float L_0 = ___t_size0;
		__this->set_mySize_8(L_0);
		return;
	}
}
// UnityEngine.Vector3 CS_Camera::GetDeltaPostion()
extern "C"  Vector3_t4282066566  CS_Camera_GetDeltaPostion_m709351957 (CS_Camera_t2503558644 * __this, const MethodInfo* method)
{
	{
		Vector3_t4282066566  L_0 = __this->get_myDeltaPostion_4();
		return L_0;
	}
}
// System.Void CS_Friend::.ctor()
extern "C"  void CS_Friend__ctor_m906580638 (CS_Friend_t2605026669 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Friend::Start()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const uint32_t CS_Friend_Start_m4148685726_MetadataUsageId;
extern "C"  void CS_Friend_Start_m4148685726 (CS_Friend_t2605026669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Friend_Start_m4148685726_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_PLAYER_1();
		GameObject_t3674682005 * L_1 = GameObject_Find_m332785498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_myTarget_5(L_1);
		float L_2 = Random_Range_m3362417303(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_3 = Random_Range_m3362417303(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t4282066565  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m1517109030(&L_4, L_2, L_3, /*hidden argument*/NULL);
		__this->set_myTargetPositionDelta_6(L_4);
		Vector2_t4282066565 * L_5 = __this->get_address_of_myTargetPositionDelta_6();
		Vector2_Normalize_m195575125(L_5, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = __this->get_myTarget_5();
		Transform_t1659122786 * L_7 = GameObject_get_transform_m1278640159(L_6, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Transform_get_position_m2211398607(L_9, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		Vector2_t4282066565  L_12 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->set_myDirection_4(L_12);
		Vector2_t4282066565  L_13 = __this->get_myDirection_4();
		Vector2_t4282066565  L_14 = __this->get_myTargetPositionDelta_6();
		Vector2_t4282066565  L_15 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		__this->set_myDirection_4(L_15);
		return;
	}
}
// System.Void CS_Friend::Update()
extern "C"  void CS_Friend_Update_m4061058095 (CS_Friend_t2605026669 * __this, const MethodInfo* method)
{
	Vector2_t4282066565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t3674682005 * L_0 = __this->get_myTarget_5();
		Transform_t1659122786 * L_1 = GameObject_get_transform_m1278640159(L_0, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_myDirection_4(L_6);
		Vector2_t4282066565  L_7 = __this->get_myDirection_4();
		Vector2_t4282066565  L_8 = __this->get_myTargetPositionDelta_6();
		Vector2_t4282066565  L_9 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		__this->set_myDirection_4(L_9);
		Rigidbody2D_t1743771669 * L_10 = __this->get_myRigidbody2D_2();
		Rigidbody2D_t1743771669 * L_11 = __this->get_myRigidbody2D_2();
		Vector2_t4282066565  L_12 = Rigidbody2D_get_velocity_m416159605(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Vector2_t4282066565  L_13 = Vector2_get_normalized_m123128511((&V_0), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_10, L_13, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_14 = __this->get_myRigidbody2D_2();
		Rigidbody2D_t1743771669 * L_15 = L_14;
		Vector2_t4282066565  L_16 = Rigidbody2D_get_velocity_m416159605(L_15, /*hidden argument*/NULL);
		Vector2_t4282066565  L_17 = __this->get_myDirection_4();
		float L_18 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_19 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Vector2_t4282066565  L_20 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_15, L_20, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_21 = __this->get_myRigidbody2D_2();
		Rigidbody2D_t1743771669 * L_22 = __this->get_myRigidbody2D_2();
		Vector2_t4282066565  L_23 = Rigidbody2D_get_velocity_m416159605(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Vector2_t4282066565  L_24 = Vector2_get_normalized_m123128511((&V_1), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_21, L_24, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_25 = __this->get_myRigidbody2D_2();
		Rigidbody2D_t1743771669 * L_26 = L_25;
		Vector2_t4282066565  L_27 = Rigidbody2D_get_velocity_m416159605(L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_mySpeed_3();
		Vector2_t4282066565  L_29 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_26, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Global::.cctor()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral302714980;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern Il2CppCodeGenString* _stringLiteral3382463896;
extern Il2CppCodeGenString* _stringLiteral2112550590;
extern Il2CppCodeGenString* _stringLiteral2596749214;
extern const uint32_t CS_Global__cctor_m4154196884_MetadataUsageId;
extern "C"  void CS_Global__cctor_m4154196884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Global__cctor_m4154196884_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_NAME_MESSAGEBOX_0(_stringLiteral302714980);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_NAME_PLAYER_1(_stringLiteral2393081601);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_NAME_LOADSTAGE_2(_stringLiteral3382463896);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_TAG_PLAYER_3(_stringLiteral2393081601);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_TAG_FRIEND_4(_stringLiteral2112550590);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_TAG_WORKER_5(_stringLiteral2596749214);
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_CAMERA_SIZE_DEFAULT_6((10.0f));
		((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->set_CAMERA_SIZE_MAX_7((60.0f));
		return;
	}
}
// System.Single CS_Global::DistanceToLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t CS_Global_DistanceToLine_m2415529535_MetadataUsageId;
extern "C"  float CS_Global_DistanceToLine_m2415529535 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___line_p10, Vector2_t4282066565  ___line_p21, Vector2_t4282066565  ___p32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Global_DistanceToLine_m2415529535_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (&___line_p21)->get_y_2();
		float L_1 = (&___line_p10)->get_y_2();
		float L_2 = (&___line_p21)->get_y_2();
		float L_3 = (&___line_p10)->get_y_2();
		float L_4 = (&___line_p21)->get_x_1();
		float L_5 = (&___line_p10)->get_x_1();
		float L_6 = (&___line_p21)->get_x_1();
		float L_7 = (&___line_p10)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_8 = sqrtf(((float)((float)((float)((float)((float)((float)L_0-(float)L_1))*(float)((float)((float)L_2-(float)L_3))))+(float)((float)((float)((float)((float)L_4-(float)L_5))*(float)((float)((float)L_6-(float)L_7)))))));
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		return (0.0f);
	}

IL_0054:
	{
		float L_9 = (&___line_p21)->get_y_2();
		float L_10 = (&___line_p10)->get_y_2();
		float L_11 = (&___p32)->get_x_1();
		float L_12 = (&___line_p21)->get_x_1();
		float L_13 = (&___line_p10)->get_x_1();
		float L_14 = (&___p32)->get_y_2();
		float L_15 = (&___line_p21)->get_x_1();
		float L_16 = (&___line_p10)->get_y_2();
		float L_17 = (&___line_p21)->get_y_2();
		float L_18 = (&___line_p10)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_19 = fabsf(((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_9-(float)L_10))*(float)L_11))-(float)((float)((float)((float)((float)L_12-(float)L_13))*(float)L_14))))+(float)((float)((float)L_15*(float)L_16))))-(float)((float)((float)L_17*(float)L_18)))));
		float L_20 = (&___line_p21)->get_y_2();
		float L_21 = (&___line_p10)->get_y_2();
		float L_22 = (&___line_p21)->get_y_2();
		float L_23 = (&___line_p10)->get_y_2();
		float L_24 = (&___line_p21)->get_x_1();
		float L_25 = (&___line_p10)->get_x_1();
		float L_26 = (&___line_p21)->get_x_1();
		float L_27 = (&___line_p10)->get_x_1();
		float L_28 = sqrtf(((float)((float)((float)((float)((float)((float)L_20-(float)L_21))*(float)((float)((float)L_22-(float)L_23))))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)((float)((float)L_26-(float)L_27)))))));
		V_0 = ((float)((float)L_19/(float)L_28));
		float L_29 = V_0;
		return L_29;
	}
}
// System.Void CS_LoadStage::.ctor()
extern Il2CppClass* List_1_t747900261_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1355284821_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3790385523_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m305978583_MethodInfo_var;
extern const uint32_t CS_LoadStage__ctor_m2819127346_MetadataUsageId;
extern "C"  void CS_LoadStage__ctor_m2819127346 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage__ctor_m2819127346_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t747900261 * L_0 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_0, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_mySiteList_7(L_0);
		List_1_t747900261 * L_1 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_1, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_myStationList_13(L_1);
		List_1_t1355284821 * L_2 = (List_1_t1355284821 *)il2cpp_codegen_object_new(List_1_t1355284821_il2cpp_TypeInfo_var);
		List_1__ctor_m305978583(L_2, /*hidden argument*/List_1__ctor_m305978583_MethodInfo_var);
		__this->set_myStationPositionList_14(L_2);
		List_1_t747900261 * L_3 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_3, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_myTreeList_24(L_3);
		List_1_t747900261 * L_4 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_4, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_myFriendList_29(L_4);
		List_1_t747900261 * L_5 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_5, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_myWorkerList_33(L_5);
		List_1_t1355284821 * L_6 = (List_1_t1355284821 *)il2cpp_codegen_object_new(List_1_t1355284821_il2cpp_TypeInfo_var);
		List_1__ctor_m305978583(L_6, /*hidden argument*/List_1__ctor_m305978583_MethodInfo_var);
		__this->set_myWorkerTargetList_34(L_6);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::Start()
extern "C"  void CS_LoadStage_Start_m1766265138 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	{
		CS_LoadStage_InitSite_m3035530505(__this, /*hidden argument*/NULL);
		CS_LoadStage_InitStation_m3752859412(__this, /*hidden argument*/NULL);
		CS_LoadStage_InitTree_m3072024480(__this, /*hidden argument*/NULL);
		CS_LoadStage_InitFriend_m3060111968(__this, /*hidden argument*/NULL);
		CS_LoadStage_InitWorker_m223554368(__this, /*hidden argument*/NULL);
		CS_LoadStage_HideInfo_m2845529954(__this, /*hidden argument*/NULL);
		CS_LoadStage_HidePause_m3871492772(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::InitSite()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral100474660;
extern const uint32_t CS_LoadStage_InitSite_m3035530505_MetadataUsageId;
extern "C"  void CS_LoadStage_InitSite_m3035530505 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_InitSite_m3035530505_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_t3674682005 * V_3 = NULL;
	{
		V_0 = 0;
		goto IL_00c3;
	}

IL_0007:
	{
		List_1_t747900261 * L_0 = __this->get_mySiteList_7();
		int32_t L_1 = List_1_get_Count_m3710384005(L_0, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_2 = __this->get_mySiteAmount_3();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_00a5;
		}
	}
	{
		Vector2_t4282066565 * L_3 = __this->get_address_of_mySitePosition_5();
		float L_4 = L_3->get_x_1();
		Vector2_t4282066565 * L_5 = __this->get_address_of_mySitePosition_5();
		float L_6 = L_5->get_x_1();
		float L_7 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_4)), L_6, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_8 = __this->get_address_of_mySitePosition_5();
		float L_9 = L_8->get_y_2();
		Vector2_t4282066565 * L_10 = __this->get_address_of_mySitePosition_5();
		float L_11 = L_10->get_y_2();
		float L_12 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_9)), L_11, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_1), L_7, L_12, /*hidden argument*/NULL);
		V_2 = (bool)1;
		Vector2_t4282066565  L_13 = V_1;
		List_1_t747900261 * L_14 = __this->get_mySiteList_7();
		float L_15 = __this->get_mySiteDistance_6();
		bool L_16 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00a0;
		}
	}
	{
		GameObject_t3674682005 * L_18 = __this->get_mySite_2();
		Vector2_t4282066565  L_19 = V_1;
		Vector3_t4282066566  L_20 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_21 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_22 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)IsInstSealed(L_22, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_23 = __this->get_mySiteList_7();
		GameObject_t3674682005 * L_24 = V_3;
		List_1_Add_m3484746339(L_23, L_24, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_00a0:
	{
		goto IL_00bf;
	}

IL_00a5:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		Il2CppObject * L_27 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral100474660, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		goto IL_00ce;
	}

IL_00bf:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00c3:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0007;
		}
	}

IL_00ce:
	{
		return;
	}
}
// System.Void CS_LoadStage::InitStation()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const MethodInfo* List_1_Add_m339399_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3550203021_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m2619548776_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_Subway_t2979784574_m1158276643_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3601309948;
extern Il2CppCodeGenString* _stringLiteral3274159676;
extern const uint32_t CS_LoadStage_InitStation_m3752859412_MetadataUsageId;
extern "C"  void CS_LoadStage_InitStation_m3752859412 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_InitStation_m3752859412_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_t3674682005 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t4282066565  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t4282066565  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Quaternion_t1553702882  V_8;
	memset(&V_8, 0, sizeof(V_8));
	GameObject_t3674682005 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	GameObject_t3674682005 * V_14 = NULL;
	Vector3_t4282066566  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector3_t4282066566  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector3_t4282066566  V_17;
	memset(&V_17, 0, sizeof(V_17));
	{
		V_0 = 0;
		goto IL_011e;
	}

IL_0007:
	{
		List_1_t747900261 * L_0 = __this->get_myStationList_13();
		int32_t L_1 = List_1_get_Count_m3710384005(L_0, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_2 = __this->get_myStationAmount_9();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_00d9;
		}
	}
	{
		Vector2_t4282066565 * L_3 = __this->get_address_of_myStationPosition_10();
		float L_4 = L_3->get_x_1();
		Vector2_t4282066565 * L_5 = __this->get_address_of_myStationPosition_10();
		float L_6 = L_5->get_x_1();
		float L_7 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_4)), L_6, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_8 = __this->get_address_of_myStationPosition_10();
		float L_9 = L_8->get_y_2();
		Vector2_t4282066565 * L_10 = __this->get_address_of_myStationPosition_10();
		float L_11 = L_10->get_y_2();
		float L_12 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_9)), L_11, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_1), L_7, L_12, /*hidden argument*/NULL);
		V_2 = (bool)1;
		Vector2_t4282066565  L_13 = V_1;
		List_1_t747900261 * L_14 = __this->get_mySiteList_7();
		float L_15 = __this->get_myStationDistance_11();
		bool L_16 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		Vector2_t4282066565  L_18 = V_1;
		List_1_t747900261 * L_19 = __this->get_myStationList_13();
		float L_20 = __this->get_myStationDistance_11();
		bool L_21 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Vector2_t4282066565  L_23 = V_1;
		List_1_t747900261 * L_24 = __this->get_myStationList_13();
		float L_25 = __this->get_myStationDistance_11();
		bool L_26 = CS_LoadStage_CheckIfFarEnoughLine_m482066135(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
	}

IL_00a6:
	{
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		GameObject_t3674682005 * L_28 = __this->get_myStation_8();
		Vector2_t4282066565  L_29 = V_1;
		Vector3_t4282066566  L_30 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_31 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_32 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_28, L_30, L_31, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)IsInstSealed(L_32, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_33 = __this->get_myStationList_13();
		GameObject_t3674682005 * L_34 = V_3;
		List_1_Add_m3484746339(L_33, L_34, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_00d4:
	{
		goto IL_011a;
	}

IL_00d9:
	{
		ObjectU5BU5D_t1108656482* L_35 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_35, _stringLiteral3601309948);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3601309948);
		ObjectU5BU5D_t1108656482* L_36 = L_35;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		Il2CppObject * L_39 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_38);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_39);
		ObjectU5BU5D_t1108656482* L_40 = L_36;
		ArrayElementTypeCheck (L_40, _stringLiteral3274159676);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3274159676);
		ObjectU5BU5D_t1108656482* L_41 = L_40;
		List_1_t747900261 * L_42 = __this->get_myStationList_13();
		int32_t L_43 = List_1_get_Count_m3710384005(L_42, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_44 = L_43;
		Il2CppObject * L_45 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_44);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_45);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Concat_m3016520001(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_011a:
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_011e:
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0007;
		}
	}

IL_0129:
	{
		V_4 = 0;
		goto IL_026b;
	}

IL_0131:
	{
		int32_t L_49 = V_4;
		V_5 = ((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_5;
		List_1_t747900261 * L_51 = __this->get_myStationList_13();
		int32_t L_52 = List_1_get_Count_m3710384005(L_51, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_53 = V_5;
		List_1_t747900261 * L_54 = __this->get_myStationList_13();
		int32_t L_55 = List_1_get_Count_m3710384005(L_54, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		V_5 = ((int32_t)((int32_t)L_53-(int32_t)L_55));
	}

IL_0159:
	{
		List_1_t747900261 * L_56 = __this->get_myStationList_13();
		int32_t L_57 = V_5;
		GameObject_t3674682005 * L_58 = List_1_get_Item_m1581171248(L_56, L_57, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_59 = GameObject_get_transform_m1278640159(L_58, /*hidden argument*/NULL);
		Vector3_t4282066566  L_60 = Transform_get_position_m2211398607(L_59, /*hidden argument*/NULL);
		List_1_t747900261 * L_61 = __this->get_myStationList_13();
		int32_t L_62 = V_4;
		GameObject_t3674682005 * L_63 = List_1_get_Item_m1581171248(L_61, L_62, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_64 = GameObject_get_transform_m1278640159(L_63, /*hidden argument*/NULL);
		Vector3_t4282066566  L_65 = Transform_get_position_m2211398607(L_64, /*hidden argument*/NULL);
		Vector3_t4282066566  L_66 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_60, L_65, /*hidden argument*/NULL);
		Vector2_t4282066565  L_67 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		V_6 = L_67;
		List_1_t747900261 * L_68 = __this->get_myStationList_13();
		int32_t L_69 = V_5;
		GameObject_t3674682005 * L_70 = List_1_get_Item_m1581171248(L_68, L_69, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_71 = GameObject_get_transform_m1278640159(L_70, /*hidden argument*/NULL);
		Vector3_t4282066566  L_72 = Transform_get_position_m2211398607(L_71, /*hidden argument*/NULL);
		List_1_t747900261 * L_73 = __this->get_myStationList_13();
		int32_t L_74 = V_4;
		GameObject_t3674682005 * L_75 = List_1_get_Item_m1581171248(L_73, L_74, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_76 = GameObject_get_transform_m1278640159(L_75, /*hidden argument*/NULL);
		Vector3_t4282066566  L_77 = Transform_get_position_m2211398607(L_76, /*hidden argument*/NULL);
		Vector3_t4282066566  L_78 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_72, L_77, /*hidden argument*/NULL);
		Vector3_t4282066566  L_79 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, L_78, (2.0f), /*hidden argument*/NULL);
		Vector2_t4282066565  L_80 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		V_7 = L_80;
		Vector2_t4282066565  L_81 = Vector2_get_up_m1197831267(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_82 = V_6;
		float L_83 = Vector2_Angle_m3950144551(NULL /*static, unused*/, L_81, L_82, /*hidden argument*/NULL);
		Vector3_t4282066566  L_84 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_85 = V_6;
		Vector3_t4282066566  L_86 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		Vector3_t4282066566  L_87 = Vector3_Cross_m2894122475(NULL /*static, unused*/, L_84, L_86, /*hidden argument*/NULL);
		V_15 = L_87;
		Vector3_t4282066566  L_88 = Vector3_get_normalized_m2650940353((&V_15), /*hidden argument*/NULL);
		V_16 = L_88;
		float L_89 = (&V_16)->get_z_3();
		Quaternion_t1553702882  L_90 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_83*(float)L_89)), /*hidden argument*/NULL);
		V_8 = L_90;
		GameObject_t3674682005 * L_91 = __this->get_myStationLine_12();
		Vector2_t4282066565  L_92 = V_7;
		Vector3_t4282066566  L_93 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_94 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_95 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_91, L_93, L_94, /*hidden argument*/NULL);
		V_9 = ((GameObject_t3674682005 *)IsInstSealed(L_95, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_96 = V_9;
		Transform_t1659122786 * L_97 = GameObject_get_transform_m1278640159(L_96, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_98 = V_9;
		Transform_t1659122786 * L_99 = GameObject_get_transform_m1278640159(L_98, /*hidden argument*/NULL);
		Vector3_t4282066566  L_100 = Transform_get_localScale_m3886572677(L_99, /*hidden argument*/NULL);
		V_17 = L_100;
		float L_101 = (&V_17)->get_x_1();
		float L_102 = Vector2_get_magnitude_m1987058139((&V_6), /*hidden argument*/NULL);
		Vector3_t4282066566  L_103;
		memset(&L_103, 0, sizeof(L_103));
		Vector3__ctor_m2926210380(&L_103, L_101, L_102, (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m310756934(L_97, L_103, /*hidden argument*/NULL);
		int32_t L_104 = V_4;
		V_4 = ((int32_t)((int32_t)L_104+(int32_t)1));
	}

IL_026b:
	{
		int32_t L_105 = V_4;
		List_1_t747900261 * L_106 = __this->get_myStationList_13();
		int32_t L_107 = List_1_get_Count_m3710384005(L_106, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_105) < ((int32_t)L_107)))
		{
			goto IL_0131;
		}
	}
	{
		V_10 = 0;
		goto IL_02b2;
	}

IL_0285:
	{
		List_1_t1355284821 * L_108 = __this->get_myStationPositionList_14();
		List_1_t747900261 * L_109 = __this->get_myStationList_13();
		int32_t L_110 = V_10;
		GameObject_t3674682005 * L_111 = List_1_get_Item_m1581171248(L_109, L_110, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_112 = GameObject_get_transform_m1278640159(L_111, /*hidden argument*/NULL);
		Vector3_t4282066566  L_113 = Transform_get_position_m2211398607(L_112, /*hidden argument*/NULL);
		Vector2_t4282066565  L_114 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_113, /*hidden argument*/NULL);
		List_1_Add_m339399(L_108, L_114, /*hidden argument*/List_1_Add_m339399_MethodInfo_var);
		int32_t L_115 = V_10;
		V_10 = ((int32_t)((int32_t)L_115+(int32_t)1));
	}

IL_02b2:
	{
		int32_t L_116 = V_10;
		List_1_t747900261 * L_117 = __this->get_myStationList_13();
		int32_t L_118 = List_1_get_Count_m3710384005(L_117, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_116) < ((int32_t)L_118)))
		{
			goto IL_0285;
		}
	}
	{
		List_1_t1355284821 * L_119 = __this->get_myStationPositionList_14();
		int32_t L_120 = List_1_get_Count_m3550203021(L_119, /*hidden argument*/List_1_get_Count_m3550203021_MethodInfo_var);
		int32_t L_121 = __this->get_mySubwayAmount_16();
		V_11 = ((int32_t)((int32_t)L_120/(int32_t)L_121));
		V_12 = 0;
		goto IL_032a;
	}

IL_02e0:
	{
		int32_t L_122 = V_12;
		int32_t L_123 = V_11;
		V_13 = ((int32_t)((int32_t)L_122*(int32_t)L_123));
		GameObject_t3674682005 * L_124 = __this->get_mySubway_15();
		List_1_t1355284821 * L_125 = __this->get_myStationPositionList_14();
		int32_t L_126 = V_13;
		Vector2_t4282066565  L_127 = List_1_get_Item_m2619548776(L_125, L_126, /*hidden argument*/List_1_get_Item_m2619548776_MethodInfo_var);
		Vector3_t4282066566  L_128 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_127, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_129 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_130 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_124, L_128, L_129, /*hidden argument*/NULL);
		V_14 = ((GameObject_t3674682005 *)IsInstSealed(L_130, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_131 = V_14;
		CS_Subway_t2979784574 * L_132 = GameObject_GetComponent_TisCS_Subway_t2979784574_m1158276643(L_131, /*hidden argument*/GameObject_GetComponent_TisCS_Subway_t2979784574_m1158276643_MethodInfo_var);
		List_1_t1355284821 * L_133 = __this->get_myStationPositionList_14();
		int32_t L_134 = V_13;
		CS_Subway_Init_m4075837172(L_132, L_133, L_134, /*hidden argument*/NULL);
		int32_t L_135 = V_12;
		V_12 = ((int32_t)((int32_t)L_135+(int32_t)1));
	}

IL_032a:
	{
		int32_t L_136 = V_12;
		int32_t L_137 = __this->get_mySubwayAmount_16();
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_02e0;
		}
	}
	{
		return;
	}
}
// System.Void CS_LoadStage::InitTree()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4239543602;
extern Il2CppCodeGenString* _stringLiteral3274159676;
extern const uint32_t CS_LoadStage_InitTree_m3072024480_MetadataUsageId;
extern "C"  void CS_LoadStage_InitTree_m3072024480 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_InitTree_m3072024480_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_t3674682005 * V_3 = NULL;
	int32_t V_4 = 0;
	Vector2_t4282066565  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	GameObject_t3674682005 * V_8 = NULL;
	{
		V_0 = 0;
		goto IL_0138;
	}

IL_0007:
	{
		List_1_t747900261 * L_0 = __this->get_myTreeList_24();
		int32_t L_1 = List_1_get_Count_m3710384005(L_0, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_2 = __this->get_myTreeCenterAmount_18();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_00f3;
		}
	}
	{
		Vector2_t4282066565 * L_3 = __this->get_address_of_myTreePosition_20();
		float L_4 = L_3->get_x_1();
		Vector2_t4282066565 * L_5 = __this->get_address_of_myTreePosition_20();
		float L_6 = L_5->get_x_1();
		float L_7 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_4)), L_6, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_8 = __this->get_address_of_myTreePosition_20();
		float L_9 = L_8->get_y_2();
		Vector2_t4282066565 * L_10 = __this->get_address_of_myTreePosition_20();
		float L_11 = L_10->get_y_2();
		float L_12 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_9)), L_11, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_1), L_7, L_12, /*hidden argument*/NULL);
		V_2 = (bool)1;
		Vector2_t4282066565  L_13 = V_1;
		List_1_t747900261 * L_14 = __this->get_mySiteList_7();
		float L_15 = __this->get_myTreeDistanceToOthers_21();
		bool L_16 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		Vector2_t4282066565  L_18 = V_1;
		List_1_t747900261 * L_19 = __this->get_myStationList_13();
		float L_20 = __this->get_myTreeDistanceToOthers_21();
		bool L_21 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00a6;
		}
	}
	{
		Vector2_t4282066565  L_23 = V_1;
		List_1_t747900261 * L_24 = __this->get_myStationList_13();
		float L_25 = __this->get_myTreeDistanceToOthers_21();
		bool L_26 = CS_LoadStage_CheckIfFarEnoughLine_m482066135(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
	}

IL_00a6:
	{
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_00c0;
		}
	}
	{
		Vector2_t4282066565  L_28 = V_1;
		List_1_t747900261 * L_29 = __this->get_myTreeList_24();
		float L_30 = __this->get_myTreeDistanceToOthers_21();
		bool L_31 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_00c0:
	{
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00ee;
		}
	}
	{
		GameObject_t3674682005 * L_33 = __this->get_myTree_17();
		Vector2_t4282066565  L_34 = V_1;
		Vector3_t4282066566  L_35 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_36 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_37 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_33, L_35, L_36, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)IsInstSealed(L_37, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_38 = __this->get_myTreeList_24();
		GameObject_t3674682005 * L_39 = V_3;
		List_1_Add_m3484746339(L_38, L_39, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_00ee:
	{
		goto IL_0134;
	}

IL_00f3:
	{
		ObjectU5BU5D_t1108656482* L_40 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_40, _stringLiteral4239543602);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4239543602);
		ObjectU5BU5D_t1108656482* L_41 = L_40;
		int32_t L_42 = V_0;
		int32_t L_43 = L_42;
		Il2CppObject * L_44 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_43);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_44);
		ObjectU5BU5D_t1108656482* L_45 = L_41;
		ArrayElementTypeCheck (L_45, _stringLiteral3274159676);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3274159676);
		ObjectU5BU5D_t1108656482* L_46 = L_45;
		List_1_t747900261 * L_47 = __this->get_myTreeList_24();
		int32_t L_48 = List_1_get_Count_m3710384005(L_47, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_49 = L_48;
		Il2CppObject * L_50 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_49);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Concat_m3016520001(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_0134:
	{
		int32_t L_52 = V_0;
		V_0 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_0138:
	{
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0007;
		}
	}

IL_0143:
	{
		V_4 = 0;
		goto IL_02ec;
	}

IL_014b:
	{
		List_1_t747900261 * L_54 = __this->get_myTreeList_24();
		int32_t L_55 = List_1_get_Count_m3710384005(L_54, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_56 = __this->get_myTreeAmount_19();
		if ((((int32_t)L_55) >= ((int32_t)L_56)))
		{
			goto IL_02a4;
		}
	}
	{
		Vector2_t4282066565 * L_57 = __this->get_address_of_myTreePosition_20();
		float L_58 = L_57->get_x_1();
		Vector2_t4282066565 * L_59 = __this->get_address_of_myTreePosition_20();
		float L_60 = L_59->get_x_1();
		float L_61 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_58)), L_60, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_62 = __this->get_address_of_myTreePosition_20();
		float L_63 = L_62->get_y_2();
		Vector2_t4282066565 * L_64 = __this->get_address_of_myTreePosition_20();
		float L_65 = L_64->get_y_2();
		float L_66 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_63)), L_65, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_5), L_61, L_66, /*hidden argument*/NULL);
		V_6 = (bool)0;
		V_7 = 0;
		goto IL_01e7;
	}

IL_01ab:
	{
		List_1_t747900261 * L_67 = __this->get_myTreeList_24();
		int32_t L_68 = V_7;
		GameObject_t3674682005 * L_69 = List_1_get_Item_m1581171248(L_67, L_68, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_70 = GameObject_get_transform_m1278640159(L_69, /*hidden argument*/NULL);
		Vector3_t4282066566  L_71 = Transform_get_position_m2211398607(L_70, /*hidden argument*/NULL);
		Vector2_t4282066565  L_72 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		Vector2_t4282066565  L_73 = V_5;
		float L_74 = Vector2_Distance_m340609291(NULL /*static, unused*/, L_72, L_73, /*hidden argument*/NULL);
		float L_75 = __this->get_myTreeDistanceMax_22();
		if ((!(((float)L_74) < ((float)L_75))))
		{
			goto IL_01e1;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_01f9;
	}

IL_01e1:
	{
		int32_t L_76 = V_7;
		V_7 = ((int32_t)((int32_t)L_76+(int32_t)1));
	}

IL_01e7:
	{
		int32_t L_77 = V_7;
		List_1_t747900261 * L_78 = __this->get_myTreeList_24();
		int32_t L_79 = List_1_get_Count_m3710384005(L_78, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_77) < ((int32_t)L_79)))
		{
			goto IL_01ab;
		}
	}

IL_01f9:
	{
		bool L_80 = V_6;
		if (!L_80)
		{
			goto IL_0216;
		}
	}
	{
		Vector2_t4282066565  L_81 = V_5;
		List_1_t747900261 * L_82 = __this->get_mySiteList_7();
		float L_83 = __this->get_myTreeDistanceToOthers_21();
		bool L_84 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_81, L_82, L_83, /*hidden argument*/NULL);
		V_6 = L_84;
	}

IL_0216:
	{
		bool L_85 = V_6;
		if (!L_85)
		{
			goto IL_0233;
		}
	}
	{
		Vector2_t4282066565  L_86 = V_5;
		List_1_t747900261 * L_87 = __this->get_myStationList_13();
		float L_88 = __this->get_myTreeDistanceToOthers_21();
		bool L_89 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_86, L_87, L_88, /*hidden argument*/NULL);
		V_6 = L_89;
	}

IL_0233:
	{
		bool L_90 = V_6;
		if (!L_90)
		{
			goto IL_0250;
		}
	}
	{
		Vector2_t4282066565  L_91 = V_5;
		List_1_t747900261 * L_92 = __this->get_myStationList_13();
		float L_93 = __this->get_myTreeDistanceToOthers_21();
		bool L_94 = CS_LoadStage_CheckIfFarEnoughLine_m482066135(__this, L_91, L_92, L_93, /*hidden argument*/NULL);
		V_6 = L_94;
	}

IL_0250:
	{
		bool L_95 = V_6;
		if (!L_95)
		{
			goto IL_026d;
		}
	}
	{
		Vector2_t4282066565  L_96 = V_5;
		List_1_t747900261 * L_97 = __this->get_myTreeList_24();
		float L_98 = __this->get_myTreeDistanceMin_23();
		bool L_99 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_96, L_97, L_98, /*hidden argument*/NULL);
		V_6 = L_99;
	}

IL_026d:
	{
		bool L_100 = V_6;
		if (!L_100)
		{
			goto IL_029f;
		}
	}
	{
		GameObject_t3674682005 * L_101 = __this->get_myTree_17();
		Vector2_t4282066565  L_102 = V_5;
		Vector3_t4282066566  L_103 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_104 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_105 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_101, L_103, L_104, /*hidden argument*/NULL);
		V_8 = ((GameObject_t3674682005 *)IsInstSealed(L_105, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_106 = __this->get_myTreeList_24();
		GameObject_t3674682005 * L_107 = V_8;
		List_1_Add_m3484746339(L_106, L_107, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_029f:
	{
		goto IL_02e6;
	}

IL_02a4:
	{
		ObjectU5BU5D_t1108656482* L_108 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_108, _stringLiteral4239543602);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4239543602);
		ObjectU5BU5D_t1108656482* L_109 = L_108;
		int32_t L_110 = V_4;
		int32_t L_111 = L_110;
		Il2CppObject * L_112 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_111);
		ArrayElementTypeCheck (L_109, L_112);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_112);
		ObjectU5BU5D_t1108656482* L_113 = L_109;
		ArrayElementTypeCheck (L_113, _stringLiteral3274159676);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3274159676);
		ObjectU5BU5D_t1108656482* L_114 = L_113;
		List_1_t747900261 * L_115 = __this->get_myTreeList_24();
		int32_t L_116 = List_1_get_Count_m3710384005(L_115, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_117 = L_116;
		Il2CppObject * L_118 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_117);
		ArrayElementTypeCheck (L_114, L_118);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_118);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_119 = String_Concat_m3016520001(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		goto IL_02f8;
	}

IL_02e6:
	{
		int32_t L_120 = V_4;
		V_4 = ((int32_t)((int32_t)L_120+(int32_t)1));
	}

IL_02ec:
	{
		int32_t L_121 = V_4;
		if ((((int32_t)L_121) < ((int32_t)((int32_t)5000))))
		{
			goto IL_014b;
		}
	}

IL_02f8:
	{
		return;
	}
}
// System.Void CS_LoadStage::InitFriend()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3601309948;
extern Il2CppCodeGenString* _stringLiteral3274159676;
extern const uint32_t CS_LoadStage_InitFriend_m3060111968_MetadataUsageId;
extern "C"  void CS_LoadStage_InitFriend_m3060111968 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_InitFriend_m3060111968_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t3674682005 * V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t4282066565  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	GameObject_t3674682005 * V_6 = NULL;
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0007:
	{
		List_1_t747900261 * L_0 = __this->get_mySiteList_7();
		int32_t L_1 = V_0;
		GameObject_t3674682005 * L_2 = List_1_get_Item_m1581171248(L_0, L_1, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector2_t4282066565  L_5 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = Random_get_insideUnitCircle_m3455477774(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_myFriendDistance_28();
		Vector2_t4282066565  L_8 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector2_t4282066565  L_9 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		GameObject_t3674682005 * L_10 = __this->get_myFriend_25();
		Vector2_t4282066565  L_11 = V_1;
		Vector3_t4282066566  L_12 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_13 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_14 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_10, L_12, L_13, /*hidden argument*/NULL);
		V_2 = ((GameObject_t3674682005 *)IsInstSealed(L_14, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_15 = __this->get_myFriendList_29();
		GameObject_t3674682005 * L_16 = V_2;
		List_1_Add_m3484746339(L_15, L_16, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_18 = V_0;
		List_1_t747900261 * L_19 = __this->get_mySiteList_7();
		int32_t L_20 = List_1_get_Count_m3710384005(L_19, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		V_3 = 0;
		goto IL_01bd;
	}

IL_007c:
	{
		List_1_t747900261 * L_21 = __this->get_myFriendList_29();
		int32_t L_22 = List_1_get_Count_m3710384005(L_21, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_23 = __this->get_myFriendAmount_26();
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0178;
		}
	}
	{
		Vector2_t4282066565 * L_24 = __this->get_address_of_myFriendPosition_27();
		float L_25 = L_24->get_x_1();
		Vector2_t4282066565 * L_26 = __this->get_address_of_myFriendPosition_27();
		float L_27 = L_26->get_x_1();
		float L_28 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_25)), L_27, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_29 = __this->get_address_of_myFriendPosition_27();
		float L_30 = L_29->get_y_2();
		Vector2_t4282066565 * L_31 = __this->get_address_of_myFriendPosition_27();
		float L_32 = L_31->get_y_2();
		float L_33 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_30)), L_32, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_4), L_28, L_33, /*hidden argument*/NULL);
		V_5 = (bool)1;
		Vector2_t4282066565  L_34 = V_4;
		List_1_t747900261 * L_35 = __this->get_myFriendList_29();
		float L_36 = __this->get_myFriendDistance_28();
		bool L_37 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_34, L_35, L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0107;
		}
	}
	{
		Vector2_t4282066565  L_39 = V_4;
		List_1_t747900261 * L_40 = __this->get_myStationList_13();
		float L_41 = __this->get_myFriendDistance_28();
		bool L_42 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_39, L_40, L_41, /*hidden argument*/NULL);
		V_5 = L_42;
	}

IL_0107:
	{
		bool L_43 = V_5;
		if (!L_43)
		{
			goto IL_0124;
		}
	}
	{
		Vector2_t4282066565  L_44 = V_4;
		List_1_t747900261 * L_45 = __this->get_myStationList_13();
		float L_46 = __this->get_myFriendDistance_28();
		bool L_47 = CS_LoadStage_CheckIfFarEnoughLine_m482066135(__this, L_44, L_45, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
	}

IL_0124:
	{
		bool L_48 = V_5;
		if (!L_48)
		{
			goto IL_0141;
		}
	}
	{
		Vector2_t4282066565  L_49 = V_4;
		List_1_t747900261 * L_50 = __this->get_myTreeList_24();
		float L_51 = __this->get_myFriendDistance_28();
		bool L_52 = CS_LoadStage_CheckIfFarEnough_m2514632427(__this, L_49, L_50, L_51, /*hidden argument*/NULL);
		V_5 = L_52;
	}

IL_0141:
	{
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_0173;
		}
	}
	{
		GameObject_t3674682005 * L_54 = __this->get_myFriend_25();
		Vector2_t4282066565  L_55 = V_4;
		Vector3_t4282066566  L_56 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_57 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_58 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_54, L_56, L_57, /*hidden argument*/NULL);
		V_6 = ((GameObject_t3674682005 *)IsInstSealed(L_58, GameObject_t3674682005_il2cpp_TypeInfo_var));
		List_1_t747900261 * L_59 = __this->get_myFriendList_29();
		GameObject_t3674682005 * L_60 = V_6;
		List_1_Add_m3484746339(L_59, L_60, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_0173:
	{
		goto IL_01b9;
	}

IL_0178:
	{
		ObjectU5BU5D_t1108656482* L_61 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_61, _stringLiteral3601309948);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral3601309948);
		ObjectU5BU5D_t1108656482* L_62 = L_61;
		int32_t L_63 = V_3;
		int32_t L_64 = L_63;
		Il2CppObject * L_65 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_64);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_65);
		ObjectU5BU5D_t1108656482* L_66 = L_62;
		ArrayElementTypeCheck (L_66, _stringLiteral3274159676);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral3274159676);
		ObjectU5BU5D_t1108656482* L_67 = L_66;
		List_1_t747900261 * L_68 = __this->get_myFriendList_29();
		int32_t L_69 = List_1_get_Count_m3710384005(L_68, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		int32_t L_70 = L_69;
		Il2CppObject * L_71 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_70);
		ArrayElementTypeCheck (L_67, L_71);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_71);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m3016520001(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		goto IL_01c8;
	}

IL_01b9:
	{
		int32_t L_73 = V_3;
		V_3 = ((int32_t)((int32_t)L_73+(int32_t)1));
	}

IL_01bd:
	{
		int32_t L_74 = V_3;
		if ((((int32_t)L_74) < ((int32_t)((int32_t)1000))))
		{
			goto IL_007c;
		}
	}

IL_01c8:
	{
		return;
	}
}
// System.Void CS_LoadStage::InitWorker()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const MethodInfo* List_1_Add_m339399_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern const uint32_t CS_LoadStage_InitWorker_m223554368_MetadataUsageId;
extern "C"  void CS_LoadStage_InitWorker_m223554368 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_InitWorker_m223554368_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t4282066565  V_2;
	memset(&V_2, 0, sizeof(V_2));
	GameObject_t3674682005 * V_3 = NULL;
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t1355284821 * L_0 = __this->get_myWorkerTargetList_34();
		List_1_t747900261 * L_1 = __this->get_mySiteList_7();
		int32_t L_2 = V_0;
		GameObject_t3674682005 * L_3 = List_1_get_Item_m1581171248(L_1, L_2, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_4 = GameObject_get_transform_m1278640159(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		List_1_Add_m339399(L_0, L_6, /*hidden argument*/List_1_Add_m339399_MethodInfo_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t747900261 * L_9 = __this->get_mySiteList_7();
		int32_t L_10 = List_1_get_Count_m3710384005(L_9, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_00d6;
	}

IL_0049:
	{
		Vector2_t4282066565 * L_11 = __this->get_address_of_myWorkerPosition_32();
		float L_12 = L_11->get_x_1();
		Vector2_t4282066565 * L_13 = __this->get_address_of_myWorkerPosition_32();
		float L_14 = L_13->get_x_1();
		float L_15 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_12)), L_14, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_16 = __this->get_address_of_myWorkerPosition_32();
		float L_17 = L_16->get_y_2();
		Vector2_t4282066565 * L_18 = __this->get_address_of_myWorkerPosition_32();
		float L_19 = L_18->get_y_2();
		float L_20 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_17)), L_19, /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_2), L_15, L_20, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_21 = __this->get_myWorker_30();
		Vector2_t4282066565  L_22 = V_2;
		Vector3_t4282066566  L_23 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_24 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_25 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_21, L_23, L_24, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)IsInstSealed(L_25, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_26 = V_3;
		CS_Worker_t3089225293 * L_27 = GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708(L_26, /*hidden argument*/GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708_MethodInfo_var);
		List_1_t1355284821 * L_28 = __this->get_myWorkerTargetList_34();
		CS_Worker_InitMyTargetList_m1937019277(L_27, L_28, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_29 = V_3;
		CS_Worker_t3089225293 * L_30 = GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708(L_29, /*hidden argument*/GameObject_GetComponent_TisCS_Worker_t3089225293_m1626558708_MethodInfo_var);
		List_1_t1355284821 * L_31 = __this->get_myWorkerTargetList_34();
		CS_Worker_InitMyTargetList_m1937019277(L_30, L_31, /*hidden argument*/NULL);
		List_1_t747900261 * L_32 = __this->get_myWorkerList_33();
		GameObject_t3674682005 * L_33 = V_3;
		List_1_Add_m3484746339(L_32, L_33, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->get_myWorkerAmount_31();
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
// System.Boolean CS_LoadStage::CheckIfFarEnough(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Single)
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const uint32_t CS_LoadStage_CheckIfFarEnough_m2514632427_MetadataUsageId;
extern "C"  bool CS_LoadStage_CheckIfFarEnough_m2514632427 (CS_LoadStage_t3129050249 * __this, Vector2_t4282066565  ___g_position0, List_1_t747900261 * ___g_list1, float ___g_distance2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_CheckIfFarEnough_m2514632427_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0007:
	{
		List_1_t747900261 * L_0 = ___g_list1;
		int32_t L_1 = V_0;
		GameObject_t3674682005 * L_2 = List_1_get_Item_m1581171248(L_0, L_1, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector2_t4282066565  L_5 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = ___g_position0;
		float L_7 = Vector2_Distance_m340609291(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		float L_8 = ___g_distance2;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		List_1_t747900261 * L_11 = ___g_list1;
		int32_t L_12 = List_1_get_Count_m3710384005(L_11, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean CS_LoadStage::CheckIfFarEnoughLine(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Single)
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const uint32_t CS_LoadStage_CheckIfFarEnoughLine_m482066135_MetadataUsageId;
extern "C"  bool CS_LoadStage_CheckIfFarEnoughLine_m482066135 (CS_LoadStage_t3129050249 * __this, Vector2_t4282066565  ___g_position0, List_1_t747900261 * ___g_list1, float ___g_distance2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_CheckIfFarEnoughLine_m482066135_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t747900261 * L_0 = ___g_list1;
		int32_t L_1 = List_1_get_Count_m3710384005(L_0, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_006c;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		List_1_t747900261 * L_4 = ___g_list1;
		int32_t L_5 = List_1_get_Count_m3710384005(L_4, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = V_1;
		List_1_t747900261 * L_7 = ___g_list1;
		int32_t L_8 = List_1_get_Count_m3710384005(L_7, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		V_1 = ((int32_t)((int32_t)L_6-(int32_t)L_8));
	}

IL_002e:
	{
		List_1_t747900261 * L_9 = ___g_list1;
		int32_t L_10 = V_0;
		GameObject_t3674682005 * L_11 = List_1_get_Item_m1581171248(L_9, L_10, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_12 = GameObject_get_transform_m1278640159(L_11, /*hidden argument*/NULL);
		Vector3_t4282066566  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		Vector2_t4282066565  L_14 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		List_1_t747900261 * L_15 = ___g_list1;
		int32_t L_16 = V_1;
		GameObject_t3674682005 * L_17 = List_1_get_Item_m1581171248(L_15, L_16, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_18 = GameObject_get_transform_m1278640159(L_17, /*hidden argument*/NULL);
		Vector3_t4282066566  L_19 = Transform_get_position_m2211398607(L_18, /*hidden argument*/NULL);
		Vector2_t4282066565  L_20 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector2_t4282066565  L_21 = ___g_position0;
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		float L_22 = CS_Global_DistanceToLine_m2415529535(NULL /*static, unused*/, L_14, L_20, L_21, /*hidden argument*/NULL);
		float L_23 = ___g_distance2;
		if ((!(((float)L_22) < ((float)L_23))))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0068:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_006c:
	{
		int32_t L_25 = V_0;
		List_1_t747900261 * L_26 = ___g_list1;
		int32_t L_27 = List_1_get_Count_m3710384005(L_26, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void CS_LoadStage::Update()
extern const MethodInfo* GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral48;
extern const uint32_t CS_LoadStage_Update_m3220463899_MetadataUsageId;
extern "C"  void CS_LoadStage_Update_m3220463899 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_Update_m3220463899_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_Timer_37();
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_Timer_37(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_Score_38();
		float L_3 = __this->get_Timer_37();
		float L_4 = __this->get_ScoreTotal_39();
		if ((!(((float)((float)((float)L_2-(float)L_3))) > ((float)L_4))))
		{
			goto IL_005d;
		}
	}
	{
		float L_5 = __this->get_Score_38();
		float L_6 = __this->get_Timer_37();
		__this->set_ScoreTotal_39(((float)((float)L_5-(float)L_6)));
		GameObject_t3674682005 * L_7 = __this->get_TX_Score_36();
		TextMesh_t2567681854 * L_8 = GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284(L_7, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284_MethodInfo_var);
		float* L_9 = __this->get_address_of_ScoreTotal_39();
		String_t* L_10 = Single_ToString_m639595682(L_9, _stringLiteral48, /*hidden argument*/NULL);
		TextMesh_set_text_m3628430759(L_8, L_10, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void CS_LoadStage::FindASite()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCS_PlaySFX_t3552923586_m2170439171_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral48;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral1536;
extern const uint32_t CS_LoadStage_FindASite_m3988395807_MetadataUsageId;
extern "C"  void CS_LoadStage_FindASite_m3988395807 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_LoadStage_FindASite_m3988395807_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_mySiteFoundAmount_4();
		__this->set_mySiteFoundAmount_4(((int32_t)((int32_t)L_0+(int32_t)1)));
		CS_PlaySFX_t3552923586 * L_1 = Component_GetComponent_TisCS_PlaySFX_t3552923586_m2170439171(__this, /*hidden argument*/Component_GetComponent_TisCS_PlaySFX_t3552923586_m2170439171_MethodInfo_var);
		int32_t L_2 = __this->get_mySiteFoundAmount_4();
		CS_PlaySFX_PlaySFX_m2003410041(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_3 = __this->get_mySiteFoundAmount_4();
		int32_t L_4 = __this->get_mySiteAmount_3();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		float L_5 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_CAMERA_SIZE_MAX_7();
		V_0 = L_5;
		Camera_t2727095145 * L_6 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		CS_Camera_t2503558644 * L_7 = Component_GetComponent_TisCS_Camera_t2503558644_m2172164933(L_6, /*hidden argument*/Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var);
		CS_Camera_SetIsClear_m3902672037(L_7, (bool)1, /*hidden argument*/NULL);
		float L_8 = __this->get_Timer_37();
		V_1 = ((float)((float)L_8/(float)(60.0f)));
		float L_9 = __this->get_Timer_37();
		V_2 = (fmodf(L_9, (60.0f)));
		GameObject_t3674682005 * L_10 = __this->get_TX_Timer_35();
		TextMesh_t2567681854 * L_11 = GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284(L_10, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t2567681854_m1543870284_MethodInfo_var);
		String_t* L_12 = Single_ToString_m639595682((&V_1), _stringLiteral48, /*hidden argument*/NULL);
		String_t* L_13 = Single_ToString_m639595682((&V_2), _stringLiteral1536, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m1825781833(NULL /*static, unused*/, L_12, _stringLiteral58, L_13, /*hidden argument*/NULL);
		TextMesh_set_text_m3628430759(L_11, L_14, /*hidden argument*/NULL);
		CS_LoadStage_ShowInfo_m3277577437(__this, /*hidden argument*/NULL);
		goto IL_00c7;
	}

IL_009f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		float L_15 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_CAMERA_SIZE_DEFAULT_6();
		float L_16 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_CAMERA_SIZE_MAX_7();
		float L_17 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_CAMERA_SIZE_DEFAULT_6();
		int32_t L_18 = __this->get_mySiteFoundAmount_4();
		int32_t L_19 = __this->get_mySiteAmount_3();
		V_0 = ((float)((float)L_15+(float)((float)((float)((float)((float)((float)((float)((float)((float)L_16-(float)L_17))*(float)(0.5f)))*(float)(((float)((float)L_18)))))/(float)(((float)((float)L_19)))))));
	}

IL_00c7:
	{
		Camera_t2727095145 * L_20 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		CS_Camera_t2503558644 * L_21 = Component_GetComponent_TisCS_Camera_t2503558644_m2172164933(L_20, /*hidden argument*/Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var);
		float L_22 = V_0;
		CS_Camera_SetSize_m390067155(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::ShowInfo()
extern "C"  void CS_LoadStage_ShowInfo_m3277577437 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_TX_Timer_35();
		GameObject_SetActive_m3538205401(L_0, (bool)1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_TX_Score_36();
		GameObject_SetActive_m3538205401(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::HideInfo()
extern "C"  void CS_LoadStage_HideInfo_m2845529954 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_TX_Timer_35();
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_TX_Score_36();
		GameObject_SetActive_m3538205401(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::ShowPause()
extern "C"  void CS_LoadStage_ShowPause_m85095561 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_UI_Pause_40();
		GameObject_SetActive_m3538205401(L_0, (bool)1, /*hidden argument*/NULL);
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::HidePause()
extern "C"  void CS_LoadStage_HidePause_m3871492772 (CS_LoadStage_t3129050249 * __this, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_UI_Pause_40();
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_LoadStage::AddScore(System.Int32)
extern "C"  void CS_LoadStage_AddScore_m4196817236 (CS_LoadStage_t3129050249 * __this, int32_t ___g_score0, const MethodInfo* method)
{
	{
		float L_0 = __this->get_Score_38();
		int32_t L_1 = ___g_score0;
		__this->set_Score_38(((float)((float)L_0+(float)(((float)((float)L_1))))));
		return;
	}
}
// System.Void CS_MessageBox::.ctor()
extern "C"  void CS_MessageBox__ctor_m880246584 (CS_MessageBox_t1036826515 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_MessageBox::.cctor()
extern "C"  void CS_MessageBox__cctor_m1035744117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// CS_MessageBox CS_MessageBox::get_Instance()
extern Il2CppClass* CS_MessageBox_t1036826515_il2cpp_TypeInfo_var;
extern const uint32_t CS_MessageBox_get_Instance_m4170976330_MetadataUsageId;
extern "C"  CS_MessageBox_t1036826515 * CS_MessageBox_get_Instance_m4170976330 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_MessageBox_get_Instance_m4170976330_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_MessageBox_t1036826515_il2cpp_TypeInfo_var);
		CS_MessageBox_t1036826515 * L_0 = ((CS_MessageBox_t1036826515_StaticFields*)CS_MessageBox_t1036826515_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		return L_0;
	}
}
// System.Void CS_MessageBox::Awake()
extern Il2CppClass* CS_MessageBox_t1036826515_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_MessageBox_Awake_m1117851803_MetadataUsageId;
extern "C"  void CS_MessageBox_Awake_m1117851803 (CS_MessageBox_t1036826515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_MessageBox_Awake_m1117851803_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_MessageBox_t1036826515_il2cpp_TypeInfo_var);
		CS_MessageBox_t1036826515 * L_0 = ((CS_MessageBox_t1036826515_StaticFields*)CS_MessageBox_t1036826515_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_MessageBox_t1036826515_il2cpp_TypeInfo_var);
		CS_MessageBox_t1036826515 * L_2 = ((CS_MessageBox_t1036826515_StaticFields*)CS_MessageBox_t1036826515_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		GameObject_t3674682005 * L_4 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_MessageBox_t1036826515_il2cpp_TypeInfo_var);
		((CS_MessageBox_t1036826515_StaticFields*)CS_MessageBox_t1036826515_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
	}

IL_0036:
	{
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4064482788(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_MessageBox::LoadScene(System.String)
extern "C"  void CS_MessageBox_LoadScene_m1679319270 (CS_MessageBox_t1036826515 * __this, String_t* ___g_scene0, const MethodInfo* method)
{
	{
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		String_t* L_0 = ___g_scene0;
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlayBGM::.ctor()
extern "C"  void CS_PlayBGM__ctor_m2452078134 (CS_PlayBGM_t3552907269 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlayBGM::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* CS_AudioManager_t519772806_il2cpp_TypeInfo_var;
extern const uint32_t CS_PlayBGM_Start_m1399215926_MetadataUsageId;
extern "C"  void CS_PlayBGM_Start_m1399215926 (CS_PlayBGM_t3552907269 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlayBGM_Start_m1399215926_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioClip_t794140988 * L_0 = __this->get_myBGM_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_2 = CS_AudioManager_get_Instance_m22287600(NULL /*static, unused*/, /*hidden argument*/NULL);
		CS_AudioManager_StopBGM_m2310586409(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_3 = CS_AudioManager_get_Instance_m22287600(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioClip_t794140988 * L_4 = __this->get_myBGM_2();
		float L_5 = __this->get_myVolume_3();
		CS_AudioManager_PlayBGM_m2132025265(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Player::.ctor()
extern "C"  void CS_Player__ctor_m3005963707 (CS_Player_t2885557680 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Player::Start()
extern "C"  void CS_Player_Start_m1953101499 (CS_Player_t2885557680 * __this, const MethodInfo* method)
{
	{
		__this->set_onMove_4((bool)0);
		return;
	}
}
// System.Void CS_Player::Update()
extern "C"  void CS_Player_Update_m422456498 (CS_Player_t2885557680 * __this, const MethodInfo* method)
{
	{
		CS_Player_UpdateMove_m2335794147(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Player::UpdateMove()
extern const MethodInfo* Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var;
extern const uint32_t CS_Player_UpdateMove_m2335794147_MetadataUsageId;
extern "C"  void CS_Player_UpdateMove_m2335794147 (CS_Player_t2885557680 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Player_UpdateMove_m2335794147_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get_onMove_4();
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		Vector2_t4282066565  L_1 = __this->get_moveAxis_5();
		Vector2_t4282066565  L_2 = __this->get_myDirection_3();
		float L_3 = __this->get_moveSensitivity_8();
		Vector2_t4282066565  L_4 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector2_t4282066565  L_5 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_moveAxis_5(L_5);
		Vector2_t4282066565 * L_6 = __this->get_address_of_moveAxis_5();
		float L_7 = Vector2_get_magnitude_m1987058139(L_6, /*hidden argument*/NULL);
		if ((!(((float)L_7) > ((float)(1.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		Vector2_t4282066565 * L_8 = __this->get_address_of_moveAxis_5();
		Vector2_Normalize_m195575125(L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Rigidbody2D_t1743771669 * L_9 = __this->get_myRigidbody2D_2();
		Vector2_t4282066565  L_10 = __this->get_moveAxis_5();
		float L_11 = __this->get_mySpeed_6();
		Vector2_t4282066565  L_12 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_9, L_12, /*hidden argument*/NULL);
		float L_13 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_moveGravity_7();
		V_0 = ((float)((float)L_13*(float)L_14));
		Vector2_t4282066565 * L_15 = __this->get_address_of_moveAxis_5();
		float L_16 = Vector2_get_magnitude_m1987058139(L_15, /*hidden argument*/NULL);
		float L_17 = V_0;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0097;
		}
	}
	{
		Vector2_t4282066565  L_18 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_moveAxis_5(L_18);
		goto IL_00b5;
	}

IL_0097:
	{
		Vector2_t4282066565  L_19 = __this->get_moveAxis_5();
		Vector2_t4282066565 * L_20 = __this->get_address_of_moveAxis_5();
		float L_21 = Vector2_get_magnitude_m1987058139(L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		Vector2_t4282066565  L_23 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_19, ((float)((float)L_21-(float)L_22)), /*hidden argument*/NULL);
		__this->set_moveAxis_5(L_23);
	}

IL_00b5:
	{
		Camera_t2727095145 * L_24 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		CS_Camera_t2503558644 * L_25 = Component_GetComponent_TisCS_Camera_t2503558644_m2172164933(L_24, /*hidden argument*/Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var);
		Vector2_t4282066565  L_26 = __this->get_moveAxis_5();
		CS_Camera_SetPreMovePosition_m3046171762(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Player::SetDirection(UnityEngine.Vector2)
extern "C"  void CS_Player_SetDirection_m2761252820 (CS_Player_t2885557680 * __this, Vector2_t4282066565  ___g_direction0, const MethodInfo* method)
{
	{
		Vector2_t4282066565  L_0 = ___g_direction0;
		__this->set_myDirection_3(L_0);
		return;
	}
}
// System.Void CS_Player::SetOnMove(System.Boolean)
extern "C"  void CS_Player_SetOnMove_m1507427810 (CS_Player_t2885557680 * __this, bool ___g_onMove0, const MethodInfo* method)
{
	{
		bool L_0 = ___g_onMove0;
		__this->set_onMove_4(L_0);
		return;
	}
}
// System.Void CS_PlayerControl::.ctor()
extern "C"  void CS_PlayerControl__ctor_m3061742510 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	{
		__this->set_doubleClickScale_5((0.2f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlayerControl::Start()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_Player_t2885557680_m2953489073_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var;
extern const uint32_t CS_PlayerControl_Start_m2008880302_MetadataUsageId;
extern "C"  void CS_PlayerControl_Start_m2008880302 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlayerControl_Start_m2008880302_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_PLAYER_1();
		GameObject_t3674682005 * L_1 = GameObject_Find_m332785498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		CS_Player_t2885557680 * L_2 = GameObject_GetComponent_TisCS_Player_t2885557680_m2953489073(L_1, /*hidden argument*/GameObject_GetComponent_TisCS_Player_t2885557680_m2953489073_MethodInfo_var);
		__this->set_myPlayer_3(L_2);
		String_t* L_3 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_LOADSTAGE_2();
		GameObject_t3674682005 * L_4 = GameObject_Find_m332785498(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CS_LoadStage_t3129050249 * L_5 = GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420(L_4, /*hidden argument*/GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var);
		__this->set_myLoadStage_4(L_5);
		return;
	}
}
// System.Void CS_PlayerControl::Update()
extern "C"  void CS_PlayerControl_Update_m2151599391 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_doubleClickTimer_6();
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_doubleClickTimer_6(((float)((float)L_0+(float)L_1)));
		return;
	}
}
// System.Void CS_PlayerControl::OnMouseDown()
extern "C"  void CS_PlayerControl_OnMouseDown_m1673134676 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	{
		CS_Player_t2885557680 * L_0 = __this->get_myPlayer_3();
		CS_Player_SetOnMove_m1507427810(L_0, (bool)1, /*hidden argument*/NULL);
		float L_1 = __this->get_doubleClickTimer_6();
		float L_2 = __this->get_doubleClickScale_5();
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		CS_PlayerControl_DoubleClick_m1617133315(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		__this->set_doubleClickTimer_6((0.0f));
		return;
	}
}
// System.Void CS_PlayerControl::OnMouseDrag()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var;
extern const uint32_t CS_PlayerControl_OnMouseDrag_m1675243110_MetadataUsageId;
extern "C"  void CS_PlayerControl_OnMouseDrag_m1675243110 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlayerControl_OnMouseDrag_m1675243110_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t4282066565  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Camera_t2727095145 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Vector3_t4282066566  L_1 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Camera_ScreenToWorldPoint_m1572306334(L_0, L_1, /*hidden argument*/NULL);
		Camera_t2727095145 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		CS_Camera_t2503558644 * L_4 = Component_GetComponent_TisCS_Camera_t2503558644_m2172164933(L_3, /*hidden argument*/Component_GetComponent_TisCS_Camera_t2503558644_m2172164933_MethodInfo_var);
		Vector3_t4282066566  L_5 = CS_Camera_GetDeltaPostion_m709351957(L_4, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_y_2();
		float L_8 = (&V_0)->get_z_3();
		V_1 = ((float)((float)L_7-(float)((float)((float)L_8*(float)(1.717f)))));
		float L_9 = (&V_0)->get_x_1();
		float L_10 = V_1;
		Vector3__ctor_m2926210380((&V_0), L_9, L_10, (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = V_0;
		CS_Player_t2885557680 * L_12 = __this->get_myPlayer_3();
		Transform_t1659122786 * L_13 = Component_get_transform_m4257140443(L_12, /*hidden argument*/NULL);
		Vector3_t4282066566  L_14 = Transform_get_position_m2211398607(L_13, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_11, L_14, /*hidden argument*/NULL);
		Vector2_t4282066565  L_16 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		Vector2_Normalize_m195575125((&V_2), /*hidden argument*/NULL);
		CS_Player_t2885557680 * L_17 = __this->get_myPlayer_3();
		Vector2_t4282066565  L_18 = V_2;
		CS_Player_SetDirection_m2761252820(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlayerControl::OnMouseUp()
extern "C"  void CS_PlayerControl_OnMouseUp_m1387719245 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	{
		CS_Player_t2885557680 * L_0 = __this->get_myPlayer_3();
		CS_Player_SetOnMove_m1507427810(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlayerControl::DoubleClick()
extern Il2CppClass* Single_t4291918972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral745064195;
extern const uint32_t CS_PlayerControl_DoubleClick_m1617133315_MetadataUsageId;
extern "C"  void CS_PlayerControl_DoubleClick_m1617133315 (CS_PlayerControl_t51779981 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlayerControl_DoubleClick_m1617133315_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_doubleClickTimer_6();
		float L_1 = L_0;
		Il2CppObject * L_2 = Box(Single_t4291918972_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral745064195, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		CS_LoadStage_t3129050249 * L_4 = __this->get_myLoadStage_4();
		CS_LoadStage_ShowPause_m85095561(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlaySFX::.ctor()
extern "C"  void CS_PlaySFX__ctor_m4281787161 (CS_PlaySFX_t3552923586 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PlaySFX::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t CS_PlaySFX_Start_m3228924953_MetadataUsageId;
extern "C"  void CS_PlaySFX_Start_m3228924953 (CS_PlaySFX_t3552923586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlaySFX_Start_m3228924953_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_playOnStart_3();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		bool L_1 = __this->get_playRandomly_4();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		AudioClipU5BU5D_t3001083477* L_2 = __this->get_mySFX_2();
		int32_t L_3 = Random_Range_m75452833(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		CS_PlaySFX_PlaySFX_m2003410041(__this, L_3, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_002f:
	{
		CS_PlaySFX_PlaySFX_m2003410041(__this, 0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		bool L_4 = __this->get_playOnce_5();
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void CS_PlaySFX::PlaySFX(System.Int32)
extern Il2CppClass* CS_AudioManager_t519772806_il2cpp_TypeInfo_var;
extern const uint32_t CS_PlaySFX_PlaySFX_m2003410041_MetadataUsageId;
extern "C"  void CS_PlaySFX_PlaySFX_m2003410041 (CS_PlaySFX_t3552923586 * __this, int32_t ___t_number0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PlaySFX_PlaySFX_m2003410041_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_playVolume_6();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_1 = CS_AudioManager_get_Instance_m22287600(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioClipU5BU5D_t3001083477* L_2 = __this->get_mySFX_2();
		int32_t L_3 = ___t_number0;
		int32_t L_4 = L_3;
		AudioClip_t794140988 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		CS_AudioManager_PlaySFX_m1038878063(L_1, L_5, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_AudioManager_t519772806_il2cpp_TypeInfo_var);
		CS_AudioManager_t519772806 * L_6 = CS_AudioManager_get_Instance_m22287600(NULL /*static, unused*/, /*hidden argument*/NULL);
		AudioClipU5BU5D_t3001083477* L_7 = __this->get_mySFX_2();
		int32_t L_8 = ___t_number0;
		int32_t L_9 = L_8;
		AudioClip_t794140988 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = __this->get_playVolume_6();
		CS_AudioManager_PlaySFX_m2912739860(L_6, L_10, L_11, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void CS_PreView::.ctor()
extern "C"  void CS_PreView__ctor_m1271083458 (CS_PreView_t3727372025 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_PreView::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1316940703;
extern const uint32_t CS_PreView_OnTriggerEnter2D_m1564388854_MetadataUsageId;
extern "C"  void CS_PreView_OnTriggerEnter2D_m1564388854 (CS_PreView_t3727372025 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_PreView_OnTriggerEnter2D_m1564388854_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral1316940703, /*hidden argument*/NULL);
		Collider2D_t1552025098 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_2 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_PLAYER_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		Collider2D_t1552025098 * L_4 = ___other0;
		String_t* L_5 = Component_get_tag_m217485006(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_6 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_FRIEND_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}

IL_0034:
	{
		GameObject_t3674682005 * L_8 = __this->get_myObject_2();
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Transform_get_position_m2211398607(L_9, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_11 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_8, L_10, L_11, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_12 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void CS_Site::.ctor()
extern "C"  void CS_Site__ctor_m62527061 (CS_Site_t1799735766 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Site::Start()
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var;
extern const uint32_t CS_Site_Start_m3304632149_MetadataUsageId;
extern "C"  void CS_Site_Start_m3304632149 (CS_Site_t1799735766 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Site_Start_m3304632149_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_NAME_LOADSTAGE_2();
		GameObject_t3674682005 * L_1 = GameObject_Find_m332785498(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		CS_LoadStage_t3129050249 * L_2 = GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420(L_1, /*hidden argument*/GameObject_GetComponent_TisCS_LoadStage_t3129050249_m4208778420_MethodInfo_var);
		CS_LoadStage_FindASite_m3988395807(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Subway::.ctor()
extern Il2CppClass* List_1_t747900261_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3790385523_MethodInfo_var;
extern const uint32_t CS_Subway__ctor_m3944266669_MetadataUsageId;
extern "C"  void CS_Subway__ctor_m3944266669 (CS_Subway_t2979784574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Subway__ctor_m3944266669_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t747900261 * L_0 = (List_1_t747900261 *)il2cpp_codegen_object_new(List_1_t747900261_il2cpp_TypeInfo_var);
		List_1__ctor_m3790385523(L_0, /*hidden argument*/List_1__ctor_m3790385523_MethodInfo_var);
		__this->set_myPassengerList_4(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Subway::Update()
extern const MethodInfo* List_1_get_Item_m2619548776_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3550203021_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m1581171248_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3710384005_MethodInfo_var;
extern const uint32_t CS_Subway_Update_m3740044544_MetadataUsageId;
extern "C"  void CS_Subway_Update_m3740044544 (CS_Subway_t2979784574 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Subway_Update_m3740044544_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t4282066565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t4282066565  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t4282066565  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		bool L_0 = __this->get_isOn_5();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = __this->get_myTimer_8();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = __this->get_myTimer_8();
		float L_3 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_myTimer_8(((float)((float)L_2-(float)L_3)));
		return;
	}

IL_002f:
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		Vector2_t4282066565  L_6 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t1355284821 * L_7 = __this->get_myStationPositionList_3();
		int32_t L_8 = __this->get_myNextStationNum_2();
		Vector2_t4282066565  L_9 = List_1_get_Item_m2619548776(L_7, L_8, /*hidden argument*/List_1_get_Item_m2619548776_MethodInfo_var);
		V_1 = L_9;
		Vector2_t4282066565  L_10 = V_1;
		Vector2_t4282066565  L_11 = V_0;
		Vector2_t4282066565  L_12 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		Vector2_t4282066565  L_13 = V_0;
		Vector2_t4282066565  L_14 = V_1;
		float L_15 = Vector2_Distance_m340609291(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_myVelocity_6();
		float L_17 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_15) < ((float)((float)((float)L_16*(float)L_17))))))
		{
			goto IL_00d3;
		}
	}
	{
		Vector2_t4282066565  L_18 = Vector2_get_normalized_m123128511((&V_2), /*hidden argument*/NULL);
		Vector2_t4282066565  L_19 = V_0;
		Vector2_t4282066565  L_20 = V_1;
		float L_21 = Vector2_Distance_m340609291(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		Vector2_t4282066565  L_22 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_18, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = __this->get_myStopTime_7();
		__this->set_myTimer_8(L_23);
		int32_t L_24 = __this->get_myNextStationNum_2();
		__this->set_myNextStationNum_2(((int32_t)((int32_t)L_24+(int32_t)1)));
		int32_t L_25 = __this->get_myNextStationNum_2();
		List_1_t1355284821 * L_26 = __this->get_myStationPositionList_3();
		int32_t L_27 = List_1_get_Count_m3550203021(L_26, /*hidden argument*/List_1_get_Count_m3550203021_MethodInfo_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_28 = __this->get_myNextStationNum_2();
		List_1_t1355284821 * L_29 = __this->get_myStationPositionList_3();
		int32_t L_30 = List_1_get_Count_m3550203021(L_29, /*hidden argument*/List_1_get_Count_m3550203021_MethodInfo_var);
		__this->set_myNextStationNum_2(((int32_t)((int32_t)L_28-(int32_t)L_30)));
	}

IL_00ce:
	{
		goto IL_00f0;
	}

IL_00d3:
	{
		Vector2_t4282066565  L_31 = Vector2_get_normalized_m123128511((&V_2), /*hidden argument*/NULL);
		float L_32 = __this->get_myVelocity_6();
		Vector2_t4282066565  L_33 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		float L_34 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_35 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
	}

IL_00f0:
	{
		Vector2_t4282066565  L_36 = V_0;
		Vector2_t4282066565  L_37 = V_3;
		Vector2_t4282066565  L_38 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		Transform_t1659122786 * L_39 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector2_t4282066565  L_40 = V_0;
		Vector3_t4282066566  L_41 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_39, L_41, /*hidden argument*/NULL);
		V_4 = 0;
		goto IL_013f;
	}

IL_0111:
	{
		List_1_t747900261 * L_42 = __this->get_myPassengerList_4();
		int32_t L_43 = V_4;
		GameObject_t3674682005 * L_44 = List_1_get_Item_m1581171248(L_42, L_43, /*hidden argument*/List_1_get_Item_m1581171248_MethodInfo_var);
		Transform_t1659122786 * L_45 = GameObject_get_transform_m1278640159(L_44, /*hidden argument*/NULL);
		Transform_t1659122786 * L_46 = L_45;
		Vector3_t4282066566  L_47 = Transform_get_position_m2211398607(L_46, /*hidden argument*/NULL);
		Vector2_t4282066565  L_48 = V_3;
		Vector3_t4282066566  L_49 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		Vector3_t4282066566  L_50 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_47, L_49, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_46, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_013f:
	{
		int32_t L_52 = V_4;
		List_1_t747900261 * L_53 = __this->get_myPassengerList_4();
		int32_t L_54 = List_1_get_Count_m3710384005(L_53, /*hidden argument*/List_1_get_Count_m3710384005_MethodInfo_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_0111;
		}
	}
	{
		return;
	}
}
// System.Void CS_Subway::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_Contains_m1073997453_MethodInfo_var;
extern const MethodInfo* List_1_Add_m3484746339_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1939616659;
extern const uint32_t CS_Subway_OnTriggerEnter2D_m3634842987_MetadataUsageId;
extern "C"  void CS_Subway_OnTriggerEnter2D_m3634842987 (CS_Subway_t2979784574 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Subway_OnTriggerEnter2D_m3634842987_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t1552025098 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_2 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_PLAYER_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t1552025098 * L_4 = ___other0;
		String_t* L_5 = Component_get_tag_m217485006(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_6 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_FRIEND_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t1552025098 * L_8 = ___other0;
		String_t* L_9 = Component_get_tag_m217485006(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_10 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_WORKER_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}

IL_003f:
	{
		Collider2D_t1552025098 * L_12 = ___other0;
		String_t* L_13 = Component_get_tag_m217485006(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1939616659, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		List_1_t747900261 * L_15 = __this->get_myPassengerList_4();
		Collider2D_t1552025098 * L_16 = ___other0;
		GameObject_t3674682005 * L_17 = Component_get_gameObject_m1170635899(L_16, /*hidden argument*/NULL);
		bool L_18 = List_1_Contains_m1073997453(L_15, L_17, /*hidden argument*/List_1_Contains_m1073997453_MethodInfo_var);
		if (L_18)
		{
			goto IL_007b;
		}
	}
	{
		List_1_t747900261 * L_19 = __this->get_myPassengerList_4();
		Collider2D_t1552025098 * L_20 = ___other0;
		GameObject_t3674682005 * L_21 = Component_get_gameObject_m1170635899(L_20, /*hidden argument*/NULL);
		List_1_Add_m3484746339(L_19, L_21, /*hidden argument*/List_1_Add_m3484746339_MethodInfo_var);
	}

IL_007b:
	{
		return;
	}
}
// System.Void CS_Subway::OnTriggerExit2D(UnityEngine.Collider2D)
extern Il2CppClass* CS_Global_t2628290162_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_Contains_m1073997453_MethodInfo_var;
extern const MethodInfo* List_1_Remove_m2275954034_MethodInfo_var;
extern const uint32_t CS_Subway_OnTriggerExit2D_m2006752727_MetadataUsageId;
extern "C"  void CS_Subway_OnTriggerExit2D_m2006752727 (CS_Subway_t2979784574 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Subway_OnTriggerExit2D_m2006752727_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider2D_t1552025098 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_2 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_PLAYER_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t1552025098 * L_4 = ___other0;
		String_t* L_5 = Component_get_tag_m217485006(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_6 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_FRIEND_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		Collider2D_t1552025098 * L_8 = ___other0;
		String_t* L_9 = Component_get_tag_m217485006(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CS_Global_t2628290162_il2cpp_TypeInfo_var);
		String_t* L_10 = ((CS_Global_t2628290162_StaticFields*)CS_Global_t2628290162_il2cpp_TypeInfo_var->static_fields)->get_TAG_WORKER_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}

IL_003f:
	{
		List_1_t747900261 * L_12 = __this->get_myPassengerList_4();
		Collider2D_t1552025098 * L_13 = ___other0;
		GameObject_t3674682005 * L_14 = Component_get_gameObject_m1170635899(L_13, /*hidden argument*/NULL);
		bool L_15 = List_1_Contains_m1073997453(L_12, L_14, /*hidden argument*/List_1_Contains_m1073997453_MethodInfo_var);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		List_1_t747900261 * L_16 = __this->get_myPassengerList_4();
		Collider2D_t1552025098 * L_17 = ___other0;
		GameObject_t3674682005 * L_18 = Component_get_gameObject_m1170635899(L_17, /*hidden argument*/NULL);
		List_1_Remove_m2275954034(L_16, L_18, /*hidden argument*/List_1_Remove_m2275954034_MethodInfo_var);
	}

IL_0067:
	{
		return;
	}
}
// System.Void CS_Subway::Init(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32)
extern "C"  void CS_Subway_Init_m4075837172 (CS_Subway_t2979784574 * __this, List_1_t1355284821 * ___g_stationPositionList0, int32_t ___g_nextStationNumber1, const MethodInfo* method)
{
	{
		List_1_t1355284821 * L_0 = ___g_stationPositionList0;
		__this->set_myStationPositionList_3(L_0);
		int32_t L_1 = ___g_nextStationNumber1;
		__this->set_myNextStationNum_2(L_1);
		__this->set_isOn_5((bool)1);
		return;
	}
}
// System.Void CS_Worker::.ctor()
extern "C"  void CS_Worker__ctor_m952174014 (CS_Worker_t3089225293 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Worker::Start()
extern "C"  void CS_Worker_Start_m4194279102 (CS_Worker_t3089225293 * __this, const MethodInfo* method)
{
	{
		CS_Worker_SetNewTarget_m193846293(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CS_Worker::Update()
extern "C"  void CS_Worker_Update_m1179485455 (CS_Worker_t3089225293 * __this, const MethodInfo* method)
{
	Vector2_t4282066565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t4282066565  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		Vector2_t4282066565  L_2 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t4282066565  L_3 = __this->get_myTarget_3();
		Vector2_t4282066565  L_4 = V_0;
		Vector2_t4282066565  L_5 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_t4282066565  L_6 = V_0;
		Vector2_t4282066565  L_7 = Vector2_get_normalized_m123128511((&V_1), /*hidden argument*/NULL);
		float L_8 = __this->get_myVelocity_6();
		Vector2_t4282066565  L_9 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_11 = Vector2_op_Multiply_m1738245082(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector2_t4282066565  L_12 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Transform_t1659122786 * L_13 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector2_t4282066565  L_14 = V_0;
		Vector3_t4282066566  L_15 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_13, L_15, /*hidden argument*/NULL);
		Vector2_t4282066565  L_16 = V_0;
		Vector2_t4282066565  L_17 = __this->get_myTarget_3();
		float L_18 = Vector2_Distance_m340609291(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_myVelocity_6();
		float L_20 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_18) < ((float)((float)((float)L_19*(float)L_20))))))
		{
			goto IL_0075;
		}
	}
	{
		CS_Worker_SetNewTarget_m193846293(__this, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void CS_Worker::SetNewTarget()
extern const MethodInfo* List_1_get_Count_m3550203021_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m2619548776_MethodInfo_var;
extern const uint32_t CS_Worker_SetNewTarget_m193846293_MetadataUsageId;
extern "C"  void CS_Worker_SetNewTarget_m193846293 (CS_Worker_t3089225293 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CS_Worker_SetNewTarget_m193846293_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		List_1_t1355284821 * L_0 = __this->get_myTargetList_2();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		CS_Worker_CreateRandomDesitination_m1139692248(__this, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		List_1_t1355284821 * L_1 = __this->get_myTargetList_2();
		int32_t L_2 = List_1_get_Count_m3550203021(L_1, /*hidden argument*/List_1_get_Count_m3550203021_MethodInfo_var);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		CS_Worker_CreateRandomDesitination_m1139692248(__this, /*hidden argument*/NULL);
		return;
	}

IL_002a:
	{
		float L_3 = Random_Range_m3362417303(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = __this->get_myRandomDestinationPosibility_5();
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_006d;
		}
	}
	{
		List_1_t1355284821 * L_6 = __this->get_myTargetList_2();
		List_1_t1355284821 * L_7 = __this->get_myTargetList_2();
		int32_t L_8 = List_1_get_Count_m3550203021(L_7, /*hidden argument*/List_1_get_Count_m3550203021_MethodInfo_var);
		int32_t L_9 = Random_Range_m75452833(NULL /*static, unused*/, 0, L_8, /*hidden argument*/NULL);
		Vector2_t4282066565  L_10 = List_1_get_Item_m2619548776(L_6, L_9, /*hidden argument*/List_1_get_Item_m2619548776_MethodInfo_var);
		__this->set_myTarget_3(L_10);
		goto IL_0073;
	}

IL_006d:
	{
		CS_Worker_CreateRandomDesitination_m1139692248(__this, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void CS_Worker::CreateRandomDesitination()
extern "C"  void CS_Worker_CreateRandomDesitination_m1139692248 (CS_Worker_t3089225293 * __this, const MethodInfo* method)
{
	{
		Vector2_t4282066565 * L_0 = __this->get_address_of_myRandomDestination_4();
		float L_1 = L_0->get_x_1();
		Vector2_t4282066565 * L_2 = __this->get_address_of_myRandomDestination_4();
		float L_3 = L_2->get_x_1();
		float L_4 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_1)), L_3, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_5 = __this->get_address_of_myRandomDestination_4();
		float L_6 = L_5->get_y_2();
		Vector2_t4282066565 * L_7 = __this->get_address_of_myRandomDestination_4();
		float L_8 = L_7->get_y_2();
		float L_9 = Random_Range_m3362417303(NULL /*static, unused*/, ((-L_6)), L_8, /*hidden argument*/NULL);
		Vector2_t4282066565  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m1517109030(&L_10, L_4, L_9, /*hidden argument*/NULL);
		__this->set_myTarget_3(L_10);
		return;
	}
}
// System.Void CS_Worker::InitMyTargetList(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void CS_Worker_InitMyTargetList_m1937019277 (CS_Worker_t3089225293 * __this, List_1_t1355284821 * ___t_siteList0, const MethodInfo* method)
{
	{
		List_1_t1355284821 * L_0 = ___t_siteList0;
		__this->set_myTargetList_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
