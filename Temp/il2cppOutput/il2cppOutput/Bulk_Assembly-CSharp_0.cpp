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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CallBackHandler
struct CallBackHandler_t2665009537;
// Cube
struct Cube_t1827850983;
// CubeGenerator
struct CubeGenerator_t270664978;
// Example
struct Example_t2586762383;
// ExampleCallbackHandler
struct ExampleCallbackHandler_t1258610184;
// MyLog
struct MyLog_t1213741384;
// PluginTest
struct PluginTest_t3334191320;
// Rotator
struct Rotator_t2029754672;
// ScreenLogger
struct ScreenLogger_t2491551098;
// ScreenLogger/LogMessage
struct LogMessage_t2591531737;
// ScreenLogger/LogMessage[]
struct LogMessageU5BU5D_t2639241636;
// ScreenLogger[]
struct ScreenLoggerU5BU5D_t3639393119;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>
struct Queue_1_t2437791231;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Queue
struct Queue_t3637523393;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// TestUIController
struct TestUIController_t1360224826;
// UIController
struct UIController_t2237998930;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t32045322;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t811797299;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;

extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* LogCallback_t3588208630_il2cpp_TypeInfo_var;
extern RuntimeClass* LogMessage_t2591531737_il2cpp_TypeInfo_var;
extern RuntimeClass* LogType_t73765434_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t2437791231_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_t3637523393_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* ScreenLogger_t2491551098_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1131647142;
extern String_t* _stringLiteral1176190240;
extern String_t* _stringLiteral128410377;
extern String_t* _stringLiteral1316732877;
extern String_t* _stringLiteral1378069163;
extern String_t* _stringLiteral1486726704;
extern String_t* _stringLiteral1643483824;
extern String_t* _stringLiteral1760406187;
extern String_t* _stringLiteral2057739243;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral2334283289;
extern String_t* _stringLiteral2810471641;
extern String_t* _stringLiteral3169257278;
extern String_t* _stringLiteral3334384299;
extern String_t* _stringLiteral3450517376;
extern String_t* _stringLiteral3452315504;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3527370753;
extern String_t* _stringLiteral3716721323;
extern String_t* _stringLiteral3940781687;
extern String_t* _stringLiteral627726351;
extern String_t* _stringLiteral813377863;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m3745242685_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m401076871_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m2012045155_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1714353663_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2728408406_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4233087181_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisScreenLogger_t2491551098_m866990403_RuntimeMethod_var;
extern const RuntimeMethod* MyLog_HandleLog_m2386089854_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisScreenLogger_t2491551098_m3801801504_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m663649600_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m483150723_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_GetEnumerator_m2154787492_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1315865569_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m2905763174_RuntimeMethod_var;
extern const RuntimeMethod* ScreenLogger_HandleLog_m951685760_RuntimeMethod_var;
extern const RuntimeType* ScreenLogger_t2491551098_0_0_0_var;
extern const uint32_t CallBackHandler_OnCallFromSwift_m608827734_MetadataUsageId;
extern const uint32_t CubeGenerator_Generate_m736652441_MetadataUsageId;
extern const uint32_t Cube_Update_m3894428543_MetadataUsageId;
extern const uint32_t ExampleCallbackHandler_OnCallFromSwift_m902410499_MetadataUsageId;
extern const uint32_t MyLog_HandleLog_m2386089854_MetadataUsageId;
extern const uint32_t MyLog_OnDisable_m2845647105_MetadataUsageId;
extern const uint32_t MyLog_OnEnable_m2570114161_MetadataUsageId;
extern const uint32_t MyLog_OnGUI_m542424882_MetadataUsageId;
extern const uint32_t MyLog_Start_m1333126529_MetadataUsageId;
extern const uint32_t MyLog__ctor_m3545453143_MetadataUsageId;
extern const uint32_t PluginTest_addContact_m873795081_MetadataUsageId;
extern const uint32_t ScreenLogger_Awake_m2807863068_MetadataUsageId;
extern const uint32_t ScreenLogger_HandleLog_m951685760_MetadataUsageId;
extern const uint32_t ScreenLogger_InitStyles_m673770444_MetadataUsageId;
extern const uint32_t ScreenLogger_OnDisable_m2720401943_MetadataUsageId;
extern const uint32_t ScreenLogger_OnEnable_m2006673652_MetadataUsageId;
extern const uint32_t ScreenLogger_OnGUI_m1285445900_MetadataUsageId;
extern const uint32_t ScreenLogger_Update_m2748709459_MetadataUsageId;
extern const uint32_t ScreenLogger__cctor_m1677680862_MetadataUsageId;
extern const uint32_t ScreenLogger_get_Instance_m1979367399_MetadataUsageId;
extern const uint32_t TestUIController_refreshUI_m1025074761_MetadataUsageId;
extern const uint32_t UIController_OnPressCallSwiftMethodButton_m137990531_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct RectOffset_t1369453676_marshaled_com;

struct ScreenLoggerU5BU5D_t3639393119;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;
struct GUILayoutOptionU5BU5D_t2510215842;


#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXAMPLE_T2586762383_H
#define EXAMPLE_T2586762383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Example
struct  Example_t2586762383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLE_T2586762383_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef QUEUE_1_T2437791231_H
#define QUEUE_1_T2437791231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>
struct  Queue_1_t2437791231  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	LogMessageU5BU5D_t2639241636* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2437791231, ____array_0)); }
	inline LogMessageU5BU5D_t2639241636* get__array_0() const { return ____array_0; }
	inline LogMessageU5BU5D_t2639241636** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(LogMessageU5BU5D_t2639241636* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2437791231, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2437791231, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2437791231, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2437791231, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2437791231_H
#ifndef QUEUE_T3637523393_H
#define QUEUE_T3637523393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t3637523393  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____tail_3)); }
	inline int32_t get__tail_3() const { return ____tail_3; }
	inline int32_t* get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(int32_t value)
	{
		____tail_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T3637523393_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ANDROIDJAVAOBJECT_T4131667876_H
#define ANDROIDJAVAOBJECT_T4131667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t4131667876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T4131667876_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUMERATOR_T3099703333_H
#define ENUMERATOR_T3099703333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1/Enumerator<ScreenLogger/LogMessage>
struct  Enumerator_t3099703333 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::q
	Queue_1_t2437791231 * ___q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::ver
	int32_t ___ver_2;

public:
	inline static int32_t get_offset_of_q_0() { return static_cast<int32_t>(offsetof(Enumerator_t3099703333, ___q_0)); }
	inline Queue_1_t2437791231 * get_q_0() const { return ___q_0; }
	inline Queue_1_t2437791231 ** get_address_of_q_0() { return &___q_0; }
	inline void set_q_0(Queue_1_t2437791231 * value)
	{
		___q_0 = value;
		Il2CppCodeGenWriteBarrier((&___q_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t3099703333, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3099703333, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3099703333_H
#ifndef ENUMERATOR_T3588277760_H
#define ENUMERATOR_T3588277760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct  Enumerator_t3588277760 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::q
	Queue_1_t2926365658 * ___q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::ver
	int32_t ___ver_2;

public:
	inline static int32_t get_offset_of_q_0() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___q_0)); }
	inline Queue_1_t2926365658 * get_q_0() const { return ___q_0; }
	inline Queue_1_t2926365658 ** get_address_of_q_0() { return &___q_0; }
	inline void set_q_0(Queue_1_t2926365658 * value)
	{
		___q_0 = value;
		Il2CppCodeGenWriteBarrier((&___q_0), value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3588277760, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3588277760_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ANDROIDJAVACLASS_T32045322_H
#define ANDROIDJAVACLASS_T32045322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t32045322  : public AndroidJavaObject_t4131667876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T32045322_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef LOGANCHOR_T2690042548_H
#define LOGANCHOR_T2690042548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenLogger/LogAnchor
struct  LogAnchor_t2690042548 
{
public:
	// System.Int32 ScreenLogger/LogAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogAnchor_t2690042548, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGANCHOR_T2690042548_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TYPE_T3858932131_H
#define TYPE_T3858932131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t3858932131 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3858932131, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T3858932131_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T73765434_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef LOGMESSAGE_T2591531737_H
#define LOGMESSAGE_T2591531737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenLogger/LogMessage
struct  LogMessage_t2591531737  : public RuntimeObject
{
public:
	// System.String ScreenLogger/LogMessage::Message
	String_t* ___Message_0;
	// UnityEngine.LogType ScreenLogger/LogMessage::Type
	int32_t ___Type_1;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(LogMessage_t2591531737, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((&___Message_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(LogMessage_t2591531737, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGMESSAGE_T2591531737_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GUILAYOUTOPTION_T811797299_H
#define GUILAYOUTOPTION_T811797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t811797299  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t811797299, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T811797299_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_14)); }
	inline GUIStyle_t3956901511 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t3956901511 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T3956901511_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef LOGCALLBACK_T3588208630_H
#define LOGCALLBACK_T3588208630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3588208630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3588208630_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CALLBACKHANDLER_T2665009537_H
#define CALLBACKHANDLER_T2665009537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CallBackHandler
struct  CallBackHandler_t2665009537  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CallBackHandler::SuccessPopup
	GameObject_t1113636619 * ___SuccessPopup_4;

public:
	inline static int32_t get_offset_of_SuccessPopup_4() { return static_cast<int32_t>(offsetof(CallBackHandler_t2665009537, ___SuccessPopup_4)); }
	inline GameObject_t1113636619 * get_SuccessPopup_4() const { return ___SuccessPopup_4; }
	inline GameObject_t1113636619 ** get_address_of_SuccessPopup_4() { return &___SuccessPopup_4; }
	inline void set_SuccessPopup_4(GameObject_t1113636619 * value)
	{
		___SuccessPopup_4 = value;
		Il2CppCodeGenWriteBarrier((&___SuccessPopup_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T2665009537_H
#ifndef CUBE_T1827850983_H
#define CUBE_T1827850983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cube
struct  Cube_t1827850983  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Cube::minimumY
	float ___minimumY_4;

public:
	inline static int32_t get_offset_of_minimumY_4() { return static_cast<int32_t>(offsetof(Cube_t1827850983, ___minimumY_4)); }
	inline float get_minimumY_4() const { return ___minimumY_4; }
	inline float* get_address_of_minimumY_4() { return &___minimumY_4; }
	inline void set_minimumY_4(float value)
	{
		___minimumY_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBE_T1827850983_H
#ifndef CUBEGENERATOR_T270664978_H
#define CUBEGENERATOR_T270664978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeGenerator
struct  CubeGenerator_t270664978  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CubeGenerator::cubePrefab
	GameObject_t1113636619 * ___cubePrefab_4;
	// System.Single CubeGenerator::generateInterval
	float ___generateInterval_5;
	// System.Single CubeGenerator::lastGeneratedTime
	float ___lastGeneratedTime_6;

public:
	inline static int32_t get_offset_of_cubePrefab_4() { return static_cast<int32_t>(offsetof(CubeGenerator_t270664978, ___cubePrefab_4)); }
	inline GameObject_t1113636619 * get_cubePrefab_4() const { return ___cubePrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_cubePrefab_4() { return &___cubePrefab_4; }
	inline void set_cubePrefab_4(GameObject_t1113636619 * value)
	{
		___cubePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___cubePrefab_4), value);
	}

	inline static int32_t get_offset_of_generateInterval_5() { return static_cast<int32_t>(offsetof(CubeGenerator_t270664978, ___generateInterval_5)); }
	inline float get_generateInterval_5() const { return ___generateInterval_5; }
	inline float* get_address_of_generateInterval_5() { return &___generateInterval_5; }
	inline void set_generateInterval_5(float value)
	{
		___generateInterval_5 = value;
	}

	inline static int32_t get_offset_of_lastGeneratedTime_6() { return static_cast<int32_t>(offsetof(CubeGenerator_t270664978, ___lastGeneratedTime_6)); }
	inline float get_lastGeneratedTime_6() const { return ___lastGeneratedTime_6; }
	inline float* get_address_of_lastGeneratedTime_6() { return &___lastGeneratedTime_6; }
	inline void set_lastGeneratedTime_6(float value)
	{
		___lastGeneratedTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUBEGENERATOR_T270664978_H
#ifndef EXAMPLECALLBACKHANDLER_T1258610184_H
#define EXAMPLECALLBACKHANDLER_T1258610184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleCallbackHandler
struct  ExampleCallbackHandler_t1258610184  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text ExampleCallbackHandler::textLabel
	Text_t1901882714 * ___textLabel_4;

public:
	inline static int32_t get_offset_of_textLabel_4() { return static_cast<int32_t>(offsetof(ExampleCallbackHandler_t1258610184, ___textLabel_4)); }
	inline Text_t1901882714 * get_textLabel_4() const { return ___textLabel_4; }
	inline Text_t1901882714 ** get_address_of_textLabel_4() { return &___textLabel_4; }
	inline void set_textLabel_4(Text_t1901882714 * value)
	{
		___textLabel_4 = value;
		Il2CppCodeGenWriteBarrier((&___textLabel_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLECALLBACKHANDLER_T1258610184_H
#ifndef MYLOG_T1213741384_H
#define MYLOG_T1213741384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyLog
struct  MyLog_t1213741384  : public MonoBehaviour_t3962482529
{
public:
	// System.String MyLog::myLog
	String_t* ___myLog_4;
	// System.Collections.Queue MyLog::myLogQueue
	Queue_t3637523393 * ___myLogQueue_5;

public:
	inline static int32_t get_offset_of_myLog_4() { return static_cast<int32_t>(offsetof(MyLog_t1213741384, ___myLog_4)); }
	inline String_t* get_myLog_4() const { return ___myLog_4; }
	inline String_t** get_address_of_myLog_4() { return &___myLog_4; }
	inline void set_myLog_4(String_t* value)
	{
		___myLog_4 = value;
		Il2CppCodeGenWriteBarrier((&___myLog_4), value);
	}

	inline static int32_t get_offset_of_myLogQueue_5() { return static_cast<int32_t>(offsetof(MyLog_t1213741384, ___myLogQueue_5)); }
	inline Queue_t3637523393 * get_myLogQueue_5() const { return ___myLogQueue_5; }
	inline Queue_t3637523393 ** get_address_of_myLogQueue_5() { return &___myLogQueue_5; }
	inline void set_myLogQueue_5(Queue_t3637523393 * value)
	{
		___myLogQueue_5 = value;
		Il2CppCodeGenWriteBarrier((&___myLogQueue_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYLOG_T1213741384_H
#ifndef PLUGINTEST_T3334191320_H
#define PLUGINTEST_T3334191320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PluginTest
struct  PluginTest_t3334191320  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text PluginTest::text
	Text_t1901882714 * ___text_7;

public:
	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(PluginTest_t3334191320, ___text_7)); }
	inline Text_t1901882714 * get_text_7() const { return ___text_7; }
	inline Text_t1901882714 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t1901882714 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((&___text_7), value);
	}
};

struct PluginTest_t3334191320_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass PluginTest::_pluginClass
	AndroidJavaClass_t32045322 * ____pluginClass_5;
	// UnityEngine.AndroidJavaObject PluginTest::_pluginInstance
	AndroidJavaObject_t4131667876 * ____pluginInstance_6;

public:
	inline static int32_t get_offset_of__pluginClass_5() { return static_cast<int32_t>(offsetof(PluginTest_t3334191320_StaticFields, ____pluginClass_5)); }
	inline AndroidJavaClass_t32045322 * get__pluginClass_5() const { return ____pluginClass_5; }
	inline AndroidJavaClass_t32045322 ** get_address_of__pluginClass_5() { return &____pluginClass_5; }
	inline void set__pluginClass_5(AndroidJavaClass_t32045322 * value)
	{
		____pluginClass_5 = value;
		Il2CppCodeGenWriteBarrier((&____pluginClass_5), value);
	}

	inline static int32_t get_offset_of__pluginInstance_6() { return static_cast<int32_t>(offsetof(PluginTest_t3334191320_StaticFields, ____pluginInstance_6)); }
	inline AndroidJavaObject_t4131667876 * get__pluginInstance_6() const { return ____pluginInstance_6; }
	inline AndroidJavaObject_t4131667876 ** get_address_of__pluginInstance_6() { return &____pluginInstance_6; }
	inline void set__pluginInstance_6(AndroidJavaObject_t4131667876 * value)
	{
		____pluginInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&____pluginInstance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLUGINTEST_T3334191320_H
#ifndef ROTATOR_T2029754672_H
#define ROTATOR_T2029754672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotator
struct  Rotator_t2029754672  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Rotator::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(Rotator_t2029754672, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATOR_T2029754672_H
#ifndef SCREENLOGGER_T2491551098_H
#define SCREENLOGGER_T2491551098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenLogger
struct  ScreenLogger_t2491551098  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ScreenLogger::ShowLog
	bool ___ShowLog_7;
	// System.Boolean ScreenLogger::ShowInEditor
	bool ___ShowInEditor_8;
	// System.Single ScreenLogger::Height
	float ___Height_9;
	// System.Single ScreenLogger::Width
	float ___Width_10;
	// System.Int32 ScreenLogger::Margin
	int32_t ___Margin_11;
	// ScreenLogger/LogAnchor ScreenLogger::AnchorPosition
	int32_t ___AnchorPosition_12;
	// System.Int32 ScreenLogger::FontSize
	int32_t ___FontSize_13;
	// System.Single ScreenLogger::BackgroundOpacity
	float ___BackgroundOpacity_14;
	// UnityEngine.Color ScreenLogger::BackgroundColor
	Color_t2555686324  ___BackgroundColor_15;
	// System.Boolean ScreenLogger::LogMessages
	bool ___LogMessages_16;
	// System.Boolean ScreenLogger::LogWarnings
	bool ___LogWarnings_17;
	// System.Boolean ScreenLogger::LogErrors
	bool ___LogErrors_18;
	// UnityEngine.Color ScreenLogger::MessageColor
	Color_t2555686324  ___MessageColor_19;
	// UnityEngine.Color ScreenLogger::WarningColor
	Color_t2555686324  ___WarningColor_20;
	// UnityEngine.Color ScreenLogger::ErrorColor
	Color_t2555686324  ___ErrorColor_21;
	// System.Boolean ScreenLogger::StackTraceMessages
	bool ___StackTraceMessages_22;
	// System.Boolean ScreenLogger::StackTraceWarnings
	bool ___StackTraceWarnings_23;
	// System.Boolean ScreenLogger::StackTraceErrors
	bool ___StackTraceErrors_24;
	// UnityEngine.GUIStyle ScreenLogger::styleContainer
	GUIStyle_t3956901511 * ___styleContainer_26;
	// UnityEngine.GUIStyle ScreenLogger::styleText
	GUIStyle_t3956901511 * ___styleText_27;
	// System.Int32 ScreenLogger::padding
	int32_t ___padding_28;
	// System.Boolean ScreenLogger::destroying
	bool ___destroying_29;

public:
	inline static int32_t get_offset_of_ShowLog_7() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___ShowLog_7)); }
	inline bool get_ShowLog_7() const { return ___ShowLog_7; }
	inline bool* get_address_of_ShowLog_7() { return &___ShowLog_7; }
	inline void set_ShowLog_7(bool value)
	{
		___ShowLog_7 = value;
	}

	inline static int32_t get_offset_of_ShowInEditor_8() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___ShowInEditor_8)); }
	inline bool get_ShowInEditor_8() const { return ___ShowInEditor_8; }
	inline bool* get_address_of_ShowInEditor_8() { return &___ShowInEditor_8; }
	inline void set_ShowInEditor_8(bool value)
	{
		___ShowInEditor_8 = value;
	}

	inline static int32_t get_offset_of_Height_9() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___Height_9)); }
	inline float get_Height_9() const { return ___Height_9; }
	inline float* get_address_of_Height_9() { return &___Height_9; }
	inline void set_Height_9(float value)
	{
		___Height_9 = value;
	}

	inline static int32_t get_offset_of_Width_10() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___Width_10)); }
	inline float get_Width_10() const { return ___Width_10; }
	inline float* get_address_of_Width_10() { return &___Width_10; }
	inline void set_Width_10(float value)
	{
		___Width_10 = value;
	}

	inline static int32_t get_offset_of_Margin_11() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___Margin_11)); }
	inline int32_t get_Margin_11() const { return ___Margin_11; }
	inline int32_t* get_address_of_Margin_11() { return &___Margin_11; }
	inline void set_Margin_11(int32_t value)
	{
		___Margin_11 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_12() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___AnchorPosition_12)); }
	inline int32_t get_AnchorPosition_12() const { return ___AnchorPosition_12; }
	inline int32_t* get_address_of_AnchorPosition_12() { return &___AnchorPosition_12; }
	inline void set_AnchorPosition_12(int32_t value)
	{
		___AnchorPosition_12 = value;
	}

	inline static int32_t get_offset_of_FontSize_13() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___FontSize_13)); }
	inline int32_t get_FontSize_13() const { return ___FontSize_13; }
	inline int32_t* get_address_of_FontSize_13() { return &___FontSize_13; }
	inline void set_FontSize_13(int32_t value)
	{
		___FontSize_13 = value;
	}

	inline static int32_t get_offset_of_BackgroundOpacity_14() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___BackgroundOpacity_14)); }
	inline float get_BackgroundOpacity_14() const { return ___BackgroundOpacity_14; }
	inline float* get_address_of_BackgroundOpacity_14() { return &___BackgroundOpacity_14; }
	inline void set_BackgroundOpacity_14(float value)
	{
		___BackgroundOpacity_14 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_15() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___BackgroundColor_15)); }
	inline Color_t2555686324  get_BackgroundColor_15() const { return ___BackgroundColor_15; }
	inline Color_t2555686324 * get_address_of_BackgroundColor_15() { return &___BackgroundColor_15; }
	inline void set_BackgroundColor_15(Color_t2555686324  value)
	{
		___BackgroundColor_15 = value;
	}

	inline static int32_t get_offset_of_LogMessages_16() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___LogMessages_16)); }
	inline bool get_LogMessages_16() const { return ___LogMessages_16; }
	inline bool* get_address_of_LogMessages_16() { return &___LogMessages_16; }
	inline void set_LogMessages_16(bool value)
	{
		___LogMessages_16 = value;
	}

	inline static int32_t get_offset_of_LogWarnings_17() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___LogWarnings_17)); }
	inline bool get_LogWarnings_17() const { return ___LogWarnings_17; }
	inline bool* get_address_of_LogWarnings_17() { return &___LogWarnings_17; }
	inline void set_LogWarnings_17(bool value)
	{
		___LogWarnings_17 = value;
	}

	inline static int32_t get_offset_of_LogErrors_18() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___LogErrors_18)); }
	inline bool get_LogErrors_18() const { return ___LogErrors_18; }
	inline bool* get_address_of_LogErrors_18() { return &___LogErrors_18; }
	inline void set_LogErrors_18(bool value)
	{
		___LogErrors_18 = value;
	}

	inline static int32_t get_offset_of_MessageColor_19() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___MessageColor_19)); }
	inline Color_t2555686324  get_MessageColor_19() const { return ___MessageColor_19; }
	inline Color_t2555686324 * get_address_of_MessageColor_19() { return &___MessageColor_19; }
	inline void set_MessageColor_19(Color_t2555686324  value)
	{
		___MessageColor_19 = value;
	}

	inline static int32_t get_offset_of_WarningColor_20() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___WarningColor_20)); }
	inline Color_t2555686324  get_WarningColor_20() const { return ___WarningColor_20; }
	inline Color_t2555686324 * get_address_of_WarningColor_20() { return &___WarningColor_20; }
	inline void set_WarningColor_20(Color_t2555686324  value)
	{
		___WarningColor_20 = value;
	}

	inline static int32_t get_offset_of_ErrorColor_21() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___ErrorColor_21)); }
	inline Color_t2555686324  get_ErrorColor_21() const { return ___ErrorColor_21; }
	inline Color_t2555686324 * get_address_of_ErrorColor_21() { return &___ErrorColor_21; }
	inline void set_ErrorColor_21(Color_t2555686324  value)
	{
		___ErrorColor_21 = value;
	}

	inline static int32_t get_offset_of_StackTraceMessages_22() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___StackTraceMessages_22)); }
	inline bool get_StackTraceMessages_22() const { return ___StackTraceMessages_22; }
	inline bool* get_address_of_StackTraceMessages_22() { return &___StackTraceMessages_22; }
	inline void set_StackTraceMessages_22(bool value)
	{
		___StackTraceMessages_22 = value;
	}

	inline static int32_t get_offset_of_StackTraceWarnings_23() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___StackTraceWarnings_23)); }
	inline bool get_StackTraceWarnings_23() const { return ___StackTraceWarnings_23; }
	inline bool* get_address_of_StackTraceWarnings_23() { return &___StackTraceWarnings_23; }
	inline void set_StackTraceWarnings_23(bool value)
	{
		___StackTraceWarnings_23 = value;
	}

	inline static int32_t get_offset_of_StackTraceErrors_24() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___StackTraceErrors_24)); }
	inline bool get_StackTraceErrors_24() const { return ___StackTraceErrors_24; }
	inline bool* get_address_of_StackTraceErrors_24() { return &___StackTraceErrors_24; }
	inline void set_StackTraceErrors_24(bool value)
	{
		___StackTraceErrors_24 = value;
	}

	inline static int32_t get_offset_of_styleContainer_26() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___styleContainer_26)); }
	inline GUIStyle_t3956901511 * get_styleContainer_26() const { return ___styleContainer_26; }
	inline GUIStyle_t3956901511 ** get_address_of_styleContainer_26() { return &___styleContainer_26; }
	inline void set_styleContainer_26(GUIStyle_t3956901511 * value)
	{
		___styleContainer_26 = value;
		Il2CppCodeGenWriteBarrier((&___styleContainer_26), value);
	}

	inline static int32_t get_offset_of_styleText_27() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___styleText_27)); }
	inline GUIStyle_t3956901511 * get_styleText_27() const { return ___styleText_27; }
	inline GUIStyle_t3956901511 ** get_address_of_styleText_27() { return &___styleText_27; }
	inline void set_styleText_27(GUIStyle_t3956901511 * value)
	{
		___styleText_27 = value;
		Il2CppCodeGenWriteBarrier((&___styleText_27), value);
	}

	inline static int32_t get_offset_of_padding_28() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___padding_28)); }
	inline int32_t get_padding_28() const { return ___padding_28; }
	inline int32_t* get_address_of_padding_28() { return &___padding_28; }
	inline void set_padding_28(int32_t value)
	{
		___padding_28 = value;
	}

	inline static int32_t get_offset_of_destroying_29() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098, ___destroying_29)); }
	inline bool get_destroying_29() const { return ___destroying_29; }
	inline bool* get_address_of_destroying_29() { return &___destroying_29; }
	inline void set_destroying_29(bool value)
	{
		___destroying_29 = value;
	}
};

struct ScreenLogger_t2491551098_StaticFields
{
public:
	// System.Boolean ScreenLogger::IsPersistent
	bool ___IsPersistent_4;
	// ScreenLogger ScreenLogger::instance
	ScreenLogger_t2491551098 * ___instance_5;
	// System.Boolean ScreenLogger::instantiated
	bool ___instantiated_6;
	// System.Collections.Generic.Queue`1<ScreenLogger/LogMessage> ScreenLogger::queue
	Queue_1_t2437791231 * ___queue_25;

public:
	inline static int32_t get_offset_of_IsPersistent_4() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098_StaticFields, ___IsPersistent_4)); }
	inline bool get_IsPersistent_4() const { return ___IsPersistent_4; }
	inline bool* get_address_of_IsPersistent_4() { return &___IsPersistent_4; }
	inline void set_IsPersistent_4(bool value)
	{
		___IsPersistent_4 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098_StaticFields, ___instance_5)); }
	inline ScreenLogger_t2491551098 * get_instance_5() const { return ___instance_5; }
	inline ScreenLogger_t2491551098 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(ScreenLogger_t2491551098 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((&___instance_5), value);
	}

	inline static int32_t get_offset_of_instantiated_6() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098_StaticFields, ___instantiated_6)); }
	inline bool get_instantiated_6() const { return ___instantiated_6; }
	inline bool* get_address_of_instantiated_6() { return &___instantiated_6; }
	inline void set_instantiated_6(bool value)
	{
		___instantiated_6 = value;
	}

	inline static int32_t get_offset_of_queue_25() { return static_cast<int32_t>(offsetof(ScreenLogger_t2491551098_StaticFields, ___queue_25)); }
	inline Queue_1_t2437791231 * get_queue_25() const { return ___queue_25; }
	inline Queue_1_t2437791231 ** get_address_of_queue_25() { return &___queue_25; }
	inline void set_queue_25(Queue_1_t2437791231 * value)
	{
		___queue_25 = value;
		Il2CppCodeGenWriteBarrier((&___queue_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENLOGGER_T2491551098_H
#ifndef TESTUICONTROLLER_T1360224826_H
#define TESTUICONTROLLER_T1360224826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestUIController
struct  TestUIController_t1360224826  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField TestUIController::firstName
	InputField_t3762917431 * ___firstName_4;
	// UnityEngine.UI.InputField TestUIController::lastName
	InputField_t3762917431 * ___lastName_5;
	// UnityEngine.UI.InputField TestUIController::company
	InputField_t3762917431 * ___company_6;
	// UnityEngine.UI.InputField TestUIController::number
	InputField_t3762917431 * ___number_7;

public:
	inline static int32_t get_offset_of_firstName_4() { return static_cast<int32_t>(offsetof(TestUIController_t1360224826, ___firstName_4)); }
	inline InputField_t3762917431 * get_firstName_4() const { return ___firstName_4; }
	inline InputField_t3762917431 ** get_address_of_firstName_4() { return &___firstName_4; }
	inline void set_firstName_4(InputField_t3762917431 * value)
	{
		___firstName_4 = value;
		Il2CppCodeGenWriteBarrier((&___firstName_4), value);
	}

	inline static int32_t get_offset_of_lastName_5() { return static_cast<int32_t>(offsetof(TestUIController_t1360224826, ___lastName_5)); }
	inline InputField_t3762917431 * get_lastName_5() const { return ___lastName_5; }
	inline InputField_t3762917431 ** get_address_of_lastName_5() { return &___lastName_5; }
	inline void set_lastName_5(InputField_t3762917431 * value)
	{
		___lastName_5 = value;
		Il2CppCodeGenWriteBarrier((&___lastName_5), value);
	}

	inline static int32_t get_offset_of_company_6() { return static_cast<int32_t>(offsetof(TestUIController_t1360224826, ___company_6)); }
	inline InputField_t3762917431 * get_company_6() const { return ___company_6; }
	inline InputField_t3762917431 ** get_address_of_company_6() { return &___company_6; }
	inline void set_company_6(InputField_t3762917431 * value)
	{
		___company_6 = value;
		Il2CppCodeGenWriteBarrier((&___company_6), value);
	}

	inline static int32_t get_offset_of_number_7() { return static_cast<int32_t>(offsetof(TestUIController_t1360224826, ___number_7)); }
	inline InputField_t3762917431 * get_number_7() const { return ___number_7; }
	inline InputField_t3762917431 ** get_address_of_number_7() { return &___number_7; }
	inline void set_number_7(InputField_t3762917431 * value)
	{
		___number_7 = value;
		Il2CppCodeGenWriteBarrier((&___number_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTUICONTROLLER_T1360224826_H
#ifndef UICONTROLLER_T2237998930_H
#define UICONTROLLER_T2237998930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2237998930  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICONTROLLER_T2237998930_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_18;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_21;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_22;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_23;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_24;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_25;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_26;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_27;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_28;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_29;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_30;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_31;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_33;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_35;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_36;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_38;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_41;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_43;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_44;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_45;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_46;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_47;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_48;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_49;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_50;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_51;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_54;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_55;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_56;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_57;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_59;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_60;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_61;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_62;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_64;

public:
	inline static int32_t get_offset_of_m_Keyboard_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_18)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_18() const { return ___m_Keyboard_18; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_18() { return &___m_Keyboard_18; }
	inline void set_m_Keyboard_18(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_18), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_20)); }
	inline Text_t1901882714 * get_m_TextComponent_20() const { return ___m_TextComponent_20; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_20() { return &___m_TextComponent_20; }
	inline void set_m_TextComponent_20(Text_t1901882714 * value)
	{
		___m_TextComponent_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_20), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_21)); }
	inline Graphic_t1660335611 * get_m_Placeholder_21() const { return ___m_Placeholder_21; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_21() { return &___m_Placeholder_21; }
	inline void set_m_Placeholder_21(Graphic_t1660335611 * value)
	{
		___m_Placeholder_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_21), value);
	}

	inline static int32_t get_offset_of_m_ContentType_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_22)); }
	inline int32_t get_m_ContentType_22() const { return ___m_ContentType_22; }
	inline int32_t* get_address_of_m_ContentType_22() { return &___m_ContentType_22; }
	inline void set_m_ContentType_22(int32_t value)
	{
		___m_ContentType_22 = value;
	}

	inline static int32_t get_offset_of_m_InputType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_23)); }
	inline int32_t get_m_InputType_23() const { return ___m_InputType_23; }
	inline int32_t* get_address_of_m_InputType_23() { return &___m_InputType_23; }
	inline void set_m_InputType_23(int32_t value)
	{
		___m_InputType_23 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_24)); }
	inline Il2CppChar get_m_AsteriskChar_24() const { return ___m_AsteriskChar_24; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_24() { return &___m_AsteriskChar_24; }
	inline void set_m_AsteriskChar_24(Il2CppChar value)
	{
		___m_AsteriskChar_24 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_25)); }
	inline int32_t get_m_KeyboardType_25() const { return ___m_KeyboardType_25; }
	inline int32_t* get_address_of_m_KeyboardType_25() { return &___m_KeyboardType_25; }
	inline void set_m_KeyboardType_25(int32_t value)
	{
		___m_KeyboardType_25 = value;
	}

	inline static int32_t get_offset_of_m_LineType_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_26)); }
	inline int32_t get_m_LineType_26() const { return ___m_LineType_26; }
	inline int32_t* get_address_of_m_LineType_26() { return &___m_LineType_26; }
	inline void set_m_LineType_26(int32_t value)
	{
		___m_LineType_26 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_27)); }
	inline bool get_m_HideMobileInput_27() const { return ___m_HideMobileInput_27; }
	inline bool* get_address_of_m_HideMobileInput_27() { return &___m_HideMobileInput_27; }
	inline void set_m_HideMobileInput_27(bool value)
	{
		___m_HideMobileInput_27 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_28)); }
	inline int32_t get_m_CharacterValidation_28() const { return ___m_CharacterValidation_28; }
	inline int32_t* get_address_of_m_CharacterValidation_28() { return &___m_CharacterValidation_28; }
	inline void set_m_CharacterValidation_28(int32_t value)
	{
		___m_CharacterValidation_28 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_29)); }
	inline int32_t get_m_CharacterLimit_29() const { return ___m_CharacterLimit_29; }
	inline int32_t* get_address_of_m_CharacterLimit_29() { return &___m_CharacterLimit_29; }
	inline void set_m_CharacterLimit_29(int32_t value)
	{
		___m_CharacterLimit_29 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_30)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_30() const { return ___m_OnEndEdit_30; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_30() { return &___m_OnEndEdit_30; }
	inline void set_m_OnEndEdit_30(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_30), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_31)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_31() const { return ___m_OnValueChanged_31; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_31() { return &___m_OnValueChanged_31; }
	inline void set_m_OnValueChanged_31(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_31), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_32)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_32() const { return ___m_OnValidateInput_32; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_32() { return &___m_OnValidateInput_32; }
	inline void set_m_OnValidateInput_32(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_32), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_33)); }
	inline Color_t2555686324  get_m_CaretColor_33() const { return ___m_CaretColor_33; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_33() { return &___m_CaretColor_33; }
	inline void set_m_CaretColor_33(Color_t2555686324  value)
	{
		___m_CaretColor_33 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_34)); }
	inline bool get_m_CustomCaretColor_34() const { return ___m_CustomCaretColor_34; }
	inline bool* get_address_of_m_CustomCaretColor_34() { return &___m_CustomCaretColor_34; }
	inline void set_m_CustomCaretColor_34(bool value)
	{
		___m_CustomCaretColor_34 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_35)); }
	inline Color_t2555686324  get_m_SelectionColor_35() const { return ___m_SelectionColor_35; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_35() { return &___m_SelectionColor_35; }
	inline void set_m_SelectionColor_35(Color_t2555686324  value)
	{
		___m_SelectionColor_35 = value;
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_36), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_37)); }
	inline float get_m_CaretBlinkRate_37() const { return ___m_CaretBlinkRate_37; }
	inline float* get_address_of_m_CaretBlinkRate_37() { return &___m_CaretBlinkRate_37; }
	inline void set_m_CaretBlinkRate_37(float value)
	{
		___m_CaretBlinkRate_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_38)); }
	inline int32_t get_m_CaretWidth_38() const { return ___m_CaretWidth_38; }
	inline int32_t* get_address_of_m_CaretWidth_38() { return &___m_CaretWidth_38; }
	inline void set_m_CaretWidth_38(int32_t value)
	{
		___m_CaretWidth_38 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_39)); }
	inline bool get_m_ReadOnly_39() const { return ___m_ReadOnly_39; }
	inline bool* get_address_of_m_ReadOnly_39() { return &___m_ReadOnly_39; }
	inline void set_m_ReadOnly_39(bool value)
	{
		___m_ReadOnly_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_40)); }
	inline int32_t get_m_CaretPosition_40() const { return ___m_CaretPosition_40; }
	inline int32_t* get_address_of_m_CaretPosition_40() { return &___m_CaretPosition_40; }
	inline void set_m_CaretPosition_40(int32_t value)
	{
		___m_CaretPosition_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_41)); }
	inline int32_t get_m_CaretSelectPosition_41() const { return ___m_CaretSelectPosition_41; }
	inline int32_t* get_address_of_m_CaretSelectPosition_41() { return &___m_CaretSelectPosition_41; }
	inline void set_m_CaretSelectPosition_41(int32_t value)
	{
		___m_CaretSelectPosition_41 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_42)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_42() const { return ___caretRectTrans_42; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_42() { return &___caretRectTrans_42; }
	inline void set_caretRectTrans_42(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_42 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_42), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_43)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_43() const { return ___m_CursorVerts_43; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_43() { return &___m_CursorVerts_43; }
	inline void set_m_CursorVerts_43(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_43), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_44)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_44() const { return ___m_InputTextCache_44; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_44() { return &___m_InputTextCache_44; }
	inline void set_m_InputTextCache_44(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_44 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_44), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_45)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_45() const { return ___m_CachedInputRenderer_45; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_45() { return &___m_CachedInputRenderer_45; }
	inline void set_m_CachedInputRenderer_45(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_45), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_46)); }
	inline bool get_m_PreventFontCallback_46() const { return ___m_PreventFontCallback_46; }
	inline bool* get_address_of_m_PreventFontCallback_46() { return &___m_PreventFontCallback_46; }
	inline void set_m_PreventFontCallback_46(bool value)
	{
		___m_PreventFontCallback_46 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_47)); }
	inline Mesh_t3648964284 * get_m_Mesh_47() const { return ___m_Mesh_47; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_47() { return &___m_Mesh_47; }
	inline void set_m_Mesh_47(Mesh_t3648964284 * value)
	{
		___m_Mesh_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_47), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_48)); }
	inline bool get_m_AllowInput_48() const { return ___m_AllowInput_48; }
	inline bool* get_address_of_m_AllowInput_48() { return &___m_AllowInput_48; }
	inline void set_m_AllowInput_48(bool value)
	{
		___m_AllowInput_48 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_49)); }
	inline bool get_m_ShouldActivateNextUpdate_49() const { return ___m_ShouldActivateNextUpdate_49; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_49() { return &___m_ShouldActivateNextUpdate_49; }
	inline void set_m_ShouldActivateNextUpdate_49(bool value)
	{
		___m_ShouldActivateNextUpdate_49 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_50() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_50)); }
	inline bool get_m_UpdateDrag_50() const { return ___m_UpdateDrag_50; }
	inline bool* get_address_of_m_UpdateDrag_50() { return &___m_UpdateDrag_50; }
	inline void set_m_UpdateDrag_50(bool value)
	{
		___m_UpdateDrag_50 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_51() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_51)); }
	inline bool get_m_DragPositionOutOfBounds_51() const { return ___m_DragPositionOutOfBounds_51; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_51() { return &___m_DragPositionOutOfBounds_51; }
	inline void set_m_DragPositionOutOfBounds_51(bool value)
	{
		___m_DragPositionOutOfBounds_51 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_54)); }
	inline bool get_m_CaretVisible_54() const { return ___m_CaretVisible_54; }
	inline bool* get_address_of_m_CaretVisible_54() { return &___m_CaretVisible_54; }
	inline void set_m_CaretVisible_54(bool value)
	{
		___m_CaretVisible_54 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_55)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_55() const { return ___m_BlinkCoroutine_55; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_55() { return &___m_BlinkCoroutine_55; }
	inline void set_m_BlinkCoroutine_55(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_55), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_56)); }
	inline float get_m_BlinkStartTime_56() const { return ___m_BlinkStartTime_56; }
	inline float* get_address_of_m_BlinkStartTime_56() { return &___m_BlinkStartTime_56; }
	inline void set_m_BlinkStartTime_56(float value)
	{
		___m_BlinkStartTime_56 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_57)); }
	inline int32_t get_m_DrawStart_57() const { return ___m_DrawStart_57; }
	inline int32_t* get_address_of_m_DrawStart_57() { return &___m_DrawStart_57; }
	inline void set_m_DrawStart_57(int32_t value)
	{
		___m_DrawStart_57 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_58)); }
	inline int32_t get_m_DrawEnd_58() const { return ___m_DrawEnd_58; }
	inline int32_t* get_address_of_m_DrawEnd_58() { return &___m_DrawEnd_58; }
	inline void set_m_DrawEnd_58(int32_t value)
	{
		___m_DrawEnd_58 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_59)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_59() const { return ___m_DragCoroutine_59; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_59() { return &___m_DragCoroutine_59; }
	inline void set_m_DragCoroutine_59(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_59), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_60)); }
	inline String_t* get_m_OriginalText_60() const { return ___m_OriginalText_60; }
	inline String_t** get_address_of_m_OriginalText_60() { return &___m_OriginalText_60; }
	inline void set_m_OriginalText_60(String_t* value)
	{
		___m_OriginalText_60 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_60), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_61() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_61)); }
	inline bool get_m_WasCanceled_61() const { return ___m_WasCanceled_61; }
	inline bool* get_address_of_m_WasCanceled_61() { return &___m_WasCanceled_61; }
	inline void set_m_WasCanceled_61(bool value)
	{
		___m_WasCanceled_61 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_62)); }
	inline bool get_m_HasDoneFocusTransition_62() const { return ___m_HasDoneFocusTransition_62; }
	inline bool* get_address_of_m_HasDoneFocusTransition_62() { return &___m_HasDoneFocusTransition_62; }
	inline void set_m_HasDoneFocusTransition_62(bool value)
	{
		___m_HasDoneFocusTransition_62 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_64() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_64)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_64() const { return ___m_ProcessingEvent_64; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_64() { return &___m_ProcessingEvent_64; }
	inline void set_m_ProcessingEvent_64(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_64 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_64), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_19;

public:
	inline static int32_t get_offset_of_kSeparators_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_19)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_19() const { return ___kSeparators_19; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_19() { return &___kSeparators_19; }
	inline void set_kSeparators_19(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_19 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2510215842  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t811797299 * m_Items[1];

public:
	inline GUILayoutOption_t811797299 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GUILayoutOption_t811797299 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t811797299 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t811797299 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ScreenLogger[]
struct ScreenLoggerU5BU5D_t3639393119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ScreenLogger_t2491551098 * m_Items[1];

public:
	inline ScreenLogger_t2491551098 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScreenLogger_t2491551098 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScreenLogger_t2491551098 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ScreenLogger_t2491551098 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScreenLogger_t2491551098 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScreenLogger_t2491551098 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m2684523189_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_m446198187_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m2512392144_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3588277760  Queue_1_GetEnumerator_m2415615345_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1170173642_gshared (Enumerator_t3588277760 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3662315381_gshared (Enumerator_t3588277760 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2419537076_gshared (Enumerator_t3588277760 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void CubeGenerator::Generate()
extern "C" IL2CPP_METHOD_ATTR void CubeGenerator_Generate_m736652441 (CubeGenerator_t270664978 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Random_get_rotation_m4216259439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Example::_ex_callSwiftMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void Example__ex_callSwiftMethod_m1908548193 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Queue::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue__ctor_m2030580699 (Queue_t3637523393 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void LogCallback__ctor_m144650965 (LogCallback_t3588208630 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_m3912321845 (RuntimeObject * __this /* static, unused */, LogCallback_t3588208630 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern "C" IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m869397979 (RuntimeObject * __this /* static, unused */, LogCallback_t3588208630 * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayout_Label_m1960000298 (RuntimeObject * __this /* static, unused */, String_t* p0, GUILayoutOptionU5BU5D_t2510215842* p1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t4131667876 * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m2012045155 (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m2684523189_gshared)(__this, p0, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t4131667876 * AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m401076871 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_m446198187_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m3745242685 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m2512392144_gshared)(__this, p0, p1, method);
}
// System.Void PluginTest::CallSwiftMethod(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest_CallSwiftMethod_m1720971692 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method);
// System.Void PluginTest::_ex_callSwiftMethod(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest__ex_callSwiftMethod_m210652584 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localEulerAngles_m2136926248 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_FindObjectOfType_m67275058 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* p0, Type_t * p1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_Instantiate_m3403600534 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m1350607670 (GameObject_t1113636619 * __this, String_t* p0, TypeU5BU5D_t3940880105* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ScreenLogger>()
inline ScreenLogger_t2491551098 * GameObject_GetComponent_TisScreenLogger_t2491551098_m866990403 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  ScreenLogger_t2491551098 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<ScreenLogger>()
inline ScreenLoggerU5BU5D_t3639393119* Object_FindObjectsOfType_TisScreenLogger_t2491551098_m3801801504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  ScreenLoggerU5BU5D_t3639393119* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method);
}
// System.Void ScreenLogger::InitStyles()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_InitStyles_m673770444 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>::.ctor()
inline void Queue_1__ctor_m1315865569 (Queue_1_t2437791231 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2437791231 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_m3399768780 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>::Dequeue()
inline LogMessage_t2591531737 * Queue_1_Dequeue_m663649600 (Queue_1_t2437791231 * __this, const RuntimeMethod* method)
{
	return ((  LogMessage_t2591531737 * (*) (Queue_1_t2437791231 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>::get_Count()
inline int32_t Queue_1_get_Count_m2905763174 (Queue_1_t2437791231 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2437791231 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m1332121664 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, GUIStyle_t3956901511 * p1, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>::GetEnumerator()
inline Enumerator_t3099703333  Queue_1_GetEnumerator_m2154787492 (Queue_1_t2437791231 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3099703333  (*) (Queue_1_t2437791231 *, const RuntimeMethod*))Queue_1_GetEnumerator_m2415615345_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<ScreenLogger/LogMessage>::get_Current()
inline LogMessage_t2591531737 * Enumerator_get_Current_m4233087181 (Enumerator_t3099703333 * __this, const RuntimeMethod* method)
{
	return ((  LogMessage_t2591531737 * (*) (Enumerator_t3099703333 *, const RuntimeMethod*))Enumerator_get_Current_m1170173642_gshared)(__this, method);
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" IL2CPP_METHOD_ATTR void GUILayout_Label_m1096010274 (RuntimeObject * __this /* static, unused */, String_t* p0, GUIStyle_t3956901511 * p1, GUILayoutOptionU5BU5D_t2510215842* p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<ScreenLogger/LogMessage>::MoveNext()
inline bool Enumerator_MoveNext_m2728408406 (Enumerator_t3099703333 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3099703333 *, const RuntimeMethod*))Enumerator_MoveNext_m3662315381_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<ScreenLogger/LogMessage>::Dispose()
inline void Enumerator_Dispose_m1714353663 (Enumerator_t3099703333 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3099703333 *, const RuntimeMethod*))Enumerator_Dispose_m2419537076_gshared)(__this, method);
}
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" IL2CPP_METHOD_ATTR void GUILayout_EndArea_m2046611416 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Void ScreenLogger/LogMessage::.ctor(System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void LogMessage__ctor_m1357090477 (LogMessage_t2591531737 * __this, String_t* ___msg0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<ScreenLogger/LogMessage>::Enqueue(!0)
inline void Queue_1_Enqueue_m483150723 (Queue_1_t2437791231 * __this, LogMessage_t2591531737 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2437791231 *, LogMessage_t2591531737 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method);
// System.Void TestUIController::saveContact(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void TestUIController_saveContact_m3783443766 (TestUIController_t1360224826 * __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method);
// System.Void PluginTest::addContact(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest_addContact_m873795081 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Example::CallSwiftMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void Example_CallSwiftMethod_m1097602320 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CallBackHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CallBackHandler__ctor_m1102348506 (CallBackHandler_t2665009537 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CallBackHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void CallBackHandler_Start_m1172262868 (CallBackHandler_t2665009537 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CallBackHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void CallBackHandler_Update_m3798155597 (CallBackHandler_t2665009537 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CallBackHandler::OnCallFromSwift(System.String)
extern "C" IL2CPP_METHOD_ATTR void CallBackHandler_OnCallFromSwift_m608827734 (CallBackHandler_t2665009537 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallBackHandler_OnCallFromSwift_m608827734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral813377863, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_SuccessPopup_4();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cube::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Cube__ctor_m2496952789 (Cube_t1827850983 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Cube::Start()
extern "C" IL2CPP_METHOD_ATTR void Cube_Start_m331123637 (Cube_t1827850983 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Cube::Update()
extern "C" IL2CPP_METHOD_ATTR void Cube_Update_m3894428543 (Cube_t1827850983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cube_Update_m3894428543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localPosition_m4234289348(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_3();
		float L_3 = __this->get_minimumY_4();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubeGenerator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CubeGenerator__ctor_m2764148959 (CubeGenerator_t270664978 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CubeGenerator::Start()
extern "C" IL2CPP_METHOD_ATTR void CubeGenerator_Start_m2218031627 (CubeGenerator_t270664978 * __this, const RuntimeMethod* method)
{
	{
		CubeGenerator_Generate_m736652441(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CubeGenerator::Update()
extern "C" IL2CPP_METHOD_ATTR void CubeGenerator_Update_m1284864508 (CubeGenerator_t270664978 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_lastGeneratedTime_6();
		float L_2 = __this->get_generateInterval_5();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) >= ((float)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		CubeGenerator_Generate_m736652441(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CubeGenerator::Generate()
extern "C" IL2CPP_METHOD_ATTR void CubeGenerator_Generate_m736652441 (CubeGenerator_t270664978 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CubeGenerator_Generate_m736652441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_cubePrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m786917804(L_3, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = __this->get_cubePrefab_4();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localScale_m129152068(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m3053443106(L_6, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_0;
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_16 = Random_get_rotation_m4216259439(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_rotation_m3524318132(L_15, L_16, /*hidden argument*/NULL);
		float L_17 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastGeneratedTime_6(L_17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Example::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Example__ctor_m1228672891 (Example_t2586762383 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _ex_callSwiftMethod(char*);
// System.Void Example::_ex_callSwiftMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void Example__ex_callSwiftMethod_m1908548193 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ex_callSwiftMethod)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Example::CallSwiftMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void Example_CallSwiftMethod_m1097602320 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Example__ex_callSwiftMethod_m1908548193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExampleCallbackHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExampleCallbackHandler__ctor_m3091837234 (ExampleCallbackHandler_t1258610184 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleCallbackHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void ExampleCallbackHandler_Start_m3798596972 (ExampleCallbackHandler_t1258610184 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ExampleCallbackHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void ExampleCallbackHandler_Update_m2269428182 (ExampleCallbackHandler_t1258610184 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ExampleCallbackHandler::OnCallFromSwift(System.String)
extern "C" IL2CPP_METHOD_ATTR void ExampleCallbackHandler_OnCallFromSwift_m902410499 (ExampleCallbackHandler_t1258610184 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleCallbackHandler_OnCallFromSwift_m902410499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral813377863, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Text_t1901882714 * L_2 = __this->get_textLabel_4();
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MyLog::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MyLog__ctor_m3545453143 (MyLog_t1213741384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog__ctor_m3545453143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_t3637523393 * L_0 = (Queue_t3637523393 *)il2cpp_codegen_object_new(Queue_t3637523393_il2cpp_TypeInfo_var);
		Queue__ctor_m2030580699(L_0, /*hidden argument*/NULL);
		__this->set_myLogQueue_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLog::Start()
extern "C" IL2CPP_METHOD_ATTR void MyLog_Start_m1333126529 (MyLog_t1213741384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog_Start_m1333126529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1760406187, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3716721323, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1378069163, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3334384299, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLog::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void MyLog_OnEnable_m2570114161 (MyLog_t1213741384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog_OnEnable_m2570114161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)MyLog_HandleLog_m2386089854_RuntimeMethod_var;
		LogCallback_t3588208630 * L_1 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m3912321845(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLog::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void MyLog_OnDisable_m2845647105 (MyLog_t1213741384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog_OnDisable_m2845647105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)MyLog_HandleLog_m2386089854_RuntimeMethod_var;
		LogCallback_t3588208630 * L_1 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m869397979(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MyLog::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void MyLog_HandleLog_m2386089854 (MyLog_t1213741384 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog_HandleLog_m2386089854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___logString0;
		__this->set_myLog_4(L_0);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2334283289);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2334283289);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		int32_t L_4 = ___type2;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LogType_t73765434_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2057739243);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2057739243);
		ObjectU5BU5D_t2843939325* L_8 = L_7;
		String_t* L_9 = __this->get_myLog_4();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_10;
		Queue_t3637523393 * L_11 = __this->get_myLogQueue_5();
		String_t* L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< RuntimeObject * >::Invoke(18 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_11, L_12);
		int32_t L_13 = ___type2;
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_14 = ___stackTrace1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614566, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		Queue_t3637523393 * L_16 = __this->get_myLogQueue_5();
		String_t* L_17 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< RuntimeObject * >::Invoke(18 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_16, L_17);
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_myLog_4(L_18);
		Queue_t3637523393 * L_19 = __this->get_myLogQueue_5();
		NullCheck(L_19);
		RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_19);
		V_2 = L_20;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_007c:
		{
			RuntimeObject* L_21 = V_2;
			NullCheck(L_21);
			RuntimeObject * L_22 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_22, String_t_il2cpp_TypeInfo_var));
			String_t* L_23 = __this->get_myLog_4();
			String_t* L_24 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			__this->set_myLog_4(L_25);
		}

IL_009a:
		{
			RuntimeObject* L_26 = V_2;
			NullCheck(L_26);
			bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_007c;
			}
		}

IL_00a5:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00aa;
	}

FINALLY_00aa:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_28 = V_2;
			RuntimeObject* L_29 = ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_29;
			if (!L_29)
			{
				goto IL_00bd;
			}
		}

IL_00b7:
		{
			RuntimeObject* L_30 = V_3;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_30);
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(170)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(170)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		return;
	}
}
// System.Void MyLog::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void MyLog_OnGUI_m542424882 (MyLog_t1213741384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyLog_OnGUI_m542424882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_myLog_4();
		GUILayoutOptionU5BU5D_t2510215842* L_1 = (GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_Label_m1960000298(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PluginTest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PluginTest__ctor_m375705533 (PluginTest_t3334191320 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PluginTest::_ex_callSwiftMethod(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest__ex_callSwiftMethod_m210652584 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*);

	// Marshaling of parameter '___firstName0' to native representation
	char* ____firstName0_marshaled = NULL;
	____firstName0_marshaled = il2cpp_codegen_marshal_string(___firstName0);

	// Marshaling of parameter '___lastName1' to native representation
	char* ____lastName1_marshaled = NULL;
	____lastName1_marshaled = il2cpp_codegen_marshal_string(___lastName1);

	// Marshaling of parameter '___company2' to native representation
	char* ____company2_marshaled = NULL;
	____company2_marshaled = il2cpp_codegen_marshal_string(___company2);

	// Marshaling of parameter '___number3' to native representation
	char* ____number3_marshaled = NULL;
	____number3_marshaled = il2cpp_codegen_marshal_string(___number3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ex_callSwiftMethod)(____firstName0_marshaled, ____lastName1_marshaled, ____company2_marshaled, ____number3_marshaled);

	// Marshaling cleanup of parameter '___firstName0' native representation
	il2cpp_codegen_marshal_free(____firstName0_marshaled);
	____firstName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___lastName1' native representation
	il2cpp_codegen_marshal_free(____lastName1_marshaled);
	____lastName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___company2' native representation
	il2cpp_codegen_marshal_free(____company2_marshaled);
	____company2_marshaled = NULL;

	// Marshaling cleanup of parameter '___number3' native representation
	il2cpp_codegen_marshal_free(____number3_marshaled);
	____number3_marshaled = NULL;

}
// System.Void PluginTest::Start()
extern "C" IL2CPP_METHOD_ATTR void PluginTest_Start_m2347248871 (PluginTest_t3334191320 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PluginTest::Update()
extern "C" IL2CPP_METHOD_ATTR void PluginTest_Update_m1241954613 (PluginTest_t3334191320 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PluginTest::addContact(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest_addContact_m873795081 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PluginTest_addContact_m873795081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t32045322 * V_0 = NULL;
	AndroidJavaClass_t32045322 * V_1 = NULL;
	AndroidJavaObject_t4131667876 * V_2 = NULL;
	AndroidJavaObject_t4131667876 * V_3 = NULL;
	ObjectU5BU5D_t2843939325* V_4 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0072;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_1, _stringLiteral1643483824, /*hidden argument*/NULL);
		V_0 = L_1;
		AndroidJavaClass_t32045322 * L_2 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_2, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_1 = L_2;
		AndroidJavaClass_t32045322 * L_3 = V_1;
		NullCheck(L_3);
		AndroidJavaObject_t4131667876 * L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m2012045155(L_3, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m2012045155_RuntimeMethod_var);
		V_2 = L_4;
		AndroidJavaObject_t4131667876 * L_5 = V_2;
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_5);
		AndroidJavaObject_t4131667876 * L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m401076871(L_5, _stringLiteral1176190240, L_6, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t4131667876_m401076871_RuntimeMethod_var);
		V_3 = L_7;
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		V_4 = L_8;
		ObjectU5BU5D_t2843939325* L_9 = V_4;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3940781687);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3940781687);
		ObjectU5BU5D_t2843939325* L_10 = V_4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral1131647142);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral1131647142);
		ObjectU5BU5D_t2843939325* L_11 = V_4;
		AndroidJavaObject_t4131667876 * L_12 = V_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		AndroidJavaClass_t32045322 * L_13 = V_0;
		ObjectU5BU5D_t2843939325* L_14 = V_4;
		NullCheck(L_13);
		AndroidJavaObject_CallStatic_TisString_t_m3745242685(L_13, _stringLiteral128410377, L_14, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3745242685_RuntimeMethod_var);
		goto IL_0086;
	}

IL_0072:
	{
		int32_t L_15 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_16 = ___firstName0;
		String_t* L_17 = ___lastName1;
		String_t* L_18 = ___company2;
		String_t* L_19 = ___number3;
		PluginTest_CallSwiftMethod_m1720971692(NULL /*static, unused*/, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void PluginTest::CallSwiftMethod(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PluginTest_CallSwiftMethod_m1720971692 (RuntimeObject * __this /* static, unused */, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___firstName0;
		String_t* L_1 = ___lastName1;
		String_t* L_2 = ___company2;
		String_t* L_3 = ___number3;
		PluginTest__ex_callSwiftMethod_m210652584(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rotator__ctor_m1942799180 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Start()
extern "C" IL2CPP_METHOD_ATTR void Rotator_Start_m3222717564 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Rotator::Update()
extern "C" IL2CPP_METHOD_ATTR void Rotator_Update_m3321529107 (Rotator_t2029754672 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localEulerAngles_m2136926248(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_3();
		float L_3 = __this->get_rotationSpeed_4();
		float L_4 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4))));
		float L_5 = V_0;
		if ((!(((float)L_5) > ((float)(360.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		float L_6 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract((float)L_6, (float)(360.0f)));
	}

IL_0034:
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localEulerAngles_m2136926248(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_x_2();
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localEulerAngles_m2136926248(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13 = (&V_3)->get_y_3();
		float L_14 = __this->get_rotationSpeed_4();
		float L_15 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_localEulerAngles_m2136926248(L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		float L_18 = (&V_4)->get_z_4();
		Vector3_t3722313464  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector3__ctor_m3353183577((&L_19), L_10, ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), L_18, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localEulerAngles_m4202601546(L_7, L_19, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScreenLogger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger__ctor_m2305838701 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ShowLog_7((bool)1);
		__this->set_ShowInEditor_8((bool)1);
		__this->set_Height_9((0.5f));
		__this->set_Width_10((0.5f));
		__this->set_Margin_11(((int32_t)20));
		__this->set_AnchorPosition_12(2);
		__this->set_FontSize_13(((int32_t)14));
		__this->set_BackgroundOpacity_14((0.5f));
		Color_t2555686324  L_0 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_BackgroundColor_15(L_0);
		__this->set_LogMessages_16((bool)1);
		__this->set_LogWarnings_17((bool)1);
		__this->set_LogErrors_18((bool)1);
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_MessageColor_19(L_1);
		Color_t2555686324  L_2 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_WarningColor_20(L_2);
		Color_t2555686324  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Color__ctor_m286683560((&L_3), (1.0f), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->set_ErrorColor_21(L_3);
		__this->set_StackTraceErrors_24((bool)1);
		__this->set_padding_28(5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// ScreenLogger ScreenLogger::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ScreenLogger_t2491551098 * ScreenLogger_get_Instance_m1979367399 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_get_Instance_m1979367399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		bool L_0 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_instantiated_6();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		ScreenLogger_t2491551098 * L_1 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_instance_5();
		return L_1;
	}

IL_0010:
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (ScreenLogger_t2491551098_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_4 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instance_5(((ScreenLogger_t2491551098 *)IsInstClass((RuntimeObject*)L_4, ScreenLogger_t2491551098_il2cpp_TypeInfo_var)));
		ScreenLogger_t2491551098 * L_5 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_instance_5();
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00c2;
		}
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (ScreenLogger_t2491551098_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Object_t631007953 * L_9 = Resources_Load_m3480190876(NULL /*static, unused*/, _stringLiteral2810471641, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_10 = Object_Instantiate_m3403600534(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instance_5(((ScreenLogger_t2491551098 *)IsInstClass((RuntimeObject*)L_10, ScreenLogger_t2491551098_il2cpp_TypeInfo_var)));
		goto IL_0098;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0061;
		throw e;
	}

CATCH_0061:
	{ // begin catch(System.Object)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3527370753, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_11 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_12 = L_11;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (ScreenLogger_t2491551098_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_14);
		GameObject_t1113636619 * L_15 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m1350607670(L_15, _stringLiteral1486726704, L_12, /*hidden argument*/NULL);
		NullCheck(L_15);
		ScreenLogger_t2491551098 * L_16 = GameObject_GetComponent_TisScreenLogger_t2491551098_m866990403(L_15, /*hidden argument*/GameObject_GetComponent_TisScreenLogger_t2491551098_m866990403_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instance_5(L_16);
		goto IL_0098;
	} // end catch (depth: 1)

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		ScreenLogger_t2491551098 * L_17 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_instance_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1316732877, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instantiated_6((bool)1);
	}

IL_00bd:
	{
		goto IL_00c8;
	}

IL_00c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instantiated_6((bool)1);
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		ScreenLogger_t2491551098 * L_19 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_instance_5();
		return L_19;
	}
}
// System.Void ScreenLogger::Awake()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_Awake_m2807863068 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_Awake_m2807863068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScreenLoggerU5BU5D_t3639393119* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ScreenLoggerU5BU5D_t3639393119* L_0 = Object_FindObjectsOfType_TisScreenLogger_t2491551098_m3801801504(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisScreenLogger_t2491551098_m3801801504_RuntimeMethod_var);
		V_0 = L_0;
		ScreenLoggerU5BU5D_t3639393119* L_1 = V_0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3169257278, /*hidden argument*/NULL);
		__this->set_destroying_29((bool)1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		ScreenLogger_InitStyles_m673770444(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		bool L_3 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_IsPersistent_4();
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void ScreenLogger::InitStyles()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_InitStyles_m673770444 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_InitStyles_m673770444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		Color_t2555686324 * L_1 = __this->get_address_of_BackgroundColor_15();
		float L_2 = __this->get_BackgroundOpacity_14();
		L_1->set_a_3(L_2);
		Texture2D_t3840446185 * L_3 = V_0;
		Color_t2555686324  L_4 = __this->get_BackgroundColor_15();
		NullCheck(L_3);
		Texture2D_SetPixel_m2984741184(L_3, 0, 0, L_4, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = V_0;
		NullCheck(L_5);
		Texture2D_Apply_m2271746283(L_5, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_6 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_6, /*hidden argument*/NULL);
		__this->set_styleContainer_26(L_6);
		GUIStyle_t3956901511 * L_7 = __this->get_styleContainer_26();
		NullCheck(L_7);
		GUIStyleState_t1397964415 * L_8 = GUIStyle_get_normal_m729441812(L_7, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_9 = V_0;
		NullCheck(L_8);
		GUIStyleState_set_background_m369476077(L_8, L_9, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_10 = __this->get_styleContainer_26();
		NullCheck(L_10);
		GUIStyle_set_wordWrap_m1419501823(L_10, (bool)0, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_11 = __this->get_styleContainer_26();
		int32_t L_12 = __this->get_padding_28();
		int32_t L_13 = __this->get_padding_28();
		int32_t L_14 = __this->get_padding_28();
		int32_t L_15 = __this->get_padding_28();
		RectOffset_t1369453676 * L_16 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_16, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		GUIStyle_set_padding_m3302456044(L_11, L_16, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_17 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_17, /*hidden argument*/NULL);
		__this->set_styleText_27(L_17);
		GUIStyle_t3956901511 * L_18 = __this->get_styleText_27();
		int32_t L_19 = __this->get_FontSize_13();
		NullCheck(L_18);
		GUIStyle_set_fontSize_m1566850023(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenLogger::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_OnEnable_m2006673652 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_OnEnable_m2006673652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_ShowInEditor_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Queue_1_t2437791231 * L_2 = (Queue_1_t2437791231 *)il2cpp_codegen_object_new(Queue_1_t2437791231_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1315865569(L_2, /*hidden argument*/Queue_1__ctor_m1315865569_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_queue_25(L_2);
		intptr_t L_3 = (intptr_t)ScreenLogger_HandleLog_m951685760_RuntimeMethod_var;
		LogCallback_t3588208630 * L_4 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_4, __this, L_3, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m3912321845(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenLogger::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_OnDisable_m2720401943 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_OnDisable_m2720401943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_destroying_29();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		intptr_t L_1 = (intptr_t)ScreenLogger_HandleLog_m951685760_RuntimeMethod_var;
		LogCallback_t3588208630 * L_2 = (LogCallback_t3588208630 *)il2cpp_codegen_object_new(LogCallback_t3588208630_il2cpp_TypeInfo_var);
		LogCallback__ctor_m144650965(L_2, __this, L_1, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m869397979(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenLogger::Update()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_Update_m2748709459 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_Update_m2748709459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_ShowInEditor_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_Margin_11();
		float L_4 = __this->get_Height_9();
		int32_t L_5 = __this->get_padding_28();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_3))))))), (float)L_4)), (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_5)))))));
		float L_6 = V_0;
		GUIStyle_t3956901511 * L_7 = __this->get_styleText_27();
		NullCheck(L_7);
		float L_8 = GUIStyle_get_lineHeight_m3399768780(L_7, /*hidden argument*/NULL);
		V_1 = (((int32_t)((int32_t)((float)((float)L_6/(float)L_8)))));
		goto IL_0056;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		Queue_1_t2437791231 * L_9 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_queue_25();
		NullCheck(L_9);
		Queue_1_Dequeue_m663649600(L_9, /*hidden argument*/Queue_1_Dequeue_m663649600_RuntimeMethod_var);
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		Queue_1_t2437791231 * L_10 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_queue_25();
		NullCheck(L_10);
		int32_t L_11 = Queue_1_get_Count_m2905763174(L_10, /*hidden argument*/Queue_1_get_Count_m2905763174_RuntimeMethod_var);
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.Void ScreenLogger::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_OnGUI_m1285445900 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_OnGUI_m1285445900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	LogMessage_t2591531737 * V_5 = NULL;
	Enumerator_t3099703333  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_ShowLog_7();
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
		bool L_1 = __this->get_ShowInEditor_8();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_Margin_11();
		float L_5 = __this->get_Width_10();
		V_0 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_4))))))), (float)L_5));
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_Margin_11();
		float L_8 = __this->get_Height_9();
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_7))))))), (float)L_8));
		V_2 = (1.0f);
		V_3 = (1.0f);
		int32_t L_9 = __this->get_AnchorPosition_12();
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0101;
			}
			case 1:
			{
				goto IL_0116;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_00b2;
			}
		}
	}
	{
		goto IL_0148;
	}

IL_0080:
	{
		int32_t L_11 = __this->get_Margin_11();
		V_2 = (((float)((float)L_11)));
		int32_t L_12 = __this->get_Margin_11();
		int32_t L_13 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_Margin_11();
		float L_15 = __this->get_Height_9();
		V_3 = ((float)il2cpp_codegen_add((float)(((float)((float)L_12))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_14))))))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_15))))));
		goto IL_0148;
	}

IL_00b2:
	{
		int32_t L_16 = __this->get_Margin_11();
		int32_t L_17 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_Margin_11();
		float L_19 = __this->get_Width_10();
		V_2 = ((float)il2cpp_codegen_add((float)(((float)((float)L_16))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_18))))))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_19))))));
		int32_t L_20 = __this->get_Margin_11();
		int32_t L_21 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_22 = __this->get_Margin_11();
		float L_23 = __this->get_Height_9();
		V_3 = ((float)il2cpp_codegen_add((float)(((float)((float)L_20))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_22))))))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23))))));
		goto IL_0148;
	}

IL_0101:
	{
		int32_t L_24 = __this->get_Margin_11();
		V_2 = (((float)((float)L_24)));
		int32_t L_25 = __this->get_Margin_11();
		V_3 = (((float)((float)L_25)));
		goto IL_0148;
	}

IL_0116:
	{
		int32_t L_26 = __this->get_Margin_11();
		int32_t L_27 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_28 = __this->get_Margin_11();
		float L_29 = __this->get_Width_10();
		V_2 = ((float)il2cpp_codegen_add((float)(((float)((float)L_26))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_28))))))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_29))))));
		int32_t L_30 = __this->get_Margin_11();
		V_3 = (((float)((float)L_30)));
		goto IL_0148;
	}

IL_0148:
	{
		float L_31 = V_2;
		float L_32 = V_3;
		float L_33 = V_0;
		float L_34 = V_1;
		Rect_t2360479859  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Rect__ctor_m2614021312((&L_35), L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_36 = __this->get_styleContainer_26();
		GUILayout_BeginArea_m1332121664(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		Queue_1_t2437791231 * L_37 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_queue_25();
		NullCheck(L_37);
		Enumerator_t3099703333  L_38 = Queue_1_GetEnumerator_m2154787492(L_37, /*hidden argument*/Queue_1_GetEnumerator_m2154787492_RuntimeMethod_var);
		V_6 = L_38;
	}

IL_0168:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0223;
		}

IL_016d:
		{
			LogMessage_t2591531737 * L_39 = Enumerator_get_Current_m4233087181((Enumerator_t3099703333 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m4233087181_RuntimeMethod_var);
			V_5 = L_39;
			LogMessage_t2591531737 * L_40 = V_5;
			NullCheck(L_40);
			int32_t L_41 = L_40->get_Type_1();
			V_7 = L_41;
			int32_t L_42 = V_7;
			switch (L_42)
			{
				case 0:
				{
					goto IL_01d5;
				}
				case 1:
				{
					goto IL_01d5;
				}
				case 2:
				{
					goto IL_019f;
				}
				case 3:
				{
					goto IL_01ba;
				}
				case 4:
				{
					goto IL_01d5;
				}
			}
		}

IL_019a:
		{
			goto IL_01f0;
		}

IL_019f:
		{
			GUIStyle_t3956901511 * L_43 = __this->get_styleText_27();
			NullCheck(L_43);
			GUIStyleState_t1397964415 * L_44 = GUIStyle_get_normal_m729441812(L_43, /*hidden argument*/NULL);
			Color_t2555686324  L_45 = __this->get_WarningColor_20();
			NullCheck(L_44);
			GUIStyleState_set_textColor_m1105876047(L_44, L_45, /*hidden argument*/NULL);
			goto IL_020b;
		}

IL_01ba:
		{
			GUIStyle_t3956901511 * L_46 = __this->get_styleText_27();
			NullCheck(L_46);
			GUIStyleState_t1397964415 * L_47 = GUIStyle_get_normal_m729441812(L_46, /*hidden argument*/NULL);
			Color_t2555686324  L_48 = __this->get_MessageColor_19();
			NullCheck(L_47);
			GUIStyleState_set_textColor_m1105876047(L_47, L_48, /*hidden argument*/NULL);
			goto IL_020b;
		}

IL_01d5:
		{
			GUIStyle_t3956901511 * L_49 = __this->get_styleText_27();
			NullCheck(L_49);
			GUIStyleState_t1397964415 * L_50 = GUIStyle_get_normal_m729441812(L_49, /*hidden argument*/NULL);
			Color_t2555686324  L_51 = __this->get_ErrorColor_21();
			NullCheck(L_50);
			GUIStyleState_set_textColor_m1105876047(L_50, L_51, /*hidden argument*/NULL);
			goto IL_020b;
		}

IL_01f0:
		{
			GUIStyle_t3956901511 * L_52 = __this->get_styleText_27();
			NullCheck(L_52);
			GUIStyleState_t1397964415 * L_53 = GUIStyle_get_normal_m729441812(L_52, /*hidden argument*/NULL);
			Color_t2555686324  L_54 = __this->get_MessageColor_19();
			NullCheck(L_53);
			GUIStyleState_set_textColor_m1105876047(L_53, L_54, /*hidden argument*/NULL);
			goto IL_020b;
		}

IL_020b:
		{
			LogMessage_t2591531737 * L_55 = V_5;
			NullCheck(L_55);
			String_t* L_56 = L_55->get_Message_0();
			GUIStyle_t3956901511 * L_57 = __this->get_styleText_27();
			GUILayoutOptionU5BU5D_t2510215842* L_58 = (GUILayoutOptionU5BU5D_t2510215842*)SZArrayNew(GUILayoutOptionU5BU5D_t2510215842_il2cpp_TypeInfo_var, (uint32_t)0);
			GUILayout_Label_m1096010274(NULL /*static, unused*/, L_56, L_57, L_58, /*hidden argument*/NULL);
		}

IL_0223:
		{
			bool L_59 = Enumerator_MoveNext_m2728408406((Enumerator_t3099703333 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_m2728408406_RuntimeMethod_var);
			if (L_59)
			{
				goto IL_016d;
			}
		}

IL_022f:
		{
			IL2CPP_LEAVE(0x242, FINALLY_0234);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0234;
	}

FINALLY_0234:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1714353663((Enumerator_t3099703333 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m1714353663_RuntimeMethod_var);
		IL2CPP_END_FINALLY(564)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(564)
	{
		IL2CPP_JUMP_TBL(0x242, IL_0242)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0242:
	{
		GUILayout_EndArea_m2046611416(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenLogger::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_HandleLog_m951685760 (ScreenLogger_t2491551098 * __this, String_t* ___message0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger_HandleLog_m951685760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t1281789340* V_4 = NULL;
	String_t* V_5 = NULL;
	StringU5BU5D_t1281789340* V_6 = NULL;
	int32_t V_7 = 0;
	{
		int32_t L_0 = ___type2;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_LogErrors_18();
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_2 = ___type2;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		bool L_3 = __this->get_LogErrors_18();
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		int32_t L_4 = ___type2;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = __this->get_LogErrors_18();
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		int32_t L_6 = ___type2;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		bool L_7 = __this->get_LogMessages_16();
		if (L_7)
		{
			goto IL_004b;
		}
	}
	{
		return;
	}

IL_004b:
	{
		int32_t L_8 = ___type2;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_005e;
		}
	}
	{
		bool L_9 = __this->get_LogWarnings_17();
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_005e:
	{
		String_t* L_10 = ___message0;
		CharU5BU5D_t3528271667* L_11 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_10);
		StringU5BU5D_t1281789340* L_13 = String_Split_m3646115398(L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		StringU5BU5D_t1281789340* L_14 = V_0;
		V_2 = L_14;
		V_3 = 0;
		goto IL_0092;
	}

IL_0079:
	{
		StringU5BU5D_t1281789340* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		Queue_1_t2437791231 * L_19 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_queue_25();
		String_t* L_20 = V_1;
		int32_t L_21 = ___type2;
		LogMessage_t2591531737 * L_22 = (LogMessage_t2591531737 *)il2cpp_codegen_object_new(LogMessage_t2591531737_il2cpp_TypeInfo_var);
		LogMessage__ctor_m1357090477(L_22, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Queue_1_Enqueue_m483150723(L_19, L_22, /*hidden argument*/Queue_1_Enqueue_m483150723_RuntimeMethod_var);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0092:
	{
		int32_t L_24 = V_3;
		StringU5BU5D_t1281789340* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_26 = ___type2;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00ae;
		}
	}
	{
		bool L_27 = __this->get_StackTraceErrors_24();
		if (L_27)
		{
			goto IL_00ae;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		int32_t L_28 = ___type2;
		if (L_28)
		{
			goto IL_00c0;
		}
	}
	{
		bool L_29 = __this->get_StackTraceErrors_24();
		if (L_29)
		{
			goto IL_00c0;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		int32_t L_30 = ___type2;
		if ((!(((uint32_t)L_30) == ((uint32_t)4))))
		{
			goto IL_00d3;
		}
	}
	{
		bool L_31 = __this->get_StackTraceErrors_24();
		if (L_31)
		{
			goto IL_00d3;
		}
	}
	{
		return;
	}

IL_00d3:
	{
		int32_t L_32 = ___type2;
		if ((!(((uint32_t)L_32) == ((uint32_t)3))))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_33 = __this->get_StackTraceMessages_22();
		if (L_33)
		{
			goto IL_00e6;
		}
	}
	{
		return;
	}

IL_00e6:
	{
		int32_t L_34 = ___type2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		bool L_35 = __this->get_StackTraceWarnings_23();
		if (L_35)
		{
			goto IL_00f9;
		}
	}
	{
		return;
	}

IL_00f9:
	{
		String_t* L_36 = ___stackTrace1;
		CharU5BU5D_t3528271667* L_37 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_36);
		StringU5BU5D_t1281789340* L_39 = String_Split_m3646115398(L_36, L_38, /*hidden argument*/NULL);
		V_4 = L_39;
		StringU5BU5D_t1281789340* L_40 = V_4;
		V_6 = L_40;
		V_7 = 0;
		goto IL_014d;
	}

IL_0118:
	{
		StringU5BU5D_t1281789340* L_41 = V_6;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_5 = L_44;
		String_t* L_45 = V_5;
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_m3847582255(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0147;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScreenLogger_t2491551098_il2cpp_TypeInfo_var);
		Queue_1_t2437791231 * L_47 = ((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->get_queue_25();
		String_t* L_48 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517376, L_48, /*hidden argument*/NULL);
		int32_t L_50 = ___type2;
		LogMessage_t2591531737 * L_51 = (LogMessage_t2591531737 *)il2cpp_codegen_object_new(LogMessage_t2591531737_il2cpp_TypeInfo_var);
		LogMessage__ctor_m1357090477(L_51, L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_47);
		Queue_1_Enqueue_m483150723(L_47, L_51, /*hidden argument*/Queue_1_Enqueue_m483150723_RuntimeMethod_var);
	}

IL_0147:
	{
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_014d:
	{
		int32_t L_53 = V_7;
		StringU5BU5D_t1281789340* L_54 = V_6;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_0118;
		}
	}
	{
		return;
	}
}
// System.Void ScreenLogger::InspectorGUIUpdated()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger_InspectorGUIUpdated_m1797369864 (ScreenLogger_t2491551098 * __this, const RuntimeMethod* method)
{
	{
		ScreenLogger_InitStyles_m673770444(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenLogger::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ScreenLogger__cctor_m1677680862 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScreenLogger__cctor_m1677680862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_IsPersistent_4((bool)1);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_instantiated_6((bool)0);
		Queue_1_t2437791231 * L_0 = (Queue_1_t2437791231 *)il2cpp_codegen_object_new(Queue_1_t2437791231_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1315865569(L_0, /*hidden argument*/Queue_1__ctor_m1315865569_RuntimeMethod_var);
		((ScreenLogger_t2491551098_StaticFields*)il2cpp_codegen_static_fields_for(ScreenLogger_t2491551098_il2cpp_TypeInfo_var))->set_queue_25(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScreenLogger/LogMessage::.ctor(System.String,UnityEngine.LogType)
extern "C" IL2CPP_METHOD_ATTR void LogMessage__ctor_m1357090477 (LogMessage_t2591531737 * __this, String_t* ___msg0, int32_t ___type1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___msg0;
		__this->set_Message_0(L_0);
		int32_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestUIController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TestUIController__ctor_m544929002 (TestUIController_t1360224826 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestUIController::Start()
extern "C" IL2CPP_METHOD_ATTR void TestUIController_Start_m510063598 (TestUIController_t1360224826 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TestUIController::Update()
extern "C" IL2CPP_METHOD_ATTR void TestUIController_Update_m3053343042 (TestUIController_t1360224826 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TestUIController::onSaveBtnPressed()
extern "C" IL2CPP_METHOD_ATTR void TestUIController_onSaveBtnPressed_m1038893708 (TestUIController_t1360224826 * __this, const RuntimeMethod* method)
{
	{
		InputField_t3762917431 * L_0 = __this->get_firstName_4();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m3534748202(L_0, /*hidden argument*/NULL);
		InputField_t3762917431 * L_2 = __this->get_lastName_5();
		NullCheck(L_2);
		String_t* L_3 = InputField_get_text_m3534748202(L_2, /*hidden argument*/NULL);
		InputField_t3762917431 * L_4 = __this->get_company_6();
		NullCheck(L_4);
		String_t* L_5 = InputField_get_text_m3534748202(L_4, /*hidden argument*/NULL);
		InputField_t3762917431 * L_6 = __this->get_number_7();
		NullCheck(L_6);
		String_t* L_7 = InputField_get_text_m3534748202(L_6, /*hidden argument*/NULL);
		TestUIController_saveContact_m3783443766(__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestUIController::saveContact(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void TestUIController_saveContact_m3783443766 (TestUIController_t1360224826 * __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___company2, String_t* ___number3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___firstName0;
		String_t* L_1 = ___lastName1;
		String_t* L_2 = ___company2;
		String_t* L_3 = ___number3;
		PluginTest_addContact_m873795081(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestUIController::refreshUI()
extern "C" IL2CPP_METHOD_ATTR void TestUIController_refreshUI_m1025074761 (TestUIController_t1360224826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestUIController_refreshUI_m1025074761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InputField_t3762917431 * L_0 = __this->get_firstName_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_1;
		InputField_t3762917431 * L_2 = __this->get_number_7();
		String_t* L_3 = V_0;
		NullCheck(L_2);
		InputField_set_text_m1877260015(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		V_0 = L_4;
		InputField_t3762917431 * L_5 = __this->get_company_6();
		String_t* L_6 = V_0;
		NullCheck(L_5);
		InputField_set_text_m1877260015(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = V_0;
		V_0 = L_7;
		InputField_t3762917431 * L_8 = __this->get_lastName_5();
		String_t* L_9 = V_0;
		NullCheck(L_8);
		InputField_set_text_m1877260015(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		NullCheck(L_0);
		InputField_set_text_m1877260015(L_0, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIController__ctor_m1552036494 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIController::Start()
extern "C" IL2CPP_METHOD_ATTR void UIController_Start_m2129252938 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UIController::Update()
extern "C" IL2CPP_METHOD_ATTR void UIController_Update_m3616445404 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UIController::OnPressCallSwiftMethodButton()
extern "C" IL2CPP_METHOD_ATTR void UIController_OnPressCallSwiftMethodButton_m137990531 (UIController_t2237998930 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIController_OnPressCallSwiftMethodButton_m137990531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Example_CallSwiftMethod_m1097602320(NULL /*static, unused*/, _stringLiteral627726351, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
