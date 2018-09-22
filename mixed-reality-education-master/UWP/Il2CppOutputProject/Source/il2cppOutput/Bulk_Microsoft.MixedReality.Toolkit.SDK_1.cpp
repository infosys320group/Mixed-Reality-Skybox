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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[]
struct RayStepU5BU5D_t3168306194;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData
struct BaseInputEventData_t1713972929;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData
struct FocusEventData_t473508985;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData
struct InputEventData_t2928432700;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t3484413663;
// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData
struct TeleportEventData_t1342032624;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController
struct IMixedRealityController_t2386858716;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t2812969632;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t252596224;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.ICursorModifier
struct ICursorModifier_t3618338161;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor
struct IMixedRealityCursor_t471674592;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_t3685197710;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t3903629218;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t1271752255;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult
struct IPointerResult_t1864173623;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t3532020808;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t4279106780;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_t2864991237;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_t44273451;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider
struct ParabolaPhysicalLineDataProvider_t2748289363;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer
struct BaseMixedRealityLineRenderer_t3189424626;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_t1844645383;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity
struct DistorterGravity_t923312544;
// Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler
struct BaseFocusHandler_t2626431732;
// Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t3549094724;
// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer
struct BaseControllerPointer_t823387382;
// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer
struct LinePointer_t1596098013;
// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer
struct ParabolicTeleportPointer_t1452950313;
// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer
struct TeleportPointer_t1203388771;
// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard
struct Billboard_t3288259690;
// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight
struct HoverLight_t861884922;
// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight[]
struct HoverLightU5BU5D_t2861520095;
// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight
struct InteractableHighlight_t3226167531;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>[]
struct EntryU5BU5D_t1752155547;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct KeyCollection_t3716010581;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct ValueCollection_t947412132;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct Dictionary_2_t3526335110;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_t3615195308;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Renderer>
struct IEqualityComparer_1_t439391753;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer>
struct List_1_t2743826997;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.Distorter>
struct List_1_t1693389651;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>
struct List_1_t2333959664;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t1812449865;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
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
// UnityEngine.Gradient
struct Gradient_t3067099924;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t253793507;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseControllerPointer_t823387382_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseFocusHandler_t2626431732_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3526335110_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Gradient_t3067099924_il2cpp_TypeInfo_var;
extern RuntimeClass* HoverLight_t861884922_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSource_t2812969632_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityTeleportHotSpot_t4279106780_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityTeleportSystem_t2864991237_il2cpp_TypeInfo_var;
extern RuntimeClass* IPointerResult_t1864173623_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1812449865_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2333959664_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputAction_t3419222324_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityRaycaster_t3612139993_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RayStepU5BU5D_t3168306194_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TeleportSurfaceResult_t3911798439_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1005982028;
extern String_t* _stringLiteral1363176220;
extern String_t* _stringLiteral1737052023;
extern String_t* _stringLiteral2020073116;
extern String_t* _stringLiteral2923662939;
extern String_t* _stringLiteral3434925605;
extern String_t* _stringLiteral3957048425;
extern String_t* _stringLiteral4254455441;
extern String_t* _stringLiteral86523713;
extern const RuntimeMethod* Component_GetComponent_TisBaseMixedRealityLineDataProvider_t44273451_m1454493356_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisDistorterGravity_t923312544_m2168985360_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisParabolaPhysicalLineDataProvider_t2748289363_m888051958_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisBaseMixedRealityLineRenderer_t3189424626_m116812695_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m745328695_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1338155647_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m47724358_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m4221256433_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m447712618_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1478528768_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m743166091_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3239435214_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3220264653_RuntimeMethod_var;
extern const RuntimeMethod* InputEventData_1_get_InputData_m1471206378_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2519277466_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3562707980_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m1895910640_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1088566532_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m689424915_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2964530523_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2744244959_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1106714037_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1244651821_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m3662404375_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m179578601_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2557557253_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2853362164_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4051594730_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m678643881_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m956344855_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2239442906_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3128556365_RuntimeMethod_var;
extern const RuntimeMethod* TeleportPointer_GetLineGradient_m2770365527_RuntimeMethod_var;
extern const uint32_t Billboard_OnEnable_m1202230539_MetadataUsageId;
extern const uint32_t Billboard_Update_m2657787778_MetadataUsageId;
extern const uint32_t HoverLight_AddHoverLight_m1460701161_MetadataUsageId;
extern const uint32_t HoverLight_Initialize_m3729398361_MetadataUsageId;
extern const uint32_t HoverLight_OnDrawGizmosSelected_m4205827195_MetadataUsageId;
extern const uint32_t HoverLight_RemoveHoverLight_m3370953760_MetadataUsageId;
extern const uint32_t HoverLight_UpdateHoverLights_m3231287831_MetadataUsageId;
extern const uint32_t HoverLight__cctor_m151232642_MetadataUsageId;
extern const uint32_t InteractableHighlight_AddHighlightMaterials_m3019761556_MetadataUsageId;
extern const uint32_t InteractableHighlight_AddMaterialToRenderers_m957536401_MetadataUsageId;
extern const uint32_t InteractableHighlight_OnEnable_m3857712583_MetadataUsageId;
extern const uint32_t InteractableHighlight_RemoveHighlightMaterials_m236394733_MetadataUsageId;
extern const uint32_t InteractableHighlight_RemoveMatFromRenderers_m1025509229_MetadataUsageId;
extern const uint32_t InteractableHighlight_RemoveMatFromRenderers_m278521255_MetadataUsageId;
extern const uint32_t InteractableHighlight__ctor_m2347555579_MetadataUsageId;
extern const uint32_t LinePointer_CheckInitialization_m3408142716_MetadataUsageId;
extern const uint32_t LinePointer_OnPostRaycast_m2694266961_MetadataUsageId;
extern const uint32_t LinePointer_OnPreRaycast_m1340074605_MetadataUsageId;
extern const uint32_t LinePointer__ctor_m3093294720_MetadataUsageId;
extern const uint32_t ParabolicTeleportPointer_EnsureSetup_m1024247825_MetadataUsageId;
extern const uint32_t ParabolicTeleportPointer_OnEnable_m493443715_MetadataUsageId;
extern const uint32_t ParabolicTeleportPointer_OnPreRaycast_m2700160441_MetadataUsageId;
extern const uint32_t ParabolicTeleportPointer_OnValidate_m2422175743_MetadataUsageId;
extern const uint32_t TeleportPointer_GetLineGradient_m2770365527_MetadataUsageId;
extern const uint32_t TeleportPointer_OnEnable_m1344987721_MetadataUsageId;
extern const uint32_t TeleportPointer_OnPositionInputChanged_m1428108086_MetadataUsageId;
extern const uint32_t TeleportPointer_OnPostRaycast_m3616886042_MetadataUsageId;
extern const uint32_t TeleportPointer_OnPreRaycast_m1000323180_MetadataUsageId;
extern const uint32_t TeleportPointer_OnTeleportCanceled_m2445790099_MetadataUsageId;
extern const uint32_t TeleportPointer_OnTeleportCompleted_m3058759007_MetadataUsageId;
extern const uint32_t TeleportPointer_OnTeleportRequest_m3576689390_MetadataUsageId;
extern const uint32_t TeleportPointer_OnTeleportStarted_m204065305_MetadataUsageId;
extern const uint32_t TeleportPointer_SetCursor_m1517690804_MetadataUsageId;
extern const uint32_t TeleportPointer__ctor_m2490589763_MetadataUsageId;
extern const uint32_t TeleportPointer_get_PointerOrientation_m1314598948_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RayStepU5BU5D_t3168306194;
struct BaseMixedRealityLineRendererU5BU5D_t1844645383;
struct ObjectU5BU5D_t2843939325;
struct MaterialU5BU5D_t561872642;
struct RendererU5BU5D_t3210418286;
struct Vector4U5BU5D_t934056436;


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
#ifndef MIXEDREALITYRAYCASTER_T3612139993_H
#define MIXEDREALITYRAYCASTER_T3612139993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.MixedRealityRaycaster
struct  MixedRealityRaycaster_t3612139993  : public RuntimeObject
{
public:

public:
};

struct MixedRealityRaycaster_t3612139993_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.MixedRealityRaycaster::DebugEnabled
	bool ___DebugEnabled_0;

public:
	inline static int32_t get_offset_of_DebugEnabled_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycaster_t3612139993_StaticFields, ___DebugEnabled_0)); }
	inline bool get_DebugEnabled_0() const { return ___DebugEnabled_0; }
	inline bool* get_address_of_DebugEnabled_0() { return &___DebugEnabled_0; }
	inline void set_DebugEnabled_0(bool value)
	{
		___DebugEnabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYRAYCASTER_T3612139993_H
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
#ifndef DICTIONARY_2_T3526335110_H
#define DICTIONARY_2_T3526335110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct  Dictionary_2_t3526335110  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1752155547* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3716010581 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t947412132 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___entries_1)); }
	inline EntryU5BU5D_t1752155547* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1752155547** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1752155547* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___keys_7)); }
	inline KeyCollection_t3716010581 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3716010581 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3716010581 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ___values_8)); }
	inline ValueCollection_t947412132 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t947412132 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t947412132 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3526335110, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3526335110_H
#ifndef LIST_1_T2333959664_H
#define LIST_1_T2333959664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>
struct  List_1_t2333959664  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HoverLightU5BU5D_t2861520095* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2333959664, ____items_1)); }
	inline HoverLightU5BU5D_t2861520095* get__items_1() const { return ____items_1; }
	inline HoverLightU5BU5D_t2861520095** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HoverLightU5BU5D_t2861520095* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2333959664, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2333959664, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2333959664, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2333959664_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HoverLightU5BU5D_t2861520095* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2333959664_StaticFields, ____emptyArray_5)); }
	inline HoverLightU5BU5D_t2861520095* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HoverLightU5BU5D_t2861520095** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HoverLightU5BU5D_t2861520095* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2333959664_H
#ifndef LIST_1_T1812449865_H
#define LIST_1_T1812449865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t1812449865  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t561872642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____items_1)); }
	inline MaterialU5BU5D_t561872642* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t561872642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t561872642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1812449865, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1812449865_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t561872642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1812449865_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t561872642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t561872642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t561872642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1812449865_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T1629039981_H
#define KEYVALUEPAIR_2_T1629039981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct  KeyValuePair_2_t1629039981 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Renderer_t2627027031 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t1812449865 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1629039981, ___key_0)); }
	inline Renderer_t2627027031 * get_key_0() const { return ___key_0; }
	inline Renderer_t2627027031 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Renderer_t2627027031 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1629039981, ___value_1)); }
	inline List_1_t1812449865 * get_value_1() const { return ___value_1; }
	inline List_1_t1812449865 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t1812449865 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1629039981_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef TRACKINGSTATE_T1067624973_H
#define TRACKINGSTATE_T1067624973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.TrackingState
struct  TrackingState_t1067624973 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t1067624973, ___value___2)); }
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
#endif // TRACKINGSTATE_T1067624973_H
#ifndef DISTORTIONMODE_T1473216099_H
#define DISTORTIONMODE_T1473216099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.DistortionMode
struct  DistortionMode_t1473216099 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.DistortionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistortionMode_t1473216099, ___value___2)); }
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
#endif // DISTORTIONMODE_T1473216099_H
#ifndef LINEROTATIONMODE_T493921828_H
#define LINEROTATIONMODE_T493921828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.LineRotationMode
struct  LineRotationMode_t493921828 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.LineRotationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineRotationMode_t493921828, ___value___2)); }
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
#endif // LINEROTATIONMODE_T493921828_H
#ifndef STEPMODE_T225124403_H
#define STEPMODE_T225124403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.StepMode
struct  StepMode_t225124403 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.StepMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StepMode_t225124403, ___value___2)); }
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
#endif // STEPMODE_T225124403_H
#ifndef RAYSTEP_T1822550659_H
#define RAYSTEP_T1822550659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep
struct  RayStep_t1822550659 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::<Origin>k__BackingField
	Vector3_t3722313464  ___U3COriginU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t3722313464  ___U3CTerminusU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::<Direction>k__BackingField
	Vector3_t3722313464  ___U3CDirectionU3Ek__BackingField_2;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RayStep_t1822550659, ___U3COriginU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3COriginU3Ek__BackingField_0() const { return ___U3COriginU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3COriginU3Ek__BackingField_0() { return &___U3COriginU3Ek__BackingField_0; }
	inline void set_U3COriginU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3COriginU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RayStep_t1822550659, ___U3CTerminusU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CTerminusU3Ek__BackingField_1() const { return ___U3CTerminusU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CTerminusU3Ek__BackingField_1() { return &___U3CTerminusU3Ek__BackingField_1; }
	inline void set_U3CTerminusU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CTerminusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RayStep_t1822550659, ___U3CDirectionU3Ek__BackingField_2)); }
	inline Vector3_t3722313464  get_U3CDirectionU3Ek__BackingField_2() const { return ___U3CDirectionU3Ek__BackingField_2; }
	inline Vector3_t3722313464 * get_address_of_U3CDirectionU3Ek__BackingField_2() { return &___U3CDirectionU3Ek__BackingField_2; }
	inline void set_U3CDirectionU3Ek__BackingField_2(Vector3_t3722313464  value)
	{
		___U3CDirectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t1822550659, ___U3CLengthU3Ek__BackingField_3)); }
	inline float get_U3CLengthU3Ek__BackingField_3() const { return ___U3CLengthU3Ek__BackingField_3; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_3() { return &___U3CLengthU3Ek__BackingField_3; }
	inline void set_U3CLengthU3Ek__BackingField_3(float value)
	{
		___U3CLengthU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYSTEP_T1822550659_H
#ifndef RAYCASTMODETYPE_T2537092789_H
#define RAYCASTMODETYPE_T2537092789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType
struct  RaycastModeType_t2537092789 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastModeType_t2537092789, ___value___2)); }
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
#endif // RAYCASTMODETYPE_T2537092789_H
#ifndef TELEPORTSURFACERESULT_T3911798439_H
#define TELEPORTSURFACERESULT_T3911798439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult
struct  TeleportSurfaceResult_t3911798439 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportSurfaceResult_t3911798439, ___value___2)); }
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
#endif // TELEPORTSURFACERESULT_T3911798439_H
#ifndef AXISTYPE_T2340728342_H
#define AXISTYPE_T2340728342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.AxisType
struct  AxisType_t2340728342 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t2340728342, ___value___2)); }
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
#endif // AXISTYPE_T2340728342_H
#ifndef HANDEDNESS_T254155164_H
#define HANDEDNESS_T254155164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness
struct  Handedness_t254155164 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t254155164, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_T254155164_H
#ifndef MIXEDREALITYPOSE_T1367237071_H
#define MIXEDREALITYPOSE_T1367237071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose
struct  MixedRealityPose_t1367237071 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose::position
	Vector3_t3722313464  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose::rotation
	Quaternion_t2301928331  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t1367237071, ___position_1)); }
	inline Vector3_t3722313464  get_position_1() const { return ___position_1; }
	inline Vector3_t3722313464 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t3722313464  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t1367237071, ___rotation_2)); }
	inline Quaternion_t2301928331  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t2301928331 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t2301928331  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t1367237071_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t1367237071  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t1367237071_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t1367237071  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t1367237071 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t1367237071  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOSE_T1367237071_H
#ifndef PIVOTAXIS_T1951718861_H
#define PIVOTAXIS_T1951718861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.PivotAxis
struct  PivotAxis_t1951718861 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.PivotAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PivotAxis_t1951718861, ___value___2)); }
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
#endif // PIVOTAXIS_T1951718861_H
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
#ifndef FOCUSEVENTDATA_T473508985_H
#define FOCUSEVENTDATA_T473508985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData
struct  FocusEventData_t473508985  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_t1113636619 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_t1113636619 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t473508985, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t473508985, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_t1113636619 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_t1113636619 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_t1113636619 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COldFocusedObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t473508985, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewFocusedObjectU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSEVENTDATA_T473508985_H
#ifndef HIGHLIGHTEDMATERIALSTYLE_T2085403145_H
#define HIGHLIGHTEDMATERIALSTYLE_T2085403145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight/HighlightedMaterialStyle
struct  HighlightedMaterialStyle_t2085403145 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight/HighlightedMaterialStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HighlightedMaterialStyle_t2085403145, ___value___2)); }
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
#endif // HIGHLIGHTEDMATERIALSTYLE_T2085403145_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T1185550589_H
#define ENUMERATOR_T1185550589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>
struct  Enumerator_t1185550589 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3526335110 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1629039981  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1185550589, ___dictionary_0)); }
	inline Dictionary_2_t3526335110 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3526335110 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3526335110 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1185550589, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1185550589, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1185550589, ___current_3)); }
	inline KeyValuePair_2_t1629039981  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1629039981 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1629039981  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1185550589, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1185550589_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
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
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef MIXEDREALITYINPUTACTION_T3419222324_H
#define MIXEDREALITYINPUTACTION_T3419222324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction
struct  MixedRealityInputAction_t3419222324 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.AxisType Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3419222324, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3419222324, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3419222324, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t3419222324_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t3419222324  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t3419222324_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t3419222324  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t3419222324  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_t3419222324_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_t3419222324_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T3419222324_H
#ifndef FOCUSDETAILS_T3818024109_H
#define FOCUSDETAILS_T3818024109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails
struct  FocusDetails_t3818024109 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t3722313464  ___U3CPointU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t3722313464  ___U3CNormalU3Ek__BackingField_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::<Object>k__BackingField
	GameObject_t1113636619 * ___U3CObjectU3Ek__BackingField_2;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	RaycastHit_t1056001966  ___U3CLastRaycastHitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_t3818024109, ___U3CPointU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CPointU3Ek__BackingField_0() const { return ___U3CPointU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CPointU3Ek__BackingField_0() { return &___U3CPointU3Ek__BackingField_0; }
	inline void set_U3CPointU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CPointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_t3818024109, ___U3CNormalU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CNormalU3Ek__BackingField_1() const { return ___U3CNormalU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CNormalU3Ek__BackingField_1() { return &___U3CNormalU3Ek__BackingField_1; }
	inline void set_U3CNormalU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CNormalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_t3818024109, ___U3CObjectU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CObjectU3Ek__BackingField_2() const { return ___U3CObjectU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CObjectU3Ek__BackingField_2() { return &___U3CObjectU3Ek__BackingField_2; }
	inline void set_U3CObjectU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_t3818024109, ___U3CLastRaycastHitU3Ek__BackingField_3)); }
	inline RaycastHit_t1056001966  get_U3CLastRaycastHitU3Ek__BackingField_3() const { return ___U3CLastRaycastHitU3Ek__BackingField_3; }
	inline RaycastHit_t1056001966 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_3() { return &___U3CLastRaycastHitU3Ek__BackingField_3; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_3(RaycastHit_t1056001966  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails
struct FocusDetails_t3818024109_marshaled_pinvoke
{
	Vector3_t3722313464  ___U3CPointU3Ek__BackingField_0;
	Vector3_t3722313464  ___U3CNormalU3Ek__BackingField_1;
	GameObject_t1113636619 * ___U3CObjectU3Ek__BackingField_2;
	RaycastHit_t1056001966  ___U3CLastRaycastHitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails
struct FocusDetails_t3818024109_marshaled_com
{
	Vector3_t3722313464  ___U3CPointU3Ek__BackingField_0;
	Vector3_t3722313464  ___U3CNormalU3Ek__BackingField_1;
	GameObject_t1113636619 * ___U3CObjectU3Ek__BackingField_2;
	RaycastHit_t1056001966  ___U3CLastRaycastHitU3Ek__BackingField_3;
};
#endif // FOCUSDETAILS_T3818024109_H
#ifndef TELEPORTEVENTDATA_T1342032624_H
#define TELEPORTEVENTDATA_T1342032624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData
struct  TeleportEventData_t1342032624  : public GenericBaseEventData_t112130871
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData::<HotSpot>k__BackingField
	RuntimeObject* ___U3CHotSpotU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TeleportEventData_t1342032624, ___U3CPointerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_3() const { return ___U3CPointerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_3() { return &___U3CPointerU3Ek__BackingField_3; }
	inline void set_U3CPointerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CHotSpotU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportEventData_t1342032624, ___U3CHotSpotU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CHotSpotU3Ek__BackingField_4() const { return ___U3CHotSpotU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CHotSpotU3Ek__BackingField_4() { return &___U3CHotSpotU3Ek__BackingField_4; }
	inline void set_U3CHotSpotU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CHotSpotU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHotSpotU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELEPORTEVENTDATA_T1342032624_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
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
#ifndef BASEINPUTEVENTDATA_T1713972929_H
#define BASEINPUTEVENTDATA_T1713972929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData
struct  BaseInputEventData_t1713972929  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_2;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t3419222324  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1713972929, ___U3CInputSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_2() const { return ___U3CInputSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_2() { return &___U3CInputSourceU3Ek__BackingField_2; }
	inline void set_U3CInputSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1713972929, ___U3CSourceIdU3Ek__BackingField_3)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_3() const { return ___U3CSourceIdU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_3() { return &___U3CSourceIdU3Ek__BackingField_3; }
	inline void set_U3CSourceIdU3Ek__BackingField_3(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1713972929, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t3419222324  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t3419222324  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_T1713972929_H
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
#ifndef INPUTEVENTDATA_T2928432700_H
#define INPUTEVENTDATA_T2928432700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData
struct  InputEventData_t2928432700  : public BaseInputEventData_t1713972929
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t2928432700, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTDATA_T2928432700_H
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
#ifndef INPUTEVENTDATA_1_T3484413663_H
#define INPUTEVENTDATA_1_T3484413663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1<UnityEngine.Vector2>
struct  InputEventData_1_t3484413663  : public InputEventData_t2928432700
{
public:
	// T Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_t2156229523  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t3484413663, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_t2156229523  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_t2156229523 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_t2156229523  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTDATA_1_T3484413663_H
#ifndef BASEMIXEDREALITYLINEDATAPROVIDER_T44273451_H
#define BASEMIXEDREALITYLINEDATAPROVIDER_T44273451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider
struct  BaseMixedRealityLineDataProvider_t44273451  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::lineStartClamp
	float ___lineStartClamp_5;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::lineEndClamp
	float ___lineEndClamp_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::customLineTransform
	Transform_t3600365921 * ___customLineTransform_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::loops
	bool ___loops_8;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.LineRotationMode Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::rotationMode
	int32_t ___rotationMode_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::flipUpVector
	bool ___flipUpVector_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::originOffset
	Vector3_t3722313464  ___originOffset_11;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::manualUpVectorBlend
	float ___manualUpVectorBlend_12;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::manualUpVectors
	Vector3U5BU5D_t1718750761* ___manualUpVectors_13;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::velocitySearchRange
	float ___velocitySearchRange_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.Distorter> Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::distorters
	List_1_t1693389651 * ___distorters_15;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.DistortionMode Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::distortionMode
	int32_t ___distortionMode_16;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::distortionStrength
	AnimationCurve_t3046754366 * ___distortionStrength_17;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::uniformDistortionStrength
	float ___uniformDistortionStrength_18;

public:
	inline static int32_t get_offset_of_lineStartClamp_5() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___lineStartClamp_5)); }
	inline float get_lineStartClamp_5() const { return ___lineStartClamp_5; }
	inline float* get_address_of_lineStartClamp_5() { return &___lineStartClamp_5; }
	inline void set_lineStartClamp_5(float value)
	{
		___lineStartClamp_5 = value;
	}

	inline static int32_t get_offset_of_lineEndClamp_6() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___lineEndClamp_6)); }
	inline float get_lineEndClamp_6() const { return ___lineEndClamp_6; }
	inline float* get_address_of_lineEndClamp_6() { return &___lineEndClamp_6; }
	inline void set_lineEndClamp_6(float value)
	{
		___lineEndClamp_6 = value;
	}

	inline static int32_t get_offset_of_customLineTransform_7() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___customLineTransform_7)); }
	inline Transform_t3600365921 * get_customLineTransform_7() const { return ___customLineTransform_7; }
	inline Transform_t3600365921 ** get_address_of_customLineTransform_7() { return &___customLineTransform_7; }
	inline void set_customLineTransform_7(Transform_t3600365921 * value)
	{
		___customLineTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___customLineTransform_7), value);
	}

	inline static int32_t get_offset_of_loops_8() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___loops_8)); }
	inline bool get_loops_8() const { return ___loops_8; }
	inline bool* get_address_of_loops_8() { return &___loops_8; }
	inline void set_loops_8(bool value)
	{
		___loops_8 = value;
	}

	inline static int32_t get_offset_of_rotationMode_9() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___rotationMode_9)); }
	inline int32_t get_rotationMode_9() const { return ___rotationMode_9; }
	inline int32_t* get_address_of_rotationMode_9() { return &___rotationMode_9; }
	inline void set_rotationMode_9(int32_t value)
	{
		___rotationMode_9 = value;
	}

	inline static int32_t get_offset_of_flipUpVector_10() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___flipUpVector_10)); }
	inline bool get_flipUpVector_10() const { return ___flipUpVector_10; }
	inline bool* get_address_of_flipUpVector_10() { return &___flipUpVector_10; }
	inline void set_flipUpVector_10(bool value)
	{
		___flipUpVector_10 = value;
	}

	inline static int32_t get_offset_of_originOffset_11() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___originOffset_11)); }
	inline Vector3_t3722313464  get_originOffset_11() const { return ___originOffset_11; }
	inline Vector3_t3722313464 * get_address_of_originOffset_11() { return &___originOffset_11; }
	inline void set_originOffset_11(Vector3_t3722313464  value)
	{
		___originOffset_11 = value;
	}

	inline static int32_t get_offset_of_manualUpVectorBlend_12() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___manualUpVectorBlend_12)); }
	inline float get_manualUpVectorBlend_12() const { return ___manualUpVectorBlend_12; }
	inline float* get_address_of_manualUpVectorBlend_12() { return &___manualUpVectorBlend_12; }
	inline void set_manualUpVectorBlend_12(float value)
	{
		___manualUpVectorBlend_12 = value;
	}

	inline static int32_t get_offset_of_manualUpVectors_13() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___manualUpVectors_13)); }
	inline Vector3U5BU5D_t1718750761* get_manualUpVectors_13() const { return ___manualUpVectors_13; }
	inline Vector3U5BU5D_t1718750761** get_address_of_manualUpVectors_13() { return &___manualUpVectors_13; }
	inline void set_manualUpVectors_13(Vector3U5BU5D_t1718750761* value)
	{
		___manualUpVectors_13 = value;
		Il2CppCodeGenWriteBarrier((&___manualUpVectors_13), value);
	}

	inline static int32_t get_offset_of_velocitySearchRange_14() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___velocitySearchRange_14)); }
	inline float get_velocitySearchRange_14() const { return ___velocitySearchRange_14; }
	inline float* get_address_of_velocitySearchRange_14() { return &___velocitySearchRange_14; }
	inline void set_velocitySearchRange_14(float value)
	{
		___velocitySearchRange_14 = value;
	}

	inline static int32_t get_offset_of_distorters_15() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___distorters_15)); }
	inline List_1_t1693389651 * get_distorters_15() const { return ___distorters_15; }
	inline List_1_t1693389651 ** get_address_of_distorters_15() { return &___distorters_15; }
	inline void set_distorters_15(List_1_t1693389651 * value)
	{
		___distorters_15 = value;
		Il2CppCodeGenWriteBarrier((&___distorters_15), value);
	}

	inline static int32_t get_offset_of_distortionMode_16() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___distortionMode_16)); }
	inline int32_t get_distortionMode_16() const { return ___distortionMode_16; }
	inline int32_t* get_address_of_distortionMode_16() { return &___distortionMode_16; }
	inline void set_distortionMode_16(int32_t value)
	{
		___distortionMode_16 = value;
	}

	inline static int32_t get_offset_of_distortionStrength_17() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___distortionStrength_17)); }
	inline AnimationCurve_t3046754366 * get_distortionStrength_17() const { return ___distortionStrength_17; }
	inline AnimationCurve_t3046754366 ** get_address_of_distortionStrength_17() { return &___distortionStrength_17; }
	inline void set_distortionStrength_17(AnimationCurve_t3046754366 * value)
	{
		___distortionStrength_17 = value;
		Il2CppCodeGenWriteBarrier((&___distortionStrength_17), value);
	}

	inline static int32_t get_offset_of_uniformDistortionStrength_18() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineDataProvider_t44273451, ___uniformDistortionStrength_18)); }
	inline float get_uniformDistortionStrength_18() const { return ___uniformDistortionStrength_18; }
	inline float* get_address_of_uniformDistortionStrength_18() { return &___uniformDistortionStrength_18; }
	inline void set_uniformDistortionStrength_18(float value)
	{
		___uniformDistortionStrength_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYLINEDATAPROVIDER_T44273451_H
#ifndef BASEMIXEDREALITYLINERENDERER_T3189424626_H
#define BASEMIXEDREALITYLINERENDERER_T3189424626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer
struct  BaseMixedRealityLineRenderer_t3189424626  : public MonoBehaviour_t3962482529
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::lineDataSource
	BaseMixedRealityLineDataProvider_t44273451 * ___lineDataSource_4;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::lineColor
	Gradient_t3067099924 * ___lineColor_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::lineWidth
	AnimationCurve_t3046754366 * ___lineWidth_6;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::widthMultiplier
	float ___widthMultiplier_7;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::colorOffset
	float ___colorOffset_8;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::widthOffset
	float ___widthOffset_9;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Lines.StepMode Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::stepMode
	int32_t ___stepMode_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::lineStepCount
	int32_t ___lineStepCount_11;

public:
	inline static int32_t get_offset_of_lineDataSource_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___lineDataSource_4)); }
	inline BaseMixedRealityLineDataProvider_t44273451 * get_lineDataSource_4() const { return ___lineDataSource_4; }
	inline BaseMixedRealityLineDataProvider_t44273451 ** get_address_of_lineDataSource_4() { return &___lineDataSource_4; }
	inline void set_lineDataSource_4(BaseMixedRealityLineDataProvider_t44273451 * value)
	{
		___lineDataSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___lineDataSource_4), value);
	}

	inline static int32_t get_offset_of_lineColor_5() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___lineColor_5)); }
	inline Gradient_t3067099924 * get_lineColor_5() const { return ___lineColor_5; }
	inline Gradient_t3067099924 ** get_address_of_lineColor_5() { return &___lineColor_5; }
	inline void set_lineColor_5(Gradient_t3067099924 * value)
	{
		___lineColor_5 = value;
		Il2CppCodeGenWriteBarrier((&___lineColor_5), value);
	}

	inline static int32_t get_offset_of_lineWidth_6() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___lineWidth_6)); }
	inline AnimationCurve_t3046754366 * get_lineWidth_6() const { return ___lineWidth_6; }
	inline AnimationCurve_t3046754366 ** get_address_of_lineWidth_6() { return &___lineWidth_6; }
	inline void set_lineWidth_6(AnimationCurve_t3046754366 * value)
	{
		___lineWidth_6 = value;
		Il2CppCodeGenWriteBarrier((&___lineWidth_6), value);
	}

	inline static int32_t get_offset_of_widthMultiplier_7() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___widthMultiplier_7)); }
	inline float get_widthMultiplier_7() const { return ___widthMultiplier_7; }
	inline float* get_address_of_widthMultiplier_7() { return &___widthMultiplier_7; }
	inline void set_widthMultiplier_7(float value)
	{
		___widthMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_colorOffset_8() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___colorOffset_8)); }
	inline float get_colorOffset_8() const { return ___colorOffset_8; }
	inline float* get_address_of_colorOffset_8() { return &___colorOffset_8; }
	inline void set_colorOffset_8(float value)
	{
		___colorOffset_8 = value;
	}

	inline static int32_t get_offset_of_widthOffset_9() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___widthOffset_9)); }
	inline float get_widthOffset_9() const { return ___widthOffset_9; }
	inline float* get_address_of_widthOffset_9() { return &___widthOffset_9; }
	inline void set_widthOffset_9(float value)
	{
		___widthOffset_9 = value;
	}

	inline static int32_t get_offset_of_stepMode_10() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___stepMode_10)); }
	inline int32_t get_stepMode_10() const { return ___stepMode_10; }
	inline int32_t* get_address_of_stepMode_10() { return &___stepMode_10; }
	inline void set_stepMode_10(int32_t value)
	{
		___stepMode_10 = value;
	}

	inline static int32_t get_offset_of_lineStepCount_11() { return static_cast<int32_t>(offsetof(BaseMixedRealityLineRenderer_t3189424626, ___lineStepCount_11)); }
	inline int32_t get_lineStepCount_11() const { return ___lineStepCount_11; }
	inline int32_t* get_address_of_lineStepCount_11() { return &___lineStepCount_11; }
	inline void set_lineStepCount_11(int32_t value)
	{
		___lineStepCount_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYLINERENDERER_T3189424626_H
#ifndef DISTORTER_T221314909_H
#define DISTORTER_T221314909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.Distorter
struct  Distorter_t221314909  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.Distorter::distortOrder
	int32_t ___distortOrder_4;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.Distorter::distortStrength
	float ___distortStrength_5;

public:
	inline static int32_t get_offset_of_distortOrder_4() { return static_cast<int32_t>(offsetof(Distorter_t221314909, ___distortOrder_4)); }
	inline int32_t get_distortOrder_4() const { return ___distortOrder_4; }
	inline int32_t* get_address_of_distortOrder_4() { return &___distortOrder_4; }
	inline void set_distortOrder_4(int32_t value)
	{
		___distortOrder_4 = value;
	}

	inline static int32_t get_offset_of_distortStrength_5() { return static_cast<int32_t>(offsetof(Distorter_t221314909, ___distortStrength_5)); }
	inline float get_distortStrength_5() const { return ___distortStrength_5; }
	inline float* get_address_of_distortStrength_5() { return &___distortStrength_5; }
	inline void set_distortStrength_5(float value)
	{
		___distortStrength_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTORTER_T221314909_H
#ifndef BASEFOCUSHANDLER_T2626431732_H
#define BASEFOCUSHANDLER_T2626431732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler
struct  BaseFocusHandler_t2626431732  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::focusEnabled
	bool ___focusEnabled_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::hasFocus
	bool ___hasFocus_6;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::<Focusers>k__BackingField
	List_1_t2743826997 * ___U3CFocusersU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_focusEnabled_5() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t2626431732, ___focusEnabled_5)); }
	inline bool get_focusEnabled_5() const { return ___focusEnabled_5; }
	inline bool* get_address_of_focusEnabled_5() { return &___focusEnabled_5; }
	inline void set_focusEnabled_5(bool value)
	{
		___focusEnabled_5 = value;
	}

	inline static int32_t get_offset_of_hasFocus_6() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t2626431732, ___hasFocus_6)); }
	inline bool get_hasFocus_6() const { return ___hasFocus_6; }
	inline bool* get_address_of_hasFocus_6() { return &___hasFocus_6; }
	inline void set_hasFocus_6(bool value)
	{
		___hasFocus_6 = value;
	}

	inline static int32_t get_offset_of_U3CFocusersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t2626431732, ___U3CFocusersU3Ek__BackingField_7)); }
	inline List_1_t2743826997 * get_U3CFocusersU3Ek__BackingField_7() const { return ___U3CFocusersU3Ek__BackingField_7; }
	inline List_1_t2743826997 ** get_address_of_U3CFocusersU3Ek__BackingField_7() { return &___U3CFocusersU3Ek__BackingField_7; }
	inline void set_U3CFocusersU3Ek__BackingField_7(List_1_t2743826997 * value)
	{
		___U3CFocusersU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusersU3Ek__BackingField_7), value);
	}
};

struct BaseFocusHandler_t2626431732_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::inputSystem
	RuntimeObject* ___inputSystem_4;

public:
	inline static int32_t get_offset_of_inputSystem_4() { return static_cast<int32_t>(offsetof(BaseFocusHandler_t2626431732_StaticFields, ___inputSystem_4)); }
	inline RuntimeObject* get_inputSystem_4() const { return ___inputSystem_4; }
	inline RuntimeObject** get_address_of_inputSystem_4() { return &___inputSystem_4; }
	inline void set_inputSystem_4(RuntimeObject* value)
	{
		___inputSystem_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFOCUSHANDLER_T2626431732_H
#ifndef INPUTSYSTEMGLOBALLISTENER_T1437600590_H
#define INPUTSYSTEMGLOBALLISTENER_T1437600590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Input.InputSystemGlobalListener
struct  InputSystemGlobalListener_t1437600590  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct InputSystemGlobalListener_t1437600590_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.SDK.Input.InputSystemGlobalListener::inputSystem
	RuntimeObject* ___inputSystem_4;

public:
	inline static int32_t get_offset_of_inputSystem_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_t1437600590_StaticFields, ___inputSystem_4)); }
	inline RuntimeObject* get_inputSystem_4() const { return ___inputSystem_4; }
	inline RuntimeObject** get_address_of_inputSystem_4() { return &___inputSystem_4; }
	inline void set_inputSystem_4(RuntimeObject* value)
	{
		___inputSystem_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSYSTEMGLOBALLISTENER_T1437600590_H
#ifndef BILLBOARD_T3288259690_H
#define BILLBOARD_T3288259690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard
struct  Billboard_t3288259690  : public MonoBehaviour_t3962482529
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.PivotAxis Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::pivotAxis
	int32_t ___pivotAxis_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::targetTransform
	Transform_t3600365921 * ___targetTransform_5;

public:
	inline static int32_t get_offset_of_pivotAxis_4() { return static_cast<int32_t>(offsetof(Billboard_t3288259690, ___pivotAxis_4)); }
	inline int32_t get_pivotAxis_4() const { return ___pivotAxis_4; }
	inline int32_t* get_address_of_pivotAxis_4() { return &___pivotAxis_4; }
	inline void set_pivotAxis_4(int32_t value)
	{
		___pivotAxis_4 = value;
	}

	inline static int32_t get_offset_of_targetTransform_5() { return static_cast<int32_t>(offsetof(Billboard_t3288259690, ___targetTransform_5)); }
	inline Transform_t3600365921 * get_targetTransform_5() const { return ___targetTransform_5; }
	inline Transform_t3600365921 ** get_address_of_targetTransform_5() { return &___targetTransform_5; }
	inline void set_targetTransform_5(Transform_t3600365921 * value)
	{
		___targetTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___targetTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BILLBOARD_T3288259690_H
#ifndef HOVERLIGHT_T861884922_H
#define HOVERLIGHT_T861884922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight
struct  HoverLight_t861884922  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::radius
	float ___radius_11;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::color
	Color_t2555686324  ___color_12;

public:
	inline static int32_t get_offset_of_radius_11() { return static_cast<int32_t>(offsetof(HoverLight_t861884922, ___radius_11)); }
	inline float get_radius_11() const { return ___radius_11; }
	inline float* get_address_of_radius_11() { return &___radius_11; }
	inline void set_radius_11(float value)
	{
		___radius_11 = value;
	}

	inline static int32_t get_offset_of_color_12() { return static_cast<int32_t>(offsetof(HoverLight_t861884922, ___color_12)); }
	inline Color_t2555686324  get_color_12() const { return ___color_12; }
	inline Color_t2555686324 * get_address_of_color_12() { return &___color_12; }
	inline void set_color_12(Color_t2555686324  value)
	{
		___color_12 = value;
	}
};

struct HoverLight_t861884922_StaticFields
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight> Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::activeHoverLights
	List_1_t2333959664 * ___activeHoverLights_7;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::hoverLightData
	Vector4U5BU5D_t934056436* ___hoverLightData_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::_HoverLightDataID
	int32_t ____HoverLightDataID_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::lastHoverLightUpdate
	int32_t ___lastHoverLightUpdate_10;

public:
	inline static int32_t get_offset_of_activeHoverLights_7() { return static_cast<int32_t>(offsetof(HoverLight_t861884922_StaticFields, ___activeHoverLights_7)); }
	inline List_1_t2333959664 * get_activeHoverLights_7() const { return ___activeHoverLights_7; }
	inline List_1_t2333959664 ** get_address_of_activeHoverLights_7() { return &___activeHoverLights_7; }
	inline void set_activeHoverLights_7(List_1_t2333959664 * value)
	{
		___activeHoverLights_7 = value;
		Il2CppCodeGenWriteBarrier((&___activeHoverLights_7), value);
	}

	inline static int32_t get_offset_of_hoverLightData_8() { return static_cast<int32_t>(offsetof(HoverLight_t861884922_StaticFields, ___hoverLightData_8)); }
	inline Vector4U5BU5D_t934056436* get_hoverLightData_8() const { return ___hoverLightData_8; }
	inline Vector4U5BU5D_t934056436** get_address_of_hoverLightData_8() { return &___hoverLightData_8; }
	inline void set_hoverLightData_8(Vector4U5BU5D_t934056436* value)
	{
		___hoverLightData_8 = value;
		Il2CppCodeGenWriteBarrier((&___hoverLightData_8), value);
	}

	inline static int32_t get_offset_of__HoverLightDataID_9() { return static_cast<int32_t>(offsetof(HoverLight_t861884922_StaticFields, ____HoverLightDataID_9)); }
	inline int32_t get__HoverLightDataID_9() const { return ____HoverLightDataID_9; }
	inline int32_t* get_address_of__HoverLightDataID_9() { return &____HoverLightDataID_9; }
	inline void set__HoverLightDataID_9(int32_t value)
	{
		____HoverLightDataID_9 = value;
	}

	inline static int32_t get_offset_of_lastHoverLightUpdate_10() { return static_cast<int32_t>(offsetof(HoverLight_t861884922_StaticFields, ___lastHoverLightUpdate_10)); }
	inline int32_t get_lastHoverLightUpdate_10() const { return ___lastHoverLightUpdate_10; }
	inline int32_t* get_address_of_lastHoverLightUpdate_10() { return &___lastHoverLightUpdate_10; }
	inline void set_lastHoverLightUpdate_10(int32_t value)
	{
		___lastHoverLightUpdate_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOVERLIGHT_T861884922_H
#ifndef PARABOLALINEDATAPROVIDER_T3709687863_H
#define PARABOLALINEDATAPROVIDER_T3709687863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaLineDataProvider
struct  ParabolaLineDataProvider_t3709687863  : public BaseMixedRealityLineDataProvider_t44273451
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaLineDataProvider::startPoint
	MixedRealityPose_t1367237071  ___startPoint_19;

public:
	inline static int32_t get_offset_of_startPoint_19() { return static_cast<int32_t>(offsetof(ParabolaLineDataProvider_t3709687863, ___startPoint_19)); }
	inline MixedRealityPose_t1367237071  get_startPoint_19() const { return ___startPoint_19; }
	inline MixedRealityPose_t1367237071 * get_address_of_startPoint_19() { return &___startPoint_19; }
	inline void set_startPoint_19(MixedRealityPose_t1367237071  value)
	{
		___startPoint_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARABOLALINEDATAPROVIDER_T3709687863_H
#ifndef DISTORTERGRAVITY_T923312544_H
#define DISTORTERGRAVITY_T923312544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity
struct  DistorterGravity_t923312544  : public Distorter_t221314909
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity::localCenterOfGravity
	Vector3_t3722313464  ___localCenterOfGravity_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity::axisStrength
	Vector3_t3722313464  ___axisStrength_7;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity::radius
	float ___radius_8;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity::gravityStrength
	AnimationCurve_t3046754366 * ___gravityStrength_9;

public:
	inline static int32_t get_offset_of_localCenterOfGravity_6() { return static_cast<int32_t>(offsetof(DistorterGravity_t923312544, ___localCenterOfGravity_6)); }
	inline Vector3_t3722313464  get_localCenterOfGravity_6() const { return ___localCenterOfGravity_6; }
	inline Vector3_t3722313464 * get_address_of_localCenterOfGravity_6() { return &___localCenterOfGravity_6; }
	inline void set_localCenterOfGravity_6(Vector3_t3722313464  value)
	{
		___localCenterOfGravity_6 = value;
	}

	inline static int32_t get_offset_of_axisStrength_7() { return static_cast<int32_t>(offsetof(DistorterGravity_t923312544, ___axisStrength_7)); }
	inline Vector3_t3722313464  get_axisStrength_7() const { return ___axisStrength_7; }
	inline Vector3_t3722313464 * get_address_of_axisStrength_7() { return &___axisStrength_7; }
	inline void set_axisStrength_7(Vector3_t3722313464  value)
	{
		___axisStrength_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(DistorterGravity_t923312544, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_gravityStrength_9() { return static_cast<int32_t>(offsetof(DistorterGravity_t923312544, ___gravityStrength_9)); }
	inline AnimationCurve_t3046754366 * get_gravityStrength_9() const { return ___gravityStrength_9; }
	inline AnimationCurve_t3046754366 ** get_address_of_gravityStrength_9() { return &___gravityStrength_9; }
	inline void set_gravityStrength_9(AnimationCurve_t3046754366 * value)
	{
		___gravityStrength_9 = value;
		Il2CppCodeGenWriteBarrier((&___gravityStrength_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTORTERGRAVITY_T923312544_H
#ifndef CONTROLLERPOSESYNCHRONIZER_T3549094724_H
#define CONTROLLERPOSESYNCHRONIZER_T3549094724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer
struct  ControllerPoseSynchronizer_t3549094724  : public InputSystemGlobalListener_t1437600590
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.TrackingState Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_8;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_10;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t3419222324  ___poseAction_11;

public:
	inline static int32_t get_offset_of_handedness_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___handedness_5)); }
	inline uint8_t get_handedness_5() const { return ___handedness_5; }
	inline uint8_t* get_address_of_handedness_5() { return &___handedness_5; }
	inline void set_handedness_5(uint8_t value)
	{
		___handedness_5 = value;
	}

	inline static int32_t get_offset_of_destroyOnSourceLost_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___destroyOnSourceLost_6)); }
	inline bool get_destroyOnSourceLost_6() const { return ___destroyOnSourceLost_6; }
	inline bool* get_address_of_destroyOnSourceLost_6() { return &___destroyOnSourceLost_6; }
	inline void set_destroyOnSourceLost_6(bool value)
	{
		___destroyOnSourceLost_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___U3CIsTrackedU3Ek__BackingField_7)); }
	inline bool get_U3CIsTrackedU3Ek__BackingField_7() const { return ___U3CIsTrackedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsTrackedU3Ek__BackingField_7() { return &___U3CIsTrackedU3Ek__BackingField_7; }
	inline void set_U3CIsTrackedU3Ek__BackingField_7(bool value)
	{
		___U3CIsTrackedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_TrackingState_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___TrackingState_8)); }
	inline int32_t get_TrackingState_8() const { return ___TrackingState_8; }
	inline int32_t* get_address_of_TrackingState_8() { return &___TrackingState_8; }
	inline void set_TrackingState_8(int32_t value)
	{
		___TrackingState_8 = value;
	}

	inline static int32_t get_offset_of_controller_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___controller_9)); }
	inline RuntimeObject* get_controller_9() const { return ___controller_9; }
	inline RuntimeObject** get_address_of_controller_9() { return &___controller_9; }
	inline void set_controller_9(RuntimeObject* value)
	{
		___controller_9 = value;
		Il2CppCodeGenWriteBarrier((&___controller_9), value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___useSourcePoseData_10)); }
	inline bool get_useSourcePoseData_10() const { return ___useSourcePoseData_10; }
	inline bool* get_address_of_useSourcePoseData_10() { return &___useSourcePoseData_10; }
	inline void set_useSourcePoseData_10(bool value)
	{
		___useSourcePoseData_10 = value;
	}

	inline static int32_t get_offset_of_poseAction_11() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t3549094724, ___poseAction_11)); }
	inline MixedRealityInputAction_t3419222324  get_poseAction_11() const { return ___poseAction_11; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_poseAction_11() { return &___poseAction_11; }
	inline void set_poseAction_11(MixedRealityInputAction_t3419222324  value)
	{
		___poseAction_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERPOSESYNCHRONIZER_T3549094724_H
#ifndef INTERACTABLEHIGHLIGHT_T3226167531_H
#define INTERACTABLEHIGHLIGHT_T3226167531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight
struct  InteractableHighlight_t3226167531  : public BaseFocusHandler_t2626431732
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::highlight
	bool ___highlight_8;
	// UnityEngine.Renderer[] Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::targetRenderers
	RendererU5BU5D_t3210418286* ___targetRenderers_9;
	// System.String Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::highlightColorProperty
	String_t* ___highlightColorProperty_10;
	// System.String Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::outlineColorProperty
	String_t* ___outlineColorProperty_11;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::highlightColor
	Color_t2555686324  ___highlightColor_12;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::outlineColor
	Color_t2555686324  ___outlineColor_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::highlightMaterial
	Material_t340375123 * ___highlightMaterial_14;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::overlayMaterial
	Material_t340375123 * ___overlayMaterial_15;
	// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight/HighlightedMaterialStyle Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::targetStyle
	int32_t ___targetStyle_16;
	// Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight/HighlightedMaterialStyle Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::currentStyle
	int32_t ___currentStyle_17;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>> Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::materialsBeforeFocus
	Dictionary_2_t3526335110 * ___materialsBeforeFocus_18;

public:
	inline static int32_t get_offset_of_highlight_8() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___highlight_8)); }
	inline bool get_highlight_8() const { return ___highlight_8; }
	inline bool* get_address_of_highlight_8() { return &___highlight_8; }
	inline void set_highlight_8(bool value)
	{
		___highlight_8 = value;
	}

	inline static int32_t get_offset_of_targetRenderers_9() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___targetRenderers_9)); }
	inline RendererU5BU5D_t3210418286* get_targetRenderers_9() const { return ___targetRenderers_9; }
	inline RendererU5BU5D_t3210418286** get_address_of_targetRenderers_9() { return &___targetRenderers_9; }
	inline void set_targetRenderers_9(RendererU5BU5D_t3210418286* value)
	{
		___targetRenderers_9 = value;
		Il2CppCodeGenWriteBarrier((&___targetRenderers_9), value);
	}

	inline static int32_t get_offset_of_highlightColorProperty_10() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___highlightColorProperty_10)); }
	inline String_t* get_highlightColorProperty_10() const { return ___highlightColorProperty_10; }
	inline String_t** get_address_of_highlightColorProperty_10() { return &___highlightColorProperty_10; }
	inline void set_highlightColorProperty_10(String_t* value)
	{
		___highlightColorProperty_10 = value;
		Il2CppCodeGenWriteBarrier((&___highlightColorProperty_10), value);
	}

	inline static int32_t get_offset_of_outlineColorProperty_11() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___outlineColorProperty_11)); }
	inline String_t* get_outlineColorProperty_11() const { return ___outlineColorProperty_11; }
	inline String_t** get_address_of_outlineColorProperty_11() { return &___outlineColorProperty_11; }
	inline void set_outlineColorProperty_11(String_t* value)
	{
		___outlineColorProperty_11 = value;
		Il2CppCodeGenWriteBarrier((&___outlineColorProperty_11), value);
	}

	inline static int32_t get_offset_of_highlightColor_12() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___highlightColor_12)); }
	inline Color_t2555686324  get_highlightColor_12() const { return ___highlightColor_12; }
	inline Color_t2555686324 * get_address_of_highlightColor_12() { return &___highlightColor_12; }
	inline void set_highlightColor_12(Color_t2555686324  value)
	{
		___highlightColor_12 = value;
	}

	inline static int32_t get_offset_of_outlineColor_13() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___outlineColor_13)); }
	inline Color_t2555686324  get_outlineColor_13() const { return ___outlineColor_13; }
	inline Color_t2555686324 * get_address_of_outlineColor_13() { return &___outlineColor_13; }
	inline void set_outlineColor_13(Color_t2555686324  value)
	{
		___outlineColor_13 = value;
	}

	inline static int32_t get_offset_of_highlightMaterial_14() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___highlightMaterial_14)); }
	inline Material_t340375123 * get_highlightMaterial_14() const { return ___highlightMaterial_14; }
	inline Material_t340375123 ** get_address_of_highlightMaterial_14() { return &___highlightMaterial_14; }
	inline void set_highlightMaterial_14(Material_t340375123 * value)
	{
		___highlightMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___highlightMaterial_14), value);
	}

	inline static int32_t get_offset_of_overlayMaterial_15() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___overlayMaterial_15)); }
	inline Material_t340375123 * get_overlayMaterial_15() const { return ___overlayMaterial_15; }
	inline Material_t340375123 ** get_address_of_overlayMaterial_15() { return &___overlayMaterial_15; }
	inline void set_overlayMaterial_15(Material_t340375123 * value)
	{
		___overlayMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((&___overlayMaterial_15), value);
	}

	inline static int32_t get_offset_of_targetStyle_16() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___targetStyle_16)); }
	inline int32_t get_targetStyle_16() const { return ___targetStyle_16; }
	inline int32_t* get_address_of_targetStyle_16() { return &___targetStyle_16; }
	inline void set_targetStyle_16(int32_t value)
	{
		___targetStyle_16 = value;
	}

	inline static int32_t get_offset_of_currentStyle_17() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___currentStyle_17)); }
	inline int32_t get_currentStyle_17() const { return ___currentStyle_17; }
	inline int32_t* get_address_of_currentStyle_17() { return &___currentStyle_17; }
	inline void set_currentStyle_17(int32_t value)
	{
		___currentStyle_17 = value;
	}

	inline static int32_t get_offset_of_materialsBeforeFocus_18() { return static_cast<int32_t>(offsetof(InteractableHighlight_t3226167531, ___materialsBeforeFocus_18)); }
	inline Dictionary_2_t3526335110 * get_materialsBeforeFocus_18() const { return ___materialsBeforeFocus_18; }
	inline Dictionary_2_t3526335110 ** get_address_of_materialsBeforeFocus_18() { return &___materialsBeforeFocus_18; }
	inline void set_materialsBeforeFocus_18(Dictionary_2_t3526335110 * value)
	{
		___materialsBeforeFocus_18 = value;
		Il2CppCodeGenWriteBarrier((&___materialsBeforeFocus_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTABLEHIGHLIGHT_T3226167531_H
#ifndef PARABOLAPHYSICALLINEDATAPROVIDER_T2748289363_H
#define PARABOLAPHYSICALLINEDATAPROVIDER_T2748289363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider
struct  ParabolaPhysicalLineDataProvider_t2748289363  : public ParabolaLineDataProvider_t3709687863
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::direction
	Vector3_t3722313464  ___direction_20;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::velocity
	float ___velocity_21;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::distanceMultiplier
	float ___distanceMultiplier_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::useCustomGravity
	bool ___useCustomGravity_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::gravity
	Vector3_t3722313464  ___gravity_24;

public:
	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(ParabolaPhysicalLineDataProvider_t2748289363, ___direction_20)); }
	inline Vector3_t3722313464  get_direction_20() const { return ___direction_20; }
	inline Vector3_t3722313464 * get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(Vector3_t3722313464  value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_velocity_21() { return static_cast<int32_t>(offsetof(ParabolaPhysicalLineDataProvider_t2748289363, ___velocity_21)); }
	inline float get_velocity_21() const { return ___velocity_21; }
	inline float* get_address_of_velocity_21() { return &___velocity_21; }
	inline void set_velocity_21(float value)
	{
		___velocity_21 = value;
	}

	inline static int32_t get_offset_of_distanceMultiplier_22() { return static_cast<int32_t>(offsetof(ParabolaPhysicalLineDataProvider_t2748289363, ___distanceMultiplier_22)); }
	inline float get_distanceMultiplier_22() const { return ___distanceMultiplier_22; }
	inline float* get_address_of_distanceMultiplier_22() { return &___distanceMultiplier_22; }
	inline void set_distanceMultiplier_22(float value)
	{
		___distanceMultiplier_22 = value;
	}

	inline static int32_t get_offset_of_useCustomGravity_23() { return static_cast<int32_t>(offsetof(ParabolaPhysicalLineDataProvider_t2748289363, ___useCustomGravity_23)); }
	inline bool get_useCustomGravity_23() const { return ___useCustomGravity_23; }
	inline bool* get_address_of_useCustomGravity_23() { return &___useCustomGravity_23; }
	inline void set_useCustomGravity_23(bool value)
	{
		___useCustomGravity_23 = value;
	}

	inline static int32_t get_offset_of_gravity_24() { return static_cast<int32_t>(offsetof(ParabolaPhysicalLineDataProvider_t2748289363, ___gravity_24)); }
	inline Vector3_t3722313464  get_gravity_24() const { return ___gravity_24; }
	inline Vector3_t3722313464 * get_address_of_gravity_24() { return &___gravity_24; }
	inline void set_gravity_24(Vector3_t3722313464  value)
	{
		___gravity_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARABOLAPHYSICALLINEDATAPROVIDER_T2748289363_H
#ifndef BASECONTROLLERPOINTER_T823387382_H
#define BASECONTROLLERPOINTER_T823387382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer
struct  BaseControllerPointer_t823387382  : public ControllerPoseSynchronizer_t3549094724
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::cursorPrefab
	GameObject_t1113636619 * ___cursorPrefab_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::cursorInstance
	GameObject_t1113636619 * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::raycastOrigin
	Transform_t3600365921 * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t3419222324  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t3419222324  ___pointerAction_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::IsTeleportRequestActive
	bool ___IsTeleportRequestActive_22;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::pointerId
	uint32_t ___pointerId_23;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_24;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_25;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.ICursorModifier Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<TeleportHotSpot>k__BackingField
	RuntimeObject* ___U3CTeleportHotSpotU3Ek__BackingField_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_29;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::pointerExtent
	float ___pointerExtent_30;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_t3168306194* ___U3CRaysU3Ek__BackingField_31;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_t253793507* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_33;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_34;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_35;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<RaycastMode>k__BackingField
	int32_t ___U3CRaycastModeU3Ek__BackingField_36;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_37;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::pointerOrientation
	float ___pointerOrientation_38;

public:
	inline static int32_t get_offset_of_cursorPrefab_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___cursorPrefab_13)); }
	inline GameObject_t1113636619 * get_cursorPrefab_13() const { return ___cursorPrefab_13; }
	inline GameObject_t1113636619 ** get_address_of_cursorPrefab_13() { return &___cursorPrefab_13; }
	inline void set_cursorPrefab_13(GameObject_t1113636619 * value)
	{
		___cursorPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___cursorPrefab_13), value);
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___cursorInstance_14)); }
	inline GameObject_t1113636619 * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_t1113636619 ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_t1113636619 * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((&___cursorInstance_14), value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___raycastOrigin_15)); }
	inline Transform_t3600365921 * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_t3600365921 ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_t3600365921 * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((&___raycastOrigin_15), value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t3419222324  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t3419222324  value)
	{
		___activeHoldAction_16 = value;
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___pointerAction_17)); }
	inline MixedRealityInputAction_t3419222324  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t3419222324  value)
	{
		___pointerAction_17 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___requiresHoldAction_18)); }
	inline bool get_requiresHoldAction_18() const { return ___requiresHoldAction_18; }
	inline bool* get_address_of_requiresHoldAction_18() { return &___requiresHoldAction_18; }
	inline void set_requiresHoldAction_18(bool value)
	{
		___requiresHoldAction_18 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___IsSelectPressed_19)); }
	inline bool get_IsSelectPressed_19() const { return ___IsSelectPressed_19; }
	inline bool* get_address_of_IsSelectPressed_19() { return &___IsSelectPressed_19; }
	inline void set_IsSelectPressed_19(bool value)
	{
		___IsSelectPressed_19 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___HasSelectPressedOnce_20)); }
	inline bool get_HasSelectPressedOnce_20() const { return ___HasSelectPressedOnce_20; }
	inline bool* get_address_of_HasSelectPressedOnce_20() { return &___HasSelectPressedOnce_20; }
	inline void set_HasSelectPressedOnce_20(bool value)
	{
		___HasSelectPressedOnce_20 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___IsHoldPressed_21)); }
	inline bool get_IsHoldPressed_21() const { return ___IsHoldPressed_21; }
	inline bool* get_address_of_IsHoldPressed_21() { return &___IsHoldPressed_21; }
	inline void set_IsHoldPressed_21(bool value)
	{
		___IsHoldPressed_21 = value;
	}

	inline static int32_t get_offset_of_IsTeleportRequestActive_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___IsTeleportRequestActive_22)); }
	inline bool get_IsTeleportRequestActive_22() const { return ___IsTeleportRequestActive_22; }
	inline bool* get_address_of_IsTeleportRequestActive_22() { return &___IsTeleportRequestActive_22; }
	inline void set_IsTeleportRequestActive_22(bool value)
	{
		___IsTeleportRequestActive_22 = value;
	}

	inline static int32_t get_offset_of_pointerId_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___pointerId_23)); }
	inline uint32_t get_pointerId_23() const { return ___pointerId_23; }
	inline uint32_t* get_address_of_pointerId_23() { return &___pointerId_23; }
	inline void set_pointerId_23(uint32_t value)
	{
		___pointerId_23 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CInputSourceParentU3Ek__BackingField_24)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_24() const { return ___U3CInputSourceParentU3Ek__BackingField_24; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_24() { return &___U3CInputSourceParentU3Ek__BackingField_24; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_24(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceParentU3Ek__BackingField_24), value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CBaseCursorU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_25() const { return ___U3CBaseCursorU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_25() { return &___U3CBaseCursorU3Ek__BackingField_25; }
	inline void set_U3CBaseCursorU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseCursorU3Ek__BackingField_25), value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CCursorModifierU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_26() const { return ___U3CCursorModifierU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_26() { return &___U3CCursorModifierU3Ek__BackingField_26; }
	inline void set_U3CCursorModifierU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCursorModifierU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CTeleportHotSpotU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CTeleportHotSpotU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CTeleportHotSpotU3Ek__BackingField_27() const { return ___U3CTeleportHotSpotU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CTeleportHotSpotU3Ek__BackingField_27() { return &___U3CTeleportHotSpotU3Ek__BackingField_27; }
	inline void set_U3CTeleportHotSpotU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CTeleportHotSpotU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTeleportHotSpotU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CIsFocusLockedU3Ek__BackingField_28)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_28() const { return ___U3CIsFocusLockedU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_28() { return &___U3CIsFocusLockedU3Ek__BackingField_28; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_28(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___overrideGlobalPointerExtent_29)); }
	inline bool get_overrideGlobalPointerExtent_29() const { return ___overrideGlobalPointerExtent_29; }
	inline bool* get_address_of_overrideGlobalPointerExtent_29() { return &___overrideGlobalPointerExtent_29; }
	inline void set_overrideGlobalPointerExtent_29(bool value)
	{
		___overrideGlobalPointerExtent_29 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___pointerExtent_30)); }
	inline float get_pointerExtent_30() const { return ___pointerExtent_30; }
	inline float* get_address_of_pointerExtent_30() { return &___pointerExtent_30; }
	inline void set_pointerExtent_30(float value)
	{
		___pointerExtent_30 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CRaysU3Ek__BackingField_31)); }
	inline RayStepU5BU5D_t3168306194* get_U3CRaysU3Ek__BackingField_31() const { return ___U3CRaysU3Ek__BackingField_31; }
	inline RayStepU5BU5D_t3168306194** get_address_of_U3CRaysU3Ek__BackingField_31() { return &___U3CRaysU3Ek__BackingField_31; }
	inline void set_U3CRaysU3Ek__BackingField_31(RayStepU5BU5D_t3168306194* value)
	{
		___U3CRaysU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRaysU3Ek__BackingField_31), value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32)); }
	inline LayerMaskU5BU5D_t253793507* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32; }
	inline LayerMaskU5BU5D_t253793507** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32(LayerMaskU5BU5D_t253793507* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_32), value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CFocusTargetU3Ek__BackingField_33)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_33() const { return ___U3CFocusTargetU3Ek__BackingField_33; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_33() { return &___U3CFocusTargetU3Ek__BackingField_33; }
	inline void set_U3CFocusTargetU3Ek__BackingField_33(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusTargetU3Ek__BackingField_33), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CResultU3Ek__BackingField_34)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_34() const { return ___U3CResultU3Ek__BackingField_34; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_34() { return &___U3CResultU3Ek__BackingField_34; }
	inline void set_U3CResultU3Ek__BackingField_34(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_34), value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CRayStabilizerU3Ek__BackingField_35)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_35() const { return ___U3CRayStabilizerU3Ek__BackingField_35; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_35() { return &___U3CRayStabilizerU3Ek__BackingField_35; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_35(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRayStabilizerU3Ek__BackingField_35), value);
	}

	inline static int32_t get_offset_of_U3CRaycastModeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CRaycastModeU3Ek__BackingField_36)); }
	inline int32_t get_U3CRaycastModeU3Ek__BackingField_36() const { return ___U3CRaycastModeU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CRaycastModeU3Ek__BackingField_36() { return &___U3CRaycastModeU3Ek__BackingField_36; }
	inline void set_U3CRaycastModeU3Ek__BackingField_36(int32_t value)
	{
		___U3CRaycastModeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___U3CSphereCastRadiusU3Ek__BackingField_37)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_37() const { return ___U3CSphereCastRadiusU3Ek__BackingField_37; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_37() { return &___U3CSphereCastRadiusU3Ek__BackingField_37; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_37(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_pointerOrientation_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382, ___pointerOrientation_38)); }
	inline float get_pointerOrientation_38() const { return ___pointerOrientation_38; }
	inline float* get_address_of_pointerOrientation_38() { return &___pointerOrientation_38; }
	inline void set_pointerOrientation_38(float value)
	{
		___pointerOrientation_38 = value;
	}
};

struct BaseControllerPointer_t823387382_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::teleportSystem
	RuntimeObject* ___teleportSystem_12;

public:
	inline static int32_t get_offset_of_teleportSystem_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t823387382_StaticFields, ___teleportSystem_12)); }
	inline RuntimeObject* get_teleportSystem_12() const { return ___teleportSystem_12; }
	inline RuntimeObject** get_address_of_teleportSystem_12() { return &___teleportSystem_12; }
	inline void set_teleportSystem_12(RuntimeObject* value)
	{
		___teleportSystem_12 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystem_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLERPOINTER_T823387382_H
#ifndef LINEPOINTER_T1596098013_H
#define LINEPOINTER_T1596098013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer
struct  LinePointer_t1596098013  : public BaseControllerPointer_t823387382
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineColorSelected
	Gradient_t3067099924 * ___LineColorSelected_39;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineColorValid
	Gradient_t3067099924 * ___LineColorValid_40;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineColorInvalid
	Gradient_t3067099924 * ___LineColorInvalid_41;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineColorNoTarget
	Gradient_t3067099924 * ___LineColorNoTarget_42;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineColorLockFocus
	Gradient_t3067099924 * ___LineColorLockFocus_43;
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::LineCastResolution
	int32_t ___LineCastResolution_44;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_t44273451 * ___lineBase_45;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_t1844645383* ___lineRenderers_46;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::gravityDistorter
	DistorterGravity_t923312544 * ___gravityDistorter_47;

public:
	inline static int32_t get_offset_of_LineColorSelected_39() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineColorSelected_39)); }
	inline Gradient_t3067099924 * get_LineColorSelected_39() const { return ___LineColorSelected_39; }
	inline Gradient_t3067099924 ** get_address_of_LineColorSelected_39() { return &___LineColorSelected_39; }
	inline void set_LineColorSelected_39(Gradient_t3067099924 * value)
	{
		___LineColorSelected_39 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorSelected_39), value);
	}

	inline static int32_t get_offset_of_LineColorValid_40() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineColorValid_40)); }
	inline Gradient_t3067099924 * get_LineColorValid_40() const { return ___LineColorValid_40; }
	inline Gradient_t3067099924 ** get_address_of_LineColorValid_40() { return &___LineColorValid_40; }
	inline void set_LineColorValid_40(Gradient_t3067099924 * value)
	{
		___LineColorValid_40 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorValid_40), value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_41() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineColorInvalid_41)); }
	inline Gradient_t3067099924 * get_LineColorInvalid_41() const { return ___LineColorInvalid_41; }
	inline Gradient_t3067099924 ** get_address_of_LineColorInvalid_41() { return &___LineColorInvalid_41; }
	inline void set_LineColorInvalid_41(Gradient_t3067099924 * value)
	{
		___LineColorInvalid_41 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorInvalid_41), value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_42() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineColorNoTarget_42)); }
	inline Gradient_t3067099924 * get_LineColorNoTarget_42() const { return ___LineColorNoTarget_42; }
	inline Gradient_t3067099924 ** get_address_of_LineColorNoTarget_42() { return &___LineColorNoTarget_42; }
	inline void set_LineColorNoTarget_42(Gradient_t3067099924 * value)
	{
		___LineColorNoTarget_42 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorNoTarget_42), value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_43() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineColorLockFocus_43)); }
	inline Gradient_t3067099924 * get_LineColorLockFocus_43() const { return ___LineColorLockFocus_43; }
	inline Gradient_t3067099924 ** get_address_of_LineColorLockFocus_43() { return &___LineColorLockFocus_43; }
	inline void set_LineColorLockFocus_43(Gradient_t3067099924 * value)
	{
		___LineColorLockFocus_43 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorLockFocus_43), value);
	}

	inline static int32_t get_offset_of_LineCastResolution_44() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___LineCastResolution_44)); }
	inline int32_t get_LineCastResolution_44() const { return ___LineCastResolution_44; }
	inline int32_t* get_address_of_LineCastResolution_44() { return &___LineCastResolution_44; }
	inline void set_LineCastResolution_44(int32_t value)
	{
		___LineCastResolution_44 = value;
	}

	inline static int32_t get_offset_of_lineBase_45() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___lineBase_45)); }
	inline BaseMixedRealityLineDataProvider_t44273451 * get_lineBase_45() const { return ___lineBase_45; }
	inline BaseMixedRealityLineDataProvider_t44273451 ** get_address_of_lineBase_45() { return &___lineBase_45; }
	inline void set_lineBase_45(BaseMixedRealityLineDataProvider_t44273451 * value)
	{
		___lineBase_45 = value;
		Il2CppCodeGenWriteBarrier((&___lineBase_45), value);
	}

	inline static int32_t get_offset_of_lineRenderers_46() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___lineRenderers_46)); }
	inline BaseMixedRealityLineRendererU5BU5D_t1844645383* get_lineRenderers_46() const { return ___lineRenderers_46; }
	inline BaseMixedRealityLineRendererU5BU5D_t1844645383** get_address_of_lineRenderers_46() { return &___lineRenderers_46; }
	inline void set_lineRenderers_46(BaseMixedRealityLineRendererU5BU5D_t1844645383* value)
	{
		___lineRenderers_46 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderers_46), value);
	}

	inline static int32_t get_offset_of_gravityDistorter_47() { return static_cast<int32_t>(offsetof(LinePointer_t1596098013, ___gravityDistorter_47)); }
	inline DistorterGravity_t923312544 * get_gravityDistorter_47() const { return ___gravityDistorter_47; }
	inline DistorterGravity_t923312544 ** get_address_of_gravityDistorter_47() { return &___gravityDistorter_47; }
	inline void set_gravityDistorter_47(DistorterGravity_t923312544 * value)
	{
		___gravityDistorter_47 = value;
		Il2CppCodeGenWriteBarrier((&___gravityDistorter_47), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEPOINTER_T1596098013_H
#ifndef TELEPORTPOINTER_T1203388771_H
#define TELEPORTPOINTER_T1203388771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer
struct  TeleportPointer_t1203388771  : public LinePointer_t1596098013
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::teleportAction
	MixedRealityInputAction_t3419222324  ___teleportAction_48;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::inputThreshold
	float ___inputThreshold_49;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::angleOffset
	float ___angleOffset_50;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::teleportActivationAngle
	float ___teleportActivationAngle_51;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::rotateActivationAngle
	float ___rotateActivationAngle_52;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::rotationAmount
	float ___rotationAmount_53;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::backStrafeActivationAngle
	float ___backStrafeActivationAngle_54;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::strafeAmount
	float ___strafeAmount_55;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::upDirectionThreshold
	float ___upDirectionThreshold_56;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::LineColorHotSpot
	Gradient_t3067099924 * ___LineColorHotSpot_57;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::ValidLayers
	LayerMask_t3493934918  ___ValidLayers_58;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::InvalidLayers
	LayerMask_t3493934918  ___InvalidLayers_59;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::currentInputPosition
	Vector2_t2156229523  ___currentInputPosition_60;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::teleportEnabled
	bool ___teleportEnabled_61;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::canTeleport
	bool ___canTeleport_62;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::canMove
	bool ___canMove_63;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::<TeleportSurfaceResult>k__BackingField
	int32_t ___U3CTeleportSurfaceResultU3Ek__BackingField_64;

public:
	inline static int32_t get_offset_of_teleportAction_48() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___teleportAction_48)); }
	inline MixedRealityInputAction_t3419222324  get_teleportAction_48() const { return ___teleportAction_48; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_teleportAction_48() { return &___teleportAction_48; }
	inline void set_teleportAction_48(MixedRealityInputAction_t3419222324  value)
	{
		___teleportAction_48 = value;
	}

	inline static int32_t get_offset_of_inputThreshold_49() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___inputThreshold_49)); }
	inline float get_inputThreshold_49() const { return ___inputThreshold_49; }
	inline float* get_address_of_inputThreshold_49() { return &___inputThreshold_49; }
	inline void set_inputThreshold_49(float value)
	{
		___inputThreshold_49 = value;
	}

	inline static int32_t get_offset_of_angleOffset_50() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___angleOffset_50)); }
	inline float get_angleOffset_50() const { return ___angleOffset_50; }
	inline float* get_address_of_angleOffset_50() { return &___angleOffset_50; }
	inline void set_angleOffset_50(float value)
	{
		___angleOffset_50 = value;
	}

	inline static int32_t get_offset_of_teleportActivationAngle_51() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___teleportActivationAngle_51)); }
	inline float get_teleportActivationAngle_51() const { return ___teleportActivationAngle_51; }
	inline float* get_address_of_teleportActivationAngle_51() { return &___teleportActivationAngle_51; }
	inline void set_teleportActivationAngle_51(float value)
	{
		___teleportActivationAngle_51 = value;
	}

	inline static int32_t get_offset_of_rotateActivationAngle_52() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___rotateActivationAngle_52)); }
	inline float get_rotateActivationAngle_52() const { return ___rotateActivationAngle_52; }
	inline float* get_address_of_rotateActivationAngle_52() { return &___rotateActivationAngle_52; }
	inline void set_rotateActivationAngle_52(float value)
	{
		___rotateActivationAngle_52 = value;
	}

	inline static int32_t get_offset_of_rotationAmount_53() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___rotationAmount_53)); }
	inline float get_rotationAmount_53() const { return ___rotationAmount_53; }
	inline float* get_address_of_rotationAmount_53() { return &___rotationAmount_53; }
	inline void set_rotationAmount_53(float value)
	{
		___rotationAmount_53 = value;
	}

	inline static int32_t get_offset_of_backStrafeActivationAngle_54() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___backStrafeActivationAngle_54)); }
	inline float get_backStrafeActivationAngle_54() const { return ___backStrafeActivationAngle_54; }
	inline float* get_address_of_backStrafeActivationAngle_54() { return &___backStrafeActivationAngle_54; }
	inline void set_backStrafeActivationAngle_54(float value)
	{
		___backStrafeActivationAngle_54 = value;
	}

	inline static int32_t get_offset_of_strafeAmount_55() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___strafeAmount_55)); }
	inline float get_strafeAmount_55() const { return ___strafeAmount_55; }
	inline float* get_address_of_strafeAmount_55() { return &___strafeAmount_55; }
	inline void set_strafeAmount_55(float value)
	{
		___strafeAmount_55 = value;
	}

	inline static int32_t get_offset_of_upDirectionThreshold_56() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___upDirectionThreshold_56)); }
	inline float get_upDirectionThreshold_56() const { return ___upDirectionThreshold_56; }
	inline float* get_address_of_upDirectionThreshold_56() { return &___upDirectionThreshold_56; }
	inline void set_upDirectionThreshold_56(float value)
	{
		___upDirectionThreshold_56 = value;
	}

	inline static int32_t get_offset_of_LineColorHotSpot_57() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___LineColorHotSpot_57)); }
	inline Gradient_t3067099924 * get_LineColorHotSpot_57() const { return ___LineColorHotSpot_57; }
	inline Gradient_t3067099924 ** get_address_of_LineColorHotSpot_57() { return &___LineColorHotSpot_57; }
	inline void set_LineColorHotSpot_57(Gradient_t3067099924 * value)
	{
		___LineColorHotSpot_57 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorHotSpot_57), value);
	}

	inline static int32_t get_offset_of_ValidLayers_58() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___ValidLayers_58)); }
	inline LayerMask_t3493934918  get_ValidLayers_58() const { return ___ValidLayers_58; }
	inline LayerMask_t3493934918 * get_address_of_ValidLayers_58() { return &___ValidLayers_58; }
	inline void set_ValidLayers_58(LayerMask_t3493934918  value)
	{
		___ValidLayers_58 = value;
	}

	inline static int32_t get_offset_of_InvalidLayers_59() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___InvalidLayers_59)); }
	inline LayerMask_t3493934918  get_InvalidLayers_59() const { return ___InvalidLayers_59; }
	inline LayerMask_t3493934918 * get_address_of_InvalidLayers_59() { return &___InvalidLayers_59; }
	inline void set_InvalidLayers_59(LayerMask_t3493934918  value)
	{
		___InvalidLayers_59 = value;
	}

	inline static int32_t get_offset_of_currentInputPosition_60() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___currentInputPosition_60)); }
	inline Vector2_t2156229523  get_currentInputPosition_60() const { return ___currentInputPosition_60; }
	inline Vector2_t2156229523 * get_address_of_currentInputPosition_60() { return &___currentInputPosition_60; }
	inline void set_currentInputPosition_60(Vector2_t2156229523  value)
	{
		___currentInputPosition_60 = value;
	}

	inline static int32_t get_offset_of_teleportEnabled_61() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___teleportEnabled_61)); }
	inline bool get_teleportEnabled_61() const { return ___teleportEnabled_61; }
	inline bool* get_address_of_teleportEnabled_61() { return &___teleportEnabled_61; }
	inline void set_teleportEnabled_61(bool value)
	{
		___teleportEnabled_61 = value;
	}

	inline static int32_t get_offset_of_canTeleport_62() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___canTeleport_62)); }
	inline bool get_canTeleport_62() const { return ___canTeleport_62; }
	inline bool* get_address_of_canTeleport_62() { return &___canTeleport_62; }
	inline void set_canTeleport_62(bool value)
	{
		___canTeleport_62 = value;
	}

	inline static int32_t get_offset_of_canMove_63() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___canMove_63)); }
	inline bool get_canMove_63() const { return ___canMove_63; }
	inline bool* get_address_of_canMove_63() { return &___canMove_63; }
	inline void set_canMove_63(bool value)
	{
		___canMove_63 = value;
	}

	inline static int32_t get_offset_of_U3CTeleportSurfaceResultU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(TeleportPointer_t1203388771, ___U3CTeleportSurfaceResultU3Ek__BackingField_64)); }
	inline int32_t get_U3CTeleportSurfaceResultU3Ek__BackingField_64() const { return ___U3CTeleportSurfaceResultU3Ek__BackingField_64; }
	inline int32_t* get_address_of_U3CTeleportSurfaceResultU3Ek__BackingField_64() { return &___U3CTeleportSurfaceResultU3Ek__BackingField_64; }
	inline void set_U3CTeleportSurfaceResultU3Ek__BackingField_64(int32_t value)
	{
		___U3CTeleportSurfaceResultU3Ek__BackingField_64 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELEPORTPOINTER_T1203388771_H
#ifndef PARABOLICTELEPORTPOINTER_T1452950313_H
#define PARABOLICTELEPORTPOINTER_T1452950313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer
struct  ParabolicTeleportPointer_t1452950313  : public TeleportPointer_t1203388771
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::minParabolaVelocity
	float ___minParabolaVelocity_65;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::maxParabolaVelocity
	float ___maxParabolaVelocity_66;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::minDistanceModifier
	float ___minDistanceModifier_67;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::maxDistanceModifier
	float ___maxDistanceModifier_68;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::parabolicLineData
	ParabolaPhysicalLineDataProvider_t2748289363 * ___parabolicLineData_69;

public:
	inline static int32_t get_offset_of_minParabolaVelocity_65() { return static_cast<int32_t>(offsetof(ParabolicTeleportPointer_t1452950313, ___minParabolaVelocity_65)); }
	inline float get_minParabolaVelocity_65() const { return ___minParabolaVelocity_65; }
	inline float* get_address_of_minParabolaVelocity_65() { return &___minParabolaVelocity_65; }
	inline void set_minParabolaVelocity_65(float value)
	{
		___minParabolaVelocity_65 = value;
	}

	inline static int32_t get_offset_of_maxParabolaVelocity_66() { return static_cast<int32_t>(offsetof(ParabolicTeleportPointer_t1452950313, ___maxParabolaVelocity_66)); }
	inline float get_maxParabolaVelocity_66() const { return ___maxParabolaVelocity_66; }
	inline float* get_address_of_maxParabolaVelocity_66() { return &___maxParabolaVelocity_66; }
	inline void set_maxParabolaVelocity_66(float value)
	{
		___maxParabolaVelocity_66 = value;
	}

	inline static int32_t get_offset_of_minDistanceModifier_67() { return static_cast<int32_t>(offsetof(ParabolicTeleportPointer_t1452950313, ___minDistanceModifier_67)); }
	inline float get_minDistanceModifier_67() const { return ___minDistanceModifier_67; }
	inline float* get_address_of_minDistanceModifier_67() { return &___minDistanceModifier_67; }
	inline void set_minDistanceModifier_67(float value)
	{
		___minDistanceModifier_67 = value;
	}

	inline static int32_t get_offset_of_maxDistanceModifier_68() { return static_cast<int32_t>(offsetof(ParabolicTeleportPointer_t1452950313, ___maxDistanceModifier_68)); }
	inline float get_maxDistanceModifier_68() const { return ___maxDistanceModifier_68; }
	inline float* get_address_of_maxDistanceModifier_68() { return &___maxDistanceModifier_68; }
	inline void set_maxDistanceModifier_68(float value)
	{
		___maxDistanceModifier_68 = value;
	}

	inline static int32_t get_offset_of_parabolicLineData_69() { return static_cast<int32_t>(offsetof(ParabolicTeleportPointer_t1452950313, ___parabolicLineData_69)); }
	inline ParabolaPhysicalLineDataProvider_t2748289363 * get_parabolicLineData_69() const { return ___parabolicLineData_69; }
	inline ParabolaPhysicalLineDataProvider_t2748289363 ** get_address_of_parabolicLineData_69() { return &___parabolicLineData_69; }
	inline void set_parabolicLineData_69(ParabolaPhysicalLineDataProvider_t2748289363 * value)
	{
		___parabolicLineData_69 = value;
		Il2CppCodeGenWriteBarrier((&___parabolicLineData_69), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARABOLICTELEPORTPOINTER_T1452950313_H
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_t1844645383  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BaseMixedRealityLineRenderer_t3189424626 * m_Items[1];

public:
	inline BaseMixedRealityLineRenderer_t3189424626 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseMixedRealityLineRenderer_t3189424626 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseMixedRealityLineRenderer_t3189424626 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BaseMixedRealityLineRenderer_t3189424626 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseMixedRealityLineRenderer_t3189424626 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseMixedRealityLineRenderer_t3189424626 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[]
struct RayStepU5BU5D_t3168306194  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_t1822550659  m_Items[1];

public:
	inline RayStep_t1822550659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_t1822550659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_t1822550659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_t1822550659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_t1822550659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_t1822550659  value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1763438290_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1<UnityEngine.Vector2>::get_InputData()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  InputEventData_1_get_InputData_m1471206378_gshared (InputEventData_1_t3484413663 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m2390619627_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m614412439_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m1937322960_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2198442938_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1581319360_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m784383322_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider>()
inline BaseMixedRealityLineDataProvider_t44273451 * Component_GetComponent_TisBaseMixedRealityLineDataProvider_t44273451_m1454493356 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BaseMixedRealityLineDataProvider_t44273451 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity>()
inline DistorterGravity_t923312544 * Component_GetComponent_TisDistorterGravity_t923312544_m2168985360 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  DistorterGravity_t923312544 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer>()
inline BaseMixedRealityLineRendererU5BU5D_t1844645383* Component_GetComponentsInChildren_TisBaseMixedRealityLineRenderer_t3189424626_m116812695 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BaseMixedRealityLineRendererU5BU5D_t1844645383* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1763438290_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::CheckInitialization()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_CheckInitialization_m3408142716 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BaseControllerPointer_OnEnable_m285286659 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::set_FirstPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityLineDataProvider_set_FirstPoint_m2638588119 (BaseMixedRealityLineDataProvider_t44273451 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_PointerExtent()
extern "C" IL2CPP_METHOD_ATTR float BaseControllerPointer_get_PointerExtent_m1262971465 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::set_LastPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityLineDataProvider_set_LastPoint_m2541548632 (BaseMixedRealityLineDataProvider_t44273451 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_Rays()
extern "C" IL2CPP_METHOD_ATTR RayStepU5BU5D_t3168306194* BaseControllerPointer_get_Rays_m3301639198 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::set_Rays(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[])
extern "C" IL2CPP_METHOD_ATTR void BaseControllerPointer_set_Rays_m1709598443 (BaseControllerPointer_t823387382 * __this, RayStepU5BU5D_t3168306194* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_IsFocusLocked()
extern "C" IL2CPP_METHOD_ATTR bool BaseControllerPointer_get_IsFocusLocked_m2389152693 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::GetUnClampedPoint(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BaseMixedRealityLineDataProvider_GetUnClampedPoint_m3777424110 (BaseMixedRealityLineDataProvider_t44273451 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RayStep__ctor_m1977211725 (RayStep_t1822550659 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_Result_m3509575121 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::get_Length()
extern "C" IL2CPP_METHOD_ATTR float RayStep_get_Length_m1238730681 (RayStep_t1822550659 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::GetNormalizedLengthFromWorldLength(System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float BaseMixedRealityLineDataProvider_GetNormalizedLengthFromWorldLength_m2876185492 (BaseMixedRealityLineDataProvider_t44273451 * __this, float p0, int32_t p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::set_LineEndClamp(System.Single)
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityLineDataProvider_set_LineEndClamp_m834029883 (BaseMixedRealityLineDataProvider_t44273451 * __this, float p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_FocusTarget()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_FocusTarget_m1952257306 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity::set_WorldCenterOfGravity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DistorterGravity_set_WorldCenterOfGravity_m2118021218 (DistorterGravity_t923312544 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer::set_LineColor(UnityEngine.Gradient)
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityLineRenderer_set_LineColor_m2719412904 (BaseMixedRealityLineRenderer_t3189424626 * __this, Gradient_t3067099924 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Gradient__ctor_m173848750 (Gradient_t3067099924 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseControllerPointer__ctor_m1601495678 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnValidate_m2111036129 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::EnsureSetup()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer_EnsureSetup_m1024247825 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::get_LineTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * BaseMixedRealityLineDataProvider_get_LineTransform_m4287594721 (BaseMixedRealityLineDataProvider_t44273451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnEnable_m1344987721 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider::set_LineTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityLineDataProvider_set_LineTransform_m2919678344 (BaseMixedRealityLineDataProvider_t44273451 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider>()
inline ParabolaPhysicalLineDataProvider_t2748289363 * Component_GetComponent_TisParabolaPhysicalLineDataProvider_t2748289363_m888051958 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ParabolaPhysicalLineDataProvider_t2748289363 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::set_Direction(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void ParabolaPhysicalLineDataProvider_set_Direction_m1088676274 (ParabolaPhysicalLineDataProvider_t2748289363 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::set_Velocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParabolaPhysicalLineDataProvider_set_Velocity_m2202515586 (ParabolaPhysicalLineDataProvider_t2748289363 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.ParabolaPhysicalLineDataProvider::set_DistanceMultiplier(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ParabolaPhysicalLineDataProvider_set_DistanceMultiplier_m1178572515 (ParabolaPhysicalLineDataProvider_t2748289363 * __this, float p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnPreRaycast_m1000323180 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer__ctor_m2490589763 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m4164965325 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, RuntimeObject * p1, String_t* p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnEnable_m3338727745 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_BaseCursor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_BaseCursor_m4004689303 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::SetCursor(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void BaseControllerPointer_SetCursor_m1920465104 (BaseControllerPointer_t823387382 * __this, GameObject_t1113636619 * ___newCursor0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_TeleportHotSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_TeleportHotSpot_m2459629362 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::get_TeleportSurfaceResult()
extern "C" IL2CPP_METHOD_ATTR int32_t TeleportPointer_get_TeleportSurfaceResult_m2667183639 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_PointerOrientation()
extern "C" IL2CPP_METHOD_ATTR float BaseControllerPointer_get_PointerOrientation_m623293706 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::set_PointerOrientation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void BaseControllerPointer_set_PointerOrientation_m2390639370 (BaseControllerPointer_t823387382 * __this, float ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_LineBase()
extern "C" IL2CPP_METHOD_ATTR BaseMixedRealityLineDataProvider_t44273451 * LinePointer_get_LineBase_m2735814475 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_GravityDistorter()
extern "C" IL2CPP_METHOD_ATTR DistorterGravity_t923312544 * LinePointer_get_GravityDistorter_m2851740262 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::set_TeleportSurfaceResult(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_set_TeleportSurfaceResult_m4061424545 (TeleportPointer_t1203388771 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m4158800245 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m1881709263 (LayerMask_t3493934918 * __this, const RuntimeMethod* method);
// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::get_LastRaycastHit()
extern "C" IL2CPP_METHOD_ATTR RaycastHit_t1056001966  FocusDetails_get_LastRaycastHit_m2237444740 (FocusDetails_t3818024109 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawLine_m2206927517 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Color_t2555686324  p2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails::get_Point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  FocusDetails_get_Point_m1021420658 (FocusDetails_t3818024109 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_LineRenderers()
extern "C" IL2CPP_METHOD_ATTR BaseMixedRealityLineRendererU5BU5D_t1844645383* LinePointer_get_LineRenderers_m1506695662 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::GetLineGradient(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult)
extern "C" IL2CPP_METHOD_ATTR Gradient_t3067099924 * TeleportPointer_GetLineGradient_m2770365527 (TeleportPointer_t1203388771 * __this, int32_t ___targetResult0, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseInputEventData_get_SourceId_m3368832526 (BaseInputEventData_t1713972929 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_InputSourceParent()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_InputSourceParent_m2643200535 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t InputEventData_get_Handedness_m2456611320 (InputEventData_t2928432700 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.ControllerPoseSynchronizer::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t ControllerPoseSynchronizer_get_Handedness_m4059819014 (ControllerPoseSynchronizer_t3549094724 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.BaseInputEventData::get_MixedRealityInputAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  BaseInputEventData_get_MixedRealityInputAction_m3756487341 (BaseInputEventData_t1713972929 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::op_Equality(Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputAction_op_Equality_m3271798130 (RuntimeObject * __this /* static, unused */, MixedRealityInputAction_t3419222324  p0, MixedRealityInputAction_t3419222324  p1, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1<UnityEngine.Vector2>::get_InputData()
inline Vector2_t2156229523  InputEventData_1_get_InputData_m1471206378 (InputEventData_1_t3484413663 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_t2156229523  (*) (InputEventData_1_t3484413663 *, const RuntimeMethod*))InputEventData_1_get_InputData_m1471206378_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_TeleportSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseControllerPointer_get_TeleportSystem_m637442324 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Internal.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * CameraCache_get_Main_m1380900859 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_RotateAround_m2651195670 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData::get_Pointer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TeleportEventData_get_Pointer_m3629396672 (TeleportEventData_t1342032624 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_PointerId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseControllerPointer_get_PointerId_m2177515851 (BaseControllerPointer_t823387382 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::get_None()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  MixedRealityInputAction_get_None_m1569881572 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_t3493934918  LayerMask_op_Implicit_m90232283 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LinePointer__ctor_m3093294720 (LinePointer_t1596098013 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_up_m3972993886 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m3197602968 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::AddHoverLight(Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_AddHoverLight_m1460701161 (HoverLight_t861884922 * __this, HoverLight_t861884922 * ___light0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::RemoveHoverLight(Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_RemoveHoverLight_m3370953760 (HoverLight_t861884922 * __this, HoverLight_t861884922 * ___light0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::UpdateHoverLights(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_UpdateHoverLights_m3231287831 (HoverLight_t861884922 * __this, bool ___forceUpdate0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::get_Color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  HoverLight_get_Color_m2189296834 (HoverLight_t861884922 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::get_Radius()
extern "C" IL2CPP_METHOD_ATTR float HoverLight_get_Radius_m2137590600 (HoverLight_t861884922 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawIcon(UnityEngine.Vector3,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Gizmos_DrawIcon_m1426684253 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, String_t* p1, bool p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_down_m3781355428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>::get_Count()
inline int32_t List_1_get_Count_m956344855 (List_1_t2333959664 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2333959664 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>::Add(!0)
inline void List_1_Add_m689424915 (List_1_t2333959664 * __this, HoverLight_t861884922 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2333959664 *, HoverLight_t861884922 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>::Remove(!0)
inline bool List_1_Remove_m3662404375 (List_1_t2333959664 * __this, HoverLight_t861884922 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2333959664 *, HoverLight_t861884922 *, const RuntimeMethod*))List_1_Remove_m2390619627_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::Initialize()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_Initialize_m3729398361 (HoverLight_t861884922 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m3103559844 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m433641454 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>::get_Item(System.Int32)
inline HoverLight_t861884922 * List_1_get_Item_m3128556365 (List_1_t2333959664 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  HoverLight_t861884922 * (*) (List_1_t2333959664 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_get_zero_m1422399515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalVectorArray(System.Int32,UnityEngine.Vector4[])
extern "C" IL2CPP_METHOD_ATTR void Shader_SetGlobalVectorArray_m990308156 (RuntimeObject * __this /* static, unused */, int32_t p0, Vector4U5BU5D_t934056436* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight>::.ctor(System.Int32)
inline void List_1__ctor_m4051594730 (List_1_t2333959664 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2333959664 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::Refresh()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_Refresh_m3160041354 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m745328695 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1763438290_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::set_Highlight(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_set_Highlight_m1416664830 (InteractableHighlight_t3226167531 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_m3143666263 (Behaviour_t1437897464 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::AddHighlightMaterials()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_AddHighlightMaterials_m3019761556 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::RemoveHighlightMaterials()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_RemoveHighlightMaterials_m236394733 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::.ctor()
inline void Dictionary_2__ctor_m1478528768 (Dictionary_2_t3526335110 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3526335110 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m447712618 (Dictionary_2_t3526335110 * __this, Renderer_t2627027031 * p0, List_1_t1812449865 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3526335110 *, Renderer_t2627027031 *, List_1_t1812449865 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m2853362164 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::Add(!0,!1)
inline void Dictionary_2_Add_m1338155647 (Dictionary_2_t3526335110 * __this, Renderer_t2627027031 * p0, List_1_t1812449865 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3526335110 *, Renderer_t2627027031 *, List_1_t1812449865 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m2964530523 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" IL2CPP_METHOD_ATTR MaterialU5BU5D_t561872642* Renderer_get_sharedMaterials_m76747498 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m1895910640 (List_1_t1812449865 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m614412439_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Remove(!0)
inline bool List_1_Remove_m1244651821 (List_1_t1812449865 * __this, Material_t340375123 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1812449865 *, Material_t340375123 *, const RuntimeMethod*))List_1_Remove_m2390619627_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::AddMaterialToRenderers(UnityEngine.Renderer[],UnityEngine.Material,System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_AddMaterialToRenderers_m957536401 (RuntimeObject * __this /* static, unused */, RendererU5BU5D_t3210418286* ___renderers0, Material_t340375123 * ___material1, String_t* ___propName2, Color_t2555686324  ___color3, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::GetEnumerator()
inline Enumerator_t1185550589  Dictionary_2_GetEnumerator_m4221256433 (Dictionary_2_t3526335110 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1185550589  (*) (Dictionary_2_t3526335110 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1937322960_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::get_Current()
inline KeyValuePair_2_t1629039981  Enumerator_get_Current_m3220264653 (Enumerator_t1185550589 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1629039981  (*) (Enumerator_t1185550589 *, const RuntimeMethod*))Enumerator_get_Current_m2198442938_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::get_Key()
inline Renderer_t2627027031 * KeyValuePair_2_get_Key_m2519277466 (KeyValuePair_2_t1629039981 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (KeyValuePair_2_t1629039981 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::get_Value()
inline List_1_t1812449865 * KeyValuePair_2_get_Value_m3562707980 (KeyValuePair_2_t1629039981 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t1812449865 * (*) (KeyValuePair_2_t1629039981 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.Material>::ToArray()
inline MaterialU5BU5D_t561872642* List_1_ToArray_m179578601 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	return ((  MaterialU5BU5D_t561872642* (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterials_m2162241463 (Renderer_t2627027031 * __this, MaterialU5BU5D_t561872642* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::MoveNext()
inline bool Enumerator_MoveNext_m3239435214 (Enumerator_t1185550589 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1185550589 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::Dispose()
inline void Enumerator_Dispose_m743166091 (Enumerator_t1185550589 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1185550589 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Renderer,System.Collections.Generic.List`1<UnityEngine.Material>>::Clear()
inline void Dictionary_2_Clear_m47724358 (Dictionary_2_t3526335110 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3526335110 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m2557557253 (List_1_t1812449865 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1581319360_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Material>::Contains(!0)
inline bool List_1_Contains_m2744244959 (List_1_t1812449865 * __this, Material_t340375123 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1812449865 *, Material_t340375123 *, const RuntimeMethod*))List_1_Contains_m784383322_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m1088566532 (List_1_t1812449865 * __this, Material_t340375123 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, Material_t340375123 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t340375123 * List_1_get_Item_m2239442906 (List_1_t1812449865 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Material_t340375123 * (*) (List_1_t1812449865 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::RemoveMatFromRenderers(UnityEngine.Renderer[],UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_RemoveMatFromRenderers_m278521255 (RuntimeObject * __this /* static, unused */, RendererU5BU5D_t3210418286* ___renderers0, Material_t340375123 * ___material1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m678643881 (List_1_t1812449865 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1812449865 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1106714037 (List_1_t1812449865 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1812449865 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void BaseFocusHandler_OnFocusEnter_m1356550176 (BaseFocusHandler_t2626431732 * __this, FocusEventData_t473508985 * ___eventData0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::get_HasFocus()
extern "C" IL2CPP_METHOD_ATTR bool BaseFocusHandler_get_HasFocus_m3440702131 (BaseFocusHandler_t2626431732 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void BaseFocusHandler_OnFocusExit_m2010318159 (BaseFocusHandler_t2626431732 * __this, FocusEventData_t473508985 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Input.Handlers.BaseFocusHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseFocusHandler__ctor_m897180564 (BaseFocusHandler_t2626431732 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.DataProviders.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_LineBase()
extern "C" IL2CPP_METHOD_ATTR BaseMixedRealityLineDataProvider_t44273451 * LinePointer_get_LineBase_m2735814475 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	{
		// public BaseMixedRealityLineDataProvider LineBase => lineBase;
		BaseMixedRealityLineDataProvider_t44273451 * L_0 = __this->get_lineBase_45();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_LineRenderers()
extern "C" IL2CPP_METHOD_ATTR BaseMixedRealityLineRendererU5BU5D_t1844645383* LinePointer_get_LineRenderers_m1506695662 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	{
		// get { return lineRenderers; }
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_0 = __this->get_lineRenderers_46();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::set_LineRenderers(Microsoft.MixedReality.Toolkit.Internal.Utilities.Lines.Renderers.BaseMixedRealityLineRenderer[])
extern "C" IL2CPP_METHOD_ATTR void LinePointer_set_LineRenderers_m1801848668 (LinePointer_t1596098013 * __this, BaseMixedRealityLineRendererU5BU5D_t1844645383* ___value0, const RuntimeMethod* method)
{
	{
		// set { lineRenderers = value; }
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_0 = ___value0;
		__this->set_lineRenderers_46(L_0);
		// set { lineRenderers = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.Distorters.DistorterGravity Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::get_GravityDistorter()
extern "C" IL2CPP_METHOD_ATTR DistorterGravity_t923312544 * LinePointer_get_GravityDistorter_m2851740262 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	{
		// public DistorterGravity GravityDistorter => gravityDistorter;
		DistorterGravity_t923312544 * L_0 = __this->get_gravityDistorter_47();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::CheckInitialization()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_CheckInitialization_m3408142716 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinePointer_CheckInitialization_m3408142716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lineBase == null)
		BaseMixedRealityLineDataProvider_t44273451 * L_0 = __this->get_lineBase_45();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// lineBase = GetComponent<BaseMixedRealityLineDataProvider>();
		BaseMixedRealityLineDataProvider_t44273451 * L_2 = Component_GetComponent_TisBaseMixedRealityLineDataProvider_t44273451_m1454493356(__this, /*hidden argument*/Component_GetComponent_TisBaseMixedRealityLineDataProvider_t44273451_m1454493356_RuntimeMethod_var);
		__this->set_lineBase_45(L_2);
	}

IL_001a:
	{
		// if (lineBase == null)
		BaseMixedRealityLineDataProvider_t44273451 * L_3 = __this->get_lineBase_45();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError($"No Mixed Reality Line Data Provider found on {gameObject.name}. Did you forget to add a Line Data provider?");
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = Object_get_name_m4211327027(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4254455441, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// if (gravityDistorter == null)
		DistorterGravity_t923312544 * L_8 = __this->get_gravityDistorter_47();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		// gravityDistorter = GetComponent<DistorterGravity>();
		DistorterGravity_t923312544 * L_10 = Component_GetComponent_TisDistorterGravity_t923312544_m2168985360(__this, /*hidden argument*/Component_GetComponent_TisDistorterGravity_t923312544_m2168985360_RuntimeMethod_var);
		__this->set_gravityDistorter_47(L_10);
	}

IL_005c:
	{
		// if (lineBase != null && (lineRenderers == null || lineRenderers.Length == 0))
		BaseMixedRealityLineDataProvider_t44273451 * L_11 = __this->get_lineBase_45();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_13 = __this->get_lineRenderers_46();
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_14 = __this->get_lineRenderers_46();
		NullCheck(L_14);
		if ((((RuntimeArray *)L_14)->max_length))
		{
			goto IL_008c;
		}
	}

IL_007b:
	{
		// lineRenderers = lineBase.GetComponentsInChildren<BaseMixedRealityLineRenderer>();
		BaseMixedRealityLineDataProvider_t44273451 * L_15 = __this->get_lineBase_45();
		NullCheck(L_15);
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_16 = Component_GetComponentsInChildren_TisBaseMixedRealityLineRenderer_t3189424626_m116812695(L_15, /*hidden argument*/Component_GetComponentsInChildren_TisBaseMixedRealityLineRenderer_t3189424626_m116812695_RuntimeMethod_var);
		__this->set_lineRenderers_46(L_16);
	}

IL_008c:
	{
		// if (lineRenderers == null || lineRenderers.Length == 0)
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_17 = __this->get_lineRenderers_46();
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_18 = __this->get_lineRenderers_46();
		NullCheck(L_18);
		if ((((RuntimeArray *)L_18)->max_length))
		{
			goto IL_00b7;
		}
	}

IL_009d:
	{
		// Debug.LogError($"No Mixed Reality Line Renderers found on {gameObject.name}. Did you forget to add a Mixed Reality Line Renderer?");
		GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = Object_get_name_m4211327027(L_19, /*hidden argument*/NULL);
		String_t* L_21 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral86523713, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnValidate_m2111036129 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	{
		// CheckInitialization();
		LinePointer_CheckInitialization_m3408142716(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnEnable_m3338727745 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	{
		// base.OnEnable();
		BaseControllerPointer_OnEnable_m285286659(__this, /*hidden argument*/NULL);
		// CheckInitialization();
		LinePointer_CheckInitialization_m3408142716(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnPreRaycast_m1340074605 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinePointer_OnPreRaycast_m1340074605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// TryGetPointerPosition(out pointerPosition);
		VirtFuncInvoker1< bool, Vector3_t3722313464 * >::Invoke(87 /* System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::TryGetPointerPosition(UnityEngine.Vector3&) */, __this, (Vector3_t3722313464 *)(&V_0));
		// lineBase.FirstPoint = pointerPosition;
		BaseMixedRealityLineDataProvider_t44273451 * L_0 = __this->get_lineBase_45();
		Vector3_t3722313464  L_1 = V_0;
		NullCheck(L_0);
		BaseMixedRealityLineDataProvider_set_FirstPoint_m2638588119(L_0, L_1, /*hidden argument*/NULL);
		// lineBase.LastPoint = pointerPosition + (PointerDirection * PointerExtent);
		BaseMixedRealityLineDataProvider_t44273451 * L_2 = __this->get_lineBase_45();
		Vector3_t3722313464  L_3 = V_0;
		Vector3_t3722313464  L_4 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(80 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_PointerDirection() */, __this);
		float L_5 = BaseControllerPointer_get_PointerExtent_m1262971465(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		BaseMixedRealityLineDataProvider_set_LastPoint_m2541548632(L_2, L_7, /*hidden argument*/NULL);
		// if (Rays == null || Rays.Length != LineCastResolution)
		RayStepU5BU5D_t3168306194* L_8 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		RayStepU5BU5D_t3168306194* L_9 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = __this->get_LineCastResolution_44();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) == ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}

IL_004f:
	{
		// Rays = new RayStep[LineCastResolution];
		int32_t L_11 = __this->get_LineCastResolution_44();
		RayStepU5BU5D_t3168306194* L_12 = (RayStepU5BU5D_t3168306194*)SZArrayNew(RayStepU5BU5D_t3168306194_il2cpp_TypeInfo_var, (uint32_t)L_11);
		BaseControllerPointer_set_Rays_m1709598443(__this, L_12, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if (!IsFocusLocked)
		bool L_13 = BaseControllerPointer_get_IsFocusLocked_m2389152693(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0074;
		}
	}
	{
		// gravityDistorter.enabled = false;
		DistorterGravity_t923312544 * L_14 = __this->get_gravityDistorter_47();
		NullCheck(L_14);
		Behaviour_set_enabled_m20417929(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// float stepSize = 1f / Rays.Length;
		RayStepU5BU5D_t3168306194* L_15 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		V_1 = ((float)((float)(1.0f)/(float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))));
		// Vector3 lastPoint = lineBase.GetUnClampedPoint(0f);
		BaseMixedRealityLineDataProvider_t44273451 * L_16 = __this->get_lineBase_45();
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = BaseMixedRealityLineDataProvider_GetUnClampedPoint_m3777424110(L_16, (0.0f), /*hidden argument*/NULL);
		V_2 = L_17;
		// for (int i = 0; i < Rays.Length; i++)
		V_3 = 0;
		goto IL_00c7;
	}

IL_0099:
	{
		// Vector3 currentPoint = lineBase.GetUnClampedPoint(stepSize * (i + 1));
		BaseMixedRealityLineDataProvider_t44273451 * L_18 = __this->get_lineBase_45();
		float L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		Vector3_t3722313464  L_21 = BaseMixedRealityLineDataProvider_GetUnClampedPoint_m3777424110(L_18, ((float)il2cpp_codegen_multiply((float)L_19, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))))))), /*hidden argument*/NULL);
		V_4 = L_21;
		// Rays[i] = new RayStep(lastPoint, currentPoint);
		RayStepU5BU5D_t3168306194* L_22 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		Vector3_t3722313464  L_24 = V_2;
		Vector3_t3722313464  L_25 = V_4;
		RayStep_t1822550659  L_26;
		memset(&L_26, 0, sizeof(L_26));
		RayStep__ctor_m1977211725((&L_26), L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RayStep_t1822550659 )L_26);
		// lastPoint = currentPoint;
		Vector3_t3722313464  L_27 = V_4;
		V_2 = L_27;
		// for (int i = 0; i < Rays.Length; i++)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c7:
	{
		// for (int i = 0; i < Rays.Length; i++)
		int32_t L_29 = V_3;
		RayStepU5BU5D_t3168306194* L_30 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0099;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::OnPostRaycast()
extern "C" IL2CPP_METHOD_ATTR void LinePointer_OnPostRaycast_m2694266961 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinePointer_OnPostRaycast_m2694266961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Gradient_t3067099924 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float clearWorldLength = 0f;
		V_0 = (0.0f);
		// gravityDistorter.enabled = false;
		DistorterGravity_t923312544 * L_0 = __this->get_gravityDistorter_47();
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		// Gradient lineColor = LineColorNoTarget;
		Gradient_t3067099924 * L_1 = __this->get_LineColorNoTarget_42();
		V_1 = L_1;
		// if (IsInteractionEnabled)
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_IsInteractionEnabled() */, __this);
		if (!L_2)
		{
			goto IL_012f;
		}
	}
	{
		// lineBase.enabled = true;
		BaseMixedRealityLineDataProvider_t44273451 * L_3 = __this->get_lineBase_45();
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, (bool)1, /*hidden argument*/NULL);
		// if (IsSelectPressed)
		bool L_4 = ((BaseControllerPointer_t823387382 *)__this)->get_IsSelectPressed_19();
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// lineColor = LineColorSelected;
		Gradient_t3067099924 * L_5 = __this->get_LineColorSelected_39();
		V_1 = L_5;
	}

IL_003f:
	{
		// if (Result.CurrentPointerTarget != null)
		RuntimeObject* L_6 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = InterfaceFuncInvoker0< GameObject_t1113636619 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_011d;
		}
	}
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		V_2 = 0;
		goto IL_00ad;
	}

IL_0059:
	{
		// if (i == Result.RayStepIndex)
		int32_t L_9 = V_2;
		RuntimeObject* L_10 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_10);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0087;
		}
	}
	{
		// clearWorldLength += Vector3.Distance(Result.StartPoint, Result.StartPoint);
		float L_12 = V_0;
		RuntimeObject* L_13 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_StartPoint() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_15 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_StartPoint() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_17 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_12, (float)L_17));
		// }
		goto IL_00a9;
	}

IL_0087:
	{
		// else if (i < Result.RayStepIndex)
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_19);
		if ((((int32_t)L_18) >= ((int32_t)L_20)))
		{
			goto IL_00a9;
		}
	}
	{
		// clearWorldLength += Rays[i].Length;
		float L_21 = V_0;
		RayStepU5BU5D_t3168306194* L_22 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		float L_24 = RayStep_get_Length_m1238730681((RayStep_t1822550659 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_21, (float)L_24));
	}

IL_00a9:
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		int32_t L_26 = V_2;
		RuntimeObject* L_27 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_27);
		if ((((int32_t)L_26) <= ((int32_t)L_28)))
		{
			goto IL_0059;
		}
	}
	{
		// lineBase.LineEndClamp = lineBase.GetNormalizedLengthFromWorldLength(clearWorldLength, LineCastResolution);
		BaseMixedRealityLineDataProvider_t44273451 * L_29 = __this->get_lineBase_45();
		BaseMixedRealityLineDataProvider_t44273451 * L_30 = __this->get_lineBase_45();
		float L_31 = V_0;
		int32_t L_32 = __this->get_LineCastResolution_44();
		NullCheck(L_30);
		float L_33 = BaseMixedRealityLineDataProvider_GetNormalizedLengthFromWorldLength_m2876185492(L_30, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		BaseMixedRealityLineDataProvider_set_LineEndClamp_m834029883(L_29, L_33, /*hidden argument*/NULL);
		// if (FocusTarget != null)
		RuntimeObject* L_34 = BaseControllerPointer_get_FocusTarget_m1952257306(__this, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00e7;
		}
	}
	{
		// lineColor = LineColorValid;
		Gradient_t3067099924 * L_35 = __this->get_LineColorValid_40();
		V_1 = L_35;
	}

IL_00e7:
	{
		// if (IsFocusLocked)
		bool L_36 = BaseControllerPointer_get_IsFocusLocked_m2389152693(__this, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// gravityDistorter.enabled = true;
		DistorterGravity_t923312544 * L_37 = __this->get_gravityDistorter_47();
		NullCheck(L_37);
		Behaviour_set_enabled_m20417929(L_37, (bool)1, /*hidden argument*/NULL);
		// gravityDistorter.WorldCenterOfGravity = Result.CurrentPointerTarget.transform.position;
		DistorterGravity_t923312544 * L_38 = __this->get_gravityDistorter_47();
		RuntimeObject* L_39 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_t1113636619 * L_40 = InterfaceFuncInvoker0< GameObject_t1113636619 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		Transform_t3600365921 * L_41 = GameObject_get_transform_m1369836730(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = Transform_get_position_m36019626(L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		DistorterGravity_set_WorldCenterOfGravity_m2118021218(L_38, L_42, /*hidden argument*/NULL);
		// }
		goto IL_013b;
	}

IL_011d:
	{
		// lineBase.LineEndClamp = 1f;
		BaseMixedRealityLineDataProvider_t44273451 * L_43 = __this->get_lineBase_45();
		NullCheck(L_43);
		BaseMixedRealityLineDataProvider_set_LineEndClamp_m834029883(L_43, (1.0f), /*hidden argument*/NULL);
		// }
		goto IL_013b;
	}

IL_012f:
	{
		// lineBase.enabled = false;
		BaseMixedRealityLineDataProvider_t44273451 * L_44 = __this->get_lineBase_45();
		NullCheck(L_44);
		Behaviour_set_enabled_m20417929(L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// if (IsFocusLocked)
		bool L_45 = BaseControllerPointer_get_IsFocusLocked_m2389152693(__this, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_014a;
		}
	}
	{
		// lineColor = LineColorLockFocus;
		Gradient_t3067099924 * L_46 = __this->get_LineColorLockFocus_43();
		V_1 = L_46;
	}

IL_014a:
	{
		// for (int i = 0; i < lineRenderers.Length; i++)
		V_3 = 0;
		goto IL_0160;
	}

IL_014e:
	{
		// lineRenderers[i].LineColor = lineColor;
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_47 = __this->get_lineRenderers_46();
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		BaseMixedRealityLineRenderer_t3189424626 * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Gradient_t3067099924 * L_51 = V_1;
		NullCheck(L_50);
		BaseMixedRealityLineRenderer_set_LineColor_m2719412904(L_50, L_51, /*hidden argument*/NULL);
		// for (int i = 0; i < lineRenderers.Length; i++)
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0160:
	{
		// for (int i = 0; i < lineRenderers.Length; i++)
		int32_t L_53 = V_3;
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_54 = __this->get_lineRenderers_46();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_014e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.LinePointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LinePointer__ctor_m3093294720 (LinePointer_t1596098013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinePointer__ctor_m3093294720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Gradient LineColorSelected = new Gradient();
		Gradient_t3067099924 * L_0 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_0, /*hidden argument*/NULL);
		__this->set_LineColorSelected_39(L_0);
		// protected Gradient LineColorValid = new Gradient();
		Gradient_t3067099924 * L_1 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_1, /*hidden argument*/NULL);
		__this->set_LineColorValid_40(L_1);
		// protected Gradient LineColorInvalid = new Gradient();
		Gradient_t3067099924 * L_2 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_2, /*hidden argument*/NULL);
		__this->set_LineColorInvalid_41(L_2);
		// protected Gradient LineColorNoTarget = new Gradient();
		Gradient_t3067099924 * L_3 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_3, /*hidden argument*/NULL);
		__this->set_LineColorNoTarget_42(L_3);
		// protected Gradient LineColorLockFocus = new Gradient();
		Gradient_t3067099924 * L_4 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_4, /*hidden argument*/NULL);
		__this->set_LineColorLockFocus_43(L_4);
		// protected int LineCastResolution = 25;
		__this->set_LineCastResolution_44(((int32_t)25));
		IL2CPP_RUNTIME_CLASS_INIT(BaseControllerPointer_t823387382_il2cpp_TypeInfo_var);
		BaseControllerPointer__ctor_m1601495678(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer_OnValidate_m2422175743 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParabolicTeleportPointer_OnValidate_m2422175743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnValidate();
		LinePointer_OnValidate_m2111036129(__this, /*hidden argument*/NULL);
		// EnsureSetup();
		ParabolicTeleportPointer_EnsureSetup_m1024247825(__this, /*hidden argument*/NULL);
		// if (parabolicLineData.LineTransform == transform)
		ParabolaPhysicalLineDataProvider_t2748289363 * L_0 = __this->get_parabolicLineData_69();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = BaseMixedRealityLineDataProvider_get_LineTransform_m4287594721(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogWarning("Missing Parabolic line helper.\nThe Parabolic Teleport Pointer requires an empty GameObject child for calculating the parabola arc.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1737052023, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer_OnEnable_m493443715 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParabolicTeleportPointer_OnEnable_m493443715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// base.OnEnable();
		TeleportPointer_OnEnable_m1344987721(__this, /*hidden argument*/NULL);
		// EnsureSetup();
		ParabolicTeleportPointer_EnsureSetup_m1024247825(__this, /*hidden argument*/NULL);
		// if (parabolicLineData.LineTransform == transform)
		ParabolaPhysicalLineDataProvider_t2748289363 * L_0 = __this->get_parabolicLineData_69();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = BaseMixedRealityLineDataProvider_get_LineTransform_m4287594721(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// var pointerHelper = new GameObject("ParabolicLinePointerHelper");
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, _stringLiteral1363176220, /*hidden argument*/NULL);
		V_0 = L_4;
		// pointerHelper.transform.SetParent(transform);
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m381167889(L_6, L_7, /*hidden argument*/NULL);
		// pointerHelper.transform.localPosition = Vector3.zero;
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m4128471975(L_9, L_10, /*hidden argument*/NULL);
		// parabolicLineData.LineTransform = pointerHelper.transform;
		ParabolaPhysicalLineDataProvider_t2748289363 * L_11 = __this->get_parabolicLineData_69();
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		BaseMixedRealityLineDataProvider_set_LineTransform_m2919678344(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::EnsureSetup()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer_EnsureSetup_m1024247825 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParabolicTeleportPointer_EnsureSetup_m1024247825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parabolicLineData == null)
		ParabolaPhysicalLineDataProvider_t2748289363 * L_0 = __this->get_parabolicLineData_69();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// parabolicLineData = GetComponent<ParabolaPhysicalLineDataProvider>();
		ParabolaPhysicalLineDataProvider_t2748289363 * L_2 = Component_GetComponent_TisParabolaPhysicalLineDataProvider_t2748289363_m888051958(__this, /*hidden argument*/Component_GetComponent_TisParabolaPhysicalLineDataProvider_t2748289363_m888051958_RuntimeMethod_var);
		__this->set_parabolicLineData_69(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer_OnPreRaycast_m2700160441 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParabolicTeleportPointer_OnPreRaycast_m2700160441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// parabolicLineData.LineTransform.rotation = Quaternion.identity;
		ParabolaPhysicalLineDataProvider_t2748289363 * L_0 = __this->get_parabolicLineData_69();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = BaseMixedRealityLineDataProvider_get_LineTransform_m4287594721(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_2, /*hidden argument*/NULL);
		// parabolicLineData.Direction = transform.forward;
		ParabolaPhysicalLineDataProvider_t2748289363 * L_3 = __this->get_parabolicLineData_69();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_forward_m747522392(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ParabolaPhysicalLineDataProvider_set_Direction_m1088676274(L_3, L_5, /*hidden argument*/NULL);
		// var upDot = Vector3.Dot(transform.forward, Vector3.up);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_forward_m747522392(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var velocity = minParabolaVelocity;
		float L_10 = __this->get_minParabolaVelocity_65();
		V_1 = L_10;
		// var distance = minDistanceModifier;
		float L_11 = __this->get_minDistanceModifier_67();
		V_2 = L_11;
		// if (upDot > 0f)
		float L_12 = V_0;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// velocity = Mathf.Lerp(minParabolaVelocity, maxParabolaVelocity, upDot);
		float L_13 = __this->get_minParabolaVelocity_65();
		float L_14 = __this->get_maxParabolaVelocity_66();
		float L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// distance = Mathf.Lerp(minDistanceModifier, maxDistanceModifier, upDot);
		float L_17 = __this->get_minDistanceModifier_67();
		float L_18 = __this->get_maxDistanceModifier_68();
		float L_19 = V_0;
		float L_20 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_007d:
	{
		// parabolicLineData.Velocity = velocity;
		ParabolaPhysicalLineDataProvider_t2748289363 * L_21 = __this->get_parabolicLineData_69();
		float L_22 = V_1;
		NullCheck(L_21);
		ParabolaPhysicalLineDataProvider_set_Velocity_m2202515586(L_21, L_22, /*hidden argument*/NULL);
		// parabolicLineData.DistanceMultiplier = distance;
		ParabolaPhysicalLineDataProvider_t2748289363 * L_23 = __this->get_parabolicLineData_69();
		float L_24 = V_2;
		NullCheck(L_23);
		ParabolaPhysicalLineDataProvider_set_DistanceMultiplier_m1178572515(L_23, L_24, /*hidden argument*/NULL);
		// base.OnPreRaycast();
		TeleportPointer_OnPreRaycast_m1000323180(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.ParabolicTeleportPointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParabolicTeleportPointer__ctor_m4159409997 (ParabolicTeleportPointer_t1452950313 * __this, const RuntimeMethod* method)
{
	{
		// private float minParabolaVelocity = 1f;
		__this->set_minParabolaVelocity_65((1.0f));
		// private float maxParabolaVelocity = 5f;
		__this->set_maxParabolaVelocity_66((5.0f));
		// private float minDistanceModifier = 1f;
		__this->set_minDistanceModifier_67((1.0f));
		// private float maxDistanceModifier = 5f;
		__this->set_maxDistanceModifier_68((5.0f));
		TeleportPointer__ctor_m2490589763(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::get_TeleportSurfaceResult()
extern "C" IL2CPP_METHOD_ATTR int32_t TeleportPointer_get_TeleportSurfaceResult_m2667183639 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	{
		// public TeleportSurfaceResult TeleportSurfaceResult { get; private set; } = TeleportSurfaceResult.None;
		int32_t L_0 = __this->get_U3CTeleportSurfaceResultU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::set_TeleportSurfaceResult(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_set_TeleportSurfaceResult_m4061424545 (TeleportPointer_t1203388771 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TeleportSurfaceResult TeleportSurfaceResult { get; private set; } = TeleportSurfaceResult.None;
		int32_t L_0 = ___value0;
		__this->set_U3CTeleportSurfaceResultU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::GetLineGradient(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.TeleportSurfaceResult)
extern "C" IL2CPP_METHOD_ATTR Gradient_t3067099924 * TeleportPointer_GetLineGradient_m2770365527 (TeleportPointer_t1203388771 * __this, int32_t ___targetResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_GetLineGradient_m2770365527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (targetResult)
		int32_t L_0 = ___targetResult0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		// return LineColorNoTarget;
		Gradient_t3067099924 * L_1 = ((LinePointer_t1596098013 *)__this)->get_LineColorNoTarget_42();
		return L_1;
	}

IL_001f:
	{
		// return LineColorValid;
		Gradient_t3067099924 * L_2 = ((LinePointer_t1596098013 *)__this)->get_LineColorValid_40();
		return L_2;
	}

IL_0026:
	{
		// return LineColorInvalid;
		Gradient_t3067099924 * L_3 = ((LinePointer_t1596098013 *)__this)->get_LineColorInvalid_41();
		return L_3;
	}

IL_002d:
	{
		// return LineColorHotSpot;
		Gradient_t3067099924 * L_4 = __this->get_LineColorHotSpot_57();
		return L_4;
	}

IL_0034:
	{
		// throw new ArgumentOutOfRangeException(nameof(targetResult), targetResult, null);
		int32_t L_5 = ___targetResult0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(TeleportSurfaceResult_t3911798439_il2cpp_TypeInfo_var, &L_6);
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4164965325(L_8, _stringLiteral2020073116, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, TeleportPointer_GetLineGradient_m2770365527_RuntimeMethod_var);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnEnable_m1344987721 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnEnable_m1344987721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// base.OnEnable();
		LinePointer_OnEnable_m3338727745(__this, /*hidden argument*/NULL);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_0 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B2_0, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::SetCursor(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_SetCursor_m1517690804 (TeleportPointer_t1203388771 * __this, GameObject_t1113636619 * ___newCursor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_SetCursor_m1517690804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// base.SetCursor(newCursor);
		GameObject_t1113636619 * L_0 = ___newCursor0;
		BaseControllerPointer_SetCursor_m1920465104(__this, L_0, /*hidden argument*/NULL);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_1 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B2_0, (bool)0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::get_IsInteractionEnabled()
extern "C" IL2CPP_METHOD_ATTR bool TeleportPointer_get_IsInteractionEnabled_m1571902053 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInteractionEnabled => !IsTeleportRequestActive && teleportEnabled;
		bool L_0 = ((BaseControllerPointer_t823387382 *)__this)->get_IsTeleportRequestActive_22();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->get_teleportEnabled_61();
		return L_1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::get_PointerOrientation()
extern "C" IL2CPP_METHOD_ATTR float TeleportPointer_get_PointerOrientation_m1314598948 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_get_PointerOrientation_m1314598948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TeleportHotSpot != null &&
		//     TeleportHotSpot.OverrideTargetOrientation &&
		//     TeleportSurfaceResult == TeleportSurfaceResult.HotSpot)
		RuntimeObject* L_0 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_1 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_OverrideTargetOrientation() */, IMixedRealityTeleportHotSpot_t4279106780_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_002a;
		}
	}
	{
		// return TeleportHotSpot.TargetOrientation;
		RuntimeObject* L_4 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_TargetOrientation() */, IMixedRealityTeleportHotSpot_t4279106780_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002a:
	{
		// return base.PointerOrientation;
		float L_6 = BaseControllerPointer_get_PointerOrientation_m623293706(__this, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::set_PointerOrientation(System.Single)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_set_PointerOrientation_m2487875133 (TeleportPointer_t1203388771 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// base.PointerOrientation = value;
		float L_0 = ___value0;
		BaseControllerPointer_set_PointerOrientation_m2390639370(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnPreRaycast_m1000323180 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnPreRaycast_m1000323180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// if (LineBase == null)
		BaseMixedRealityLineDataProvider_t44273451 * L_0 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (Rays == null || Rays.Length != LineCastResolution)
		RayStepU5BU5D_t3168306194* L_2 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		RayStepU5BU5D_t3168306194* L_3 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = ((LinePointer_t1596098013 *)__this)->get_LineCastResolution_44();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) == ((int32_t)L_4)))
		{
			goto IL_0038;
		}
	}

IL_0027:
	{
		// Rays = new RayStep[LineCastResolution];
		int32_t L_5 = ((LinePointer_t1596098013 *)__this)->get_LineCastResolution_44();
		RayStepU5BU5D_t3168306194* L_6 = (RayStepU5BU5D_t3168306194*)SZArrayNew(RayStepU5BU5D_t3168306194_il2cpp_TypeInfo_var, (uint32_t)L_5);
		BaseControllerPointer_set_Rays_m1709598443(__this, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// GravityDistorter.enabled = false;
		DistorterGravity_t923312544 * L_7 = LinePointer_get_GravityDistorter_m2851740262(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Behaviour_set_enabled_m20417929(L_7, (bool)0, /*hidden argument*/NULL);
		// float stepSize = 1f / Rays.Length;
		RayStepU5BU5D_t3168306194* L_8 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		V_0 = ((float)((float)(1.0f)/(float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))));
		// Vector3 lastPoint = LineBase.GetUnClampedPoint(0f);
		BaseMixedRealityLineDataProvider_t44273451 * L_9 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = BaseMixedRealityLineDataProvider_GetUnClampedPoint_m3777424110(L_9, (0.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		// for (int i = 0; i < Rays.Length; i++)
		V_2 = 0;
		goto IL_0094;
	}

IL_0069:
	{
		// Vector3 currentPoint = LineBase.GetUnClampedPoint(stepSize * (i + 1));
		BaseMixedRealityLineDataProvider_t44273451 * L_11 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		float L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		Vector3_t3722313464  L_14 = BaseMixedRealityLineDataProvider_GetUnClampedPoint_m3777424110(L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))))))), /*hidden argument*/NULL);
		V_3 = L_14;
		// Rays[i] = new RayStep(lastPoint, currentPoint);
		RayStepU5BU5D_t3168306194* L_15 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		Vector3_t3722313464  L_17 = V_1;
		Vector3_t3722313464  L_18 = V_3;
		RayStep_t1822550659  L_19;
		memset(&L_19, 0, sizeof(L_19));
		RayStep__ctor_m1977211725((&L_19), L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RayStep_t1822550659 )L_19);
		// lastPoint = currentPoint;
		Vector3_t3722313464  L_20 = V_3;
		V_1 = L_20;
		// for (int i = 0; i < Rays.Length; i++)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0094:
	{
		// for (int i = 0; i < Rays.Length; i++)
		int32_t L_22 = V_2;
		RayStepU5BU5D_t3168306194* L_23 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_0069;
		}
	}
	{
		// GravityDistorter.enabled = (TeleportSurfaceResult == TeleportSurfaceResult.HotSpot);
		DistorterGravity_t923312544 * L_24 = LinePointer_get_GravityDistorter_m2851740262(__this, /*hidden argument*/NULL);
		int32_t L_25 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Behaviour_set_enabled_m20417929(L_24, (bool)((((int32_t)L_25) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnPostRaycast()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnPostRaycast_m3616886042 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnPostRaycast_m3616886042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	FocusDetails_t3818024109  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastHit_t1056001966  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Color_t2555686324  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	TeleportPointer_t1203388771 * G_B11_0 = NULL;
	TeleportPointer_t1203388771 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	TeleportPointer_t1203388771 * G_B12_1 = NULL;
	Color_t2555686324  G_B22_0;
	memset(&G_B22_0, 0, sizeof(G_B22_0));
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	{
		// float clearWorldLength = 0f;
		V_0 = (0.0f);
		// TeleportSurfaceResult = TeleportSurfaceResult.None;
		TeleportPointer_set_TeleportSurfaceResult_m4061424545(__this, 0, /*hidden argument*/NULL);
		// GravityDistorter.enabled = false;
		DistorterGravity_t923312544 * L_0 = LinePointer_get_GravityDistorter_m2851740262(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		// if (IsInteractionEnabled)
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::get_IsInteractionEnabled() */, __this);
		if (!L_1)
		{
			goto IL_0273;
		}
	}
	{
		// LineBase.enabled = true;
		BaseMixedRealityLineDataProvider_t44273451 * L_2 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Behaviour_set_enabled_m20417929(L_2, (bool)1, /*hidden argument*/NULL);
		// if (Result.CurrentPointerTarget != null)
		RuntimeObject* L_3 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = InterfaceFuncInvoker0< GameObject_t1113636619 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_021f;
		}
	}
	{
		// BaseCursor?.SetVisibility(true);
		RuntimeObject* L_6 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0052;
		}
	}
	{
		goto IL_0058;
	}

IL_0052:
	{
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B4_0, (bool)1);
	}

IL_0058:
	{
		// if (((1 << Result.CurrentPointerTarget.layer) & ValidLayers.value) != 0)
		RuntimeObject* L_8 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = InterfaceFuncInvoker0< GameObject_t1113636619 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		int32_t L_10 = GameObject_get_layer_m4158800245(L_9, /*hidden argument*/NULL);
		LayerMask_t3493934918 * L_11 = __this->get_address_of_ValidLayers_58();
		int32_t L_12 = LayerMask_get_value_m1881709263((LayerMask_t3493934918 *)L_11, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)31)))))&(int32_t)L_12)))
		{
			goto IL_00f4;
		}
	}
	{
		// if (TeleportHotSpot != null && TeleportHotSpot.IsActive)
		RuntimeObject* L_13 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_14 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_IsActive() */, IMixedRealityTeleportHotSpot_t4279106780_il2cpp_TypeInfo_var, L_14);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		// TeleportSurfaceResult = TeleportSurfaceResult.HotSpot;
		TeleportPointer_set_TeleportSurfaceResult_m4061424545(__this, 3, /*hidden argument*/NULL);
		// GravityDistorter.WorldCenterOfGravity = TeleportHotSpot.Position;
		DistorterGravity_t923312544 * L_16 = LinePointer_get_GravityDistorter_m2851740262(__this, /*hidden argument*/NULL);
		RuntimeObject* L_17 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot::get_Position() */, IMixedRealityTeleportHotSpot_t4279106780_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_16);
		DistorterGravity_set_WorldCenterOfGravity_m2118021218(L_16, L_18, /*hidden argument*/NULL);
		// GravityDistorter.enabled = true;
		DistorterGravity_t923312544 * L_19 = LinePointer_get_GravityDistorter_m2851740262(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Behaviour_set_enabled_m20417929(L_19, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0127;
	}

IL_00bb:
	{
		// TeleportSurfaceResult = Vector3.Dot(Result.Details.LastRaycastHit.normal, Vector3.up) > upDirectionThreshold
		//     ? TeleportSurfaceResult.Valid
		//     : TeleportSurfaceResult.Invalid;
		RuntimeObject* L_20 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		FocusDetails_t3818024109  L_21 = InterfaceFuncInvoker0< FocusDetails_t3818024109  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_Details() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_20);
		V_1 = L_21;
		RaycastHit_t1056001966  L_22 = FocusDetails_get_LastRaycastHit_m2237444740((FocusDetails_t3818024109 *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_22;
		Vector3_t3722313464  L_23 = RaycastHit_get_normal_m1232181746((RaycastHit_t1056001966 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_24 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		float L_26 = __this->get_upDirectionThreshold_56();
		G_B10_0 = __this;
		if ((((float)L_25) > ((float)L_26)))
		{
			G_B11_0 = __this;
			goto IL_00ec;
		}
	}
	{
		G_B12_0 = 2;
		G_B12_1 = G_B10_0;
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_00ed:
	{
		NullCheck(G_B12_1);
		TeleportPointer_set_TeleportSurfaceResult_m4061424545(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// }
		goto IL_0127;
	}

IL_00f4:
	{
		// else if (((1 << Result.CurrentPointerTarget.layer) & InvalidLayers) != 0)
		RuntimeObject* L_27 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_t1113636619 * L_28 = InterfaceFuncInvoker0< GameObject_t1113636619 * >::Invoke(2 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_CurrentPointerTarget() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_27);
		NullCheck(L_28);
		int32_t L_29 = GameObject_get_layer_m4158800245(L_28, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_30 = __this->get_InvalidLayers_59();
		int32_t L_31 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)31)))))&(int32_t)L_31)))
		{
			goto IL_0120;
		}
	}
	{
		// TeleportSurfaceResult = TeleportSurfaceResult.Invalid;
		TeleportPointer_set_TeleportSurfaceResult_m4061424545(__this, 2, /*hidden argument*/NULL);
		// }
		goto IL_0127;
	}

IL_0120:
	{
		// TeleportSurfaceResult = TeleportSurfaceResult.None;
		TeleportPointer_set_TeleportSurfaceResult_m4061424545(__this, 0, /*hidden argument*/NULL);
	}

IL_0127:
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		V_3 = 0;
		goto IL_01ef;
	}

IL_012e:
	{
		// if (i == Result.RayStepIndex)
		int32_t L_32 = V_3;
		RuntimeObject* L_33 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_33);
		if ((!(((uint32_t)L_32) == ((uint32_t)L_34))))
		{
			goto IL_01c9;
		}
	}
	{
		// if (MixedRealityRaycaster.DebugEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t3612139993_il2cpp_TypeInfo_var);
		bool L_35 = ((MixedRealityRaycaster_t3612139993_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityRaycaster_t3612139993_il2cpp_TypeInfo_var))->get_DebugEnabled_0();
		if (!L_35)
		{
			goto IL_01a1;
		}
	}
	{
		// Color debugColor = TeleportSurfaceResult != TeleportSurfaceResult.None
		//     ? Color.yellow
		//     : Color.cyan;
		int32_t L_36 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0155;
		}
	}
	{
		Color_t2555686324  L_37 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B22_0 = L_37;
		goto IL_015a;
	}

IL_0155:
	{
		Color_t2555686324  L_38 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B22_0 = L_38;
	}

IL_015a:
	{
		V_4 = G_B22_0;
		// Debug.DrawLine(Result.StartPoint + Vector3.up * 0.1f, Result.StartPoint + Vector3.up * 0.1f, debugColor);
		RuntimeObject* L_39 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_StartPoint() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_41 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_41, (0.1f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		RuntimeObject* L_44 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t3722313464  L_45 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_StartPoint() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_44);
		Vector3_t3722313464  L_46 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_46, (0.1f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		Color_t2555686324  L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2206927517(NULL /*static, unused*/, L_43, L_48, L_49, /*hidden argument*/NULL);
	}

IL_01a1:
	{
		// clearWorldLength += Vector3.Distance(Result.StartPoint, Result.Details.Point);
		float L_50 = V_0;
		RuntimeObject* L_51 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t3722313464  L_52 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(0 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_StartPoint() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_51);
		RuntimeObject* L_53 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		FocusDetails_t3818024109  L_54 = InterfaceFuncInvoker0< FocusDetails_t3818024109  >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_Details() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_53);
		V_1 = L_54;
		Vector3_t3722313464  L_55 = FocusDetails_get_Point_m1021420658((FocusDetails_t3818024109 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_56 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_52, L_55, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_50, (float)L_56));
		// }
		goto IL_01eb;
	}

IL_01c9:
	{
		// else if (i < Result.RayStepIndex)
		int32_t L_57 = V_3;
		RuntimeObject* L_58 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_58);
		if ((((int32_t)L_57) >= ((int32_t)L_59)))
		{
			goto IL_01eb;
		}
	}
	{
		// clearWorldLength += Rays[i].Length;
		float L_60 = V_0;
		RayStepU5BU5D_t3168306194* L_61 = BaseControllerPointer_get_Rays_m3301639198(__this, /*hidden argument*/NULL);
		int32_t L_62 = V_3;
		NullCheck(L_61);
		float L_63 = RayStep_get_Length_m1238730681((RayStep_t1822550659 *)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_60, (float)L_63));
	}

IL_01eb:
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		int32_t L_64 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_01ef:
	{
		// for (int i = 0; i <= Result.RayStepIndex; i++)
		int32_t L_65 = V_3;
		RuntimeObject* L_66 = BaseControllerPointer_get_Result_m3509575121(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		int32_t L_67 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult::get_RayStepIndex() */, IPointerResult_t1864173623_il2cpp_TypeInfo_var, L_66);
		if ((((int32_t)L_65) <= ((int32_t)L_67)))
		{
			goto IL_012e;
		}
	}
	{
		// LineBase.LineEndClamp = LineBase.GetNormalizedLengthFromWorldLength(clearWorldLength, LineCastResolution);
		BaseMixedRealityLineDataProvider_t44273451 * L_68 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		BaseMixedRealityLineDataProvider_t44273451 * L_69 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		float L_70 = V_0;
		int32_t L_71 = ((LinePointer_t1596098013 *)__this)->get_LineCastResolution_44();
		NullCheck(L_69);
		float L_72 = BaseMixedRealityLineDataProvider_GetNormalizedLengthFromWorldLength_m2876185492(L_69, L_70, L_71, /*hidden argument*/NULL);
		NullCheck(L_68);
		BaseMixedRealityLineDataProvider_set_LineEndClamp_m834029883(L_68, L_72, /*hidden argument*/NULL);
		// }
		goto IL_0241;
	}

IL_021f:
	{
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_73 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_74 = L_73;
		G_B30_0 = L_74;
		if (L_74)
		{
			G_B31_0 = L_74;
			goto IL_022b;
		}
	}
	{
		goto IL_0231;
	}

IL_022b:
	{
		NullCheck(G_B31_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B31_0, (bool)0);
	}

IL_0231:
	{
		// LineBase.LineEndClamp = 1f;
		BaseMixedRealityLineDataProvider_t44273451 * L_75 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		BaseMixedRealityLineDataProvider_set_LineEndClamp_m834029883(L_75, (1.0f), /*hidden argument*/NULL);
	}

IL_0241:
	{
		// for (int i = 0; i < LineRenderers.Length; i++)
		V_5 = 0;
		goto IL_0266;
	}

IL_0246:
	{
		// LineRenderers[i].LineColor = GetLineGradient(TeleportSurfaceResult);
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_76 = LinePointer_get_LineRenderers_m1506695662(__this, /*hidden argument*/NULL);
		int32_t L_77 = V_5;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		BaseMixedRealityLineRenderer_t3189424626 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		Gradient_t3067099924 * L_81 = TeleportPointer_GetLineGradient_m2770365527(__this, L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		BaseMixedRealityLineRenderer_set_LineColor_m2719412904(L_79, L_81, /*hidden argument*/NULL);
		// for (int i = 0; i < LineRenderers.Length; i++)
		int32_t L_82 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_0266:
	{
		// for (int i = 0; i < LineRenderers.Length; i++)
		int32_t L_83 = V_5;
		BaseMixedRealityLineRendererU5BU5D_t1844645383* L_84 = LinePointer_get_LineRenderers_m1506695662(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_84)->max_length)))))))
		{
			goto IL_0246;
		}
	}
	{
		// }
		return;
	}

IL_0273:
	{
		// LineBase.enabled = false;
		BaseMixedRealityLineDataProvider_t44273451 * L_85 = LinePointer_get_LineBase_m2735814475(__this, /*hidden argument*/NULL);
		NullCheck(L_85);
		Behaviour_set_enabled_m20417929(L_85, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnPositionInputChanged(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.InputEventData`1<UnityEngine.Vector2>)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnPositionInputChanged_m1428108086 (TeleportPointer_t1203388771 * __this, InputEventData_1_t3484413663 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnPositionInputChanged_m1428108086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  G_B18_0;
	memset(&G_B18_0, 0, sizeof(G_B18_0));
	Vector3_t3722313464  G_B18_1;
	memset(&G_B18_1, 0, sizeof(G_B18_1));
	Transform_t3600365921 * G_B18_2 = NULL;
	Vector3_t3722313464  G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	Vector3_t3722313464  G_B17_1;
	memset(&G_B17_1, 0, sizeof(G_B17_1));
	Transform_t3600365921 * G_B17_2 = NULL;
	float G_B19_0 = 0.0f;
	Vector3_t3722313464  G_B19_1;
	memset(&G_B19_1, 0, sizeof(G_B19_1));
	Vector3_t3722313464  G_B19_2;
	memset(&G_B19_2, 0, sizeof(G_B19_2));
	Transform_t3600365921 * G_B19_3 = NULL;
	{
		// if (IsTeleportRequestActive) { return; }
		bool L_0 = ((BaseControllerPointer_t823387382 *)__this)->get_IsTeleportRequestActive_22();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsTeleportRequestActive) { return; }
		return;
	}

IL_0009:
	{
		// if (eventData.SourceId == InputSourceParent.SourceId &&
		//     eventData.Handedness == Handedness &&
		//     eventData.MixedRealityInputAction == teleportAction)
		InputEventData_1_t3484413663 * L_1 = ___eventData0;
		NullCheck(L_1);
		uint32_t L_2 = BaseInputEventData_get_SourceId_m3368832526(L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = BaseControllerPointer_get_InputSourceParent_m2643200535(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		uint32_t L_4 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource::get_SourceId() */, IMixedRealityEventSource_t2812969632_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0049;
		}
	}
	{
		InputEventData_1_t3484413663 * L_5 = ___eventData0;
		NullCheck(L_5);
		uint8_t L_6 = InputEventData_get_Handedness_m2456611320(L_5, /*hidden argument*/NULL);
		uint8_t L_7 = ControllerPoseSynchronizer_get_Handedness_m4059819014(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0049;
		}
	}
	{
		InputEventData_1_t3484413663 * L_8 = ___eventData0;
		NullCheck(L_8);
		MixedRealityInputAction_t3419222324  L_9 = BaseInputEventData_get_MixedRealityInputAction_m3756487341(L_8, /*hidden argument*/NULL);
		MixedRealityInputAction_t3419222324  L_10 = __this->get_teleportAction_48();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t3419222324_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityInputAction_op_Equality_m3271798130(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// currentInputPosition = eventData.InputData;
		InputEventData_1_t3484413663 * L_12 = ___eventData0;
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = InputEventData_1_get_InputData_m1471206378(L_12, /*hidden argument*/InputEventData_1_get_InputData_m1471206378_RuntimeMethod_var);
		__this->set_currentInputPosition_60(L_13);
	}

IL_0049:
	{
		// if (Mathf.Abs(currentInputPosition.y) > inputThreshold ||
		//     Mathf.Abs(currentInputPosition.x) > inputThreshold)
		Vector2_t2156229523 * L_14 = __this->get_address_of_currentInputPosition_60();
		float L_15 = L_14->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = fabsf(L_15);
		float L_17 = __this->get_inputThreshold_49();
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_007c;
		}
	}
	{
		Vector2_t2156229523 * L_18 = __this->get_address_of_currentInputPosition_60();
		float L_19 = L_18->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_20 = fabsf(L_19);
		float L_21 = __this->get_inputThreshold_49();
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_021b;
		}
	}

IL_007c:
	{
		// float angle = Mathf.Atan2(currentInputPosition.x, currentInputPosition.y) * Mathf.Rad2Deg;
		Vector2_t2156229523 * L_22 = __this->get_address_of_currentInputPosition_60();
		float L_23 = L_22->get_x_0();
		Vector2_t2156229523 * L_24 = __this->get_address_of_currentInputPosition_60();
		float L_25 = L_24->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_26 = atan2f(L_23, L_25);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_26, (float)(57.29578f)));
		// angle += angleOffset;
		float L_27 = V_0;
		float L_28 = __this->get_angleOffset_50();
		V_0 = ((float)il2cpp_codegen_add((float)L_27, (float)L_28));
		// PointerOrientation = angle;
		float L_29 = V_0;
		VirtActionInvoker1< float >::Invoke(84 /* System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.BaseControllerPointer::set_PointerOrientation(System.Single) */, __this, L_29);
		// if (!teleportEnabled)
		bool L_30 = __this->get_teleportEnabled_61();
		if (L_30)
		{
			goto IL_0292;
		}
	}
	{
		// float absoluteAngle = Mathf.Abs(angle);
		float L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_32 = fabsf(L_31);
		V_1 = L_32;
		// if (absoluteAngle < teleportActivationAngle)
		float L_33 = V_1;
		float L_34 = __this->get_teleportActivationAngle_51();
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_00e6;
		}
	}
	{
		// teleportEnabled = true;
		__this->set_teleportEnabled_61((bool)1);
		// TeleportSystem.RaiseTeleportRequest(this, TeleportHotSpot);
		IL2CPP_RUNTIME_CLASS_INIT(BaseControllerPointer_t823387382_il2cpp_TypeInfo_var);
		RuntimeObject* L_35 = BaseControllerPointer_get_TeleportSystem_m637442324(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_36 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem::RaiseTeleportRequest(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot) */, IMixedRealityTeleportSystem_t2864991237_il2cpp_TypeInfo_var, L_35, __this, L_36);
		// }
		goto IL_0292;
	}

IL_00e6:
	{
		// else if (canMove)
		bool L_37 = __this->get_canMove_63();
		if (!L_37)
		{
			goto IL_0292;
		}
	}
	{
		// if (absoluteAngle > 180f)
		float L_38 = V_1;
		if ((!(((float)L_38) > ((float)(180.0f)))))
		{
			goto IL_0106;
		}
	}
	{
		// absoluteAngle = Mathf.Abs(absoluteAngle - 360f);
		float L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_40 = fabsf(((float)il2cpp_codegen_subtract((float)L_39, (float)(360.0f))));
		V_1 = L_40;
	}

IL_0106:
	{
		// float offsetRotationAngle = 90f - rotateActivationAngle;
		float L_41 = __this->get_rotateActivationAngle_52();
		V_2 = ((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_41));
		// offsetRotationAngle = absoluteAngle - offsetRotationAngle;
		float L_42 = V_1;
		float L_43 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_42, (float)L_43));
		// if (offsetRotationAngle > 0)
		float L_44 = V_2;
		if ((!(((float)L_44) > ((float)(0.0f)))))
		{
			goto IL_0292;
		}
	}
	{
		// if (offsetRotationAngle < rotateActivationAngle)
		float L_45 = V_2;
		float L_46 = __this->get_rotateActivationAngle_52();
		if ((!(((float)L_45) < ((float)L_46))))
		{
			goto IL_0176;
		}
	}
	{
		// canMove = false;
		__this->set_canMove_63((bool)0);
		// CameraCache.Main.transform.parent.RotateAround(CameraCache.Main.transform.position, Vector3.up, angle >= 0.0f ? rotationAmount : -rotationAmount);
		Camera_t4157153871 * L_47 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_t3600365921 * L_48 = Component_get_transform_m3162698980(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_t3600365921 * L_49 = Transform_get_parent_m835071599(L_48, /*hidden argument*/NULL);
		Camera_t4157153871 * L_50 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_t3600365921 * L_51 = Component_get_transform_m3162698980(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t3722313464  L_52 = Transform_get_position_m36019626(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_53 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_54 = V_0;
		G_B17_0 = L_53;
		G_B17_1 = L_52;
		G_B17_2 = L_49;
		if ((((float)L_54) >= ((float)(0.0f))))
		{
			G_B18_0 = L_53;
			G_B18_1 = L_52;
			G_B18_2 = L_49;
			goto IL_0166;
		}
	}
	{
		float L_55 = __this->get_rotationAmount_53();
		G_B19_0 = ((-L_55));
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_016c;
	}

IL_0166:
	{
		float L_56 = __this->get_rotationAmount_53();
		G_B19_0 = L_56;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_016c:
	{
		NullCheck(G_B19_3);
		Transform_RotateAround_m2651195670(G_B19_3, G_B19_2, G_B19_1, G_B19_0, /*hidden argument*/NULL);
		// }
		goto IL_0292;
	}

IL_0176:
	{
		// float offsetStrafeAngle = 180f - backStrafeActivationAngle;
		float L_57 = __this->get_backStrafeActivationAngle_54();
		V_3 = ((float)il2cpp_codegen_subtract((float)(180.0f), (float)L_57));
		// offsetStrafeAngle = absoluteAngle - offsetStrafeAngle;
		float L_58 = V_1;
		float L_59 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_58, (float)L_59));
		// if (offsetStrafeAngle > 0 && offsetStrafeAngle < backStrafeActivationAngle)
		float L_60 = V_3;
		if ((!(((float)L_60) > ((float)(0.0f)))))
		{
			goto IL_0292;
		}
	}
	{
		float L_61 = V_3;
		float L_62 = __this->get_backStrafeActivationAngle_54();
		if ((!(((float)L_61) < ((float)L_62))))
		{
			goto IL_0292;
		}
	}
	{
		// canMove = false;
		__this->set_canMove_63((bool)0);
		// var height = CameraCache.Main.transform.parent.position.y;
		Camera_t4157153871 * L_63 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_t3600365921 * L_64 = Component_get_transform_m3162698980(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_t3600365921 * L_65 = Transform_get_parent_m835071599(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t3722313464  L_66 = Transform_get_position_m36019626(L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_y_3();
		V_4 = L_67;
		// var newPosition = -CameraCache.Main.transform.forward * strafeAmount + CameraCache.Main.transform.parent.position;
		Camera_t4157153871 * L_68 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_t3600365921 * L_69 = Component_get_transform_m3162698980(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t3722313464  L_70 = Transform_get_forward_m747522392(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_71 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		float L_72 = __this->get_strafeAmount_55();
		Vector3_t3722313464  L_73 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		Camera_t4157153871 * L_74 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_74);
		Transform_t3600365921 * L_75 = Component_get_transform_m3162698980(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_t3600365921 * L_76 = Transform_get_parent_m835071599(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t3722313464  L_77 = Transform_get_position_m36019626(L_76, /*hidden argument*/NULL);
		Vector3_t3722313464  L_78 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_73, L_77, /*hidden argument*/NULL);
		V_5 = L_78;
		// newPosition.y = height;
		float L_79 = V_4;
		(&V_5)->set_y_3(L_79);
		// CameraCache.Main.transform.parent.position = newPosition;
		Camera_t4157153871 * L_80 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_t3600365921 * L_81 = Component_get_transform_m3162698980(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_t3600365921 * L_82 = Transform_get_parent_m835071599(L_81, /*hidden argument*/NULL);
		Vector3_t3722313464  L_83 = V_5;
		NullCheck(L_82);
		Transform_set_position_m3387557959(L_82, L_83, /*hidden argument*/NULL);
		// }
		goto IL_0292;
	}

IL_021b:
	{
		// if (!canTeleport && !teleportEnabled)
		bool L_84 = __this->get_canTeleport_62();
		if (L_84)
		{
			goto IL_0232;
		}
	}
	{
		bool L_85 = __this->get_teleportEnabled_61();
		if (L_85)
		{
			goto IL_0232;
		}
	}
	{
		// canMove = true;
		__this->set_canMove_63((bool)1);
	}

IL_0232:
	{
		// if (canTeleport)
		bool L_86 = __this->get_canTeleport_62();
		if (!L_86)
		{
			goto IL_026b;
		}
	}
	{
		// canTeleport = false;
		__this->set_canTeleport_62((bool)0);
		// teleportEnabled = false;
		__this->set_teleportEnabled_61((bool)0);
		// if (TeleportSurfaceResult == TeleportSurfaceResult.Valid ||
		//     TeleportSurfaceResult == TeleportSurfaceResult.HotSpot)
		int32_t L_87 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_87) == ((int32_t)1)))
		{
			goto IL_025a;
		}
	}
	{
		int32_t L_88 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_88) == ((uint32_t)3))))
		{
			goto IL_026b;
		}
	}

IL_025a:
	{
		// TeleportSystem.RaiseTeleportStarted(this, TeleportHotSpot);
		IL2CPP_RUNTIME_CLASS_INIT(BaseControllerPointer_t823387382_il2cpp_TypeInfo_var);
		RuntimeObject* L_89 = BaseControllerPointer_get_TeleportSystem_m637442324(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_90 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem::RaiseTeleportStarted(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot) */, IMixedRealityTeleportSystem_t2864991237_il2cpp_TypeInfo_var, L_89, __this, L_90);
	}

IL_026b:
	{
		// if (teleportEnabled)
		bool L_91 = __this->get_teleportEnabled_61();
		if (!L_91)
		{
			goto IL_0292;
		}
	}
	{
		// canTeleport = false;
		__this->set_canTeleport_62((bool)0);
		// teleportEnabled = false;
		__this->set_teleportEnabled_61((bool)0);
		// TeleportSystem.RaiseTeleportCanceled(this, TeleportHotSpot);
		IL2CPP_RUNTIME_CLASS_INIT(BaseControllerPointer_t823387382_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = BaseControllerPointer_get_TeleportSystem_m637442324(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_93 = BaseControllerPointer_get_TeleportHotSpot_m2459629362(__this, /*hidden argument*/NULL);
		NullCheck(L_92);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportSystem::RaiseTeleportCanceled(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot) */, IMixedRealityTeleportSystem_t2864991237_il2cpp_TypeInfo_var, L_92, __this, L_93);
	}

IL_0292:
	{
		// if (teleportEnabled &&
		//     TeleportSurfaceResult == TeleportSurfaceResult.Valid ||
		//     TeleportSurfaceResult == TeleportSurfaceResult.HotSpot)
		bool L_94 = __this->get_teleportEnabled_61();
		if (!L_94)
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_95 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_95) == ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}

IL_02a3:
	{
		int32_t L_96 = TeleportPointer_get_TeleportSurfaceResult_m2667183639(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)3))))
		{
			goto IL_02b3;
		}
	}

IL_02ac:
	{
		// canTeleport = true;
		__this->set_canTeleport_62((bool)1);
	}

IL_02b3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnTeleportRequest(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnTeleportRequest_m3576689390 (TeleportPointer_t1203388771 * __this, TeleportEventData_t1342032624 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnTeleportRequest_m3576689390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// if (eventData.Pointer.PointerId == PointerId)
		TeleportEventData_t1342032624 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = TeleportEventData_get_Pointer_m3629396672(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2 = InterfaceFuncInvoker0< uint32_t >::Invoke(3 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var, L_1);
		uint32_t L_3 = BaseControllerPointer_get_PointerId_m2177515851(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002c;
		}
	}
	{
		// IsTeleportRequestActive = false;
		((BaseControllerPointer_t823387382 *)__this)->set_IsTeleportRequestActive_22((bool)0);
		// BaseCursor?.SetVisibility(true);
		RuntimeObject* L_4 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B3_0, (bool)1);
		// }
		return;
	}

IL_002c:
	{
		// IsTeleportRequestActive = true;
		((BaseControllerPointer_t823387382 *)__this)->set_IsTeleportRequestActive_22((bool)1);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_6 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		NullCheck(G_B6_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B6_0, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnTeleportStarted(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnTeleportStarted_m204065305 (TeleportPointer_t1203388771 * __this, TeleportEventData_t1342032624 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnTeleportStarted_m204065305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// IsTeleportRequestActive = true;
		((BaseControllerPointer_t823387382 *)__this)->set_IsTeleportRequestActive_22((bool)1);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_0 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B2_0, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnTeleportCompleted(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnTeleportCompleted_m3058759007 (TeleportPointer_t1203388771 * __this, TeleportEventData_t1342032624 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnTeleportCompleted_m3058759007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// IsTeleportRequestActive = false;
		((BaseControllerPointer_t823387382 *)__this)->set_IsTeleportRequestActive_22((bool)0);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_0 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B2_0, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::OnTeleportCanceled(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Teleport.TeleportEventData)
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer_OnTeleportCanceled_m2445790099 (TeleportPointer_t1203388771 * __this, TeleportEventData_t1342032624 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer_OnTeleportCanceled_m2445790099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// IsTeleportRequestActive = false;
		((BaseControllerPointer_t823387382 *)__this)->set_IsTeleportRequestActive_22((bool)0);
		// BaseCursor?.SetVisibility(false);
		RuntimeObject* L_0 = BaseControllerPointer_get_BaseCursor_m4004689303(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t471674592_il2cpp_TypeInfo_var, G_B2_0, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Pointers.TeleportPointer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TeleportPointer__ctor_m2490589763 (TeleportPointer_t1203388771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TeleportPointer__ctor_m2490589763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private MixedRealityInputAction teleportAction = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t3419222324_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t3419222324  L_0 = MixedRealityInputAction_get_None_m1569881572(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_teleportAction_48(L_0);
		// private float inputThreshold = 0.5f;
		__this->set_inputThreshold_49((0.5f));
		// private float teleportActivationAngle = 45f;
		__this->set_teleportActivationAngle_51((45.0f));
		// private float rotateActivationAngle = 22.5f;
		__this->set_rotateActivationAngle_52((22.5f));
		// private float rotationAmount = 90f;
		__this->set_rotationAmount_53((90.0f));
		// private float backStrafeActivationAngle = 45f;
		__this->set_backStrafeActivationAngle_54((45.0f));
		// private float strafeAmount = 0.25f;
		__this->set_strafeAmount_55((0.25f));
		// private float upDirectionThreshold = 0.2f;
		__this->set_upDirectionThreshold_56((0.2f));
		// protected Gradient LineColorHotSpot = new Gradient();
		Gradient_t3067099924 * L_1 = (Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var);
		Gradient__ctor_m173848750(L_1, /*hidden argument*/NULL);
		__this->set_LineColorHotSpot_57(L_1);
		// protected LayerMask ValidLayers = Physics.DefaultRaycastLayers;
		LayerMask_t3493934918  L_2 = LayerMask_op_Implicit_m90232283(NULL /*static, unused*/, ((int32_t)-5), /*hidden argument*/NULL);
		__this->set_ValidLayers_58(L_2);
		// protected LayerMask InvalidLayers = Physics.IgnoreRaycastLayer;
		LayerMask_t3493934918  L_3 = LayerMask_op_Implicit_m90232283(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		__this->set_InvalidLayers_59(L_3);
		// private Vector2 currentInputPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentInputPosition_60(L_4);
		LinePointer__ctor_m3093294720(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.PivotAxis Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::get_PivotAxis()
extern "C" IL2CPP_METHOD_ATTR int32_t Billboard_get_PivotAxis_m597616639 (Billboard_t3288259690 * __this, const RuntimeMethod* method)
{
	{
		// public PivotAxis PivotAxis => pivotAxis;
		int32_t L_0 = __this->get_pivotAxis_4();
		return L_0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::get_TargetTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Billboard_get_TargetTransform_m1528500030 (Billboard_t3288259690 * __this, const RuntimeMethod* method)
{
	{
		// public Transform TargetTransform => targetTransform;
		Transform_t3600365921 * L_0 = __this->get_targetTransform_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Billboard_OnEnable_m1202230539 (Billboard_t3288259690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Billboard_OnEnable_m1202230539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetTransform == null)
		Transform_t3600365921 * L_0 = __this->get_targetTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// targetTransform = CameraCache.Main.transform;
		Camera_t4157153871 * L_2 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		__this->set_targetTransform_5(L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::Update()
extern "C" IL2CPP_METHOD_ATTR void Billboard_Update_m2657787778 (Billboard_t3288259690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Billboard_Update_m2657787778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (targetTransform == null)
		Transform_t3600365921 * L_0 = __this->get_targetTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Vector3 directionToTarget = targetTransform.position - transform.position;
		Transform_t3600365921 * L_2 = __this->get_targetTransform_5();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// bool useCameraAsUpVector = true;
		V_1 = (bool)1;
		// switch (pivotAxis)
		int32_t L_7 = __this->get_pivotAxis_4();
		V_2 = L_7;
		int32_t L_8 = V_2;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0092;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_0078;
			}
			case 4:
			{
				goto IL_0096;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_00b0;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0058:
	{
		// directionToTarget.x = 0.0f;
		(&V_0)->set_x_2((0.0f));
		// useCameraAsUpVector = false;
		V_1 = (bool)0;
		// break;
		goto IL_00b0;
	}

IL_0068:
	{
		// directionToTarget.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
		// useCameraAsUpVector = false;
		V_1 = (bool)0;
		// break;
		goto IL_00b0;
	}

IL_0078:
	{
		// directionToTarget.x = 0.0f;
		(&V_0)->set_x_2((0.0f));
		// directionToTarget.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
		// break;
		goto IL_00b0;
	}

IL_0092:
	{
		// useCameraAsUpVector = false;
		V_1 = (bool)0;
		// break;
		goto IL_00b0;
	}

IL_0096:
	{
		// directionToTarget.x = 0.0f;
		(&V_0)->set_x_2((0.0f));
		// break;
		goto IL_00b0;
	}

IL_00a4:
	{
		// directionToTarget.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
	}

IL_00b0:
	{
		// if (directionToTarget.sqrMagnitude < 0.001f)
		float L_9 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_9) < ((float)(0.001f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// return;
		return;
	}

IL_00bf:
	{
		// if (useCameraAsUpVector)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00e8;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(-directionToTarget, CameraCache.Main.transform.up);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Camera_t4157153871 * L_14 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_up_m3972993886(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_17 = Quaternion_LookRotation_m3197602968(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m3524318132(L_11, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e8:
	{
		// transform.rotation = Quaternion.LookRotation(-directionToTarget);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_21 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_rotation_m3524318132(L_18, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.Billboard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Billboard__ctor_m690590180 (Billboard_t3288259690 * __this, const RuntimeMethod* method)
{
	{
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
// System.Single Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::get_Radius()
extern "C" IL2CPP_METHOD_ATTR float HoverLight_get_Radius_m2137590600 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// public float Radius => radius;
		float L_0 = __this->get_radius_11();
		return L_0;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::get_Color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  HoverLight_get_Color_m2189296834 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// public Color Color => color;
		Color_t2555686324  L_0 = __this->get_color_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_OnEnable_m2637018133 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// AddHoverLight(this);
		HoverLight_AddHoverLight_m1460701161(__this, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_OnDisable_m3915002831 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// RemoveHoverLight(this);
		HoverLight_RemoveHoverLight_m3370953760(__this, __this, /*hidden argument*/NULL);
		// UpdateHoverLights(true);
		HoverLight_UpdateHoverLights_m3231287831(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_LateUpdate_m90677968 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// UpdateHoverLights();
		HoverLight_UpdateHoverLights_m3231287831(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::OnDrawGizmosSelected()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_OnDrawGizmosSelected_m4205827195 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight_OnDrawGizmosSelected_m4205827195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled)
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Gizmos.color = Color;
		Color_t2555686324  L_1 = HoverLight_get_Color_m2189296834(__this, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// Gizmos.DrawWireSphere(transform.position, Radius);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		float L_4 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.right * Radius, string.Empty, false);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_10, L_11, (bool)0, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.left * Radius, string.Empty, false);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_17, L_18, (bool)0, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.up * Radius, string.Empty, false);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_22 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_20, L_23, /*hidden argument*/NULL);
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_24, L_25, (bool)0, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.down * Radius, string.Empty, false);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Vector3_get_down_m3781355428(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/NULL);
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_31, L_32, (bool)0, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.forward * Radius, string.Empty, false);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t3722313464  L_38 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_34, L_37, /*hidden argument*/NULL);
		String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_38, L_39, (bool)0, /*hidden argument*/NULL);
		// Gizmos.DrawIcon(transform.position + Vector3.back * Radius, string.Empty, false);
		Transform_t3600365921 * L_40 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t3722313464  L_41 = Transform_get_position_m36019626(L_40, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_43 = HoverLight_get_Radius_m2137590600(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_44 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_41, L_44, /*hidden argument*/NULL);
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_45, L_46, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::AddHoverLight(Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_AddHoverLight_m1460701161 (HoverLight_t861884922 * __this, HoverLight_t861884922 * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight_AddHoverLight_m1460701161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeHoverLights.Count >= hoverLightCount)
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_0 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m956344855(L_0, /*hidden argument*/List_1_get_Count_m956344855_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)3)))
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogWarningFormat("Max hover light count ({0}) exceeded.", hoverLightCount);
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		int32_t L_4 = 3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral1005982028, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// activeHoverLights.Add(light);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_6 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		HoverLight_t861884922 * L_7 = ___light0;
		NullCheck(L_6);
		List_1_Add_m689424915(L_6, L_7, /*hidden argument*/List_1_Add_m689424915_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::RemoveHoverLight(Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_RemoveHoverLight_m3370953760 (HoverLight_t861884922 * __this, HoverLight_t861884922 * ___light0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight_RemoveHoverLight_m3370953760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeHoverLights.Remove(light);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_0 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		HoverLight_t861884922 * L_1 = ___light0;
		NullCheck(L_0);
		List_1_Remove_m3662404375(L_0, L_1, /*hidden argument*/List_1_Remove_m3662404375_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::Initialize()
extern "C" IL2CPP_METHOD_ATTR void HoverLight_Initialize_m3729398361 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight_Initialize_m3729398361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _HoverLightDataID = Shader.PropertyToID("_HoverLightData");
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3434925605, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->set__HoverLightDataID_9(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::UpdateHoverLights(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HoverLight_UpdateHoverLights_m3231287831 (HoverLight_t861884922 * __this, bool ___forceUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight_UpdateHoverLights_m3231287831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HoverLight_t861884922 * V_1 = NULL;
	int32_t V_2 = 0;
	HoverLight_t861884922 * G_B12_0 = NULL;
	{
		// if (lastHoverLightUpdate == -1)
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_lastHoverLightUpdate_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		// Initialize();
		HoverLight_Initialize_m3729398361(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (!forceUpdate && (Time.frameCount == lastHoverLightUpdate))
		bool L_1 = ___forceUpdate0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		int32_t L_3 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_lastHoverLightUpdate_10();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (activeHoverLights.Count > 1)
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_4 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m956344855(L_4, /*hidden argument*/List_1_get_Count_m956344855_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		// Shader.EnableKeyword(multiHoverLightKeyword);
		Shader_EnableKeyword_m3103559844(NULL /*static, unused*/, _stringLiteral2923662939, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	}

IL_0037:
	{
		// Shader.DisableKeyword(multiHoverLightKeyword);
		Shader_DisableKeyword_m433641454(NULL /*static, unused*/, _stringLiteral2923662939, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < hoverLightCount; ++i)
		V_0 = 0;
		goto IL_0119;
	}

IL_0048:
	{
		// HoverLight light = (i >= activeHoverLights.Count) ? null : activeHoverLights[i];
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_7 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m956344855(L_7, /*hidden argument*/List_1_get_Count_m956344855_RuntimeMethod_var);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		List_1_t2333959664 * L_9 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_activeHoverLights_7();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		HoverLight_t861884922 * L_11 = List_1_get_Item_m3128556365(L_9, L_10, /*hidden argument*/List_1_get_Item_m3128556365_RuntimeMethod_var);
		G_B12_0 = L_11;
		goto IL_0063;
	}

IL_0062:
	{
		G_B12_0 = ((HoverLight_t861884922 *)(NULL));
	}

IL_0063:
	{
		V_1 = G_B12_0;
		// int dataIndex = i * hoverLightDataSize;
		int32_t L_12 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2));
		// if (light)
		HoverLight_t861884922 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00f3;
		}
	}
	{
		// hoverLightData[dataIndex] = new Vector4(light.transform.position.x,
		//                                         light.transform.position.y,
		//                                         light.transform.position.z,
		//                                         light.Radius);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		Vector4U5BU5D_t934056436* L_15 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_hoverLightData_8();
		int32_t L_16 = V_2;
		HoverLight_t861884922 * L_17 = V_1;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		HoverLight_t861884922 * L_21 = V_1;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		HoverLight_t861884922 * L_25 = V_1;
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t3722313464  L_27 = Transform_get_position_m36019626(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_z_4();
		HoverLight_t861884922 * L_29 = V_1;
		NullCheck(L_29);
		float L_30 = HoverLight_get_Radius_m2137590600(L_29, /*hidden argument*/NULL);
		Vector4_t3319028937  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector4__ctor_m2498754347((&L_31), L_20, L_24, L_28, L_30, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Vector4_t3319028937 )L_31);
		// hoverLightData[dataIndex + 1] = new Vector4(light.Color.r,
		//                                             light.Color.g,
		//                                             light.Color.b,
		//                                             1.0f);
		Vector4U5BU5D_t934056436* L_32 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_hoverLightData_8();
		int32_t L_33 = V_2;
		HoverLight_t861884922 * L_34 = V_1;
		NullCheck(L_34);
		Color_t2555686324  L_35 = HoverLight_get_Color_m2189296834(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_r_0();
		HoverLight_t861884922 * L_37 = V_1;
		NullCheck(L_37);
		Color_t2555686324  L_38 = HoverLight_get_Color_m2189296834(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_g_1();
		HoverLight_t861884922 * L_40 = V_1;
		NullCheck(L_40);
		Color_t2555686324  L_41 = HoverLight_get_Color_m2189296834(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_b_2();
		Vector4_t3319028937  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Vector4__ctor_m2498754347((&L_43), L_36, L_39, L_42, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1))), (Vector4_t3319028937 )L_43);
		// }
		goto IL_0115;
	}

IL_00f3:
	{
		// hoverLightData[dataIndex] = Vector4.zero;
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		Vector4U5BU5D_t934056436* L_44 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_hoverLightData_8();
		int32_t L_45 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_46 = Vector4_get_zero_m1422399515(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Vector4_t3319028937 )L_46);
		// hoverLightData[dataIndex + 1] = Vector4.zero;
		Vector4U5BU5D_t934056436* L_47 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_hoverLightData_8();
		int32_t L_48 = V_2;
		Vector4_t3319028937  L_49 = Vector4_get_zero_m1422399515(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1))), (Vector4_t3319028937 )L_49);
	}

IL_0115:
	{
		// for (int i = 0; i < hoverLightCount; ++i)
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_0119:
	{
		// for (int i = 0; i < hoverLightCount; ++i)
		int32_t L_51 = V_0;
		if ((((int32_t)L_51) < ((int32_t)3)))
		{
			goto IL_0048;
		}
	}
	{
		// Shader.SetGlobalVectorArray(_HoverLightDataID, hoverLightData);
		IL2CPP_RUNTIME_CLASS_INIT(HoverLight_t861884922_il2cpp_TypeInfo_var);
		int32_t L_52 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get__HoverLightDataID_9();
		Vector4U5BU5D_t934056436* L_53 = ((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->get_hoverLightData_8();
		Shader_SetGlobalVectorArray_m990308156(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		// lastHoverLightUpdate = Time.frameCount;
		int32_t L_54 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->set_lastHoverLightUpdate_10(L_54);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HoverLight__ctor_m2433974798 (HoverLight_t861884922 * __this, const RuntimeMethod* method)
{
	{
		// private float radius = 0.15f;
		__this->set_radius_11((0.15f));
		// private Color color = new Color(0.3f, 0.3f, 0.3f, 1.0f);
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (0.3f), (0.3f), (0.3f), (1.0f), /*hidden argument*/NULL);
		__this->set_color_12(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.HoverLight::.cctor()
extern "C" IL2CPP_METHOD_ATTR void HoverLight__cctor_m151232642 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoverLight__cctor_m151232642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<HoverLight> activeHoverLights = new List<HoverLight>(hoverLightCount);
		List_1_t2333959664 * L_0 = (List_1_t2333959664 *)il2cpp_codegen_object_new(List_1_t2333959664_il2cpp_TypeInfo_var);
		List_1__ctor_m4051594730(L_0, 3, /*hidden argument*/List_1__ctor_m4051594730_RuntimeMethod_var);
		((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->set_activeHoverLights_7(L_0);
		// private static Vector4[] hoverLightData = new Vector4[hoverLightCount * hoverLightDataSize];
		Vector4U5BU5D_t934056436* L_1 = (Vector4U5BU5D_t934056436*)SZArrayNew(Vector4U5BU5D_t934056436_il2cpp_TypeInfo_var, (uint32_t)6);
		((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->set_hoverLightData_8(L_1);
		// private static int lastHoverLightUpdate = -1;
		((HoverLight_t861884922_StaticFields*)il2cpp_codegen_static_fields_for(HoverLight_t861884922_il2cpp_TypeInfo_var))->set_lastHoverLightUpdate_10((-1));
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
// System.Boolean Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::get_Highlight()
extern "C" IL2CPP_METHOD_ATTR bool InteractableHighlight_get_Highlight_m328910045 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	{
		// return highlight;
		bool L_0 = __this->get_highlight_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::set_Highlight(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_set_Highlight_m1416664830 (InteractableHighlight_t3226167531 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value != highlight)
		bool L_0 = ___value0;
		bool L_1 = __this->get_highlight_8();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// highlight = value;
		bool L_2 = ___value0;
		__this->set_highlight_8(L_2);
		// Refresh();
		InteractableHighlight_Refresh_m3160041354(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::set_Style(Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight/HighlightedMaterialStyle)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_set_Style_m3635133936 (InteractableHighlight_t3226167531 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (targetStyle != value)
		int32_t L_0 = __this->get_targetStyle_16();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// targetStyle = value;
		int32_t L_2 = ___value0;
		__this->set_targetStyle_16(L_2);
		// Refresh();
		InteractableHighlight_Refresh_m3160041354(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::set_TargetRenderers(UnityEngine.Renderer[])
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_set_TargetRenderers_m3223018510 (InteractableHighlight_t3226167531 * __this, RendererU5BU5D_t3210418286* ___value0, const RuntimeMethod* method)
{
	{
		// if (targetRenderers != value)
		RendererU5BU5D_t3210418286* L_0 = __this->get_targetRenderers_9();
		RendererU5BU5D_t3210418286* L_1 = ___value0;
		if ((((RuntimeObject*)(RendererU5BU5D_t3210418286*)L_0) == ((RuntimeObject*)(RendererU5BU5D_t3210418286*)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// targetRenderers = value;
		RendererU5BU5D_t3210418286* L_2 = ___value0;
		__this->set_targetRenderers_9(L_2);
		// Refresh();
		InteractableHighlight_Refresh_m3160041354(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_OnEnable_m3857712583 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_OnEnable_m3857712583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetRenderers == null || targetRenderers.Length == 0)
		RendererU5BU5D_t3210418286* L_0 = __this->get_targetRenderers_9();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RendererU5BU5D_t3210418286* L_1 = __this->get_targetRenderers_9();
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_001d;
		}
	}

IL_0011:
	{
		// targetRenderers = GetComponentsInChildren<Renderer>();
		RendererU5BU5D_t3210418286* L_2 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m745328695(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m745328695_RuntimeMethod_var);
		__this->set_targetRenderers_9(L_2);
	}

IL_001d:
	{
		// Refresh();
		InteractableHighlight_Refresh_m3160041354(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_OnDisable_m1129176815 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	{
		// Highlight = false;
		InteractableHighlight_set_Highlight_m1416664830(__this, (bool)0, /*hidden argument*/NULL);
		// Refresh();
		InteractableHighlight_Refresh_m3160041354(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::Refresh()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_Refresh_m3160041354 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	{
		// if (isActiveAndEnabled && highlight)
		bool L_0 = Behaviour_get_isActiveAndEnabled_m3143666263(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_highlight_8();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// AddHighlightMaterials();
		InteractableHighlight_AddHighlightMaterials_m3019761556(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0017:
	{
		// RemoveHighlightMaterials();
		InteractableHighlight_RemoveHighlightMaterials_m236394733(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::AddHighlightMaterials()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_AddHighlightMaterials_m3019761556 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_AddHighlightMaterials_m3019761556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t1812449865 * V_1 = NULL;
	{
		// if ((currentStyle & targetStyle) != 0) { return; }
		int32_t L_0 = __this->get_currentStyle_17();
		int32_t L_1 = __this->get_targetStyle_16();
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// if ((currentStyle & targetStyle) != 0) { return; }
		return;
	}

IL_0010:
	{
		// if (materialsBeforeFocus == null)
		Dictionary_2_t3526335110 * L_2 = __this->get_materialsBeforeFocus_18();
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// materialsBeforeFocus = new Dictionary<Renderer, List<Material>>();
		Dictionary_2_t3526335110 * L_3 = (Dictionary_2_t3526335110 *)il2cpp_codegen_object_new(Dictionary_2_t3526335110_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1478528768(L_3, /*hidden argument*/Dictionary_2__ctor_m1478528768_RuntimeMethod_var);
		__this->set_materialsBeforeFocus_18(L_3);
	}

IL_0023:
	{
		// for (int i = 0; i < targetRenderers.Length; i++)
		V_0 = 0;
		goto IL_0091;
	}

IL_0027:
	{
		// if (!materialsBeforeFocus.TryGetValue(targetRenderers[i], out preFocusMaterials))
		Dictionary_2_t3526335110 * L_4 = __this->get_materialsBeforeFocus_18();
		RendererU5BU5D_t3210418286* L_5 = __this->get_targetRenderers_9();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Renderer_t2627027031 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9 = Dictionary_2_TryGetValue_m447712618(L_4, L_8, (List_1_t1812449865 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m447712618_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		// preFocusMaterials = new List<Material>();
		List_1_t1812449865 * L_10 = (List_1_t1812449865 *)il2cpp_codegen_object_new(List_1_t1812449865_il2cpp_TypeInfo_var);
		List_1__ctor_m2853362164(L_10, /*hidden argument*/List_1__ctor_m2853362164_RuntimeMethod_var);
		V_1 = L_10;
		// materialsBeforeFocus.Add(targetRenderers[i], preFocusMaterials);
		Dictionary_2_t3526335110 * L_11 = __this->get_materialsBeforeFocus_18();
		RendererU5BU5D_t3210418286* L_12 = __this->get_targetRenderers_9();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Renderer_t2627027031 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		List_1_t1812449865 * L_16 = V_1;
		NullCheck(L_11);
		Dictionary_2_Add_m1338155647(L_11, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m1338155647_RuntimeMethod_var);
		// }
		goto IL_0060;
	}

IL_005a:
	{
		// preFocusMaterials.Clear();
		List_1_t1812449865 * L_17 = V_1;
		NullCheck(L_17);
		List_1_Clear_m2964530523(L_17, /*hidden argument*/List_1_Clear_m2964530523_RuntimeMethod_var);
	}

IL_0060:
	{
		// preFocusMaterials.AddRange(targetRenderers[i].sharedMaterials);
		List_1_t1812449865 * L_18 = V_1;
		RendererU5BU5D_t3210418286* L_19 = __this->get_targetRenderers_9();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Renderer_t2627027031 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		MaterialU5BU5D_t561872642* L_23 = Renderer_get_sharedMaterials_m76747498(L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_AddRange_m1895910640(L_18, (RuntimeObject*)(RuntimeObject*)L_23, /*hidden argument*/List_1_AddRange_m1895910640_RuntimeMethod_var);
		// preFocusMaterials.Remove(highlightMaterial);
		List_1_t1812449865 * L_24 = V_1;
		Material_t340375123 * L_25 = __this->get_highlightMaterial_14();
		NullCheck(L_24);
		List_1_Remove_m1244651821(L_24, L_25, /*hidden argument*/List_1_Remove_m1244651821_RuntimeMethod_var);
		// preFocusMaterials.Remove(overlayMaterial);
		List_1_t1812449865 * L_26 = V_1;
		Material_t340375123 * L_27 = __this->get_overlayMaterial_15();
		NullCheck(L_26);
		List_1_Remove_m1244651821(L_26, L_27, /*hidden argument*/List_1_Remove_m1244651821_RuntimeMethod_var);
		// for (int i = 0; i < targetRenderers.Length; i++)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0; i < targetRenderers.Length; i++)
		int32_t L_29 = V_0;
		RendererU5BU5D_t3210418286* L_30 = __this->get_targetRenderers_9();
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		// if ((targetStyle & HighlightedMaterialStyle.Highlight) != 0)
		int32_t L_31 = __this->get_targetStyle_16();
		if (!((int32_t)((int32_t)L_31&(int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		// if ((currentStyle & HighlightedMaterialStyle.Highlight) == 0)
		int32_t L_32 = __this->get_currentStyle_17();
		if (((int32_t)((int32_t)L_32&(int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		// AddMaterialToRenderers(targetRenderers, highlightMaterial, highlightColorProperty, highlightColor);
		RendererU5BU5D_t3210418286* L_33 = __this->get_targetRenderers_9();
		Material_t340375123 * L_34 = __this->get_highlightMaterial_14();
		String_t* L_35 = __this->get_highlightColorProperty_10();
		Color_t2555686324  L_36 = __this->get_highlightColor_12();
		InteractableHighlight_AddMaterialToRenderers_m957536401(NULL /*static, unused*/, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// if ((targetStyle & HighlightedMaterialStyle.Overlay) != 0)
		int32_t L_37 = __this->get_targetStyle_16();
		if (!((int32_t)((int32_t)L_37&(int32_t)2)))
		{
			goto IL_00fe;
		}
	}
	{
		// if ((currentStyle & HighlightedMaterialStyle.Overlay) == 0)
		int32_t L_38 = __this->get_currentStyle_17();
		if (((int32_t)((int32_t)L_38&(int32_t)2)))
		{
			goto IL_00fe;
		}
	}
	{
		// AddMaterialToRenderers(targetRenderers, overlayMaterial, outlineColorProperty, outlineColor);
		RendererU5BU5D_t3210418286* L_39 = __this->get_targetRenderers_9();
		Material_t340375123 * L_40 = __this->get_overlayMaterial_15();
		String_t* L_41 = __this->get_outlineColorProperty_11();
		Color_t2555686324  L_42 = __this->get_outlineColor_13();
		InteractableHighlight_AddMaterialToRenderers_m957536401(NULL /*static, unused*/, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// currentStyle = targetStyle;
		int32_t L_43 = __this->get_targetStyle_16();
		__this->set_currentStyle_17(L_43);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::RemoveHighlightMaterials()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_RemoveHighlightMaterials_m236394733 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_RemoveHighlightMaterials_m236394733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1185550589  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyValuePair_2_t1629039981  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// if (materialsBeforeFocus == null) { return; }
		Dictionary_2_t3526335110 * L_0 = __this->get_materialsBeforeFocus_18();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (materialsBeforeFocus == null) { return; }
		return;
	}

IL_0009:
	{
		// foreach (KeyValuePair<Renderer, List<Material>> preFocusMats in materialsBeforeFocus)
		Dictionary_2_t3526335110 * L_1 = __this->get_materialsBeforeFocus_18();
		NullCheck(L_1);
		Enumerator_t1185550589  L_2 = Dictionary_2_GetEnumerator_m4221256433(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m4221256433_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0017:
		{
			// foreach (KeyValuePair<Renderer, List<Material>> preFocusMats in materialsBeforeFocus)
			KeyValuePair_2_t1629039981  L_3 = Enumerator_get_Current_m3220264653((Enumerator_t1185550589 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3220264653_RuntimeMethod_var);
			V_1 = L_3;
			// preFocusMats.Key.sharedMaterials = preFocusMats.Value.ToArray();
			Renderer_t2627027031 * L_4 = KeyValuePair_2_get_Key_m2519277466((KeyValuePair_2_t1629039981 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m2519277466_RuntimeMethod_var);
			List_1_t1812449865 * L_5 = KeyValuePair_2_get_Value_m3562707980((KeyValuePair_2_t1629039981 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3562707980_RuntimeMethod_var);
			NullCheck(L_5);
			MaterialU5BU5D_t561872642* L_6 = List_1_ToArray_m179578601(L_5, /*hidden argument*/List_1_ToArray_m179578601_RuntimeMethod_var);
			NullCheck(L_4);
			Renderer_set_sharedMaterials_m2162241463(L_4, L_6, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// foreach (KeyValuePair<Renderer, List<Material>> preFocusMats in materialsBeforeFocus)
			bool L_7 = Enumerator_MoveNext_m3239435214((Enumerator_t1185550589 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m3239435214_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m743166091((Enumerator_t1185550589 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m743166091_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		// materialsBeforeFocus.Clear();
		Dictionary_2_t3526335110 * L_8 = __this->get_materialsBeforeFocus_18();
		NullCheck(L_8);
		Dictionary_2_Clear_m47724358(L_8, /*hidden argument*/Dictionary_2_Clear_m47724358_RuntimeMethod_var);
		// currentStyle = HighlightedMaterialStyle.None;
		__this->set_currentStyle_17(0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::AddMaterialToRenderers(UnityEngine.Renderer[],UnityEngine.Material,System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_AddMaterialToRenderers_m957536401 (RuntimeObject * __this /* static, unused */, RendererU5BU5D_t3210418286* ___renderers0, Material_t340375123 * ___material1, String_t* ___propName2, Color_t2555686324  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_AddMaterialToRenderers_m957536401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t1812449865 * V_1 = NULL;
	{
		// material.SetColor(propName, color);
		Material_t340375123 * L_0 = ___material1;
		String_t* L_1 = ___propName2;
		Color_t2555686324  L_2 = ___color3;
		NullCheck(L_0);
		Material_SetColor_m2020215303(L_0, L_1, L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < renderers.Length; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_000c:
	{
		// if (renderers[i] == null) { continue; }
		RendererU5BU5D_t3210418286* L_3 = ___renderers0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// var currentMaterials = new List<Material>(renderers[i].sharedMaterials);
		RendererU5BU5D_t3210418286* L_8 = ___renderers0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Renderer_t2627027031 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		MaterialU5BU5D_t561872642* L_12 = Renderer_get_sharedMaterials_m76747498(L_11, /*hidden argument*/NULL);
		List_1_t1812449865 * L_13 = (List_1_t1812449865 *)il2cpp_codegen_object_new(List_1_t1812449865_il2cpp_TypeInfo_var);
		List_1__ctor_m2557557253(L_13, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/List_1__ctor_m2557557253_RuntimeMethod_var);
		V_1 = L_13;
		// if (!currentMaterials.Contains(material))
		List_1_t1812449865 * L_14 = V_1;
		Material_t340375123 * L_15 = ___material1;
		NullCheck(L_14);
		bool L_16 = List_1_Contains_m2744244959(L_14, L_15, /*hidden argument*/List_1_Contains_m2744244959_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0043;
		}
	}
	{
		// currentMaterials.Add(material);
		List_1_t1812449865 * L_17 = V_1;
		Material_t340375123 * L_18 = ___material1;
		NullCheck(L_17);
		List_1_Add_m1088566532(L_17, L_18, /*hidden argument*/List_1_Add_m1088566532_RuntimeMethod_var);
		// renderers[i].sharedMaterials = currentMaterials.ToArray();
		RendererU5BU5D_t3210418286* L_19 = ___renderers0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Renderer_t2627027031 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		List_1_t1812449865 * L_23 = V_1;
		NullCheck(L_23);
		MaterialU5BU5D_t561872642* L_24 = List_1_ToArray_m179578601(L_23, /*hidden argument*/List_1_ToArray_m179578601_RuntimeMethod_var);
		NullCheck(L_22);
		Renderer_set_sharedMaterials_m2162241463(L_22, L_24, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_26 = V_0;
		RendererU5BU5D_t3210418286* L_27 = ___renderers0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::RemoveMatFromRenderers(UnityEngine.Renderer[],System.Collections.Generic.List`1<UnityEngine.Material>)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_RemoveMatFromRenderers_m1025509229 (RuntimeObject * __this /* static, unused */, RendererU5BU5D_t3210418286* ___renderers0, List_1_t1812449865 * ___materials1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_RemoveMatFromRenderers_m1025509229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < materials.Count; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// RemoveMatFromRenderers(renderers, materials[i]);
		RendererU5BU5D_t3210418286* L_0 = ___renderers0;
		List_1_t1812449865 * L_1 = ___materials1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Material_t340375123 * L_3 = List_1_get_Item_m2239442906(L_1, L_2, /*hidden argument*/List_1_get_Item_m2239442906_RuntimeMethod_var);
		InteractableHighlight_RemoveMatFromRenderers_m278521255(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0015:
	{
		// for (int i = 0; i < materials.Count; i++)
		int32_t L_5 = V_0;
		List_1_t1812449865 * L_6 = ___materials1;
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m678643881(L_6, /*hidden argument*/List_1_get_Count_m678643881_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::RemoveMatFromRenderers(UnityEngine.Renderer[],UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_RemoveMatFromRenderers_m278521255 (RuntimeObject * __this /* static, unused */, RendererU5BU5D_t3210418286* ___renderers0, Material_t340375123 * ___material1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight_RemoveMatFromRenderers_m278521255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t1812449865 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (material == null) { return; }
		Material_t340375123 * L_0 = ___material1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (material == null) { return; }
		return;
	}

IL_000a:
	{
		// for (int i = 0; i < renderers.Length; i++)
		V_0 = 0;
		goto IL_0083;
	}

IL_000e:
	{
		// if (renderers[i] == null) { continue; }
		RendererU5BU5D_t3210418286* L_2 = ___renderers0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Renderer_t2627027031 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		// var currentMaterials = new List<Material>(renderers[i].sharedMaterials);
		RendererU5BU5D_t3210418286* L_7 = ___renderers0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Renderer_t2627027031 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		MaterialU5BU5D_t561872642* L_11 = Renderer_get_sharedMaterials_m76747498(L_10, /*hidden argument*/NULL);
		List_1_t1812449865 * L_12 = (List_1_t1812449865 *)il2cpp_codegen_object_new(List_1_t1812449865_il2cpp_TypeInfo_var);
		List_1__ctor_m2557557253(L_12, (RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/List_1__ctor_m2557557253_RuntimeMethod_var);
		V_1 = L_12;
		// for (int j = currentMaterials.Count - 1; j >= 0; j--)
		List_1_t1812449865 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m678643881(L_13, /*hidden argument*/List_1_get_Count_m678643881_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_0065;
	}

IL_0032:
	{
		// if (currentMaterials[j] != null && currentMaterials[j].name == material.name)
		List_1_t1812449865 * L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Material_t340375123 * L_17 = List_1_get_Item_m2239442906(L_15, L_16, /*hidden argument*/List_1_get_Item_m2239442906_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0061;
		}
	}
	{
		List_1_t1812449865 * L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Material_t340375123 * L_21 = List_1_get_Item_m2239442906(L_19, L_20, /*hidden argument*/List_1_get_Item_m2239442906_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22 = Object_get_name_m4211327027(L_21, /*hidden argument*/NULL);
		Material_t340375123 * L_23 = ___material1;
		NullCheck(L_23);
		String_t* L_24 = Object_get_name_m4211327027(L_23, /*hidden argument*/NULL);
		bool L_25 = String_op_Equality_m920492651(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0061;
		}
	}
	{
		// currentMaterials.RemoveAt(j);
		List_1_t1812449865 * L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		List_1_RemoveAt_m1106714037(L_26, L_27, /*hidden argument*/List_1_RemoveAt_m1106714037_RuntimeMethod_var);
	}

IL_0061:
	{
		// for (int j = currentMaterials.Count - 1; j >= 0; j--)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
	}

IL_0065:
	{
		// for (int j = currentMaterials.Count - 1; j >= 0; j--)
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// currentMaterials.Remove(material);
		List_1_t1812449865 * L_30 = V_1;
		Material_t340375123 * L_31 = ___material1;
		NullCheck(L_30);
		List_1_Remove_m1244651821(L_30, L_31, /*hidden argument*/List_1_Remove_m1244651821_RuntimeMethod_var);
		// renderers[i].sharedMaterials = currentMaterials.ToArray();
		RendererU5BU5D_t3210418286* L_32 = ___renderers0;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Renderer_t2627027031 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		List_1_t1812449865 * L_36 = V_1;
		NullCheck(L_36);
		MaterialU5BU5D_t561872642* L_37 = List_1_ToArray_m179578601(L_36, /*hidden argument*/List_1_ToArray_m179578601_RuntimeMethod_var);
		NullCheck(L_35);
		Renderer_set_sharedMaterials_m2162241463(L_35, L_37, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0083:
	{
		// for (int i = 0; i < renderers.Length; i++)
		int32_t L_39 = V_0;
		RendererU5BU5D_t3210418286* L_40 = ___renderers0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::OnFocusEnter(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_OnFocusEnter_m3694768416 (InteractableHighlight_t3226167531 * __this, FocusEventData_t473508985 * ___eventData0, const RuntimeMethod* method)
{
	{
		// base.OnFocusEnter(eventData);
		FocusEventData_t473508985 * L_0 = ___eventData0;
		BaseFocusHandler_OnFocusEnter_m1356550176(__this, L_0, /*hidden argument*/NULL);
		// if (HasFocus)
		bool L_1 = BaseFocusHandler_get_HasFocus_m3440702131(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// Highlight = true;
		InteractableHighlight_set_Highlight_m1416664830(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::OnFocusExit(Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight_OnFocusExit_m592623507 (InteractableHighlight_t3226167531 * __this, FocusEventData_t473508985 * ___eventData0, const RuntimeMethod* method)
{
	{
		// base.OnFocusExit(eventData);
		FocusEventData_t473508985 * L_0 = ___eventData0;
		BaseFocusHandler_OnFocusExit_m2010318159(__this, L_0, /*hidden argument*/NULL);
		// Highlight = false;
		InteractableHighlight_set_Highlight_m1416664830(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SDK.UX.Utilities.InteractableHighlight::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InteractableHighlight__ctor_m2347555579 (InteractableHighlight_t3226167531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractableHighlight__ctor_m2347555579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string highlightColorProperty = "_Color";
		__this->set_highlightColorProperty_10(_stringLiteral3957048425);
		// private string outlineColorProperty = "_Color";
		__this->set_outlineColorProperty_11(_stringLiteral3957048425);
		// private Color highlightColor = Color.green;
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_highlightColor_12(L_0);
		// private Color outlineColor = Color.white;
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_outlineColor_13(L_1);
		// private HighlightedMaterialStyle targetStyle = HighlightedMaterialStyle.Highlight;
		__this->set_targetStyle_16(1);
		IL2CPP_RUNTIME_CLASS_INIT(BaseFocusHandler_t2626431732_il2cpp_TypeInfo_var);
		BaseFocusHandler__ctor_m897180564(__this, /*hidden argument*/NULL);
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
