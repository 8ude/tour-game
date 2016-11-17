#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CS_Button
struct  CS_Button_t2493622785  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CS_Button::myTargetGameObject
	GameObject_t3674682005 * ___myTargetGameObject_2;
	// System.String CS_Button::myTargetFunction
	String_t* ___myTargetFunction_3;
	// System.String CS_Button::myMessage
	String_t* ___myMessage_4;

public:
	inline static int32_t get_offset_of_myTargetGameObject_2() { return static_cast<int32_t>(offsetof(CS_Button_t2493622785, ___myTargetGameObject_2)); }
	inline GameObject_t3674682005 * get_myTargetGameObject_2() const { return ___myTargetGameObject_2; }
	inline GameObject_t3674682005 ** get_address_of_myTargetGameObject_2() { return &___myTargetGameObject_2; }
	inline void set_myTargetGameObject_2(GameObject_t3674682005 * value)
	{
		___myTargetGameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___myTargetGameObject_2, value);
	}

	inline static int32_t get_offset_of_myTargetFunction_3() { return static_cast<int32_t>(offsetof(CS_Button_t2493622785, ___myTargetFunction_3)); }
	inline String_t* get_myTargetFunction_3() const { return ___myTargetFunction_3; }
	inline String_t** get_address_of_myTargetFunction_3() { return &___myTargetFunction_3; }
	inline void set_myTargetFunction_3(String_t* value)
	{
		___myTargetFunction_3 = value;
		Il2CppCodeGenWriteBarrier(&___myTargetFunction_3, value);
	}

	inline static int32_t get_offset_of_myMessage_4() { return static_cast<int32_t>(offsetof(CS_Button_t2493622785, ___myMessage_4)); }
	inline String_t* get_myMessage_4() const { return ___myMessage_4; }
	inline String_t** get_address_of_myMessage_4() { return &___myMessage_4; }
	inline void set_myMessage_4(String_t* value)
	{
		___myMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___myMessage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
