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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct BoundaryVisualizationDemo_t2326157821;
// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_t2973875676;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t1348399468;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t1748868200;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t593681627;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t371094978;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t809177306;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityTouchInputProfile
struct MixedRealityTouchInputProfile_t892786812;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t1269254288;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile
struct MixedRealityConfigurationProfile_t1059352949;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType
struct SystemType_t2235070413;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType[]
struct SystemTypeU5BU5D_t491796064;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData
struct BoundaryEventData_t3752774623;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_t3909317465;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t2812969632;
// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager
struct MixedRealityManager_t1093932290;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Internal.Interfaces.IMixedRealityManager>
struct Dictionary_2_t3414447248;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t2580218810;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Internal.Interfaces.IMixedRealityManager>>
struct List_1_t3172203449;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSystem_t107310040_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityManager_t1093932290_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1243785301;
extern String_t* _stringLiteral2438763459;
extern String_t* _stringLiteral3258293634;
extern String_t* _stringLiteral474850886;
extern String_t* _stringLiteral548396354;
extern String_t* _stringLiteral730774742;
extern String_t* _stringLiteral778727724;
extern const RuntimeMethod* Enumerable_Cast_TisTransform_t3600365921_m3857377578_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisTransform_t3600365921_m4208630033_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m3027209018_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3249086042_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3651111564_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealityManager_GetManager_TisIMixedRealityBoundarySystem_t3909317465_m3905580046_RuntimeMethod_var;
extern const uint32_t BoundaryVisualizationDemo_AddMarkers_m3541291039_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Awake_m3157749041_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m1439078186_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnDisable_m33221367_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnEnable_m2827179319_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Start_m2813642153_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Update_m2685918975_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo__ctor_m1576285073_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_get_BoundaryManager_m1395560565_MetadataUsageId;
extern const uint32_t MaterialMatrix_BuildMatrix_m2579498062_MetadataUsageId;
extern const uint32_t MaterialMatrix__ctor_m3010007991_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745573_H
#define U3CMODULEU3E_T692745573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745573 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745573_H
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
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_t3328599146* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_t3328599146* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_t3328599146* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t807237628* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t807237628* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t807237628** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t807237628* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
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
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
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
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
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
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
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
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef EXPERIENCESCALE_T3294075327_H
#define EXPERIENCESCALE_T3294075327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.ExperienceScale
struct  ExperienceScale_t3294075327 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t3294075327, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPERIENCESCALE_T3294075327_H
#ifndef GENERICBASEEVENTDATA_T112130871_H
#define GENERICBASEEVENTDATA_T112130871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.GenericBaseEventData
struct  GenericBaseEventData_t112130871  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.Internal.EventDatum.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t112130871, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_T112130871_H
#ifndef TYPE_T1872440698_H
#define TYPE_T1872440698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Boundary/Type
struct  Type_t1872440698 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1872440698, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1872440698_H
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
#ifndef PRIMITIVETYPE_T3468579401_H
#define PRIMITIVETYPE_T3468579401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t3468579401 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t3468579401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T3468579401_H
#ifndef BOUNDARYEVENTDATA_T3752774623_H
#define BOUNDARYEVENTDATA_T3752774623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData
struct  BoundaryEventData_t3752774623  : public GenericBaseEventData_t112130871
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData::<IsFloorVisualized>k__BackingField
	bool ___U3CIsFloorVisualizedU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData::<IsPlayAreaVisualized>k__BackingField
	bool ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData::<IsTrackedAreaVisualized>k__BackingField
	bool ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData::<AreBoundaryWallsVisualized>k__BackingField
	bool ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData::<IsCeilingVisualized>k__BackingField
	bool ___U3CIsCeilingVisualizedU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundaryEventData_t3752774623, ___U3CIsFloorVisualizedU3Ek__BackingField_3)); }
	inline bool get_U3CIsFloorVisualizedU3Ek__BackingField_3() const { return ___U3CIsFloorVisualizedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsFloorVisualizedU3Ek__BackingField_3() { return &___U3CIsFloorVisualizedU3Ek__BackingField_3; }
	inline void set_U3CIsFloorVisualizedU3Ek__BackingField_3(bool value)
	{
		___U3CIsFloorVisualizedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundaryEventData_t3752774623, ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4)); }
	inline bool get_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() const { return ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() { return &___U3CIsPlayAreaVisualizedU3Ek__BackingField_4; }
	inline void set_U3CIsPlayAreaVisualizedU3Ek__BackingField_4(bool value)
	{
		___U3CIsPlayAreaVisualizedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundaryEventData_t3752774623, ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5)); }
	inline bool get_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() const { return ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() { return &___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5; }
	inline void set_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5(bool value)
	{
		___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundaryEventData_t3752774623, ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6)); }
	inline bool get_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() const { return ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() { return &___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6; }
	inline void set_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6(bool value)
	{
		___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundaryEventData_t3752774623, ___U3CIsCeilingVisualizedU3Ek__BackingField_7)); }
	inline bool get_U3CIsCeilingVisualizedU3Ek__BackingField_7() const { return ___U3CIsCeilingVisualizedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsCeilingVisualizedU3Ek__BackingField_7() { return &___U3CIsCeilingVisualizedU3Ek__BackingField_7; }
	inline void set_U3CIsCeilingVisualizedU3Ek__BackingField_7(bool value)
	{
		___U3CIsCeilingVisualizedU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYEVENTDATA_T3752774623_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T1348399468_H
#define MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T1348399468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_t1348399468  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_t340375123 * ___floorMaterial_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_t2156229523  ___floorScale_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_t340375123 * ___playAreaMaterial_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_9;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_t340375123 * ___trackedAreaMaterial_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_11;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_t340375123 * ___boundaryWallMaterial_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_t340375123 * ___boundaryCeilingMaterial_14;

public:
	inline static int32_t get_offset_of_showFloor_4() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___showFloor_4)); }
	inline bool get_showFloor_4() const { return ___showFloor_4; }
	inline bool* get_address_of_showFloor_4() { return &___showFloor_4; }
	inline void set_showFloor_4(bool value)
	{
		___showFloor_4 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___floorMaterial_5)); }
	inline Material_t340375123 * get_floorMaterial_5() const { return ___floorMaterial_5; }
	inline Material_t340375123 ** get_address_of_floorMaterial_5() { return &___floorMaterial_5; }
	inline void set_floorMaterial_5(Material_t340375123 * value)
	{
		___floorMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___floorMaterial_5), value);
	}

	inline static int32_t get_offset_of_floorScale_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___floorScale_6)); }
	inline Vector2_t2156229523  get_floorScale_6() const { return ___floorScale_6; }
	inline Vector2_t2156229523 * get_address_of_floorScale_6() { return &___floorScale_6; }
	inline void set_floorScale_6(Vector2_t2156229523  value)
	{
		___floorScale_6 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___showPlayArea_7)); }
	inline bool get_showPlayArea_7() const { return ___showPlayArea_7; }
	inline bool* get_address_of_showPlayArea_7() { return &___showPlayArea_7; }
	inline void set_showPlayArea_7(bool value)
	{
		___showPlayArea_7 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___playAreaMaterial_8)); }
	inline Material_t340375123 * get_playAreaMaterial_8() const { return ___playAreaMaterial_8; }
	inline Material_t340375123 ** get_address_of_playAreaMaterial_8() { return &___playAreaMaterial_8; }
	inline void set_playAreaMaterial_8(Material_t340375123 * value)
	{
		___playAreaMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((&___playAreaMaterial_8), value);
	}

	inline static int32_t get_offset_of_showTrackedArea_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___showTrackedArea_9)); }
	inline bool get_showTrackedArea_9() const { return ___showTrackedArea_9; }
	inline bool* get_address_of_showTrackedArea_9() { return &___showTrackedArea_9; }
	inline void set_showTrackedArea_9(bool value)
	{
		___showTrackedArea_9 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___trackedAreaMaterial_10)); }
	inline Material_t340375123 * get_trackedAreaMaterial_10() const { return ___trackedAreaMaterial_10; }
	inline Material_t340375123 ** get_address_of_trackedAreaMaterial_10() { return &___trackedAreaMaterial_10; }
	inline void set_trackedAreaMaterial_10(Material_t340375123 * value)
	{
		___trackedAreaMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((&___trackedAreaMaterial_10), value);
	}

	inline static int32_t get_offset_of_showBoundaryWalls_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___showBoundaryWalls_11)); }
	inline bool get_showBoundaryWalls_11() const { return ___showBoundaryWalls_11; }
	inline bool* get_address_of_showBoundaryWalls_11() { return &___showBoundaryWalls_11; }
	inline void set_showBoundaryWalls_11(bool value)
	{
		___showBoundaryWalls_11 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___boundaryWallMaterial_12)); }
	inline Material_t340375123 * get_boundaryWallMaterial_12() const { return ___boundaryWallMaterial_12; }
	inline Material_t340375123 ** get_address_of_boundaryWallMaterial_12() { return &___boundaryWallMaterial_12; }
	inline void set_boundaryWallMaterial_12(Material_t340375123 * value)
	{
		___boundaryWallMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryWallMaterial_12), value);
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___showBoundaryCeiling_13)); }
	inline bool get_showBoundaryCeiling_13() const { return ___showBoundaryCeiling_13; }
	inline bool* get_address_of_showBoundaryCeiling_13() { return &___showBoundaryCeiling_13; }
	inline void set_showBoundaryCeiling_13(bool value)
	{
		___showBoundaryCeiling_13 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t1348399468, ___boundaryCeilingMaterial_14)); }
	inline Material_t340375123 * get_boundaryCeilingMaterial_14() const { return ___boundaryCeilingMaterial_14; }
	inline Material_t340375123 ** get_address_of_boundaryCeilingMaterial_14() { return &___boundaryCeilingMaterial_14; }
	inline void set_boundaryCeilingMaterial_14(Material_t340375123 * value)
	{
		___boundaryCeilingMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryCeilingMaterial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T1348399468_H
#ifndef MIXEDREALITYCONFIGURATIONPROFILE_T1059352949_H
#define MIXEDREALITYCONFIGURATIONPROFILE_T1059352949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile
struct  MixedRealityConfigurationProfile_t1059352949  : public ScriptableObject_t2528358522
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::initialManagerTypes
	SystemTypeU5BU5D_t491796064* ___initialManagerTypes_4;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Internal.Interfaces.IMixedRealityManager> Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::<ActiveManagers>k__BackingField
	Dictionary_2_t3414447248 * ___U3CActiveManagersU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableCameraProfile
	bool ___enableCameraProfile_7;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_t1269254288 * ___cameraProfile_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_9;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::inputSystemType
	SystemType_t2235070413 * ___inputSystemType_10;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t593681627 * ___inputActionsProfile_11;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::pointerProfile
	MixedRealityPointerProfile_t371094978 * ___pointerProfile_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableSpeechCommands
	bool ___enableSpeechCommands_13;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t809177306 * ___speechCommandsProfile_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableDictation
	bool ___enableDictation_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::recognitionConfidenceLevel
	int32_t ___recognitionConfidenceLevel_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableTouchScreenInput
	bool ___enableTouchScreenInput_17;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityTouchInputProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::touchScreenInputProfile
	MixedRealityTouchInputProfile_t892786812 * ___touchScreenInputProfile_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableControllerMapping
	bool ___enableControllerMapping_19;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t1748868200 * ___controllerMappingProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_21;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::boundarySystemType
	SystemType_t2235070413 * ___boundarySystemType_22;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::boundaryHeight
	float ___boundaryHeight_23;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t1348399468 * ___boundaryVisualizationProfile_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_25;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::teleportSystemType
	SystemType_t2235070413 * ___teleportSystemType_26;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::teleportDuration
	float ___teleportDuration_27;

public:
	inline static int32_t get_offset_of_initialManagerTypes_4() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___initialManagerTypes_4)); }
	inline SystemTypeU5BU5D_t491796064* get_initialManagerTypes_4() const { return ___initialManagerTypes_4; }
	inline SystemTypeU5BU5D_t491796064** get_address_of_initialManagerTypes_4() { return &___initialManagerTypes_4; }
	inline void set_initialManagerTypes_4(SystemTypeU5BU5D_t491796064* value)
	{
		___initialManagerTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___initialManagerTypes_4), value);
	}

	inline static int32_t get_offset_of_U3CActiveManagersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___U3CActiveManagersU3Ek__BackingField_5)); }
	inline Dictionary_2_t3414447248 * get_U3CActiveManagersU3Ek__BackingField_5() const { return ___U3CActiveManagersU3Ek__BackingField_5; }
	inline Dictionary_2_t3414447248 ** get_address_of_U3CActiveManagersU3Ek__BackingField_5() { return &___U3CActiveManagersU3Ek__BackingField_5; }
	inline void set_U3CActiveManagersU3Ek__BackingField_5(Dictionary_2_t3414447248 * value)
	{
		___U3CActiveManagersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActiveManagersU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_targetExperienceScale_6() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___targetExperienceScale_6)); }
	inline int32_t get_targetExperienceScale_6() const { return ___targetExperienceScale_6; }
	inline int32_t* get_address_of_targetExperienceScale_6() { return &___targetExperienceScale_6; }
	inline void set_targetExperienceScale_6(int32_t value)
	{
		___targetExperienceScale_6 = value;
	}

	inline static int32_t get_offset_of_enableCameraProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableCameraProfile_7)); }
	inline bool get_enableCameraProfile_7() const { return ___enableCameraProfile_7; }
	inline bool* get_address_of_enableCameraProfile_7() { return &___enableCameraProfile_7; }
	inline void set_enableCameraProfile_7(bool value)
	{
		___enableCameraProfile_7 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___cameraProfile_8)); }
	inline MixedRealityCameraProfile_t1269254288 * get_cameraProfile_8() const { return ___cameraProfile_8; }
	inline MixedRealityCameraProfile_t1269254288 ** get_address_of_cameraProfile_8() { return &___cameraProfile_8; }
	inline void set_cameraProfile_8(MixedRealityCameraProfile_t1269254288 * value)
	{
		___cameraProfile_8 = value;
		Il2CppCodeGenWriteBarrier((&___cameraProfile_8), value);
	}

	inline static int32_t get_offset_of_enableInputSystem_9() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableInputSystem_9)); }
	inline bool get_enableInputSystem_9() const { return ___enableInputSystem_9; }
	inline bool* get_address_of_enableInputSystem_9() { return &___enableInputSystem_9; }
	inline void set_enableInputSystem_9(bool value)
	{
		___enableInputSystem_9 = value;
	}

	inline static int32_t get_offset_of_inputSystemType_10() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___inputSystemType_10)); }
	inline SystemType_t2235070413 * get_inputSystemType_10() const { return ___inputSystemType_10; }
	inline SystemType_t2235070413 ** get_address_of_inputSystemType_10() { return &___inputSystemType_10; }
	inline void set_inputSystemType_10(SystemType_t2235070413 * value)
	{
		___inputSystemType_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemType_10), value);
	}

	inline static int32_t get_offset_of_inputActionsProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___inputActionsProfile_11)); }
	inline MixedRealityInputActionsProfile_t593681627 * get_inputActionsProfile_11() const { return ___inputActionsProfile_11; }
	inline MixedRealityInputActionsProfile_t593681627 ** get_address_of_inputActionsProfile_11() { return &___inputActionsProfile_11; }
	inline void set_inputActionsProfile_11(MixedRealityInputActionsProfile_t593681627 * value)
	{
		___inputActionsProfile_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionsProfile_11), value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t371094978 * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t371094978 ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t371094978 * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((&___pointerProfile_12), value);
	}

	inline static int32_t get_offset_of_enableSpeechCommands_13() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableSpeechCommands_13)); }
	inline bool get_enableSpeechCommands_13() const { return ___enableSpeechCommands_13; }
	inline bool* get_address_of_enableSpeechCommands_13() { return &___enableSpeechCommands_13; }
	inline void set_enableSpeechCommands_13(bool value)
	{
		___enableSpeechCommands_13 = value;
	}

	inline static int32_t get_offset_of_speechCommandsProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___speechCommandsProfile_14)); }
	inline MixedRealitySpeechCommandsProfile_t809177306 * get_speechCommandsProfile_14() const { return ___speechCommandsProfile_14; }
	inline MixedRealitySpeechCommandsProfile_t809177306 ** get_address_of_speechCommandsProfile_14() { return &___speechCommandsProfile_14; }
	inline void set_speechCommandsProfile_14(MixedRealitySpeechCommandsProfile_t809177306 * value)
	{
		___speechCommandsProfile_14 = value;
		Il2CppCodeGenWriteBarrier((&___speechCommandsProfile_14), value);
	}

	inline static int32_t get_offset_of_enableDictation_15() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableDictation_15)); }
	inline bool get_enableDictation_15() const { return ___enableDictation_15; }
	inline bool* get_address_of_enableDictation_15() { return &___enableDictation_15; }
	inline void set_enableDictation_15(bool value)
	{
		___enableDictation_15 = value;
	}

	inline static int32_t get_offset_of_recognitionConfidenceLevel_16() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___recognitionConfidenceLevel_16)); }
	inline int32_t get_recognitionConfidenceLevel_16() const { return ___recognitionConfidenceLevel_16; }
	inline int32_t* get_address_of_recognitionConfidenceLevel_16() { return &___recognitionConfidenceLevel_16; }
	inline void set_recognitionConfidenceLevel_16(int32_t value)
	{
		___recognitionConfidenceLevel_16 = value;
	}

	inline static int32_t get_offset_of_enableTouchScreenInput_17() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableTouchScreenInput_17)); }
	inline bool get_enableTouchScreenInput_17() const { return ___enableTouchScreenInput_17; }
	inline bool* get_address_of_enableTouchScreenInput_17() { return &___enableTouchScreenInput_17; }
	inline void set_enableTouchScreenInput_17(bool value)
	{
		___enableTouchScreenInput_17 = value;
	}

	inline static int32_t get_offset_of_touchScreenInputProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___touchScreenInputProfile_18)); }
	inline MixedRealityTouchInputProfile_t892786812 * get_touchScreenInputProfile_18() const { return ___touchScreenInputProfile_18; }
	inline MixedRealityTouchInputProfile_t892786812 ** get_address_of_touchScreenInputProfile_18() { return &___touchScreenInputProfile_18; }
	inline void set_touchScreenInputProfile_18(MixedRealityTouchInputProfile_t892786812 * value)
	{
		___touchScreenInputProfile_18 = value;
		Il2CppCodeGenWriteBarrier((&___touchScreenInputProfile_18), value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_19() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableControllerMapping_19)); }
	inline bool get_enableControllerMapping_19() const { return ___enableControllerMapping_19; }
	inline bool* get_address_of_enableControllerMapping_19() { return &___enableControllerMapping_19; }
	inline void set_enableControllerMapping_19(bool value)
	{
		___enableControllerMapping_19 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___controllerMappingProfile_20)); }
	inline MixedRealityControllerMappingProfile_t1748868200 * get_controllerMappingProfile_20() const { return ___controllerMappingProfile_20; }
	inline MixedRealityControllerMappingProfile_t1748868200 ** get_address_of_controllerMappingProfile_20() { return &___controllerMappingProfile_20; }
	inline void set_controllerMappingProfile_20(MixedRealityControllerMappingProfile_t1748868200 * value)
	{
		___controllerMappingProfile_20 = value;
		Il2CppCodeGenWriteBarrier((&___controllerMappingProfile_20), value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_21() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableBoundarySystem_21)); }
	inline bool get_enableBoundarySystem_21() const { return ___enableBoundarySystem_21; }
	inline bool* get_address_of_enableBoundarySystem_21() { return &___enableBoundarySystem_21; }
	inline void set_enableBoundarySystem_21(bool value)
	{
		___enableBoundarySystem_21 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_22() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___boundarySystemType_22)); }
	inline SystemType_t2235070413 * get_boundarySystemType_22() const { return ___boundarySystemType_22; }
	inline SystemType_t2235070413 ** get_address_of_boundarySystemType_22() { return &___boundarySystemType_22; }
	inline void set_boundarySystemType_22(SystemType_t2235070413 * value)
	{
		___boundarySystemType_22 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystemType_22), value);
	}

	inline static int32_t get_offset_of_boundaryHeight_23() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___boundaryHeight_23)); }
	inline float get_boundaryHeight_23() const { return ___boundaryHeight_23; }
	inline float* get_address_of_boundaryHeight_23() { return &___boundaryHeight_23; }
	inline void set_boundaryHeight_23(float value)
	{
		___boundaryHeight_23 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_24() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___boundaryVisualizationProfile_24)); }
	inline MixedRealityBoundaryVisualizationProfile_t1348399468 * get_boundaryVisualizationProfile_24() const { return ___boundaryVisualizationProfile_24; }
	inline MixedRealityBoundaryVisualizationProfile_t1348399468 ** get_address_of_boundaryVisualizationProfile_24() { return &___boundaryVisualizationProfile_24; }
	inline void set_boundaryVisualizationProfile_24(MixedRealityBoundaryVisualizationProfile_t1348399468 * value)
	{
		___boundaryVisualizationProfile_24 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVisualizationProfile_24), value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_25() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___enableTeleportSystem_25)); }
	inline bool get_enableTeleportSystem_25() const { return ___enableTeleportSystem_25; }
	inline bool* get_address_of_enableTeleportSystem_25() { return &___enableTeleportSystem_25; }
	inline void set_enableTeleportSystem_25(bool value)
	{
		___enableTeleportSystem_25 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_26() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___teleportSystemType_26)); }
	inline SystemType_t2235070413 * get_teleportSystemType_26() const { return ___teleportSystemType_26; }
	inline SystemType_t2235070413 ** get_address_of_teleportSystemType_26() { return &___teleportSystemType_26; }
	inline void set_teleportSystemType_26(SystemType_t2235070413 * value)
	{
		___teleportSystemType_26 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystemType_26), value);
	}

	inline static int32_t get_offset_of_teleportDuration_27() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t1059352949, ___teleportDuration_27)); }
	inline float get_teleportDuration_27() const { return ___teleportDuration_27; }
	inline float* get_address_of_teleportDuration_27() { return &___teleportDuration_27; }
	inline void set_teleportDuration_27(float value)
	{
		___teleportDuration_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONFIGURATIONPROFILE_T1059352949_H
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
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
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
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
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
#ifndef BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#define BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct  BoundaryVisualizationDemo_t2326157821  : public MonoBehaviour_t3962482529
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::boundaryManager
	RuntimeObject* ___boundaryManager_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markerParent
	GameObject_t1113636619 * ___markerParent_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markers
	List_1_t2585711361 * ___markers_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showFloor
	bool ___showFloor_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showPlayArea
	bool ___showPlayArea_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showTrackedArea
	bool ___showTrackedArea_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryWalls
	bool ___showBoundaryWalls_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryCeiling
	bool ___showBoundaryCeiling_11;

public:
	inline static int32_t get_offset_of_boundaryManager_4() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___boundaryManager_4)); }
	inline RuntimeObject* get_boundaryManager_4() const { return ___boundaryManager_4; }
	inline RuntimeObject** get_address_of_boundaryManager_4() { return &___boundaryManager_4; }
	inline void set_boundaryManager_4(RuntimeObject* value)
	{
		___boundaryManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryManager_4), value);
	}

	inline static int32_t get_offset_of_markerParent_5() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___markerParent_5)); }
	inline GameObject_t1113636619 * get_markerParent_5() const { return ___markerParent_5; }
	inline GameObject_t1113636619 ** get_address_of_markerParent_5() { return &___markerParent_5; }
	inline void set_markerParent_5(GameObject_t1113636619 * value)
	{
		___markerParent_5 = value;
		Il2CppCodeGenWriteBarrier((&___markerParent_5), value);
	}

	inline static int32_t get_offset_of_markers_6() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___markers_6)); }
	inline List_1_t2585711361 * get_markers_6() const { return ___markers_6; }
	inline List_1_t2585711361 ** get_address_of_markers_6() { return &___markers_6; }
	inline void set_markers_6(List_1_t2585711361 * value)
	{
		___markers_6 = value;
		Il2CppCodeGenWriteBarrier((&___markers_6), value);
	}

	inline static int32_t get_offset_of_showFloor_7() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showFloor_7)); }
	inline bool get_showFloor_7() const { return ___showFloor_7; }
	inline bool* get_address_of_showFloor_7() { return &___showFloor_7; }
	inline void set_showFloor_7(bool value)
	{
		___showFloor_7 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_8() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showPlayArea_8)); }
	inline bool get_showPlayArea_8() const { return ___showPlayArea_8; }
	inline bool* get_address_of_showPlayArea_8() { return &___showPlayArea_8; }
	inline void set_showPlayArea_8(bool value)
	{
		___showPlayArea_8 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_9() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showTrackedArea_9)); }
	inline bool get_showTrackedArea_9() const { return ___showTrackedArea_9; }
	inline bool* get_address_of_showTrackedArea_9() { return &___showTrackedArea_9; }
	inline void set_showTrackedArea_9(bool value)
	{
		___showTrackedArea_9 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_10() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showBoundaryWalls_10)); }
	inline bool get_showBoundaryWalls_10() const { return ___showBoundaryWalls_10; }
	inline bool* get_address_of_showBoundaryWalls_10() { return &___showBoundaryWalls_10; }
	inline void set_showBoundaryWalls_10(bool value)
	{
		___showBoundaryWalls_10 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_11() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showBoundaryCeiling_11)); }
	inline bool get_showBoundaryCeiling_11() const { return ___showBoundaryCeiling_11; }
	inline bool* get_address_of_showBoundaryCeiling_11() { return &___showBoundaryCeiling_11; }
	inline void set_showBoundaryCeiling_11(bool value)
	{
		___showBoundaryCeiling_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#ifndef MATERIALMATRIX_T2973875676_H
#define MATERIALMATRIX_T2973875676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct  MaterialMatrix_t2973875676  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::material
	Material_t340375123 * ___material_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::dimension
	int32_t ___dimension_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::positionOffset
	float ___positionOffset_6;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::firstPropertyName
	String_t* ___firstPropertyName_7;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::secondPropertyName
	String_t* ___secondPropertyName_8;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___material_4)); }
	inline Material_t340375123 * get_material_4() const { return ___material_4; }
	inline Material_t340375123 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t340375123 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}

	inline static int32_t get_offset_of_dimension_5() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___dimension_5)); }
	inline int32_t get_dimension_5() const { return ___dimension_5; }
	inline int32_t* get_address_of_dimension_5() { return &___dimension_5; }
	inline void set_dimension_5(int32_t value)
	{
		___dimension_5 = value;
	}

	inline static int32_t get_offset_of_positionOffset_6() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___positionOffset_6)); }
	inline float get_positionOffset_6() const { return ___positionOffset_6; }
	inline float* get_address_of_positionOffset_6() { return &___positionOffset_6; }
	inline void set_positionOffset_6(float value)
	{
		___positionOffset_6 = value;
	}

	inline static int32_t get_offset_of_firstPropertyName_7() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___firstPropertyName_7)); }
	inline String_t* get_firstPropertyName_7() const { return ___firstPropertyName_7; }
	inline String_t** get_address_of_firstPropertyName_7() { return &___firstPropertyName_7; }
	inline void set_firstPropertyName_7(String_t* value)
	{
		___firstPropertyName_7 = value;
		Il2CppCodeGenWriteBarrier((&___firstPropertyName_7), value);
	}

	inline static int32_t get_offset_of_secondPropertyName_8() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___secondPropertyName_8)); }
	inline String_t* get_secondPropertyName_8() const { return ___secondPropertyName_8; }
	inline String_t** get_address_of_secondPropertyName_8() { return &___secondPropertyName_8; }
	inline void set_secondPropertyName_8(String_t* value)
	{
		___secondPropertyName_8 = value;
		Il2CppCodeGenWriteBarrier((&___secondPropertyName_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALMATRIX_T2973875676_H
#ifndef MIXEDREALITYMANAGER_T1093932290_H
#define MIXEDREALITYMANAGER_T1093932290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager
struct  MixedRealityManager_t1093932290  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::isMixedRealityManagerInitializing
	bool ___isMixedRealityManagerInitializing_4;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::activeProfile
	MixedRealityConfigurationProfile_t1059352949 * ___activeProfile_5;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Internal.Interfaces.IMixedRealityManager>> Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::<MixedRealityComponents>k__BackingField
	List_1_t3172203449 * ___U3CMixedRealityComponentsU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::mixedRealityComponentsCount
	int32_t ___mixedRealityComponentsCount_7;
	// System.Object Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::initializedLock
	RuntimeObject * ___initializedLock_10;

public:
	inline static int32_t get_offset_of_isMixedRealityManagerInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290, ___isMixedRealityManagerInitializing_4)); }
	inline bool get_isMixedRealityManagerInitializing_4() const { return ___isMixedRealityManagerInitializing_4; }
	inline bool* get_address_of_isMixedRealityManagerInitializing_4() { return &___isMixedRealityManagerInitializing_4; }
	inline void set_isMixedRealityManagerInitializing_4(bool value)
	{
		___isMixedRealityManagerInitializing_4 = value;
	}

	inline static int32_t get_offset_of_activeProfile_5() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290, ___activeProfile_5)); }
	inline MixedRealityConfigurationProfile_t1059352949 * get_activeProfile_5() const { return ___activeProfile_5; }
	inline MixedRealityConfigurationProfile_t1059352949 ** get_address_of_activeProfile_5() { return &___activeProfile_5; }
	inline void set_activeProfile_5(MixedRealityConfigurationProfile_t1059352949 * value)
	{
		___activeProfile_5 = value;
		Il2CppCodeGenWriteBarrier((&___activeProfile_5), value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityComponentsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290, ___U3CMixedRealityComponentsU3Ek__BackingField_6)); }
	inline List_1_t3172203449 * get_U3CMixedRealityComponentsU3Ek__BackingField_6() const { return ___U3CMixedRealityComponentsU3Ek__BackingField_6; }
	inline List_1_t3172203449 ** get_address_of_U3CMixedRealityComponentsU3Ek__BackingField_6() { return &___U3CMixedRealityComponentsU3Ek__BackingField_6; }
	inline void set_U3CMixedRealityComponentsU3Ek__BackingField_6(List_1_t3172203449 * value)
	{
		___U3CMixedRealityComponentsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMixedRealityComponentsU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_mixedRealityComponentsCount_7() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290, ___mixedRealityComponentsCount_7)); }
	inline int32_t get_mixedRealityComponentsCount_7() const { return ___mixedRealityComponentsCount_7; }
	inline int32_t* get_address_of_mixedRealityComponentsCount_7() { return &___mixedRealityComponentsCount_7; }
	inline void set_mixedRealityComponentsCount_7(int32_t value)
	{
		___mixedRealityComponentsCount_7 = value;
	}

	inline static int32_t get_offset_of_initializedLock_10() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290, ___initializedLock_10)); }
	inline RuntimeObject * get_initializedLock_10() const { return ___initializedLock_10; }
	inline RuntimeObject ** get_address_of_initializedLock_10() { return &___initializedLock_10; }
	inline void set_initializedLock_10(RuntimeObject * value)
	{
		___initializedLock_10 = value;
		Il2CppCodeGenWriteBarrier((&___initializedLock_10), value);
	}
};

struct MixedRealityManager_t1093932290_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::instance
	MixedRealityManager_t1093932290 * ___instance_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::searchForInstance
	bool ___searchForInstance_9;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290_StaticFields, ___instance_8)); }
	inline MixedRealityManager_t1093932290 * get_instance_8() const { return ___instance_8; }
	inline MixedRealityManager_t1093932290 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(MixedRealityManager_t1093932290 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___instance_8), value);
	}

	inline static int32_t get_offset_of_searchForInstance_9() { return static_cast<int32_t>(offsetof(MixedRealityManager_t1093932290_StaticFields, ___searchForInstance_9)); }
	inline bool get_searchForInstance_9() const { return ___searchForInstance_9; }
	inline bool* get_address_of_searchForInstance_9() { return &___searchForInstance_9; }
	inline void set_searchForInstance_9(bool value)
	{
		___searchForInstance_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYMANAGER_T1093932290_H


// !!0 Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::GetManager<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityManager_GetManager_TisRuntimeObject_m2865840433_gshared (MixedRealityManager_t1093932290 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m41740375_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m803176563_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityManager_t1093932290 * MixedRealityManager_get_Instance_m1089585239 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::GetManager<Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem>()
inline RuntimeObject* MixedRealityManager_GetManager_TisIMixedRealityBoundarySystem_t3909317465_m3905580046 (MixedRealityManager_t1093932290 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityManager_t1093932290 *, const RuntimeMethod*))MixedRealityManager_GetManager_TisRuntimeObject_m2865840433_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Internal.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * CameraCache_get_Main_m1380900859 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::get_BoundaryManager()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BoundaryVisualizationDemo_get_BoundaryManager_m1395560565 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m2812834599 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m3541291039 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityConfigurationProfile_t1059352949 * MixedRealityManager_get_ActiveProfile_m379018808 (MixedRealityManager_t1093932290 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile::get_BoundaryVisualizationProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityBoundaryVisualizationProfile_t1348399468 * MixedRealityConfigurationProfile_get_BoundaryVisualizationProfile_m3118452002 (MixedRealityConfigurationProfile_t1059352949 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_PlayAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m3690933308 (MixedRealityBoundaryVisualizationProfile_t1348399468 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Internal.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m447166561 (MixedRealityBoundaryVisualizationProfile_t1348399468 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_CreatePrimitive_m2902598419 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m1424466557 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2579498062 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.Transform>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTransform_t3600365921_m3857377578 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m41740375_gshared)(__this /* static, unused */, p0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t777473367 * Enumerable_ToList_TisTransform_t3600365921_m4208630033 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t777473367 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m803176563_gshared)(__this /* static, unused */, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_t3600365921 * List_1_get_Item_m3651111564 (List_1_t777473367 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m3249086042 (List_1_t777473367 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m1688718093 (Material_t340375123 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * GameObject_GetComponent_TisRenderer_t2627027031_m3027209018 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::get_BoundaryManager()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BoundaryVisualizationDemo_get_BoundaryManager_m1395560565 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_get_BoundaryManager_m1395560565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// private IMixedRealityBoundarySystem BoundaryManager => boundaryManager ?? (boundaryManager = MixedRealityManager.Instance.GetManager<IMixedRealityBoundarySystem>());
		RuntimeObject* L_0 = __this->get_boundaryManager_4();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityManager_t1093932290_il2cpp_TypeInfo_var);
		MixedRealityManager_t1093932290 * L_2 = MixedRealityManager_get_Instance_m1089585239(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = MixedRealityManager_GetManager_TisIMixedRealityBoundarySystem_t3909317465_m3905580046(L_2, /*hidden argument*/MixedRealityManager_GetManager_TisIMixedRealityBoundarySystem_t3909317465_m3905580046_RuntimeMethod_var);
		RuntimeObject* L_4 = L_3;
		V_0 = L_4;
		__this->set_boundaryManager_4(L_4);
		RuntimeObject* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_001d:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Awake()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Awake_m3157749041 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Awake_m3157749041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// markerParent = new GameObject();
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_markerParent_5(L_0);
		// markerParent.name = "Boundary Demo Markers";
		GameObject_t1113636619 * L_1 = __this->get_markerParent_5();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral474850886, /*hidden argument*/NULL);
		// markerParent.transform.parent = CameraCache.Main.transform.parent;
		GameObject_t1113636619 * L_2 = __this->get_markerParent_5();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_get_parent_m835071599(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m786917804(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Start()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Start_m2813642153 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Start_m2813642153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoundaryManager != null)
		RuntimeObject* L_0 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// if (markers.Count == 0)
		List_1_t2585711361 * L_1 = __this->get_markers_6();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2812834599(L_1, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// AddMarkers();
		BoundaryVisualizationDemo_AddMarkers_m3541291039(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Update()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Update_m2685918975 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Update_m2685918975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoundaryManager != null)
		RuntimeObject* L_0 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		// BoundaryManager.ShowFloor = showFloor;
		RuntimeObject* L_1 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		bool L_2 = __this->get_showFloor_7();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowFloor(System.Boolean) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_1, L_2);
		// BoundaryManager.ShowPlayArea = showPlayArea;
		RuntimeObject* L_3 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		bool L_4 = __this->get_showPlayArea_8();
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_3, L_4);
		// BoundaryManager.ShowTrackedArea = showTrackedArea;
		RuntimeObject* L_5 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		bool L_6 = __this->get_showTrackedArea_9();
		NullCheck(L_5);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_5, L_6);
		// BoundaryManager.ShowBoundaryWalls = showBoundaryWalls;
		RuntimeObject* L_7 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		bool L_8 = __this->get_showBoundaryWalls_10();
		NullCheck(L_7);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_7, L_8);
		// BoundaryManager.ShowBoundaryCeiling = showBoundaryCeiling;
		RuntimeObject* L_9 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		bool L_10 = __this->get_showBoundaryCeiling_11();
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnEnable_m2827179319 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnEnable_m2827179319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoundaryManager.Register(gameObject);
		RuntimeObject* L_0 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t107310040_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnDisable_m33221367 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnDisable_m33221367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoundaryManager.Unregister(gameObject);
		RuntimeObject* L_0 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSystem::Unregister(UnityEngine.GameObject) */, IMixedRealityEventSystem_t107310040_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnBoundaryVisualizationChanged(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Boundary.BoundaryEventData)
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m1439078186 (BoundaryVisualizationDemo_t2326157821 * __this, BoundaryEventData_t3752774623 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m1439078186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[BoundaryVisualizationDemo] Boundary visualization changed.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral548396354, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m3541291039 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_AddMarkers_m3541291039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	MixedRealityBoundaryVisualizationProfile_t1348399468 * V_4 = NULL;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Material_t340375123 * V_10 = NULL;
	GameObject_t1113636619 * V_11 = NULL;
	{
		// if (!BoundaryManager.TryGetRectangularBoundsParams(out centerRect, out angleRect, out widthRect, out heightRect))
		RuntimeObject* L_0 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker4< bool, Vector2_t2156229523 *, float*, float*, float* >::Invoke(17 /* System.Boolean Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_0, (Vector2_t2156229523 *)(&V_0), (float*)(&V_1), (float*)(&V_2), (float*)(&V_3));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// MixedRealityBoundaryVisualizationProfile visualizationProfile = MixedRealityManager.Instance.ActiveProfile.BoundaryVisualizationProfile;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityManager_t1093932290_il2cpp_TypeInfo_var);
		MixedRealityManager_t1093932290 * L_2 = MixedRealityManager_get_Instance_m1089585239(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		MixedRealityConfigurationProfile_t1059352949 * L_3 = MixedRealityManager_get_ActiveProfile_m379018808(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		MixedRealityBoundaryVisualizationProfile_t1348399468 * L_4 = MixedRealityConfigurationProfile_get_BoundaryVisualizationProfile_m3118452002(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		// if (visualizationProfile == null)
		MixedRealityBoundaryVisualizationProfile_t1348399468 * L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		return;
	}

IL_0032:
	{
		// Vector3 center = new Vector3(centerRect.x, 0f, centerRect.y);
		Vector2_t2156229523  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		Vector2_t2156229523  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_8, (0.0f), L_10, /*hidden argument*/NULL);
		// Vector3 corner = center - (new Vector3(dimension, 0.0f, dimension) * 0.5f);
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), (4.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, (0.5f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		// corner.y += 0.05f;
		float* L_15 = (&V_5)->get_address_of_y_3();
		float* L_16 = L_15;
		*((float*)(L_16)) = (float)((float)il2cpp_codegen_add((float)(*((float*)L_16)), (float)(0.05f)));
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		V_6 = 0;
		goto IL_017b;
	}

IL_0085:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		V_7 = 0;
		goto IL_016c;
	}

IL_008d:
	{
		// Vector3 offset = new Vector3(xIndex * indicatorDistance, 0.0f, yIndex * indicatorDistance);
		int32_t L_17 = V_6;
		int32_t L_18 = V_7;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_8), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_17))), (float)(0.2f))), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_18))), (float)(0.2f))), /*hidden argument*/NULL);
		// Vector3 position = corner + offset;
		Vector3_t3722313464  L_19 = V_5;
		Vector3_t3722313464  L_20 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_9 = L_21;
		// Material material = null;
		V_10 = (Material_t340375123 *)NULL;
		// if (BoundaryManager.Contains(position, Boundary.Type.PlayArea))
		RuntimeObject* L_22 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = V_9;
		NullCheck(L_22);
		bool L_24 = InterfaceFuncInvoker2< bool, Vector3_t3722313464 , int32_t >::Invoke(16 /* System.Boolean Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_22, L_23, 0);
		if (!L_24)
		{
			goto IL_00d4;
		}
	}
	{
		// material = visualizationProfile.PlayAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_t1348399468 * L_25 = V_4;
		NullCheck(L_25);
		Material_t340375123 * L_26 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m3690933308(L_25, /*hidden argument*/NULL);
		V_10 = L_26;
		// }
		goto IL_00ed;
	}

IL_00d4:
	{
		// else if (BoundaryManager.Contains(position, Boundary.Type.TrackedArea))
		RuntimeObject* L_27 = BoundaryVisualizationDemo_get_BoundaryManager_m1395560565(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = V_9;
		NullCheck(L_27);
		bool L_29 = InterfaceFuncInvoker2< bool, Vector3_t3722313464 , int32_t >::Invoke(16 /* System.Boolean Microsoft.MixedReality.Toolkit.Internal.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_t3909317465_il2cpp_TypeInfo_var, L_27, L_28, 1);
		if (!L_29)
		{
			goto IL_00ed;
		}
	}
	{
		// material = visualizationProfile.TrackedAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_t1348399468 * L_30 = V_4;
		NullCheck(L_30);
		Material_t340375123 * L_31 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m447166561(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
	}

IL_00ed:
	{
		// if (material != null)
		Material_t340375123 * L_32 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_33 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_32, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0166;
		}
	}
	{
		// GameObject marker = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t1113636619 * L_34 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_11 = L_34;
		// marker.name = "Boundary Demo Marker";
		GameObject_t1113636619 * L_35 = V_11;
		NullCheck(L_35);
		Object_set_name_m291480324(L_35, _stringLiteral730774742, /*hidden argument*/NULL);
		// marker.transform.parent = markerParent.transform;
		GameObject_t1113636619 * L_36 = V_11;
		NullCheck(L_36);
		Transform_t3600365921 * L_37 = GameObject_get_transform_m1369836730(L_36, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_38 = __this->get_markerParent_5();
		NullCheck(L_38);
		Transform_t3600365921 * L_39 = GameObject_get_transform_m1369836730(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_parent_m786917804(L_37, L_39, /*hidden argument*/NULL);
		// marker.transform.position = position;
		GameObject_t1113636619 * L_40 = V_11;
		NullCheck(L_40);
		Transform_t3600365921 * L_41 = GameObject_get_transform_m1369836730(L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = V_9;
		NullCheck(L_41);
		Transform_set_position_m3387557959(L_41, L_42, /*hidden argument*/NULL);
		// marker.transform.localScale = Vector3.one * indicatorScale;
		GameObject_t1113636619 * L_43 = V_11;
		NullCheck(L_43);
		Transform_t3600365921 * L_44 = GameObject_get_transform_m1369836730(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_45 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_46 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_45, (0.1f), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localScale_m3053443106(L_44, L_46, /*hidden argument*/NULL);
		// marker.GetComponent<MeshRenderer>().sharedMaterial = material;
		GameObject_t1113636619 * L_47 = V_11;
		NullCheck(L_47);
		MeshRenderer_t587009260 * L_48 = GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712(L_47, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712_RuntimeMethod_var);
		Material_t340375123 * L_49 = V_10;
		NullCheck(L_48);
		Renderer_set_sharedMaterial_m2374163090(L_48, L_49, /*hidden argument*/NULL);
		// markers.Add(marker);
		List_1_t2585711361 * L_50 = __this->get_markers_6();
		GameObject_t1113636619 * L_51 = V_11;
		NullCheck(L_50);
		List_1_Add_m2765963565(L_50, L_51, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_0166:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_52 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_016c:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_53 = V_7;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)20))))
		{
			goto IL_008d;
		}
	}
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_017b:
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)20))))
		{
			goto IL_0085;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo__ctor_m1576285073 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo__ctor_m1576285073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameObject> markers = new List<GameObject>();
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_markers_6(L_0);
		// private bool showFloor = true;
		__this->set_showFloor_7((bool)1);
		// private bool showPlayArea = true;
		__this->set_showPlayArea_8((bool)1);
		// private bool showTrackedArea = true;
		__this->set_showTrackedArea_9((bool)1);
		// private bool showBoundaryWalls = true;
		__this->set_showBoundaryWalls_10((bool)1);
		// private bool showBoundaryCeiling = true;
		__this->set_showBoundaryCeiling_11((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::Awake()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_Awake_m444023687 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	{
		// BuildMatrix();
		MaterialMatrix_BuildMatrix_m2579498062(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2579498062 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix_BuildMatrix_m2579498062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t777473367 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Transform_t3600365921 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Material_t340375123 * V_10 = NULL;
	Renderer_t2627027031 * V_11 = NULL;
	{
		// List<Transform> children = transform.Cast<Transform>().ToList();
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Enumerable_Cast_TisTransform_t3600365921_m3857377578(NULL /*static, unused*/, L_0, /*hidden argument*/Enumerable_Cast_TisTransform_t3600365921_m3857377578_RuntimeMethod_var);
		List_1_t777473367 * L_2 = Enumerable_ToList_TisTransform_t3600365921_m4208630033(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisTransform_t3600365921_m4208630033_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < children.Count; ++i)
		V_6 = 0;
		goto IL_0047;
	}

IL_0016:
	{
		// Transform child = children[i];
		List_1_t777473367 * L_3 = V_0;
		int32_t L_4 = V_6;
		NullCheck(L_3);
		Transform_t3600365921 * L_5 = List_1_get_Item_m3651111564(L_3, L_4, /*hidden argument*/List_1_get_Item_m3651111564_RuntimeMethod_var);
		V_7 = L_5;
		// if (Application.isPlaying)
		bool L_6 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Destroy(child.gameObject);
		Transform_t3600365921 * L_7 = V_7;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	}

IL_0035:
	{
		// DestroyImmediate(child.gameObject);
		Transform_t3600365921 * L_9 = V_7;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_12 = V_6;
		List_1_t777473367 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3249086042(L_13, /*hidden argument*/List_1_get_Count_m3249086042_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0016;
		}
	}
	{
		// if (material == null)
		Material_t340375123 * L_15 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.LogError("Failed to build material matrix due to missing material.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1243785301, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006a:
	{
		// Vector3 position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_17;
		// int firstPropertyId = Shader.PropertyToID(firstPropertyName);
		String_t* L_18 = __this->get_firstPropertyName_7();
		int32_t L_19 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// int secondPropertyId = Shader.PropertyToID(secondPropertyName);
		String_t* L_20 = __this->get_secondPropertyName_8();
		int32_t L_21 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// float firstProperty = 0.0f;
		V_4 = (0.0f);
		// float secondProperty = 0.0f;
		V_5 = (0.0f);
		// for (int i = 0; i < dimension; ++i)
		V_8 = 0;
		goto IL_01af;
	}

IL_009e:
	{
		// for (int j = 0; j < dimension; ++j)
		V_9 = 0;
		goto IL_015e;
	}

IL_00a6:
	{
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t1113636619 * L_22 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// sphere.name = "Sphere" + (i * dimension + j);
		GameObject_t1113636619 * L_23 = L_22;
		int32_t L_24 = V_8;
		int32_t L_25 = __this->get_dimension_5();
		int32_t L_26 = V_9;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26));
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2438763459, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Object_set_name_m291480324(L_23, L_29, /*hidden argument*/NULL);
		// sphere.transform.parent = transform;
		GameObject_t1113636619 * L_30 = L_23;
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = GameObject_get_transform_m1369836730(L_30, /*hidden argument*/NULL);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_parent_m786917804(L_31, L_32, /*hidden argument*/NULL);
		// sphere.transform.localPosition = position;
		GameObject_t1113636619 * L_33 = L_30;
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = GameObject_get_transform_m1369836730(L_33, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = V_1;
		NullCheck(L_34);
		Transform_set_localPosition_m4128471975(L_34, L_35, /*hidden argument*/NULL);
		// position.x += 1.0f + positionOffset;
		float* L_36 = (&V_1)->get_address_of_x_2();
		float* L_37 = L_36;
		float L_38 = __this->get_positionOffset_6();
		*((float*)(L_37)) = (float)((float)il2cpp_codegen_add((float)(*((float*)L_37)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_38))));
		// Material newMaterial = new Material(material);
		Material_t340375123 * L_39 = __this->get_material_4();
		Material_t340375123 * L_40 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_40, L_39, /*hidden argument*/NULL);
		V_10 = L_40;
		// newMaterial.SetFloat(firstPropertyId, firstProperty);
		Material_t340375123 * L_41 = V_10;
		int32_t L_42 = V_2;
		float L_43 = V_4;
		NullCheck(L_41);
		Material_SetFloat_m1688718093(L_41, L_42, L_43, /*hidden argument*/NULL);
		// newMaterial.SetFloat(secondPropertyId, secondProperty);
		Material_t340375123 * L_44 = V_10;
		int32_t L_45 = V_3;
		float L_46 = V_5;
		NullCheck(L_44);
		Material_SetFloat_m1688718093(L_44, L_45, L_46, /*hidden argument*/NULL);
		// Renderer renderer = sphere.GetComponent<Renderer>();
		NullCheck(L_33);
		Renderer_t2627027031 * L_47 = GameObject_GetComponent_TisRenderer_t2627027031_m3027209018(L_33, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m3027209018_RuntimeMethod_var);
		V_11 = L_47;
		// if (Application.isPlaying)
		bool L_48 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_013b;
		}
	}
	{
		// renderer.material = newMaterial;
		Renderer_t2627027031 * L_49 = V_11;
		Material_t340375123 * L_50 = V_10;
		NullCheck(L_49);
		Renderer_set_material_m1157964140(L_49, L_50, /*hidden argument*/NULL);
		// }
		goto IL_0144;
	}

IL_013b:
	{
		// renderer.sharedMaterial = newMaterial;
		Renderer_t2627027031 * L_51 = V_11;
		Material_t340375123 * L_52 = V_10;
		NullCheck(L_51);
		Renderer_set_sharedMaterial_m2374163090(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0144:
	{
		// firstProperty += 1.0f / (dimension - 1);
		float L_53 = V_4;
		int32_t L_54 = __this->get_dimension_5();
		V_4 = ((float)il2cpp_codegen_add((float)L_53, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1)))))))));
		// for (int j = 0; j < dimension; ++j)
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_015e:
	{
		// for (int j = 0; j < dimension; ++j)
		int32_t L_56 = V_9;
		int32_t L_57 = __this->get_dimension_5();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00a6;
		}
	}
	{
		// position.x = 0.0f;
		(&V_1)->set_x_2((0.0f));
		// position.z += 1.0f + positionOffset;
		float* L_58 = (&V_1)->get_address_of_z_4();
		float* L_59 = L_58;
		float L_60 = __this->get_positionOffset_6();
		*((float*)(L_59)) = (float)((float)il2cpp_codegen_add((float)(*((float*)L_59)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_60))));
		// firstProperty = 0.0f;
		V_4 = (0.0f);
		// secondProperty += 1.0f / (dimension - 1);
		float L_61 = V_5;
		int32_t L_62 = __this->get_dimension_5();
		V_5 = ((float)il2cpp_codegen_add((float)L_61, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)1)))))))));
		// for (int i = 0; i < dimension; ++i)
		int32_t L_63 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_01af:
	{
		// for (int i = 0; i < dimension; ++i)
		int32_t L_64 = V_8;
		int32_t L_65 = __this->get_dimension_5();
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_009e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix__ctor_m3010007991 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix__ctor_m3010007991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int dimension = 5;
		__this->set_dimension_5(5);
		// private float positionOffset = 0.1f;
		__this->set_positionOffset_6((0.1f));
		// private string firstPropertyName = "_Metallic";
		__this->set_firstPropertyName_7(_stringLiteral3258293634);
		// private string secondPropertyName = "_Glossiness";
		__this->set_secondPropertyName_8(_stringLiteral778727724);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
