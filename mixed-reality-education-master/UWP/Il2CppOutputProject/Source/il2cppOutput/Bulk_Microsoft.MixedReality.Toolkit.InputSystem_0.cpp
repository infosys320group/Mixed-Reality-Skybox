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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer
struct GenericPointer_t429146605;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource
struct BaseGenericInputSource_t2600286248;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource
struct DictationInputSource_t3573619954;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c
struct U3CU3Ec_t2711997429;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource
struct SpeechInputSource_t3338687719;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource
struct TouchscreenInputSource_t2670215125;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer
struct TouchPointer_t3591038763;
// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose
struct DebugInteractionSourcePose_t1033395397;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[]
struct SpeechCommandsU5BU5D_t2632020690;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.MixedRealityConfigurationProfile
struct MixedRealityConfigurationProfile_t1059352949;
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[]
struct RayStepU5BU5D_t3168306194;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController
struct IMixedRealityController_t2386858716;
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
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t2431669734;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult
struct IPointerResult_t1864173623;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t3532020808;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t4279106780;
// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager
struct MixedRealityManager_t1093932290;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate
struct WaitForUpdate_t3436990142;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t2831853999;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>[]
struct SlotU5BU5D_t247039717;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>
struct HashSet_1_t2155988237;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>
struct IEqualityComparer_1_t1403403485;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Internal.Interfaces.IMixedRealityManager>>
struct List_1_t3172203449;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t253793507;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// UnityEngine.WaitUntil
struct WaitUntil_t3373419216;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t838322161;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct DictationCompletedDelegate_t174017847;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct DictationErrorHandler_t287248442;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct DictationHypothesisDelegate_t263093018;
// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct DictationResultDelegate_t1743835588;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t2141680640;
// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_t1663548656;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t3092874173;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t1653704947;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_t3536885450_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationCompletedDelegate_t174017847_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationErrorHandler_t287248442_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationHypothesisDelegate_t263093018_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationInputSource_t3573619954_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationRecognizer_t838322161_il2cpp_TypeInfo_var;
extern RuntimeClass* DictationResultDelegate_t1743835588_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t2155988237_il2cpp_TypeInfo_var;
extern RuntimeClass* IBaseRayStabilizer_t3532020808_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_t2386858716_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSource_t2812969632_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityFocusProvider_t3695233313_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityGazeProvider_t1329944573_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSource_t3685197710_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointerU5BU5D_t2431669734_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* KeywordRecognizer_t2141680640_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputAction_t3419222324_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityManager_t1093932290_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PhraseRecognizedDelegate_t3092874173_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RayStepU5BU5D_t3168306194_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TouchPointer_t3591038763_il2cpp_TypeInfo_var;
extern RuntimeClass* TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t2711997429_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForUpdate_t3436990142_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t3373419216_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1022120526;
extern String_t* _stringLiteral105663994;
extern String_t* _stringLiteral148519890;
extern String_t* _stringLiteral2190511732;
extern String_t* _stringLiteral255022282;
extern String_t* _stringLiteral2648933646;
extern String_t* _stringLiteral2749875858;
extern String_t* _stringLiteral2897630553;
extern String_t* _stringLiteral3786885215;
extern String_t* _stringLiteral562984263;
extern String_t* _stringLiteral575571321;
extern String_t* _stringLiteral629396478;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__16_t2268004534_m536952743_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__17_t889680548_m1627064737_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__9_t3701686637_m2923109606_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609_RuntimeMethod_var;
extern const RuntimeMethod* DictationInputSource_DictationRecognizer_DictationComplete_m2164910751_RuntimeMethod_var;
extern const RuntimeMethod* DictationInputSource_DictationRecognizer_DictationError_m2666438514_RuntimeMethod_var;
extern const RuntimeMethod* DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478_RuntimeMethod_var;
extern const RuntimeMethod* DictationInputSource_DictationRecognizer_DictationResult_m262009734_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m383986263_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2080996668_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3966105722_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m4025184632_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m3212570406_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_GetEnumerator_m259392267_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Remove_m94792918_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m3045394649_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m2591076122_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m463439517_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m2962682148_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m176711023_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3822285555_RuntimeMethod_var;
extern const RuntimeMethod* SpeechInputSource_KeywordRecognizer_OnPhraseRecognized_m3233104579_RuntimeMethod_var;
extern const RuntimeMethod* U3CRunU3Ed__16_MoveNext_m1231441746_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_0_m2756785513_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_1_m1190701572_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_0_m1228090609_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_1_m1228156145_RuntimeMethod_var;
extern const uint32_t BaseGenericInputSource_Equals_m1596877041_MetadataUsageId;
extern const uint32_t BaseGenericInputSource_Equals_m906800837_MetadataUsageId;
extern const uint32_t BaseGenericInputSource__ctor_m1477578704_MetadataUsageId;
extern const uint32_t BaseGenericInputSource_get_InputSystem_m3766388341_MetadataUsageId;
extern const uint32_t DebugInteractionSourcePose_TryGetPointerRay_m3859713426_MetadataUsageId;
extern const uint32_t DebugInteractionSourcePose__ctor_m4032196296_MetadataUsageId;
extern const uint32_t DictationInputSource_DictationRecognizer_DictationComplete_m2164910751_MetadataUsageId;
extern const uint32_t DictationInputSource_DictationRecognizer_DictationError_m2666438514_MetadataUsageId;
extern const uint32_t DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478_MetadataUsageId;
extern const uint32_t DictationInputSource_DictationRecognizer_DictationResult_m262009734_MetadataUsageId;
extern const uint32_t DictationInputSource_Dispose_m2238760783_MetadataUsageId;
extern const uint32_t DictationInputSource_Run_m642042872_MetadataUsageId;
extern const uint32_t DictationInputSource_StartRecordingAsync_m3985578731_MetadataUsageId;
extern const uint32_t DictationInputSource_StopRecordingAsync_m1367732392_MetadataUsageId;
extern const uint32_t DictationInputSource__cctor_m930319373_MetadataUsageId;
extern const uint32_t DictationInputSource__ctor_m2357551646_MetadataUsageId;
extern const uint32_t DictationInputSource_get_IsListening_m3420185417_MetadataUsageId;
extern const uint32_t DictationInputSource_set_IsListening_m3821029428_MetadataUsageId;
extern const uint32_t GenericPointer_Equals_m1952780150_MetadataUsageId;
extern const uint32_t GenericPointer_Equals_m4289535493_MetadataUsageId;
extern const uint32_t GenericPointer_OnPreRaycast_m3597384523_MetadataUsageId;
extern const uint32_t GenericPointer_TryGetPointerPosition_m2768788553_MetadataUsageId;
extern const uint32_t GenericPointer_TryGetPointerRotation_m3389968377_MetadataUsageId;
extern const uint32_t GenericPointer__ctor_m3815240207_MetadataUsageId;
extern const uint32_t GenericPointer_set_Controller_m1441504939_MetadataUsageId;
extern const uint32_t SpeechInputSource_Initialize_m2562938635_MetadataUsageId;
extern const uint32_t SpeechInputSource_OnPhraseRecognized_m2402041898_MetadataUsageId;
extern const uint32_t SpeechInputSource_RaiseKeywordAction_m314662571_MetadataUsageId;
extern const uint32_t SpeechInputSource_Run_m3598150067_MetadataUsageId;
extern const uint32_t SpeechInputSource_WindowsCleanup_m2454173580_MetadataUsageId;
extern const uint32_t SpeechInputSource_WindowsSetup_m1213271869_MetadataUsageId;
extern const uint32_t SpeechInputSource__ctor_m2868700798_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_AddOrUpdateTouch_m2674627957_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_RemoveTouch_m3629533079_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_Run_m612308288_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_TryGetPointerPosition_m685968135_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_TryGetTouchPointer_m2182457724_MetadataUsageId;
extern const uint32_t TouchscreenInputSource__cctor_m652219211_MetadataUsageId;
extern const uint32_t TouchscreenInputSource__ctor_m120589884_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_get_HoldAction_m1070353476_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_get_PointerAction_m3597869734_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_get_Pointers_m3269699889_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_set_HoldAction_m4158946731_MetadataUsageId;
extern const uint32_t TouchscreenInputSource_set_PointerAction_m4265941453_MetadataUsageId;
extern const uint32_t U3CRunU3Ed__16_MoveNext_m1231441746_MetadataUsageId;
extern const uint32_t U3CRunU3Ed__17_MoveNext_m4213190585_MetadataUsageId;
extern const uint32_t U3CRunU3Ed__9_MoveNext_m3999760580_MetadataUsageId;
extern const uint32_t U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374_MetadataUsageId;
extern const uint32_t U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_1_m1190701572_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m3941602108_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SemanticMeaning_t3533498486_marshaled_com;
struct SemanticMeaning_t3533498486_marshaled_pinvoke;

struct SpeechCommandsU5BU5D_t2632020690;
struct RayStepU5BU5D_t3168306194;
struct IMixedRealityPointerU5BU5D_t2431669734;
struct StringU5BU5D_t1281789340;
struct LayerMaskU5BU5D_t253793507;
struct TouchU5BU5D_t1849554061;
struct SemanticMeaningU5BU5D_t1653704947;


#ifndef U3CMODULEU3E_T692745566_H
#define U3CMODULEU3E_T692745566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745566 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745566_H
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
#ifndef BASEGENERICINPUTSOURCE_T2600286248_H
#define BASEGENERICINPUTSOURCE_T2600286248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource
struct  BaseGenericInputSource_t2600286248  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t2431669734* ___U3CPointersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CSourceIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_1() const { return ___U3CSourceIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_1() { return &___U3CSourceIdU3Ek__BackingField_1; }
	inline void set_U3CSourceIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CSourceNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_2() const { return ___U3CSourceNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_2() { return &___U3CSourceNameU3Ek__BackingField_2; }
	inline void set_U3CSourceNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CPointersU3Ek__BackingField_3)); }
	inline IMixedRealityPointerU5BU5D_t2431669734* get_U3CPointersU3Ek__BackingField_3() const { return ___U3CPointersU3Ek__BackingField_3; }
	inline IMixedRealityPointerU5BU5D_t2431669734** get_address_of_U3CPointersU3Ek__BackingField_3() { return &___U3CPointersU3Ek__BackingField_3; }
	inline void set_U3CPointersU3Ek__BackingField_3(IMixedRealityPointerU5BU5D_t2431669734* value)
	{
		___U3CPointersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointersU3Ek__BackingField_3), value);
	}
};

struct BaseGenericInputSource_t2600286248_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::inputSystem
	RuntimeObject* ___inputSystem_0;

public:
	inline static int32_t get_offset_of_inputSystem_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248_StaticFields, ___inputSystem_0)); }
	inline RuntimeObject* get_inputSystem_0() const { return ___inputSystem_0; }
	inline RuntimeObject** get_address_of_inputSystem_0() { return &___inputSystem_0; }
	inline void set_inputSystem_0(RuntimeObject* value)
	{
		___inputSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEGENERICINPUTSOURCE_T2600286248_H
#ifndef U3CU3EC_T2711997429_H
#define U3CU3EC_T2711997429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c
struct  U3CU3Ec_t2711997429  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2711997429_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<>9
	U3CU3Ec_t2711997429 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<>9__18_0
	Func_1_t3822001908 * ___U3CU3E9__18_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<>9__18_1
	Func_1_t3822001908 * ___U3CU3E9__18_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<>9__19_0
	Func_1_t3822001908 * ___U3CU3E9__19_0_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<>9__19_1
	Func_1_t3822001908 * ___U3CU3E9__19_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2711997429_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2711997429 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2711997429 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2711997429 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2711997429_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_1_t3822001908 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_1_t3822001908 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__18_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2711997429_StaticFields, ___U3CU3E9__18_1_2)); }
	inline Func_1_t3822001908 * get_U3CU3E9__18_1_2() const { return ___U3CU3E9__18_1_2; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__18_1_2() { return &___U3CU3E9__18_1_2; }
	inline void set_U3CU3E9__18_1_2(Func_1_t3822001908 * value)
	{
		___U3CU3E9__18_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__18_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2711997429_StaticFields, ___U3CU3E9__19_0_3)); }
	inline Func_1_t3822001908 * get_U3CU3E9__19_0_3() const { return ___U3CU3E9__19_0_3; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__19_0_3() { return &___U3CU3E9__19_0_3; }
	inline void set_U3CU3E9__19_0_3(Func_1_t3822001908 * value)
	{
		___U3CU3E9__19_0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__19_0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2711997429_StaticFields, ___U3CU3E9__19_1_4)); }
	inline Func_1_t3822001908 * get_U3CU3E9__19_1_4() const { return ___U3CU3E9__19_1_4; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__19_1_4() { return &___U3CU3E9__19_1_4; }
	inline void set_U3CU3E9__19_1_4(Func_1_t3822001908 * value)
	{
		___U3CU3E9__19_1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__19_1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2711997429_H
#ifndef SIMPLECOROUTINEAWAITER_T2831853999_H
#define SIMPLECOROUTINEAWAITER_T2831853999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_t2831853999  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_t1264377477 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t2831853999, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t2831853999, ___continuation_1)); }
	inline Action_t1264377477 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t1264377477 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t1264377477 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t2831853999, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOROUTINEAWAITER_T2831853999_H
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
#ifndef HASHSET_1_T2155988237_H
#define HASHSET_1_T2155988237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>
struct  HashSet_1_t2155988237  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t385246372* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t247039717* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t950877179 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____buckets_7)); }
	inline Int32U5BU5D_t385246372* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t385246372** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t385246372* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____slots_8)); }
	inline SlotU5BU5D_t247039717* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t247039717** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t247039717* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t2155988237, ____siInfo_14)); }
	inline SerializationInfo_t950877179 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t950877179 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T2155988237_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef DICTATIONINPUTSOURCE_T3573619954_H
#define DICTATIONINPUTSOURCE_T3573619954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource
struct  DictationInputSource_t3573619954  : public BaseGenericInputSource_t2600286248
{
public:

public:
};

struct DictationInputSource_t3573619954_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::source
	RuntimeObject* ___source_5;
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::dictationRecognizer
	DictationRecognizer_t838322161 * ___dictationRecognizer_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::hasFailed
	bool ___hasFailed_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::hasListener
	bool ___hasListener_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::isTransitioning
	bool ___isTransitioning_9;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::textSoFar
	StringBuilder_t * ___textSoFar_10;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::DeviceName
	String_t* ___DeviceName_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::samplingRate
	int32_t ___samplingRate_12;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::dictationResult
	String_t* ___dictationResult_13;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::dictationAudioClip
	AudioClip_t3680889665 * ___dictationAudioClip_14;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::NextUpdate
	WaitForUpdate_t3436990142 * ___NextUpdate_15;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___U3CIsListeningU3Ek__BackingField_4)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_4() const { return ___U3CIsListeningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_4() { return &___U3CIsListeningU3Ek__BackingField_4; }
	inline void set_U3CIsListeningU3Ek__BackingField_4(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___source_5)); }
	inline RuntimeObject* get_source_5() const { return ___source_5; }
	inline RuntimeObject** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(RuntimeObject* value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_dictationRecognizer_6() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___dictationRecognizer_6)); }
	inline DictationRecognizer_t838322161 * get_dictationRecognizer_6() const { return ___dictationRecognizer_6; }
	inline DictationRecognizer_t838322161 ** get_address_of_dictationRecognizer_6() { return &___dictationRecognizer_6; }
	inline void set_dictationRecognizer_6(DictationRecognizer_t838322161 * value)
	{
		___dictationRecognizer_6 = value;
		Il2CppCodeGenWriteBarrier((&___dictationRecognizer_6), value);
	}

	inline static int32_t get_offset_of_hasFailed_7() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___hasFailed_7)); }
	inline bool get_hasFailed_7() const { return ___hasFailed_7; }
	inline bool* get_address_of_hasFailed_7() { return &___hasFailed_7; }
	inline void set_hasFailed_7(bool value)
	{
		___hasFailed_7 = value;
	}

	inline static int32_t get_offset_of_hasListener_8() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___hasListener_8)); }
	inline bool get_hasListener_8() const { return ___hasListener_8; }
	inline bool* get_address_of_hasListener_8() { return &___hasListener_8; }
	inline void set_hasListener_8(bool value)
	{
		___hasListener_8 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_9() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___isTransitioning_9)); }
	inline bool get_isTransitioning_9() const { return ___isTransitioning_9; }
	inline bool* get_address_of_isTransitioning_9() { return &___isTransitioning_9; }
	inline void set_isTransitioning_9(bool value)
	{
		___isTransitioning_9 = value;
	}

	inline static int32_t get_offset_of_textSoFar_10() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___textSoFar_10)); }
	inline StringBuilder_t * get_textSoFar_10() const { return ___textSoFar_10; }
	inline StringBuilder_t ** get_address_of_textSoFar_10() { return &___textSoFar_10; }
	inline void set_textSoFar_10(StringBuilder_t * value)
	{
		___textSoFar_10 = value;
		Il2CppCodeGenWriteBarrier((&___textSoFar_10), value);
	}

	inline static int32_t get_offset_of_DeviceName_11() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___DeviceName_11)); }
	inline String_t* get_DeviceName_11() const { return ___DeviceName_11; }
	inline String_t** get_address_of_DeviceName_11() { return &___DeviceName_11; }
	inline void set_DeviceName_11(String_t* value)
	{
		___DeviceName_11 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceName_11), value);
	}

	inline static int32_t get_offset_of_samplingRate_12() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___samplingRate_12)); }
	inline int32_t get_samplingRate_12() const { return ___samplingRate_12; }
	inline int32_t* get_address_of_samplingRate_12() { return &___samplingRate_12; }
	inline void set_samplingRate_12(int32_t value)
	{
		___samplingRate_12 = value;
	}

	inline static int32_t get_offset_of_dictationResult_13() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___dictationResult_13)); }
	inline String_t* get_dictationResult_13() const { return ___dictationResult_13; }
	inline String_t** get_address_of_dictationResult_13() { return &___dictationResult_13; }
	inline void set_dictationResult_13(String_t* value)
	{
		___dictationResult_13 = value;
		Il2CppCodeGenWriteBarrier((&___dictationResult_13), value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_14() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___dictationAudioClip_14)); }
	inline AudioClip_t3680889665 * get_dictationAudioClip_14() const { return ___dictationAudioClip_14; }
	inline AudioClip_t3680889665 ** get_address_of_dictationAudioClip_14() { return &___dictationAudioClip_14; }
	inline void set_dictationAudioClip_14(AudioClip_t3680889665 * value)
	{
		___dictationAudioClip_14 = value;
		Il2CppCodeGenWriteBarrier((&___dictationAudioClip_14), value);
	}

	inline static int32_t get_offset_of_NextUpdate_15() { return static_cast<int32_t>(offsetof(DictationInputSource_t3573619954_StaticFields, ___NextUpdate_15)); }
	inline WaitForUpdate_t3436990142 * get_NextUpdate_15() const { return ___NextUpdate_15; }
	inline WaitForUpdate_t3436990142 ** get_address_of_NextUpdate_15() { return &___NextUpdate_15; }
	inline void set_NextUpdate_15(WaitForUpdate_t3436990142 * value)
	{
		___NextUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___NextUpdate_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONINPUTSOURCE_T3573619954_H
#ifndef DEBUGINTERACTIONSOURCESTATE_T66132725_H
#define DEBUGINTERACTIONSOURCESTATE_T66132725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct  DebugInteractionSourceState_t66132725 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::Pressed
	bool ___Pressed_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::Grasped
	bool ___Grasped_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::MenuPressed
	bool ___MenuPressed_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::SelectPressed
	bool ___SelectPressed_3;
	// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::SourcePose
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;

public:
	inline static int32_t get_offset_of_Pressed_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___Pressed_0)); }
	inline bool get_Pressed_0() const { return ___Pressed_0; }
	inline bool* get_address_of_Pressed_0() { return &___Pressed_0; }
	inline void set_Pressed_0(bool value)
	{
		___Pressed_0 = value;
	}

	inline static int32_t get_offset_of_Grasped_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___Grasped_1)); }
	inline bool get_Grasped_1() const { return ___Grasped_1; }
	inline bool* get_address_of_Grasped_1() { return &___Grasped_1; }
	inline void set_Grasped_1(bool value)
	{
		___Grasped_1 = value;
	}

	inline static int32_t get_offset_of_MenuPressed_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___MenuPressed_2)); }
	inline bool get_MenuPressed_2() const { return ___MenuPressed_2; }
	inline bool* get_address_of_MenuPressed_2() { return &___MenuPressed_2; }
	inline void set_MenuPressed_2(bool value)
	{
		___MenuPressed_2 = value;
	}

	inline static int32_t get_offset_of_SelectPressed_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___SelectPressed_3)); }
	inline bool get_SelectPressed_3() const { return ___SelectPressed_3; }
	inline bool* get_address_of_SelectPressed_3() { return &___SelectPressed_3; }
	inline void set_SelectPressed_3(bool value)
	{
		___SelectPressed_3 = value;
	}

	inline static int32_t get_offset_of_SourcePose_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___SourcePose_4)); }
	inline DebugInteractionSourcePose_t1033395397 * get_SourcePose_4() const { return ___SourcePose_4; }
	inline DebugInteractionSourcePose_t1033395397 ** get_address_of_SourcePose_4() { return &___SourcePose_4; }
	inline void set_SourcePose_4(DebugInteractionSourcePose_t1033395397 * value)
	{
		___SourcePose_4 = value;
		Il2CppCodeGenWriteBarrier((&___SourcePose_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct DebugInteractionSourceState_t66132725_marshaled_pinvoke
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct DebugInteractionSourceState_t66132725_marshaled_com
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;
};
#endif // DEBUGINTERACTIONSOURCESTATE_T66132725_H
#ifndef WAITFORUPDATE_T3436990142_H
#define WAITFORUPDATE_T3436990142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate
struct  WaitForUpdate_t3436990142  : public CustomYieldInstruction_t1895667560
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORUPDATE_T3436990142_H
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
#ifndef ENUMERATOR_T3861165508_H
#define ENUMERATOR_T3861165508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>
struct  Enumerator_t3861165508 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2155988237 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	TouchPointer_t3591038763 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t3861165508, ____set_0)); }
	inline HashSet_1_t2155988237 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t2155988237 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t2155988237 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3861165508, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3861165508, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3861165508, ____current_3)); }
	inline TouchPointer_t3591038763 * get__current_3() const { return ____current_3; }
	inline TouchPointer_t3591038763 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(TouchPointer_t3591038763 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3861165508_H
#ifndef ENUMERATOR_T3350232909_H
#define ENUMERATOR_T3350232909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t3350232909 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t1645055638 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ____set_0)); }
	inline HashSet_1_t1645055638 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t1645055638 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t1645055638 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3350232909, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3350232909_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef TASKAWAITER_T919683548_H
#define TASKAWAITER_T919683548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t919683548 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t919683548, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
};
#endif // TASKAWAITER_T919683548_H
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
#ifndef WAITUNTIL_T3373419216_H
#define WAITUNTIL_T3373419216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t3373419216  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t3822001908 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t3373419216, ___m_Predicate_0)); }
	inline Func_1_t3822001908 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t3822001908 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t3822001908 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T3373419216_H
#ifndef SEMANTICMEANING_T3533498486_H
#define SEMANTICMEANING_T3533498486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SemanticMeaning
struct  SemanticMeaning_t3533498486 
{
public:
	// System.String UnityEngine.Windows.Speech.SemanticMeaning::key
	String_t* ___key_0;
	// System.String[] UnityEngine.Windows.Speech.SemanticMeaning::values
	StringU5BU5D_t1281789340* ___values_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(SemanticMeaning_t3533498486, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SemanticMeaning_t3533498486, ___values_1)); }
	inline StringU5BU5D_t1281789340* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t1281789340** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t1281789340* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_t3533498486_marshaled_pinvoke
{
	char* ___key_0;
	char** ___values_1;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.SemanticMeaning
struct SemanticMeaning_t3533498486_marshaled_com
{
	Il2CppChar* ___key_0;
	Il2CppChar** ___values_1;
};
#endif // SEMANTICMEANING_T3533498486_H
#ifndef RECOGNIZERSTARTBEHAVIOR_T3099677056_H
#define RECOGNIZERSTARTBEHAVIOR_T3099677056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/RecognizerStartBehavior
struct  RecognizerStartBehavior_t3099677056 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/RecognizerStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognizerStartBehavior_t3099677056, ___value___2)); }
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
#endif // RECOGNIZERSTARTBEHAVIOR_T3099677056_H
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
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
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef ASYNCVOIDMETHODBUILDER_T3819840891_H
#define ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t3819840891 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t3187275312 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t2326897723 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t2326897723 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_task_2)); }
	inline Task_t3187275312 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t3187275312 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t3187275312 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_pinvoke
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_com
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_com ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T3819840891_H
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
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_15)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_18)); }
	inline Task_t3187275312 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t3187275312 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___2)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___2)); }
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
#endif // TOUCHPHASE_T72348083_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___2)); }
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
#endif // TOUCHTYPE_T2034578258_H
#ifndef CONFIDENCELEVEL_T1067668299_H
#define CONFIDENCELEVEL_T1067668299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.ConfidenceLevel
struct  ConfidenceLevel_t1067668299 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.ConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceLevel_t1067668299, ___value___2)); }
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
#endif // CONFIDENCELEVEL_T1067668299_H
#ifndef DICTATIONCOMPLETIONCAUSE_T1460845807_H
#define DICTATIONCOMPLETIONCAUSE_T1460845807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationCompletionCause
struct  DictationCompletionCause_t1460845807 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.DictationCompletionCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictationCompletionCause_t1460845807, ___value___2)); }
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
#endif // DICTATIONCOMPLETIONCAUSE_T1460845807_H
#ifndef DICTATIONRECOGNIZER_T838322161_H
#define DICTATIONRECOGNIZER_T838322161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer
struct  DictationRecognizer_t838322161  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.DictationRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationHypothesis
	DictationHypothesisDelegate_t263093018 * ___DictationHypothesis_1;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationResult
	DictationResultDelegate_t1743835588 * ___DictationResult_2;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate UnityEngine.Windows.Speech.DictationRecognizer::DictationComplete
	DictationCompletedDelegate_t174017847 * ___DictationComplete_3;
	// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler UnityEngine.Windows.Speech.DictationRecognizer::DictationError
	DictationErrorHandler_t287248442 * ___DictationError_4;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(DictationRecognizer_t838322161, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_DictationHypothesis_1() { return static_cast<int32_t>(offsetof(DictationRecognizer_t838322161, ___DictationHypothesis_1)); }
	inline DictationHypothesisDelegate_t263093018 * get_DictationHypothesis_1() const { return ___DictationHypothesis_1; }
	inline DictationHypothesisDelegate_t263093018 ** get_address_of_DictationHypothesis_1() { return &___DictationHypothesis_1; }
	inline void set_DictationHypothesis_1(DictationHypothesisDelegate_t263093018 * value)
	{
		___DictationHypothesis_1 = value;
		Il2CppCodeGenWriteBarrier((&___DictationHypothesis_1), value);
	}

	inline static int32_t get_offset_of_DictationResult_2() { return static_cast<int32_t>(offsetof(DictationRecognizer_t838322161, ___DictationResult_2)); }
	inline DictationResultDelegate_t1743835588 * get_DictationResult_2() const { return ___DictationResult_2; }
	inline DictationResultDelegate_t1743835588 ** get_address_of_DictationResult_2() { return &___DictationResult_2; }
	inline void set_DictationResult_2(DictationResultDelegate_t1743835588 * value)
	{
		___DictationResult_2 = value;
		Il2CppCodeGenWriteBarrier((&___DictationResult_2), value);
	}

	inline static int32_t get_offset_of_DictationComplete_3() { return static_cast<int32_t>(offsetof(DictationRecognizer_t838322161, ___DictationComplete_3)); }
	inline DictationCompletedDelegate_t174017847 * get_DictationComplete_3() const { return ___DictationComplete_3; }
	inline DictationCompletedDelegate_t174017847 ** get_address_of_DictationComplete_3() { return &___DictationComplete_3; }
	inline void set_DictationComplete_3(DictationCompletedDelegate_t174017847 * value)
	{
		___DictationComplete_3 = value;
		Il2CppCodeGenWriteBarrier((&___DictationComplete_3), value);
	}

	inline static int32_t get_offset_of_DictationError_4() { return static_cast<int32_t>(offsetof(DictationRecognizer_t838322161, ___DictationError_4)); }
	inline DictationErrorHandler_t287248442 * get_DictationError_4() const { return ___DictationError_4; }
	inline DictationErrorHandler_t287248442 ** get_address_of_DictationError_4() { return &___DictationError_4; }
	inline void set_DictationError_4(DictationErrorHandler_t287248442 * value)
	{
		___DictationError_4 = value;
		Il2CppCodeGenWriteBarrier((&___DictationError_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRECOGNIZER_T838322161_H
#ifndef PHRASERECOGNIZER_T1663548656_H
#define PHRASERECOGNIZER_T1663548656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer
struct  PhraseRecognizer_t1663548656  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t3092874173 * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t1663548656, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_t1663548656, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t3092874173 * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t3092874173 ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t3092874173 * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnPhraseRecognized_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZER_T1663548656_H
#ifndef SPEECHSYSTEMSTATUS_T3318883750_H
#define SPEECHSYSTEMSTATUS_T3318883750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.SpeechSystemStatus
struct  SpeechSystemStatus_t3318883750 
{
public:
	// System.Int32 UnityEngine.Windows.Speech.SpeechSystemStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeechSystemStatus_t3318883750, ___value___2)); }
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
#endif // SPEECHSYSTEMSTATUS_T3318883750_H
#ifndef GENERICPOINTER_T429146605_H
#define GENERICPOINTER_T429146605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer
struct  GenericPointer_t429146605  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<InputSystem>k__BackingField
	RuntimeObject* ___U3CInputSystemU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::controller
	RuntimeObject* ___controller_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_2;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_4;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.ICursorModifier Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<TeleportHotSpot>k__BackingField
	RuntimeObject* ___U3CTeleportHotSpotU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<IsInteractionEnabled>k__BackingField
	bool ___U3CIsInteractionEnabledU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t3168306194* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_t253793507* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<RaycastMode>k__BackingField
	int32_t ___U3CRaycastModeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerOrientation>k__BackingField
	float ___U3CPointerOrientationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CInputSystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CInputSystemU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInputSystemU3Ek__BackingField_0() const { return ___U3CInputSystemU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInputSystemU3Ek__BackingField_0() { return &___U3CInputSystemU3Ek__BackingField_0; }
	inline void set_U3CInputSystemU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInputSystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSystemU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___controller_1)); }
	inline RuntimeObject* get_controller_1() const { return ___controller_1; }
	inline RuntimeObject** get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(RuntimeObject* value)
	{
		___controller_1 = value;
		Il2CppCodeGenWriteBarrier((&___controller_1), value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerIdU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_2() const { return ___U3CPointerIdU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_2() { return &___U3CPointerIdU3Ek__BackingField_2; }
	inline void set_U3CPointerIdU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_3() const { return ___U3CPointerNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_3() { return &___U3CPointerNameU3Ek__BackingField_3; }
	inline void set_U3CPointerNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_inputSourceParent_4() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___inputSourceParent_4)); }
	inline RuntimeObject* get_inputSourceParent_4() const { return ___inputSourceParent_4; }
	inline RuntimeObject** get_address_of_inputSourceParent_4() { return &___inputSourceParent_4; }
	inline void set_inputSourceParent_4(RuntimeObject* value)
	{
		___inputSourceParent_4 = value;
		Il2CppCodeGenWriteBarrier((&___inputSourceParent_4), value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CBaseCursorU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_5() const { return ___U3CBaseCursorU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_5() { return &___U3CBaseCursorU3Ek__BackingField_5; }
	inline void set_U3CBaseCursorU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseCursorU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CCursorModifierU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_6() const { return ___U3CCursorModifierU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_6() { return &___U3CCursorModifierU3Ek__BackingField_6; }
	inline void set_U3CCursorModifierU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCursorModifierU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CTeleportHotSpotU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CTeleportHotSpotU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CTeleportHotSpotU3Ek__BackingField_7() const { return ___U3CTeleportHotSpotU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CTeleportHotSpotU3Ek__BackingField_7() { return &___U3CTeleportHotSpotU3Ek__BackingField_7; }
	inline void set_U3CTeleportHotSpotU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CTeleportHotSpotU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTeleportHotSpotU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsInteractionEnabledU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CIsInteractionEnabledU3Ek__BackingField_8)); }
	inline bool get_U3CIsInteractionEnabledU3Ek__BackingField_8() const { return ___U3CIsInteractionEnabledU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsInteractionEnabledU3Ek__BackingField_8() { return &___U3CIsInteractionEnabledU3Ek__BackingField_8; }
	inline void set_U3CIsInteractionEnabledU3Ek__BackingField_8(bool value)
	{
		___U3CIsInteractionEnabledU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CIsFocusLockedU3Ek__BackingField_9)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_9() const { return ___U3CIsFocusLockedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_9() { return &___U3CIsFocusLockedU3Ek__BackingField_9; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_9(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_t3168306194* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_t3168306194** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_t3168306194* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRaysU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_t253793507* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_t253793507** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_t253793507* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusTargetU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRayStabilizerU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CRaycastModeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRaycastModeU3Ek__BackingField_16)); }
	inline int32_t get_U3CRaycastModeU3Ek__BackingField_16() const { return ___U3CRaycastModeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CRaycastModeU3Ek__BackingField_16() { return &___U3CRaycastModeU3Ek__BackingField_16; }
	inline void set_U3CRaycastModeU3Ek__BackingField_16(int32_t value)
	{
		___U3CRaycastModeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CPointerOrientationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerOrientationU3Ek__BackingField_18)); }
	inline float get_U3CPointerOrientationU3Ek__BackingField_18() const { return ___U3CPointerOrientationU3Ek__BackingField_18; }
	inline float* get_address_of_U3CPointerOrientationU3Ek__BackingField_18() { return &___U3CPointerOrientationU3Ek__BackingField_18; }
	inline void set_U3CPointerOrientationU3Ek__BackingField_18(float value)
	{
		___U3CPointerOrientationU3Ek__BackingField_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPOINTER_T429146605_H
#ifndef U3CRUNU3ED__17_T889680548_H
#define U3CRUNU3ED__17_T889680548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17
struct  U3CRunU3Ed__17_t889680548 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::<>u__1
	TaskAwaiter_t919683548  ___U3CU3Eu__1_2;
	// System.Object Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::<>u__2
	RuntimeObject * ___U3CU3Eu__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__17_t889680548, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__17_t889680548, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__17_t889680548, ___U3CU3Eu__1_2)); }
	inline TaskAwaiter_t919683548  get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline TaskAwaiter_t919683548 * get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(TaskAwaiter_t919683548  value)
	{
		___U3CU3Eu__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_3() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__17_t889680548, ___U3CU3Eu__2_3)); }
	inline RuntimeObject * get_U3CU3Eu__2_3() const { return ___U3CU3Eu__2_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__2_3() { return &___U3CU3Eu__2_3; }
	inline void set_U3CU3Eu__2_3(RuntimeObject * value)
	{
		___U3CU3Eu__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNU3ED__17_T889680548_H
#ifndef SPEECHINPUTSOURCE_T3338687719_H
#define SPEECHINPUTSOURCE_T3338687719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource
struct  SpeechInputSource_t3338687719  : public BaseGenericInputSource_t2600286248
{
public:
	// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/RecognizerStartBehavior Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::recognizerStart
	int32_t ___recognizerStart_4;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::<Commands>k__BackingField
	SpeechCommandsU5BU5D_t2632020690* ___U3CCommandsU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::waitForUpdate
	WaitForUpdate_t3436990142 * ___waitForUpdate_6;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::keywordRecognizer
	KeywordRecognizer_t2141680640 * ___keywordRecognizer_7;
	// UnityEngine.Windows.Speech.ConfidenceLevel Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_recognizerStart_4() { return static_cast<int32_t>(offsetof(SpeechInputSource_t3338687719, ___recognizerStart_4)); }
	inline int32_t get_recognizerStart_4() const { return ___recognizerStart_4; }
	inline int32_t* get_address_of_recognizerStart_4() { return &___recognizerStart_4; }
	inline void set_recognizerStart_4(int32_t value)
	{
		___recognizerStart_4 = value;
	}

	inline static int32_t get_offset_of_U3CCommandsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechInputSource_t3338687719, ___U3CCommandsU3Ek__BackingField_5)); }
	inline SpeechCommandsU5BU5D_t2632020690* get_U3CCommandsU3Ek__BackingField_5() const { return ___U3CCommandsU3Ek__BackingField_5; }
	inline SpeechCommandsU5BU5D_t2632020690** get_address_of_U3CCommandsU3Ek__BackingField_5() { return &___U3CCommandsU3Ek__BackingField_5; }
	inline void set_U3CCommandsU3Ek__BackingField_5(SpeechCommandsU5BU5D_t2632020690* value)
	{
		___U3CCommandsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommandsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_waitForUpdate_6() { return static_cast<int32_t>(offsetof(SpeechInputSource_t3338687719, ___waitForUpdate_6)); }
	inline WaitForUpdate_t3436990142 * get_waitForUpdate_6() const { return ___waitForUpdate_6; }
	inline WaitForUpdate_t3436990142 ** get_address_of_waitForUpdate_6() { return &___waitForUpdate_6; }
	inline void set_waitForUpdate_6(WaitForUpdate_t3436990142 * value)
	{
		___waitForUpdate_6 = value;
		Il2CppCodeGenWriteBarrier((&___waitForUpdate_6), value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_7() { return static_cast<int32_t>(offsetof(SpeechInputSource_t3338687719, ___keywordRecognizer_7)); }
	inline KeywordRecognizer_t2141680640 * get_keywordRecognizer_7() const { return ___keywordRecognizer_7; }
	inline KeywordRecognizer_t2141680640 ** get_address_of_keywordRecognizer_7() { return &___keywordRecognizer_7; }
	inline void set_keywordRecognizer_7(KeywordRecognizer_t2141680640 * value)
	{
		___keywordRecognizer_7 = value;
		Il2CppCodeGenWriteBarrier((&___keywordRecognizer_7), value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechInputSource_t3338687719, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_8() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_8; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_8(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHINPUTSOURCE_T3338687719_H
#ifndef U3CRUNU3ED__9_T3701686637_H
#define U3CRUNU3ED__9_T3701686637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9
struct  U3CRunU3Ed__9_t3701686637 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::<>4__this
	SpeechInputSource_t3338687719 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__9_t3701686637, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__9_t3701686637, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__9_t3701686637, ___U3CU3E4__this_2)); }
	inline SpeechInputSource_t3338687719 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpeechInputSource_t3338687719 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpeechInputSource_t3338687719 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__9_t3701686637, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNU3ED__9_T3701686637_H
#ifndef U3CRUNU3ED__16_T2268004534_H
#define U3CRUNU3ED__16_T2268004534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16
struct  U3CRunU3Ed__16_t2268004534 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::<>4__this
	TouchscreenInputSource_t2670215125 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__16_t2268004534, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__16_t2268004534, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__16_t2268004534, ___U3CU3E4__this_2)); }
	inline TouchscreenInputSource_t2670215125 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TouchscreenInputSource_t2670215125 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TouchscreenInputSource_t2670215125 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CRunU3Ed__16_t2268004534, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNU3ED__16_T2268004534_H
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
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef NULLABLE_1_T1213446279_H
#define NULLABLE_1_T1213446279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Ray>
struct  Nullable_1_t1213446279 
{
public:
	// T System.Nullable`1::value
	Ray_t3785851493  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1213446279, ___value_0)); }
	inline Ray_t3785851493  get_value_0() const { return ___value_0; }
	inline Ray_t3785851493 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t3785851493  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1213446279, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1213446279_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
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
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
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
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef KEYWORDRECOGNIZER_T2141680640_H
#define KEYWORDRECOGNIZER_T2141680640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.KeywordRecognizer
struct  KeywordRecognizer_t2141680640  : public PhraseRecognizer_t1663548656
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t2141680640, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CKeywordsU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYWORDRECOGNIZER_T2141680640_H
#ifndef PHRASERECOGNIZEDEVENTARGS_T3182631328_H
#define PHRASERECOGNIZEDEVENTARGS_T3182631328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct  PhraseRecognizedEventArgs_t3182631328 
{
public:
	// UnityEngine.Windows.Speech.ConfidenceLevel UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::confidence
	int32_t ___confidence_0;
	// UnityEngine.Windows.Speech.SemanticMeaning[] UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::semanticMeanings
	SemanticMeaningU5BU5D_t1653704947* ___semanticMeanings_1;
	// System.String UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::text
	String_t* ___text_2;
	// System.DateTime UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseStartTime
	DateTime_t3738529785  ___phraseStartTime_3;
	// System.TimeSpan UnityEngine.Windows.Speech.PhraseRecognizedEventArgs::phraseDuration
	TimeSpan_t881159249  ___phraseDuration_4;

public:
	inline static int32_t get_offset_of_confidence_0() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t3182631328, ___confidence_0)); }
	inline int32_t get_confidence_0() const { return ___confidence_0; }
	inline int32_t* get_address_of_confidence_0() { return &___confidence_0; }
	inline void set_confidence_0(int32_t value)
	{
		___confidence_0 = value;
	}

	inline static int32_t get_offset_of_semanticMeanings_1() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t3182631328, ___semanticMeanings_1)); }
	inline SemanticMeaningU5BU5D_t1653704947* get_semanticMeanings_1() const { return ___semanticMeanings_1; }
	inline SemanticMeaningU5BU5D_t1653704947** get_address_of_semanticMeanings_1() { return &___semanticMeanings_1; }
	inline void set_semanticMeanings_1(SemanticMeaningU5BU5D_t1653704947* value)
	{
		___semanticMeanings_1 = value;
		Il2CppCodeGenWriteBarrier((&___semanticMeanings_1), value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t3182631328, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}

	inline static int32_t get_offset_of_phraseStartTime_3() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t3182631328, ___phraseStartTime_3)); }
	inline DateTime_t3738529785  get_phraseStartTime_3() const { return ___phraseStartTime_3; }
	inline DateTime_t3738529785 * get_address_of_phraseStartTime_3() { return &___phraseStartTime_3; }
	inline void set_phraseStartTime_3(DateTime_t3738529785  value)
	{
		___phraseStartTime_3 = value;
	}

	inline static int32_t get_offset_of_phraseDuration_4() { return static_cast<int32_t>(offsetof(PhraseRecognizedEventArgs_t3182631328, ___phraseDuration_4)); }
	inline TimeSpan_t881159249  get_phraseDuration_4() const { return ___phraseDuration_4; }
	inline TimeSpan_t881159249 * get_address_of_phraseDuration_4() { return &___phraseDuration_4; }
	inline void set_phraseDuration_4(TimeSpan_t881159249  value)
	{
		___phraseDuration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t3182631328_marshaled_pinvoke
{
	int32_t ___confidence_0;
	SemanticMeaning_t3533498486_marshaled_pinvoke* ___semanticMeanings_1;
	char* ___text_2;
	DateTime_t3738529785  ___phraseStartTime_3;
	TimeSpan_t881159249  ___phraseDuration_4;
};
// Native definition for COM marshalling of UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct PhraseRecognizedEventArgs_t3182631328_marshaled_com
{
	int32_t ___confidence_0;
	SemanticMeaning_t3533498486_marshaled_com* ___semanticMeanings_1;
	Il2CppChar* ___text_2;
	DateTime_t3738529785  ___phraseStartTime_3;
	TimeSpan_t881159249  ___phraseDuration_4;
};
#endif // PHRASERECOGNIZEDEVENTARGS_T3182631328_H
#ifndef U3CSTARTRECORDINGASYNCU3ED__18_T3765132546_H
#define U3CSTARTRECORDINGASYNCU3ED__18_T3765132546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18
struct  U3CStartRecordingAsyncU3Ed__18_t3765132546 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::<>t__builder
	AsyncTaskMethodBuilder_t3536885450  ___U3CU3Et__builder_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::listener
	GameObject_t1113636619 * ___listener_2;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::initialSilenceTimeout
	float ___initialSilenceTimeout_3;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::autoSilenceTimeout
	float ___autoSilenceTimeout_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::recordingTime
	int32_t ___recordingTime_5;
	// System.Object Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::<>u__1
	RuntimeObject * ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t3536885450  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t3536885450 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t3536885450  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_listener_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___listener_2)); }
	inline GameObject_t1113636619 * get_listener_2() const { return ___listener_2; }
	inline GameObject_t1113636619 ** get_address_of_listener_2() { return &___listener_2; }
	inline void set_listener_2(GameObject_t1113636619 * value)
	{
		___listener_2 = value;
		Il2CppCodeGenWriteBarrier((&___listener_2), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___initialSilenceTimeout_3)); }
	inline float get_initialSilenceTimeout_3() const { return ___initialSilenceTimeout_3; }
	inline float* get_address_of_initialSilenceTimeout_3() { return &___initialSilenceTimeout_3; }
	inline void set_initialSilenceTimeout_3(float value)
	{
		___initialSilenceTimeout_3 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___autoSilenceTimeout_4)); }
	inline float get_autoSilenceTimeout_4() const { return ___autoSilenceTimeout_4; }
	inline float* get_address_of_autoSilenceTimeout_4() { return &___autoSilenceTimeout_4; }
	inline void set_autoSilenceTimeout_4(float value)
	{
		___autoSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_recordingTime_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___recordingTime_5)); }
	inline int32_t get_recordingTime_5() const { return ___recordingTime_5; }
	inline int32_t* get_address_of_recordingTime_5() { return &___recordingTime_5; }
	inline void set_recordingTime_5(int32_t value)
	{
		___recordingTime_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__18_t3765132546, ___U3CU3Eu__1_6)); }
	inline RuntimeObject * get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(RuntimeObject * value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGASYNCU3ED__18_T3765132546_H
#ifndef U3CSTOPRECORDINGASYNCU3ED__19_T2153598868_H
#define U3CSTOPRECORDINGASYNCU3ED__19_T2153598868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19
struct  U3CStopRecordingAsyncU3Ed__19_t2153598868 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::<>t__builder
	AsyncTaskMethodBuilder_t3536885450  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__19_t2153598868, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__19_t2153598868, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t3536885450  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t3536885450 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t3536885450  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__19_t2153598868, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPRECORDINGASYNCU3ED__19_T2153598868_H
#ifndef TOUCHSCREENINPUTSOURCE_T2670215125_H
#define TOUCHSCREENINPUTSOURCE_T2670215125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource
struct  TouchscreenInputSource_t2670215125  : public BaseGenericInputSource_t2600286248
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::MaxTapContactTime
	float ___MaxTapContactTime_5;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer> Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::activeTouches
	HashSet_1_t2155988237 * ___activeTouches_6;

public:
	inline static int32_t get_offset_of_MaxTapContactTime_5() { return static_cast<int32_t>(offsetof(TouchscreenInputSource_t2670215125, ___MaxTapContactTime_5)); }
	inline float get_MaxTapContactTime_5() const { return ___MaxTapContactTime_5; }
	inline float* get_address_of_MaxTapContactTime_5() { return &___MaxTapContactTime_5; }
	inline void set_MaxTapContactTime_5(float value)
	{
		___MaxTapContactTime_5 = value;
	}

	inline static int32_t get_offset_of_activeTouches_6() { return static_cast<int32_t>(offsetof(TouchscreenInputSource_t2670215125, ___activeTouches_6)); }
	inline HashSet_1_t2155988237 * get_activeTouches_6() const { return ___activeTouches_6; }
	inline HashSet_1_t2155988237 ** get_address_of_activeTouches_6() { return &___activeTouches_6; }
	inline void set_activeTouches_6(HashSet_1_t2155988237 * value)
	{
		___activeTouches_6 = value;
		Il2CppCodeGenWriteBarrier((&___activeTouches_6), value);
	}
};

struct TouchscreenInputSource_t2670215125_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::NextUpdate
	WaitForUpdate_t3436990142 * ___NextUpdate_7;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::<PointerAction>k__BackingField
	MixedRealityInputAction_t3419222324  ___U3CPointerActionU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::<HoldAction>k__BackingField
	MixedRealityInputAction_t3419222324  ___U3CHoldActionU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_NextUpdate_7() { return static_cast<int32_t>(offsetof(TouchscreenInputSource_t2670215125_StaticFields, ___NextUpdate_7)); }
	inline WaitForUpdate_t3436990142 * get_NextUpdate_7() const { return ___NextUpdate_7; }
	inline WaitForUpdate_t3436990142 ** get_address_of_NextUpdate_7() { return &___NextUpdate_7; }
	inline void set_NextUpdate_7(WaitForUpdate_t3436990142 * value)
	{
		___NextUpdate_7 = value;
		Il2CppCodeGenWriteBarrier((&___NextUpdate_7), value);
	}

	inline static int32_t get_offset_of_U3CPointerActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TouchscreenInputSource_t2670215125_StaticFields, ___U3CPointerActionU3Ek__BackingField_8)); }
	inline MixedRealityInputAction_t3419222324  get_U3CPointerActionU3Ek__BackingField_8() const { return ___U3CPointerActionU3Ek__BackingField_8; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_U3CPointerActionU3Ek__BackingField_8() { return &___U3CPointerActionU3Ek__BackingField_8; }
	inline void set_U3CPointerActionU3Ek__BackingField_8(MixedRealityInputAction_t3419222324  value)
	{
		___U3CPointerActionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CHoldActionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TouchscreenInputSource_t2670215125_StaticFields, ___U3CHoldActionU3Ek__BackingField_9)); }
	inline MixedRealityInputAction_t3419222324  get_U3CHoldActionU3Ek__BackingField_9() const { return ___U3CHoldActionU3Ek__BackingField_9; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_U3CHoldActionU3Ek__BackingField_9() { return &___U3CHoldActionU3Ek__BackingField_9; }
	inline void set_U3CHoldActionU3Ek__BackingField_9(MixedRealityInputAction_t3419222324  value)
	{
		___U3CHoldActionU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENINPUTSOURCE_T2670215125_H
#ifndef TOUCHPOINTER_T3591038763_H
#define TOUCHPOINTER_T3591038763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer
struct  TouchPointer_t3591038763  : public GenericPointer_t429146605
{
public:
	// UnityEngine.Touch Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::TouchData
	Touch_t1921856868  ___TouchData_19;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::ScreenPointRay
	Ray_t3785851493  ___ScreenPointRay_20;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::Lifetime
	float ___Lifetime_21;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_TouchData_19() { return static_cast<int32_t>(offsetof(TouchPointer_t3591038763, ___TouchData_19)); }
	inline Touch_t1921856868  get_TouchData_19() const { return ___TouchData_19; }
	inline Touch_t1921856868 * get_address_of_TouchData_19() { return &___TouchData_19; }
	inline void set_TouchData_19(Touch_t1921856868  value)
	{
		___TouchData_19 = value;
	}

	inline static int32_t get_offset_of_ScreenPointRay_20() { return static_cast<int32_t>(offsetof(TouchPointer_t3591038763, ___ScreenPointRay_20)); }
	inline Ray_t3785851493  get_ScreenPointRay_20() const { return ___ScreenPointRay_20; }
	inline Ray_t3785851493 * get_address_of_ScreenPointRay_20() { return &___ScreenPointRay_20; }
	inline void set_ScreenPointRay_20(Ray_t3785851493  value)
	{
		___ScreenPointRay_20 = value;
	}

	inline static int32_t get_offset_of_Lifetime_21() { return static_cast<int32_t>(offsetof(TouchPointer_t3591038763, ___Lifetime_21)); }
	inline float get_Lifetime_21() const { return ___Lifetime_21; }
	inline float* get_address_of_Lifetime_21() { return &___Lifetime_21; }
	inline void set_Lifetime_21(float value)
	{
		___Lifetime_21 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(TouchPointer_t3591038763, ___U3CControllerU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_22() const { return ___U3CControllerU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_22() { return &___U3CControllerU3Ek__BackingField_22; }
	inline void set_U3CControllerU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControllerU3Ek__BackingField_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPOINTER_T3591038763_H
#ifndef DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
#define DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose
struct  DebugInteractionSourcePose_t1033395397  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<TryGetFunctionsReturnTrue>k__BackingField
	bool ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsGripPositionAvailable>k__BackingField
	bool ___U3CIsGripPositionAvailableU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsGripRotationAvailable>k__BackingField
	bool ___U3CIsGripRotationAvailableU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<GripPosition>k__BackingField
	Vector3_t3722313464  ___U3CGripPositionU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Velocity>k__BackingField
	Vector3_t3722313464  ___U3CVelocityU3Ek__BackingField_7;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_8;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<GripRotation>k__BackingField
	Quaternion_t2301928331  ___U3CGripRotationU3Ek__BackingField_9;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<PointerRay>k__BackingField
	Nullable_1_t1213446279  ___U3CPointerRayU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0)); }
	inline bool get_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() const { return ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() { return &___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0; }
	inline void set_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0(bool value)
	{
		___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsPositionAvailableU3Ek__BackingField_1)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_1() const { return ___U3CIsPositionAvailableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_1() { return &___U3CIsPositionAvailableU3Ek__BackingField_1; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_1(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsRotationAvailableU3Ek__BackingField_2)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_2() const { return ___U3CIsRotationAvailableU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_2() { return &___U3CIsRotationAvailableU3Ek__BackingField_2; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_2(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsGripPositionAvailableU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsGripPositionAvailableU3Ek__BackingField_3)); }
	inline bool get_U3CIsGripPositionAvailableU3Ek__BackingField_3() const { return ___U3CIsGripPositionAvailableU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsGripPositionAvailableU3Ek__BackingField_3() { return &___U3CIsGripPositionAvailableU3Ek__BackingField_3; }
	inline void set_U3CIsGripPositionAvailableU3Ek__BackingField_3(bool value)
	{
		___U3CIsGripPositionAvailableU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsGripRotationAvailableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsGripRotationAvailableU3Ek__BackingField_4)); }
	inline bool get_U3CIsGripRotationAvailableU3Ek__BackingField_4() const { return ___U3CIsGripRotationAvailableU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsGripRotationAvailableU3Ek__BackingField_4() { return &___U3CIsGripRotationAvailableU3Ek__BackingField_4; }
	inline void set_U3CIsGripRotationAvailableU3Ek__BackingField_4(bool value)
	{
		___U3CIsGripRotationAvailableU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGripPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CGripPositionU3Ek__BackingField_6)); }
	inline Vector3_t3722313464  get_U3CGripPositionU3Ek__BackingField_6() const { return ___U3CGripPositionU3Ek__BackingField_6; }
	inline Vector3_t3722313464 * get_address_of_U3CGripPositionU3Ek__BackingField_6() { return &___U3CGripPositionU3Ek__BackingField_6; }
	inline void set_U3CGripPositionU3Ek__BackingField_6(Vector3_t3722313464  value)
	{
		___U3CGripPositionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CVelocityU3Ek__BackingField_7)); }
	inline Vector3_t3722313464  get_U3CVelocityU3Ek__BackingField_7() const { return ___U3CVelocityU3Ek__BackingField_7; }
	inline Vector3_t3722313464 * get_address_of_U3CVelocityU3Ek__BackingField_7() { return &___U3CVelocityU3Ek__BackingField_7; }
	inline void set_U3CVelocityU3Ek__BackingField_7(Vector3_t3722313464  value)
	{
		___U3CVelocityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CRotationU3Ek__BackingField_8)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_8() const { return ___U3CRotationU3Ek__BackingField_8; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_8() { return &___U3CRotationU3Ek__BackingField_8; }
	inline void set_U3CRotationU3Ek__BackingField_8(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGripRotationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CGripRotationU3Ek__BackingField_9)); }
	inline Quaternion_t2301928331  get_U3CGripRotationU3Ek__BackingField_9() const { return ___U3CGripRotationU3Ek__BackingField_9; }
	inline Quaternion_t2301928331 * get_address_of_U3CGripRotationU3Ek__BackingField_9() { return &___U3CGripRotationU3Ek__BackingField_9; }
	inline void set_U3CGripRotationU3Ek__BackingField_9(Quaternion_t2301928331  value)
	{
		___U3CGripRotationU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerRayU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CPointerRayU3Ek__BackingField_10)); }
	inline Nullable_1_t1213446279  get_U3CPointerRayU3Ek__BackingField_10() const { return ___U3CPointerRayU3Ek__BackingField_10; }
	inline Nullable_1_t1213446279 * get_address_of_U3CPointerRayU3Ek__BackingField_10() { return &___U3CPointerRayU3Ek__BackingField_10; }
	inline void set_U3CPointerRayU3Ek__BackingField_10(Nullable_1_t1213446279  value)
	{
		___U3CPointerRayU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
#ifndef SPEECHCOMMANDS_T2899055299_H
#define SPEECHCOMMANDS_T2899055299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands
struct  SpeechCommands_t2899055299 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::keyword
	String_t* ___keyword_0;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::keyCode
	int32_t ___keyCode_1;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::action
	MixedRealityInputAction_t3419222324  ___action_2;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t2899055299, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyword_0), value);
	}

	inline static int32_t get_offset_of_keyCode_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t2899055299, ___keyCode_1)); }
	inline int32_t get_keyCode_1() const { return ___keyCode_1; }
	inline int32_t* get_address_of_keyCode_1() { return &___keyCode_1; }
	inline void set_keyCode_1(int32_t value)
	{
		___keyCode_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t2899055299, ___action_2)); }
	inline MixedRealityInputAction_t3419222324  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_t3419222324 * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_t3419222324  value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands
struct SpeechCommands_t2899055299_marshaled_pinvoke
{
	char* ___keyword_0;
	int32_t ___keyCode_1;
	MixedRealityInputAction_t3419222324_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands
struct SpeechCommands_t2899055299_marshaled_com
{
	Il2CppChar* ___keyword_0;
	int32_t ___keyCode_1;
	MixedRealityInputAction_t3419222324_marshaled_com ___action_2;
};
#endif // SPEECHCOMMANDS_T2899055299_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
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
#ifndef DICTATIONCOMPLETEDDELEGATE_T174017847_H
#define DICTATIONCOMPLETEDDELEGATE_T174017847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
struct  DictationCompletedDelegate_t174017847  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONCOMPLETEDDELEGATE_T174017847_H
#ifndef DICTATIONERRORHANDLER_T287248442_H
#define DICTATIONERRORHANDLER_T287248442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
struct  DictationErrorHandler_t287248442  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONERRORHANDLER_T287248442_H
#ifndef DICTATIONHYPOTHESISDELEGATE_T263093018_H
#define DICTATIONHYPOTHESISDELEGATE_T263093018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
struct  DictationHypothesisDelegate_t263093018  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONHYPOTHESISDELEGATE_T263093018_H
#ifndef DICTATIONRESULTDELEGATE_T1743835588_H
#define DICTATIONRESULTDELEGATE_T1743835588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
struct  DictationResultDelegate_t1743835588  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONRESULTDELEGATE_T1743835588_H
#ifndef PHRASERECOGNIZEDDELEGATE_T3092874173_H
#define PHRASERECOGNIZEDDELEGATE_T3092874173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct  PhraseRecognizedDelegate_t3092874173  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHRASERECOGNIZEDDELEGATE_T3092874173_H
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
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t253793507  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t3493934918  m_Items[1];

public:
	inline LayerMask_t3493934918  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t3493934918 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t3493934918  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t3493934918  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t3493934918 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t3493934918  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t2431669734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[]
struct SpeechCommandsU5BU5D_t2632020690  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpeechCommands_t2899055299  m_Items[1];

public:
	inline SpeechCommands_t2899055299  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpeechCommands_t2899055299 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpeechCommands_t2899055299  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SpeechCommands_t2899055299  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpeechCommands_t2899055299 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpeechCommands_t2899055299  value)
	{
		m_Items[index] = value;
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
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t1653704947  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SemanticMeaning_t3533498486  m_Items[1];

public:
	inline SemanticMeaning_t3533498486  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SemanticMeaning_t3533498486 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SemanticMeaning_t3533498486  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SemanticMeaning_t3533498486  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SemanticMeaning_t3533498486 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SemanticMeaning_t3533498486  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};


// !!0 Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::GetManager<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityManager_GetManager_TisRuntimeObject_m2865840433_gshared (MixedRealityManager_t1093932290 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__17_t889680548 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233_gshared (AsyncTaskMethodBuilder_t3536885450 * __this, U3CStartRecordingAsyncU3Ed__18_t3765132546 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566_gshared (AsyncTaskMethodBuilder_t3536885450 * __this, U3CStopRecordingAsyncU3Ed__19_t2153598868 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, TaskAwaiter_t919683548 * p0, U3CRunU3Ed__17_t889680548 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__17_t889680548_m1162342243_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject ** p0, U3CRunU3Ed__17_t889680548 * p1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m4025184632_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m386560207_gshared (AsyncTaskMethodBuilder_t3536885450 * __this, RuntimeObject ** p0, U3CStartRecordingAsyncU3Ed__18_t3765132546 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1712662835_gshared (AsyncTaskMethodBuilder_t3536885450 * __this, RuntimeObject ** p0, U3CStopRecordingAsyncU3Ed__19_t2153598868 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__9_t3701686637 * p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2962682148_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m463439517_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3898097692_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__9_t3701686637_m1321740437_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject ** p0, U3CRunU3Ed__9_t3701686637 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m542532379_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3350232909  HashSet_1_GetEnumerator_m3346268098_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4213278602_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714175425_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1204547613_gshared (Enumerator_t3350232909 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__16_t2268004534 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m709044238_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__16_t2268004534_m2540568187_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject ** p0, U3CRunU3Ed__16_t2268004534 * p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m176711023_gshared (Nullable_1_t1213446279 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Nullable_1_get_Value_m3822285555_gshared (Nullable_1_t1213446279 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RayStep__ctor_m1977211725 (RayStep_t1822550659 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityManager_t1093932290 * MixedRealityManager_get_Instance_m1089585239 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager::GetManager<Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem>()
inline RuntimeObject* MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894 (MixedRealityManager_t1093932290 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityManager_t1093932290 *, const RuntimeMethod*))MixedRealityManager_GetManager_TisRuntimeObject_m2865840433_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_InputSystem_m3886914088 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerName_m65187794 (GenericPointer_t429146605 * __this, String_t* ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Rays()
extern "C" IL2CPP_METHOD_ATTR RayStepU5BU5D_t3168306194* GenericPointer_get_Rays_m1430041228 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::CopyRay(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR void RayStep_CopyRay_m3859787512 (RayStep_t1822550659 * __this, Ray_t3785851493  p0, float p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RayStabilizer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_RayStabilizer_m126448224 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::get_Origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RayStep_get_Origin_m3460680569 (RayStep_t1822550659 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RayStep_get_Direction_m1451214511 (RayStep_t1822550659 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m2948304386 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m1952780150 (GenericPointer_t429146605 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerId()
extern "C" IL2CPP_METHOD_ATTR uint32_t GenericPointer_get_PointerId_m877692364 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerName()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericPointer_get_PointerName_m3826680655 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m1744302937 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseGenericInputSource_get_InputSystem_m3766388341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m1596877041 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseGenericInputSource_get_SourceId_m2823944238 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* BaseGenericInputSource_get_SourceName_m3647105171 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::.ctor(System.String,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[])
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource__ctor_m1477578704 (BaseGenericInputSource_t2600286248 * __this, String_t* ___name0, IMixedRealityPointerU5BU5D_t2431669734* ___pointers1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer__ctor_m2173974091 (DictationRecognizer_t838322161 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationHypothesisDelegate__ctor_m1655841864 (DictationHypothesisDelegate_t263093018 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationHypothesis_m2589443395 (DictationRecognizer_t838322161 * __this, DictationHypothesisDelegate_t263093018 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationResultDelegate__ctor_m687752903 (DictationResultDelegate_t1743835588 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationResult_m3775844198 (DictationRecognizer_t838322161 * __this, DictationResultDelegate_t1743835588 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationCompletedDelegate__ctor_m3017344881 (DictationCompletedDelegate_t174017847 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationComplete_m517085233 (DictationRecognizer_t838322161 * __this, DictationCompletedDelegate_t174017847 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DictationErrorHandler__ctor_m2193595549 (DictationErrorHandler_t287248442 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::add_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_add_DictationError_m2679567939 (DictationRecognizer_t838322161 * __this, DictationErrorHandler_t287248442 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Microphone_GetDeviceCaps_m2711313270 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, int32_t* p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_Run_m642042872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationHypothesis(UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationHypothesis_m3081082766 (DictationRecognizer_t838322161 * __this, DictationHypothesisDelegate_t263093018 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationResult(UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationResult_m1084973989 (DictationRecognizer_t838322161 * __this, DictationResultDelegate_t1743835588 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationComplete(UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationComplete_m1247699982 (DictationRecognizer_t838322161 * __this, DictationCompletedDelegate_t174017847 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::remove_DictationError(UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_remove_DictationError_m2504176044 (DictationRecognizer_t838322161 * __this, DictationErrorHandler_t287248442 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Dispose_m1343835453 (DictationRecognizer_t838322161 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t3819840891  AsyncVoidMethodBuilder_Create_m1976941025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061 (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__17_t889680548 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, U3CRunU3Ed__17_t889680548 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061_gshared)(__this, p0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t3536885450  AsyncTaskMethodBuilder_Create_m2603633305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233 (AsyncTaskMethodBuilder_t3536885450 * __this, U3CStartRecordingAsyncU3Ed__18_t3765132546 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t3536885450 *, U3CStartRecordingAsyncU3Ed__18_t3765132546 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * AsyncTaskMethodBuilder_get_Task_m115678985 (AsyncTaskMethodBuilder_t3536885450 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566 (AsyncTaskMethodBuilder_t3536885450 * __this, U3CStopRecordingAsyncU3Ed__19_t2153598868 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t3536885450 *, U3CStopRecordingAsyncU3Ed__19_t2153598868 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566_gshared)(__this, p0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
extern "C" IL2CPP_METHOD_ATTR void Microphone_End_m1566826877 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m1145480688 (WaitForUpdate_t3436990142 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1699691961 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.PhraseRecognitionSystem::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t PhraseRecognitionSystem_get_Status_m2739506024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.SpeechSystemStatus UnityEngine.Windows.Speech.DictationRecognizer::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t DictationRecognizer_get_Status_m3456567143 (DictationRecognizer_t838322161 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::get_IsListening()
extern "C" IL2CPP_METHOD_ATTR bool DictationInputSource_get_IsListening_m3420185417 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Microphone_IsRecording_m2946688696 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::StopRecordingAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * DictationInputSource_StopRecordingAsync_m1367732392 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_t919683548  Task_GetAwaiter_m3638629061 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m1762140293 (TaskAwaiter_t919683548 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989 (AsyncVoidMethodBuilder_t3819840891 * __this, TaskAwaiter_t919683548 * p0, U3CRunU3Ed__17_t889680548 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, TaskAwaiter_t919683548 *, U3CRunU3Ed__17_t889680548 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m3227166796 (TaskAwaiter_t919683548 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions::GetAwaiter(Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaitYieldInstructions.WaitForUpdate)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t2831853999 * AwaiterExtensions_GetAwaiter_m126631721 (RuntimeObject * __this /* static, unused */, WaitForUpdate_t3436990142 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m277308412 (SimpleCoroutineAwaiter_t2831853999 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__17_t889680548_m1627064737 (AsyncVoidMethodBuilder_t3819840891 * __this, SimpleCoroutineAwaiter_t2831853999 ** p0, U3CRunU3Ed__17_t889680548 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, SimpleCoroutineAwaiter_t2831853999 **, U3CRunU3Ed__17_t889680548 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__17_t889680548_m1162342243_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m87566295 (SimpleCoroutineAwaiter_t2831853999 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m1109381469 (AsyncVoidMethodBuilder_t3819840891 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__17_MoveNext_m4213190585 (U3CRunU3Ed__17_t889680548 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m2384003025 (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__17_SetStateMachine_m848747190 (U3CRunU3Ed__17_t889680548 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::set_IsListening(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_set_IsListening_m3821029428 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Shutdown()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Shutdown_m1352915331 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m4025184632 (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m4025184632_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4227046299 (WaitUntil_t3373419216 * __this, Func_1_t3822001908 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t2831853999 * AwaiterExtensions_GetAwaiter_m2122402014 (RuntimeObject * __this /* static, unused */, WaitUntil_t3373419216 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083 (AsyncTaskMethodBuilder_t3536885450 * __this, SimpleCoroutineAwaiter_t2831853999 ** p0, U3CStartRecordingAsyncU3Ed__18_t3765132546 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t3536885450 *, SimpleCoroutineAwaiter_t2831853999 **, U3CStartRecordingAsyncU3Ed__18_t3765132546 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m386560207_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_InitialSilenceTimeoutSeconds(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_set_InitialSilenceTimeoutSeconds_m1289845835 (DictationRecognizer_t838322161 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::set_AutoSilenceTimeoutSeconds(System.Single)
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_set_AutoSilenceTimeoutSeconds_m3461878819 (DictationRecognizer_t838322161 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Start()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Start_m1602192779 (DictationRecognizer_t838322161 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * Microphone_Start_m86543297 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m3731552766 (AsyncTaskMethodBuilder_t3536885450 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m3263625660 (AsyncTaskMethodBuilder_t3536885450 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374 (U3CStartRecordingAsyncU3Ed__18_t3765132546 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m2617690961 (AsyncTaskMethodBuilder_t3536885450 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__18_SetStateMachine_m3031051510 (U3CStartRecordingAsyncU3Ed__18_t3765132546 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.DictationRecognizer::Stop()
extern "C" IL2CPP_METHOD_ATTR void DictationRecognizer_Stop_m2055576662 (DictationRecognizer_t838322161 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606 (AsyncTaskMethodBuilder_t3536885450 * __this, SimpleCoroutineAwaiter_t2831853999 ** p0, U3CStopRecordingAsyncU3Ed__19_t2153598868 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t3536885450 *, SimpleCoroutineAwaiter_t2831853999 **, U3CStopRecordingAsyncU3Ed__19_t2153598868 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1712662835_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Windows.Speech.PhraseRecognitionSystem::Restart()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognitionSystem_Restart_m1774137830 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827 (U3CStopRecordingAsyncU3Ed__19_t2153598868 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__19_SetStateMachine_m3423593062 (U3CStopRecordingAsyncU3Ed__19_t2153598868 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::set_RecognitionConfidenceLevel(UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_set_RecognitionConfidenceLevel_m246022595 (SpeechInputSource_t3338687719 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Initialize()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Initialize_m2562938635 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::get_Commands()
extern "C" IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t2632020690* SpeechInputSource_get_Commands_m185063296 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::get_Keyword()
extern "C" IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_m1598806753 (SpeechCommands_t2899055299 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Setup(System.String[])
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Setup_m754060475 (SpeechInputSource_t3338687719 * __this, StringU5BU5D_t1281789340* ___newKeywords0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::StartRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_StartRecognition_m2466601509 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Run_m3598150067 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::StopRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_StopRecognition_m4143990232 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Cleanup_m2304272612 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609 (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__9_t3701686637 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, U3CRunU3Ed__9_t3701686637 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsSetup(System.String[])
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsSetup_m1213271869 (SpeechInputSource_t3338687719 * __this, StringU5BU5D_t1281789340* ___newKeywords0, const RuntimeMethod* method);
// UnityEngine.Windows.Speech.ConfidenceLevel Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::get_RecognitionConfidenceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechInputSource_get_RecognitionConfidenceLevel_m1696734966 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,UnityEngine.Windows.Speech.SemanticMeaning[],System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_OnPhraseRecognized_m2402041898 (SpeechInputSource_t3338687719 * __this, int32_t ___confidence0, TimeSpan_t881159249  ___phraseDuration1, DateTime_t3738529785  ___phraseStartTime2, SemanticMeaningU5BU5D_t1653704947* ___semanticMeanings3, String_t* ___text4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsCleanup()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsCleanup_m2454173580 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsStartRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsStartRecognition_m1354049730 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsStopRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsStopRecognition_m1431962239 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.KeywordRecognizer::.ctor(System.String[],UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void KeywordRecognizer__ctor_m2118288196 (KeywordRecognizer_t2141680640 * __this, StringU5BU5D_t1281789340* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizedDelegate__ctor_m2791032376 (PhraseRecognizedDelegate_t3092874173 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::add_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_add_OnPhraseRecognized_m3697159049 (PhraseRecognizer_t1663548656 * __this, PhraseRecognizedDelegate_t3092874173 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::remove_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate)
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_remove_OnPhraseRecognized_m840799599 (PhraseRecognizer_t1663548656 * __this, PhraseRecognizedDelegate_t3092874173 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Dispose()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Dispose_m2940325522 (PhraseRecognizer_t1663548656 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Windows.Speech.PhraseRecognizer::get_IsRunning()
extern "C" IL2CPP_METHOD_ATTR bool PhraseRecognizer_get_IsRunning_m4096271258 (PhraseRecognizer_t1663548656 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Start()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Start_m3966080098 (PhraseRecognizer_t1663548656 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Windows.Speech.PhraseRecognizer::Stop()
extern "C" IL2CPP_METHOD_ATTR void PhraseRecognizer_Stop_m1221061102 (PhraseRecognizer_t1663548656 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::get_Action()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  SpeechCommands_get_Action_m2915621769 (SpeechCommands_t2899055299 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m2962682148 (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2962682148_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m463439517 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m463439517_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3898097692 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3898097692_gshared)(__this, method);
}
// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands::get_KeyCode()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechCommands_get_KeyCode_m235080407 (SpeechCommands_t2899055299 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::RaiseKeywordAction(System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_RaiseKeywordAction_m314662571 (SpeechInputSource_t3338687719 * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__9_t3701686637_m2923109606 (AsyncVoidMethodBuilder_t3819840891 * __this, SimpleCoroutineAwaiter_t2831853999 ** p0, U3CRunU3Ed__9_t3701686637 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, SimpleCoroutineAwaiter_t2831853999 **, U3CRunU3Ed__9_t3701686637 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__9_t3701686637_m1321740437_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m1991744790 (AsyncVoidMethodBuilder_t3819840891 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__9_MoveNext_m3999760580 (U3CRunU3Ed__9_t3701686637 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__9_SetStateMachine_m343003418 (U3CRunU3Ed__9_t3701686637 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::.ctor()
inline void HashSet_1__ctor_m3045394649 (HashSet_1_t2155988237 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2155988237 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_Run_m612308288 (TouchscreenInputSource_t2670215125 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::get_Count()
inline int32_t HashSet_1_get_Count_m2591076122 (HashSet_1_t2155988237 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2155988237 *, const RuntimeMethod*))HashSet_1_get_Count_m542532379_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::GetEnumerator()
inline Enumerator_t3861165508  HashSet_1_GetEnumerator_m259392267 (HashSet_1_t2155988237 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3861165508  (*) (HashSet_1_t2155988237 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m3346268098_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::get_Current()
inline TouchPointer_t3591038763 * Enumerator_get_Current_m3966105722 (Enumerator_t3861165508 * __this, const RuntimeMethod* method)
{
	return ((  TouchPointer_t3591038763 * (*) (Enumerator_t3861165508 *, const RuntimeMethod*))Enumerator_get_Current_m4213278602_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::MoveNext()
inline bool Enumerator_MoveNext_m2080996668 (Enumerator_t3861165508 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3861165508 *, const RuntimeMethod*))Enumerator_MoveNext_m3714175425_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::Dispose()
inline void Enumerator_Dispose_m383986263 (Enumerator_t3861165508 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3861165508 *, const RuntimeMethod*))Enumerator_Dispose_m1204547613_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321 (AsyncVoidMethodBuilder_t3819840891 * __this, U3CRunU3Ed__16_t2268004534 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, U3CRunU3Ed__16_t2268004534 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321_gshared)(__this, p0, method);
}
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_m859576425 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::.ctor(System.String,UnityEngine.Touch,UnityEngine.Ray,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void TouchPointer__ctor_m1907458457 (TouchPointer_t3591038763 * __this, String_t* ___name0, Touch_t1921856868  ___touch1, Ray_t3785851493  ___ray2, RuntimeObject* ___inputSource3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::Add(!0)
inline bool HashSet_1_Add_m3212570406 (HashSet_1_t2155988237 * __this, TouchPointer_t3591038763 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2155988237 *, TouchPointer_t3591038763 *, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method);
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::get_PointerAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  TouchscreenInputSource_get_PointerAction_m3597869734 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::get_HoldAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  TouchscreenInputSource_get_HoldAction_m1070353476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_tapCount_m2125417096 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer>::Remove(!0)
inline bool HashSet_1_Remove_m94792918 (HashSet_1_t2155988237 * __this, TouchPointer_t3591038763 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2155988237 *, TouchPointer_t3591038763 *, const RuntimeMethod*))HashSet_1_Remove_m709044238_gshared)(__this, p0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::TryGetTouchPointer(System.UInt32,Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer&)
extern "C" IL2CPP_METHOD_ATTR bool TouchscreenInputSource_TryGetTouchPointer_m2182457724 (TouchscreenInputSource_t2670215125 * __this, uint32_t ___pointerId0, TouchPointer_t3591038763 ** ___touch1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction::get_None()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  MixedRealityInputAction_get_None_m1569881572 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C" IL2CPP_METHOD_ATTR TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Internal.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * CameraCache_get_Main_m1380900859 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::AddOrUpdateTouch(UnityEngine.Touch,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_AddOrUpdateTouch_m2674627957 (TouchscreenInputSource_t2670215125 * __this, Touch_t1921856868  ___touch0, Ray_t3785851493  ___ray1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::RemoveTouch(UnityEngine.Touch)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_RemoveTouch_m3629533079 (TouchscreenInputSource_t2670215125 * __this, Touch_t1921856868  ___touch0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Internal.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__16_t2268004534_m536952743 (AsyncVoidMethodBuilder_t3819840891 * __this, SimpleCoroutineAwaiter_t2831853999 ** p0, U3CRunU3Ed__16_t2268004534 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, SimpleCoroutineAwaiter_t2831853999 **, U3CRunU3Ed__16_t2268004534 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CRunU3Ed__16_t2268004534_m2540568187_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__16_MoveNext_m1231441746 (U3CRunU3Ed__16_t2268004534 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__16_SetStateMachine_m94194484 (U3CRunU3Ed__16_t2268004534 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer__ctor_m3815240207 (GenericPointer_t429146605 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_TryGetFunctionsReturnTrue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsPositionAvailable_m289670261 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Position_m1693592603 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Velocity_m1475492328 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Rotation_m3715431815 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Position_m4017137954 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_TryGetFunctionsReturnTrue()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Velocity_m2352156329 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_Rotation_m1585180741 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_PointerRay()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1213446279  DebugInteractionSourcePose_get_PointerRay_m2396427043 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
inline bool Nullable_1_get_HasValue_m176711023 (Nullable_1_t1213446279 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1213446279 *, const RuntimeMethod*))Nullable_1_get_HasValue_m176711023_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
inline Ray_t3785851493  Nullable_1_get_Value_m3822285555 (Nullable_1_t1213446279 * __this, const RuntimeMethod* method)
{
	return ((  Ray_t3785851493  (*) (Nullable_1_t1213446279 *, const RuntimeMethod*))Nullable_1_get_Value_m3822285555_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_GripPosition_m2731351932 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_GripRotation_m344787494 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer__ctor_m3815240207 (GenericPointer_t429146605 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer__ctor_m3815240207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		__this->set_U3CPointerExtentU3Ek__BackingField_10((10.0f));
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3168306194* L_0 = (RayStepU5BU5D_t3168306194*)SZArrayNew(RayStepU5BU5D_t3168306194_il2cpp_TypeInfo_var, (uint32_t)1);
		RayStepU5BU5D_t3168306194* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		RayStep_t1822550659  L_4;
		memset(&L_4, 0, sizeof(L_4));
		RayStep__ctor_m1977211725((&L_4), L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RayStep_t1822550659 )L_4);
		__this->set_U3CRaysU3Ek__BackingField_11(L_1);
		// public GenericPointer(string pointerName, IMixedRealityInputSource inputSourceParent)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// InputSystem = MixedRealityManager.Instance.GetManager<IMixedRealityInputSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityManager_t1093932290_il2cpp_TypeInfo_var);
		MixedRealityManager_t1093932290 * L_5 = MixedRealityManager_get_Instance_m1089585239(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894(L_5, /*hidden argument*/MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894_RuntimeMethod_var);
		__this->set_U3CInputSystemU3Ek__BackingField_0(L_6);
		// PointerId = InputSystem.FocusProvider.GenerateNewPointerId();
		RuntimeObject* L_7 = GenericPointer_get_InputSystem_m3886914088(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		uint32_t L_9 = InterfaceFuncInvoker0< uint32_t >::Invoke(10 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityFocusProvider::GenerateNewPointerId() */, IMixedRealityFocusProvider_t3695233313_il2cpp_TypeInfo_var, L_8);
		__this->set_U3CPointerIdU3Ek__BackingField_2(L_9);
		// PointerName = pointerName;
		String_t* L_10 = ___pointerName0;
		GenericPointer_set_PointerName_m65187794(__this, L_10, /*hidden argument*/NULL);
		// this.inputSourceParent = inputSourceParent;
		RuntimeObject* L_11 = ___inputSourceParent1;
		__this->set_inputSourceParent_4(L_11);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_InputSystem_m3886914088 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSystem InputSystem { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSystemU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Controller()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_Controller_m1454401466 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// get { return controller; }
		RuntimeObject* L_0 = __this->get_controller_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Controller_m1441504939 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_set_Controller_m1441504939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = value;
		RuntimeObject* L_0 = ___value0;
		__this->set_controller_1(L_0);
		// inputSourceParent = controller.InputSource;
		RuntimeObject* L_1 = __this->get_controller_1();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController::get_InputSource() */, IMixedRealityController_t2386858716_il2cpp_TypeInfo_var, L_1);
		__this->set_inputSourceParent_4(L_2);
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerId()
extern "C" IL2CPP_METHOD_ATTR uint32_t GenericPointer_get_PointerId_m877692364 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public uint PointerId { get; }
		uint32_t L_0 = __this->get_U3CPointerIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerName()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericPointer_get_PointerName_m3826680655 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public string PointerName { get; set; }
		String_t* L_0 = __this->get_U3CPointerNameU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerName_m65187794 (GenericPointer_t429146605 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string PointerName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CPointerNameU3Ek__BackingField_3(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_InputSourceParent()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_InputSourceParent_m2827572934 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputSourceParent; }
		RuntimeObject* L_0 = __this->get_inputSourceParent_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_InputSourceParent_m1303746917 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected set { inputSourceParent = value; }
		RuntimeObject* L_0 = ___value0;
		__this->set_inputSourceParent_4(L_0);
		// protected set { inputSourceParent = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_BaseCursor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_BaseCursor_m4288394128 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityCursor BaseCursor { get; set; }
		RuntimeObject* L_0 = __this->get_U3CBaseCursorU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_BaseCursor(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityCursor)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_BaseCursor_m1730760406 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityCursor BaseCursor { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CBaseCursorU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.ICursorModifier Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_CursorModifier()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_CursorModifier_m297501661 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public ICursorModifier CursorModifier { get; set; }
		RuntimeObject* L_0 = __this->get_U3CCursorModifierU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_CursorModifier(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.ICursorModifier)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_CursorModifier_m3167410607 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public ICursorModifier CursorModifier { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CCursorModifierU3Ek__BackingField_6(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_TeleportHotSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_TeleportHotSpot_m1951721993 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotSpot TeleportHotSpot { get; set; }
		RuntimeObject* L_0 = __this->get_U3CTeleportHotSpotU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_TeleportHotSpot(Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_TeleportHotSpot_m2287599141 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotSpot TeleportHotSpot { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTeleportHotSpotU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_IsInteractionEnabled()
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_get_IsInteractionEnabled_m1294466277 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInteractionEnabled { get; set; }
		bool L_0 = __this->get_U3CIsInteractionEnabledU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_IsInteractionEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m4072269300 (GenericPointer_t429146605 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInteractionEnabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteractionEnabledU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_IsFocusLocked()
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_get_IsFocusLocked_m2052317914 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsFocusLocked { get; set; }
		bool L_0 = __this->get_U3CIsFocusLockedU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_IsFocusLocked(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_IsFocusLocked_m2955144094 (GenericPointer_t429146605 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsFocusLocked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsFocusLockedU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_PointerExtent_m2716762852 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		float L_0 = __this->get_U3CPointerExtentU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerExtent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerExtent_m187296707 (GenericPointer_t429146605 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		float L_0 = ___value0;
		__this->set_U3CPointerExtentU3Ek__BackingField_10(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Rays()
extern "C" IL2CPP_METHOD_ATTR RayStepU5BU5D_t3168306194* GenericPointer_get_Rays_m1430041228 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3168306194* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Rays(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RayStep[])
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Rays_m4168334892 (GenericPointer_t429146605 * __this, RayStepU5BU5D_t3168306194* ___value0, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3168306194* L_0 = ___value0;
		__this->set_U3CRaysU3Ek__BackingField_11(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PrioritizedLayerMasksOverride()
extern "C" IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t253793507* GenericPointer_get_PrioritizedLayerMasksOverride_m1538343273 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_t253793507* L_0 = __this->get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m782681707 (GenericPointer_t429146605 * __this, LayerMaskU5BU5D_t253793507* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_t253793507* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_FocusTarget()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_FocusTarget_m2221162542 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityFocusHandler FocusTarget { get; set; }
		RuntimeObject* L_0 = __this->get_U3CFocusTargetU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_FocusTarget(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_FocusTarget_m1428065787 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityFocusHandler FocusTarget { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CFocusTargetU3Ek__BackingField_13(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_Result_m1907113456 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IPointerResult Result { get; set; }
		RuntimeObject* L_0 = __this->get_U3CResultU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Result(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IPointerResult)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Result_m1939286944 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IPointerResult Result { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_14(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RayStabilizer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_RayStabilizer_m126448224 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IBaseRayStabilizer RayStabilizer { get; set; }
		RuntimeObject* L_0 = __this->get_U3CRayStabilizerU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_RayStabilizer(Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_RayStabilizer_m867095111 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IBaseRayStabilizer RayStabilizer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRayStabilizerU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_get_RaycastMode_m3798751465 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public RaycastModeType RaycastMode { get; set; } = RaycastModeType.Simple;
		int32_t L_0 = __this->get_U3CRaycastModeU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_RaycastMode(Microsoft.MixedReality.Toolkit.Internal.Definitions.Physics.RaycastModeType)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_RaycastMode_m2867340730 (GenericPointer_t429146605 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastModeType RaycastMode { get; set; } = RaycastModeType.Simple;
		int32_t L_0 = ___value0;
		__this->set_U3CRaycastModeU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_SphereCastRadius()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_SphereCastRadius_m2530147379 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public float SphereCastRadius { get; set; }
		float L_0 = __this->get_U3CSphereCastRadiusU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_SphereCastRadius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_SphereCastRadius_m3817110596 (GenericPointer_t429146605 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SphereCastRadius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CSphereCastRadiusU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerOrientation()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_PointerOrientation_m4222859637 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public float PointerOrientation { get; } = 0f;
		float L_0 = __this->get_U3CPointerOrientationU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_OnPreRaycast_m3597384523 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_OnPreRaycast_m3597384523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (TryGetPointingRay(out pointingRay))
		bool L_0 = VirtFuncInvoker1< bool, Ray_t3785851493 * >::Invoke(52 /* System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointingRay(UnityEngine.Ray&) */, __this, (Ray_t3785851493 *)(&V_0));
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// Rays[0].CopyRay(pointingRay, PointerExtent);
		RayStepU5BU5D_t3168306194* L_1 = GenericPointer_get_Rays_m1430041228(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t3785851493  L_2 = V_0;
		float L_3 = VirtFuncInvoker0< float >::Invoke(47 /* System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent() */, __this);
		RayStep_CopyRay_m3859787512((RayStep_t1822550659 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (RayStabilizer != null)
		RuntimeObject* L_4 = GenericPointer_get_RayStabilizer_m126448224(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0079;
		}
	}
	{
		// RayStabilizer.UpdateStability(Rays[0].Origin, Rays[0].Direction);
		RuntimeObject* L_5 = GenericPointer_get_RayStabilizer_m126448224(__this, /*hidden argument*/NULL);
		RayStepU5BU5D_t3168306194* L_6 = GenericPointer_get_Rays_m1430041228(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = RayStep_get_Origin_m3460680569((RayStep_t1822550659 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		RayStepU5BU5D_t3168306194* L_8 = GenericPointer_get_Rays_m1430041228(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = RayStep_get_Direction_m1451214511((RayStep_t1822550659 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, IBaseRayStabilizer_t3532020808_il2cpp_TypeInfo_var, L_5, L_7, L_9);
		// Rays[0].CopyRay(RayStabilizer.StableRay, PointerExtent);
		RayStepU5BU5D_t3168306194* L_10 = GenericPointer_get_Rays_m1430041228(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = GenericPointer_get_RayStabilizer_m126448224(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Ray_t3785851493  L_12 = InterfaceFuncInvoker0< Ray_t3785851493  >::Invoke(2 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Internal.Interfaces.Physics.IBaseRayStabilizer::get_StableRay() */, IBaseRayStabilizer_t3532020808_il2cpp_TypeInfo_var, L_11);
		float L_13 = VirtFuncInvoker0< float >::Invoke(47 /* System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent() */, __this);
		RayStep_CopyRay_m3859787512((RayStep_t1822550659 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_12, L_13, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::OnPostRaycast()
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_OnPostRaycast_m2126427952 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnPostRaycast() { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointerPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointerPosition_m2768788553 (GenericPointer_t429146605 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_TryGetPointerPosition_m2768788553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position = Vector3.zero;
		Vector3_t3722313464 * L_0 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointingRay(UnityEngine.Ray&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointingRay_m1499578754 (GenericPointer_t429146605 * __this, Ray_t3785851493 * ___pointingRay0, const RuntimeMethod* method)
{
	{
		// pointingRay = default(Ray);
		Ray_t3785851493 * L_0 = ___pointingRay0;
		il2cpp_codegen_initobj(L_0, sizeof(Ray_t3785851493 ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointerRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointerRotation_m3389968377 (GenericPointer_t429146605 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_TryGetPointerRotation_m3389968377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotation = Quaternion.identity;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m221296845 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method)
{
	{
		// return left.Equals(right);
		RuntimeObject* L_0 = ___left0;
		RuntimeObject* L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_System_Collections_IEqualityComparer_Equals_m3780923954 (GenericPointer_t429146605 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	{
		// return left.Equals(right);
		RuntimeObject * L_0 = ___left0;
		RuntimeObject * L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m4289535493 (GenericPointer_t429146605 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_Equals_m4289535493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(GenericPointer_t429146605 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType()) { return false; }
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != GetType()) { return false; }
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((IMixedRealityPointer)obj);
		RuntimeObject * L_6 = ___obj0;
		bool L_7 = GenericPointer_Equals_m1952780150(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m1952780150 (GenericPointer_t429146605 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_Equals_m1952780150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return other != null && PointerId == other.PointerId && string.Equals(PointerName, other.PointerName);
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		uint32_t L_1 = GenericPointer_get_PointerId_m877692364(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(3 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_4 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer::get_PointerName() */, IMixedRealityPointer_t1271752255_il2cpp_TypeInfo_var, L_5);
		bool L_7 = String_Equals_m1744302937(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_System_Collections_IEqualityComparer_GetHashCode_m3457308475 (GenericPointer_t429146605 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return obj.GetHashCode();
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_GetHashCode_m2092518628 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// int hashCode = 0;
		// hashCode = (hashCode * 397) ^ (int)PointerId;
		uint32_t L_0 = GenericPointer_get_PointerId_m877692364(__this, /*hidden argument*/NULL);
		// hashCode = (hashCode * 397) ^ (PointerName != null ? PointerName.GetHashCode() : 0);
		String_t* L_1 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)0, (int32_t)((int32_t)397)))^(int32_t)L_0)), (int32_t)((int32_t)397)));
		if (L_1)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)0, (int32_t)((int32_t)397)))^(int32_t)L_0)), (int32_t)((int32_t)397)));
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_001f:
	{
		String_t* L_2 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		// return hashCode;
		return ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
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
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseGenericInputSource_get_InputSystem_m3766388341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource_get_InputSystem_m3766388341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public static IMixedRealityInputSystem InputSystem => inputSystem ?? (inputSystem = MixedRealityManager.Instance.GetManager<IMixedRealityInputSystem>());
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BaseGenericInputSource_t2600286248_StaticFields*)il2cpp_codegen_static_fields_for(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var))->get_inputSystem_0();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityManager_t1093932290_il2cpp_TypeInfo_var);
		MixedRealityManager_t1093932290 * L_2 = MixedRealityManager_get_Instance_m1089585239(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894(L_2, /*hidden argument*/MixedRealityManager_GetManager_TisIMixedRealityInputSystem_t3903629218_m3583780894_RuntimeMethod_var);
		RuntimeObject* L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		((BaseGenericInputSource_t2600286248_StaticFields*)il2cpp_codegen_static_fields_for(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var))->set_inputSystem_0(L_4);
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::.ctor(System.String,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[])
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource__ctor_m1477578704 (BaseGenericInputSource_t2600286248 * __this, String_t* ___name0, IMixedRealityPointerU5BU5D_t2431669734* ___pointers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource__ctor_m1477578704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMixedRealityPointerU5BU5D_t2431669734* G_B2_0 = NULL;
	BaseGenericInputSource_t2600286248 * G_B2_1 = NULL;
	IMixedRealityPointerU5BU5D_t2431669734* G_B1_0 = NULL;
	BaseGenericInputSource_t2600286248 * G_B1_1 = NULL;
	{
		// public BaseGenericInputSource(string name, IMixedRealityPointer[] pointers = null)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// SourceId = InputSystem.GenerateNewSourceId();
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(17 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::GenerateNewSourceId() */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_0);
		__this->set_U3CSourceIdU3Ek__BackingField_1(L_1);
		// SourceName = name;
		String_t* L_2 = ___name0;
		__this->set_U3CSourceNameU3Ek__BackingField_2(L_2);
		// Pointers = pointers ?? new[] { InputSystem.GazeProvider.GazePointer };
		IMixedRealityPointerU5BU5D_t2431669734* L_3 = ___pointers1;
		IMixedRealityPointerU5BU5D_t2431669734* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_003b;
		}
	}
	{
		IMixedRealityPointerU5BU5D_t2431669734* L_5 = (IMixedRealityPointerU5BU5D_t2431669734*)SZArrayNew(IMixedRealityPointerU5BU5D_t2431669734_il2cpp_TypeInfo_var, (uint32_t)1);
		IMixedRealityPointerU5BU5D_t2431669734* L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityGazeProvider::get_GazePointer() */, IMixedRealityGazeProvider_t1329944573_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CPointersU3Ek__BackingField_3(G_B2_0);
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseGenericInputSource_get_SourceId_m2823944238 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; }
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* BaseGenericInputSource_get_SourceName_m3647105171 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; }
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_2();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_Pointers()
extern "C" IL2CPP_METHOD_ATTR IMixedRealityPointerU5BU5D_t2431669734* BaseGenericInputSource_get_Pointers_m1839286385 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public virtual IMixedRealityPointer[] Pointers { get; }
		IMixedRealityPointerU5BU5D_t2431669734* L_0 = __this->get_U3CPointersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m1121438627 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method)
{
	{
		// return left.Equals(right);
		RuntimeObject* L_0 = ___left0;
		RuntimeObject* L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_System_Collections_IEqualityComparer_Equals_m3554281125 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	{
		// return left.Equals(right);
		RuntimeObject * L_0 = ___left0;
		RuntimeObject * L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m906800837 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource_Equals_m906800837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(BaseGenericInputSource_t2600286248 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType()) { return false; }
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (obj.GetType() != GetType()) { return false; }
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((IMixedRealityInputSource)obj);
		RuntimeObject * L_6 = ___obj0;
		bool L_7 = BaseGenericInputSource_Equals_m1596877041(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IMixedRealityInputSource_t3685197710_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m1596877041 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource_Equals_m1596877041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return other != null && SourceId == other.SourceId && string.Equals(SourceName, other.SourceName);
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		uint32_t L_1 = BaseGenericInputSource_get_SourceId_m2823944238(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource::get_SourceId() */, IMixedRealityEventSource_t2812969632_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_4 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t2812969632_il2cpp_TypeInfo_var, L_5);
		bool L_7 = String_Equals_m1744302937(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t BaseGenericInputSource_System_Collections_IEqualityComparer_GetHashCode_m1136115561 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return obj.GetHashCode();
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseGenericInputSource_GetHashCode_m1127679622 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// int hashCode = 0;
		// hashCode = (hashCode * 397) ^ (int)SourceId;
		uint32_t L_0 = BaseGenericInputSource_get_SourceId_m2823944238(__this, /*hidden argument*/NULL);
		// hashCode = (hashCode * 397) ^ (SourceName != null ? SourceName.GetHashCode() : 0);
		String_t* L_1 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)0, (int32_t)((int32_t)397)))^(int32_t)L_0)), (int32_t)((int32_t)397)));
		if (L_1)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)0, (int32_t)((int32_t)397)))^(int32_t)L_0)), (int32_t)((int32_t)397)));
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_001f:
	{
		String_t* L_2 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		// return hashCode;
		return ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Dispose()
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource_Dispose_m3565946516 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Dispose() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::.cctor()
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource__cctor_m1005129185 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::get_IsListening()
extern "C" IL2CPP_METHOD_ATTR bool DictationInputSource_get_IsListening_m3420185417 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_get_IsListening_m3420185417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsListening { get; private set; } = false;
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		bool L_0 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_U3CIsListeningU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::set_IsListening(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_set_IsListening_m3821029428 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_set_IsListening_m3821029428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsListening { get; private set; } = false;
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_U3CIsListeningU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource__ctor_m2357551646 (DictationInputSource_t3573619954 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource__ctor_m2357551646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public DictationInputSource() : base("Dictation")
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		BaseGenericInputSource__ctor_m1477578704(__this, _stringLiteral255022282, (IMixedRealityPointerU5BU5D_t2431669734*)(IMixedRealityPointerU5BU5D_t2431669734*)NULL, /*hidden argument*/NULL);
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0014:
	{
		// source = this;
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_source_5(__this);
		// dictationResult = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_1);
		// dictationRecognizer = new DictationRecognizer();
		DictationRecognizer_t838322161 * L_2 = (DictationRecognizer_t838322161 *)il2cpp_codegen_object_new(DictationRecognizer_t838322161_il2cpp_TypeInfo_var);
		DictationRecognizer__ctor_m2173974091(L_2, /*hidden argument*/NULL);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationRecognizer_6(L_2);
		// dictationRecognizer.DictationHypothesis += DictationRecognizer_DictationHypothesis;
		DictationRecognizer_t838322161 * L_3 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_4 = (intptr_t)DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478_RuntimeMethod_var;
		DictationHypothesisDelegate_t263093018 * L_5 = (DictationHypothesisDelegate_t263093018 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_t263093018_il2cpp_TypeInfo_var);
		DictationHypothesisDelegate__ctor_m1655841864(L_5, NULL, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		DictationRecognizer_add_DictationHypothesis_m2589443395(L_3, L_5, /*hidden argument*/NULL);
		// dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
		DictationRecognizer_t838322161 * L_6 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_7 = (intptr_t)DictationInputSource_DictationRecognizer_DictationResult_m262009734_RuntimeMethod_var;
		DictationResultDelegate_t1743835588 * L_8 = (DictationResultDelegate_t1743835588 *)il2cpp_codegen_object_new(DictationResultDelegate_t1743835588_il2cpp_TypeInfo_var);
		DictationResultDelegate__ctor_m687752903(L_8, NULL, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		DictationRecognizer_add_DictationResult_m3775844198(L_6, L_8, /*hidden argument*/NULL);
		// dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;
		DictationRecognizer_t838322161 * L_9 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_10 = (intptr_t)DictationInputSource_DictationRecognizer_DictationComplete_m2164910751_RuntimeMethod_var;
		DictationCompletedDelegate_t174017847 * L_11 = (DictationCompletedDelegate_t174017847 *)il2cpp_codegen_object_new(DictationCompletedDelegate_t174017847_il2cpp_TypeInfo_var);
		DictationCompletedDelegate__ctor_m3017344881(L_11, NULL, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		DictationRecognizer_add_DictationComplete_m517085233(L_9, L_11, /*hidden argument*/NULL);
		// dictationRecognizer.DictationError += DictationRecognizer_DictationError;
		DictationRecognizer_t838322161 * L_12 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_13 = (intptr_t)DictationInputSource_DictationRecognizer_DictationError_m2666438514_RuntimeMethod_var;
		DictationErrorHandler_t287248442 * L_14 = (DictationErrorHandler_t287248442 *)il2cpp_codegen_object_new(DictationErrorHandler_t287248442_il2cpp_TypeInfo_var);
		DictationErrorHandler__ctor_m2193595549(L_14, NULL, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		DictationRecognizer_add_DictationError_m2679567939(L_12, L_14, /*hidden argument*/NULL);
		// Microphone.GetDeviceCaps(DeviceName, out minSamplingRate, out samplingRate);
		String_t* L_15 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_DeviceName_11();
		Microphone_GetDeviceCaps_m2711313270(NULL /*static, unused*/, L_15, (int32_t*)(&V_0), (int32_t*)(((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_address_of_samplingRate_12()), /*hidden argument*/NULL);
		// Run();
		DictationInputSource_Run_m642042872(NULL /*static, unused*/, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_Dispose_m2238760783 (DictationInputSource_t3573619954 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_Dispose_m2238760783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DictationRecognizer_t838322161 * G_B3_0 = NULL;
	DictationRecognizer_t838322161 * G_B2_0 = NULL;
	{
		// if (dictationRecognizer != null)
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		DictationRecognizer_t838322161 * L_0 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		// dictationRecognizer.DictationHypothesis -= DictationRecognizer_DictationHypothesis;
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		DictationRecognizer_t838322161 * L_1 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_2 = (intptr_t)DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478_RuntimeMethod_var;
		DictationHypothesisDelegate_t263093018 * L_3 = (DictationHypothesisDelegate_t263093018 *)il2cpp_codegen_object_new(DictationHypothesisDelegate_t263093018_il2cpp_TypeInfo_var);
		DictationHypothesisDelegate__ctor_m1655841864(L_3, NULL, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		DictationRecognizer_remove_DictationHypothesis_m3081082766(L_1, L_3, /*hidden argument*/NULL);
		// dictationRecognizer.DictationResult -= DictationRecognizer_DictationResult;
		DictationRecognizer_t838322161 * L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_5 = (intptr_t)DictationInputSource_DictationRecognizer_DictationResult_m262009734_RuntimeMethod_var;
		DictationResultDelegate_t1743835588 * L_6 = (DictationResultDelegate_t1743835588 *)il2cpp_codegen_object_new(DictationResultDelegate_t1743835588_il2cpp_TypeInfo_var);
		DictationResultDelegate__ctor_m687752903(L_6, NULL, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		DictationRecognizer_remove_DictationResult_m1084973989(L_4, L_6, /*hidden argument*/NULL);
		// dictationRecognizer.DictationComplete -= DictationRecognizer_DictationComplete;
		DictationRecognizer_t838322161 * L_7 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_8 = (intptr_t)DictationInputSource_DictationRecognizer_DictationComplete_m2164910751_RuntimeMethod_var;
		DictationCompletedDelegate_t174017847 * L_9 = (DictationCompletedDelegate_t174017847 *)il2cpp_codegen_object_new(DictationCompletedDelegate_t174017847_il2cpp_TypeInfo_var);
		DictationCompletedDelegate__ctor_m3017344881(L_9, NULL, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		DictationRecognizer_remove_DictationComplete_m1247699982(L_7, L_9, /*hidden argument*/NULL);
		// dictationRecognizer.DictationError -= DictationRecognizer_DictationError;
		DictationRecognizer_t838322161 * L_10 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		intptr_t L_11 = (intptr_t)DictationInputSource_DictationRecognizer_DictationError_m2666438514_RuntimeMethod_var;
		DictationErrorHandler_t287248442 * L_12 = (DictationErrorHandler_t287248442 *)il2cpp_codegen_object_new(DictationErrorHandler_t287248442_il2cpp_TypeInfo_var);
		DictationErrorHandler__ctor_m2193595549(L_12, NULL, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		DictationRecognizer_remove_DictationError_m2504176044(L_10, L_12, /*hidden argument*/NULL);
		// dictationRecognizer?.Dispose();
		DictationRecognizer_t838322161 * L_13 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		DictationRecognizer_t838322161 * L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_0069;
		}
	}
	{
		return;
	}

IL_0069:
	{
		NullCheck(G_B3_0);
		DictationRecognizer_Dispose_m1343835453(G_B3_0, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_Run_m642042872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_Run_m642042872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunU3Ed__17_t889680548  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t3819840891  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		AsyncVoidMethodBuilder_t3819840891  L_0 = AsyncVoidMethodBuilder_Create_m1976941025(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CRunU3Ed__17_t889680548  L_1 = V_0;
		AsyncVoidMethodBuilder_t3819840891  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061((AsyncVoidMethodBuilder_t3819840891 *)(&V_1), (U3CRunU3Ed__17_t889680548 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__17_t889680548_m3046360061_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::StartRecordingAsync(UnityEngine.GameObject,System.Single,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * DictationInputSource_StartRecordingAsync_m3985578731 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___listener0, float ___initialSilenceTimeout1, float ___autoSilenceTimeout2, int32_t ___recordingTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_StartRecordingAsync_m3985578731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartRecordingAsyncU3Ed__18_t3765132546  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t3536885450  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = ___listener0;
		(&V_0)->set_listener_2(L_0);
		float L_1 = ___initialSilenceTimeout1;
		(&V_0)->set_initialSilenceTimeout_3(L_1);
		float L_2 = ___autoSilenceTimeout2;
		(&V_0)->set_autoSilenceTimeout_4(L_2);
		int32_t L_3 = ___recordingTime3;
		(&V_0)->set_recordingTime_5(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t3536885450_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t3536885450  L_4 = AsyncTaskMethodBuilder_Create_m2603633305(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_4);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartRecordingAsyncU3Ed__18_t3765132546  L_5 = V_0;
		AsyncTaskMethodBuilder_t3536885450  L_6 = L_5.get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233((AsyncTaskMethodBuilder_t3536885450 *)(&V_1), (U3CStartRecordingAsyncU3Ed__18_t3765132546 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m630238233_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t3536885450 * L_7 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t3187275312 * L_8 = AsyncTaskMethodBuilder_get_Task_m115678985((AsyncTaskMethodBuilder_t3536885450 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::StopRecordingAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * DictationInputSource_StopRecordingAsync_m1367732392 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_StopRecordingAsync_m1367732392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopRecordingAsyncU3Ed__19_t2153598868  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t3536885450  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t3536885450_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t3536885450  L_0 = AsyncTaskMethodBuilder_Create_m2603633305(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopRecordingAsyncU3Ed__19_t2153598868  L_1 = V_0;
		AsyncTaskMethodBuilder_t3536885450  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566((AsyncTaskMethodBuilder_t3536885450 *)(&V_1), (U3CStopRecordingAsyncU3Ed__19_t2153598868 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m1237948566_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t3536885450 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t3187275312 * L_4 = AsyncTaskMethodBuilder_get_Task_m115678985((AsyncTaskMethodBuilder_t3536885450 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::DictationRecognizer_DictationHypothesis(System.String)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478 (RuntimeObject * __this /* static, unused */, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_DictationRecognizer_DictationHypothesis_m3754645478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dictationResult = $"{textSoFar} {text}...";
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_textSoFar_10();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral575571321, L_0, L_1, /*hidden argument*/NULL);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_2);
		// InputSystem.RaiseDictationHypothesis(source, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
		String_t* L_5 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationResult_13();
		NullCheck(L_3);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(75 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationHypothesis(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_3, L_4, L_5, (AudioClip_t3680889665 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::DictationRecognizer_DictationResult(System.String,UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_DictationRecognizer_DictationResult_m262009734 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___confidence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_DictationRecognizer_DictationResult_m262009734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textSoFar.Append($"{text}. ");
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_textSoFar_10();
		String_t* L_1 = ___text0;
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2190511732, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, L_2, /*hidden argument*/NULL);
		// dictationResult = textSoFar.ToString();
		StringBuilder_t * L_3 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_textSoFar_10();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_4);
		// InputSystem.RaiseDictationResult(source, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_6 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
		String_t* L_7 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationResult_13();
		NullCheck(L_5);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(76 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationResult(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_5, L_6, L_7, (AudioClip_t3680889665 *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::DictationRecognizer_DictationComplete(UnityEngine.Windows.Speech.DictationCompletionCause)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_DictationRecognizer_DictationComplete_m2164910751 (RuntimeObject * __this /* static, unused */, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_DictationRecognizer_DictationComplete_m2164910751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cause == DictationCompletionCause.TimeoutExceeded)
		int32_t L_0 = ___cause0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0018;
		}
	}
	{
		// Microphone.End(DeviceName);
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		String_t* L_1 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_DeviceName_11();
		Microphone_End_m1566826877(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// dictationResult = "Dictation has timed out. Please try again.";
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(_stringLiteral2648933646);
	}

IL_0018:
	{
		// InputSystem.RaiseDictationComplete(source, dictationResult, dictationAudioClip);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
		String_t* L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationResult_13();
		AudioClip_t3680889665 * L_5 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationAudioClip_14();
		NullCheck(L_2);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(77 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationComplete(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// textSoFar = null;
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_textSoFar_10((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::DictationRecognizer_DictationError(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource_DictationRecognizer_DictationError_m2666438514 (RuntimeObject * __this /* static, unused */, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource_DictationRecognizer_DictationError_m2666438514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dictationResult = $"{error}\nHRESULT: {hresult}";
		String_t* L_0 = ___error0;
		int32_t L_1 = ___hresult1;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral562984263, L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_4);
		// InputSystem.RaiseDictationError(source, dictationResult);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_6 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
		String_t* L_7 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationResult_13();
		NullCheck(L_5);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(78 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_5, L_6, L_7, (AudioClip_t3680889665 *)NULL);
		// textSoFar = null;
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_textSoFar_10((StringBuilder_t *)NULL);
		// dictationResult = string.Empty;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationResult_13(L_8);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DictationInputSource__cctor_m930319373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictationInputSource__cctor_m930319373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsListening { get; private set; } = false;
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_U3CIsListeningU3Ek__BackingField_4((bool)0);
		// private static readonly string DeviceName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_DeviceName_11(L_0);
		// private static readonly WaitForUpdate NextUpdate = new WaitForUpdate();
		WaitForUpdate_t3436990142 * L_1 = (WaitForUpdate_t3436990142 *)il2cpp_codegen_object_new(WaitForUpdate_t3436990142_il2cpp_TypeInfo_var);
		WaitForUpdate__ctor_m1145480688(L_1, /*hidden argument*/NULL);
		((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_NextUpdate_15(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3941602108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m3941602108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2711997429 * L_0 = (U3CU3Ec_t2711997429 *)il2cpp_codegen_object_new(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1699691961(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1699691961 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<StartRecordingAsync>b__18_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_0_m2756785513 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method)
{
	{
		// await new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m2739506024(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<StartRecordingAsync>b__18_1()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_1_m1190701572 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_1_m1190701572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
		IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
		DictationRecognizer_t838322161 * L_0 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
		NullCheck(L_0);
		int32_t L_1 = DictationRecognizer_get_Status_m3456567143(L_0, /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<StopRecordingAsync>b__19_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_0_m1228090609 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method)
{
	{
		// await new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m2739506024(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<>c::<StopRecordingAsync>b__19_1()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_1_m1228156145 (U3CU3Ec_t2711997429 * __this, const RuntimeMethod* method)
{
	{
		// await new WaitUntil(() => PhraseRecognitionSystem.Status == SpeechSystemStatus.Running);
		int32_t L_0 = PhraseRecognitionSystem_get_Status_m2739506024(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__17_MoveNext_m4213190585 (U3CRunU3Ed__17_t889680548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunU3Ed__17_MoveNext_m4213190585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t919683548  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SimpleCoroutineAwaiter_t2831853999 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0068;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00ed;
			}
		}

IL_0011:
		{
			// if (IsListening && !Microphone.IsRecording(DeviceName) && dictationRecognizer.Status == SpeechSystemStatus.Running)
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_3 = DictationInputSource_get_IsListening_m3420185417(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_008b;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			String_t* L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_DeviceName_11();
			bool L_5 = Microphone_IsRecording_m2946688696(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_008b;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationRecognizer_t838322161 * L_6 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_6);
			int32_t L_7 = DictationRecognizer_get_Status_m3456567143(L_6, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_7) == ((uint32_t)1))))
			{
				goto IL_008b;
			}
		}

IL_0031:
		{
			// await StopRecordingAsync();
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			Task_t3187275312 * L_8 = DictationInputSource_StopRecordingAsync_m1367732392(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t919683548  L_9 = Task_GetAwaiter_m3638629061(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			bool L_10 = TaskAwaiter_get_IsCompleted_m1762140293((TaskAwaiter_t919683548 *)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0084;
			}
		}

IL_0045:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t919683548  L_12 = V_1;
			__this->set_U3CU3Eu__1_2(L_12);
			AsyncVoidMethodBuilder_t3819840891 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989((AsyncVoidMethodBuilder_t3819840891 *)L_13, (TaskAwaiter_t919683548 *)(&V_1), (U3CRunU3Ed__17_t889680548 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t919683548_TisU3CRunU3Ed__17_t889680548_m1198604989_RuntimeMethod_var);
			goto IL_012b;
		}

IL_0068:
		{
			TaskAwaiter_t919683548  L_14 = __this->get_U3CU3Eu__1_2();
			V_1 = L_14;
			TaskAwaiter_t919683548 * L_15 = __this->get_address_of_U3CU3Eu__1_2();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t919683548 ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0084:
		{
			TaskAwaiter_GetResult_m3227166796((TaskAwaiter_t919683548 *)(&V_1), /*hidden argument*/NULL);
		}

IL_008b:
		{
			// if (!hasFailed && dictationRecognizer.Status == SpeechSystemStatus.Failed)
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_17 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_hasFailed_7();
			if (L_17)
			{
				goto IL_00ba;
			}
		}

IL_0092:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationRecognizer_t838322161 * L_18 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_18);
			int32_t L_19 = DictationRecognizer_get_Status_m3456567143(L_18, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)2))))
			{
				goto IL_00ba;
			}
		}

IL_009f:
		{
			// hasFailed = true;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_hasFailed_7((bool)1);
			// InputSystem.RaiseDictationError(source, "Dictation recognizer has failed!");
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			RuntimeObject* L_21 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
			NullCheck(L_20);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(78 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_20, L_21, _stringLiteral1022120526, (AudioClip_t3680889665 *)NULL);
		}

IL_00ba:
		{
			// await NextUpdate;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			WaitForUpdate_t3436990142 * L_22 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_NextUpdate_15();
			SimpleCoroutineAwaiter_t2831853999 * L_23 = AwaiterExtensions_GetAwaiter_m126631721(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			V_2 = L_23;
			SimpleCoroutineAwaiter_t2831853999 * L_24 = V_2;
			NullCheck(L_24);
			bool L_25 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_24, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_0109;
			}
		}

IL_00cd:
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
			SimpleCoroutineAwaiter_t2831853999 * L_27 = V_2;
			__this->set_U3CU3Eu__2_3(L_27);
			AsyncVoidMethodBuilder_t3819840891 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__17_t889680548_m1627064737((AsyncVoidMethodBuilder_t3819840891 *)L_28, (SimpleCoroutineAwaiter_t2831853999 **)(&V_2), (U3CRunU3Ed__17_t889680548 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__17_t889680548_m1627064737_RuntimeMethod_var);
			goto IL_012b;
		}

IL_00ed:
		{
			RuntimeObject * L_29 = __this->get_U3CU3Eu__2_3();
			V_2 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_29, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__2_3(NULL);
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_0109:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_31 = V_2;
			NullCheck(L_31);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_31, /*hidden argument*/NULL);
			// while (true)
			goto IL_0011;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0114;
		throw e;
	}

CATCH_0114:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_3;
		AsyncVoidMethodBuilder_SetException_m1109381469((AsyncVoidMethodBuilder_t3819840891 *)L_32, L_33, /*hidden argument*/NULL);
		goto IL_012b;
	} // end catch (depth: 1)

IL_012b:
	{
		return;
	}
}
extern "C"  void U3CRunU3Ed__17_MoveNext_m4213190585_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CRunU3Ed__17_t889680548 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__17_t889680548 *>(__this + 1);
	U3CRunU3Ed__17_MoveNext_m4213190585(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<Run>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__17_SetStateMachine_m848747190 (U3CRunU3Ed__17_t889680548 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t3819840891 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m2384003025((AsyncVoidMethodBuilder_t3819840891 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CRunU3Ed__17_SetStateMachine_m848747190_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRunU3Ed__17_t889680548 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__17_t889680548 *>(__this + 1);
	U3CRunU3Ed__17_SetStateMachine_m848747190(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374 (U3CStartRecordingAsyncU3Ed__18_t3765132546 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t2831853999 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t3822001908 * G_B12_0 = NULL;
	Func_1_t3822001908 * G_B11_0 = NULL;
	Func_1_t3822001908 * G_B17_0 = NULL;
	Func_1_t3822001908 * G_B16_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00c9;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_016a;
			}
		}

IL_0014:
		{
			// if (IsListening || isTransitioning)
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_3 = DictationInputSource_get_IsListening_m3420185417(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0022;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_isTransitioning_9();
			if (!L_4)
			{
				goto IL_0031;
			}
		}

IL_0022:
		{
			// Debug.LogWarning("Unable to start recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral105663994, /*hidden argument*/NULL);
			// return;
			goto IL_01f4;
		}

IL_0031:
		{
			// hasFailed = false;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_hasFailed_7((bool)0);
			// IsListening = true;
			DictationInputSource_set_IsListening_m3821029428(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
			// isTransitioning = true;
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_isTransitioning_9((bool)1);
			// if (listener != null)
			GameObject_t1113636619 * L_5 = __this->get_listener_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_6 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0067;
			}
		}

IL_0051:
		{
			// hasListener = true;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_hasListener_8((bool)1);
			// InputSystem.PushModalInputHandler(listener);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_7 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_8 = __this->get_listener_2();
			NullCheck(L_7);
			InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::PushModalInputHandler(UnityEngine.GameObject) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_7, L_8);
		}

IL_0067:
		{
			// if (PhraseRecognitionSystem.Status == SpeechSystemStatus.Running)
			int32_t L_9 = PhraseRecognitionSystem_get_Status_m2739506024(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0074;
			}
		}

IL_006f:
		{
			// PhraseRecognitionSystem.Shutdown();
			PhraseRecognitionSystem_Shutdown_m1352915331(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0074:
		{
			// await new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			Func_1_t3822001908 * L_10 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
			Func_1_t3822001908 * L_11 = L_10;
			G_B11_0 = L_11;
			if (L_11)
			{
				G_B12_0 = L_11;
				goto IL_0093;
			}
		}

IL_007c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			U3CU3Ec_t2711997429 * L_12 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_13 = (intptr_t)U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_0_m2756785513_RuntimeMethod_var;
			Func_1_t3822001908 * L_14 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
			Func_1__ctor_m4025184632(L_14, L_12, L_13, /*hidden argument*/Func_1__ctor_m4025184632_RuntimeMethod_var);
			Func_1_t3822001908 * L_15 = L_14;
			((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_15);
			G_B12_0 = L_15;
		}

IL_0093:
		{
			WaitUntil_t3373419216 * L_16 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4227046299(L_16, G_B12_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t2831853999 * L_17 = AwaiterExtensions_GetAwaiter_m2122402014(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_1 = L_17;
			SimpleCoroutineAwaiter_t2831853999 * L_18 = V_1;
			NullCheck(L_18);
			bool L_19 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_18, /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00e5;
			}
		}

IL_00a6:
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
			SimpleCoroutineAwaiter_t2831853999 * L_21 = V_1;
			__this->set_U3CU3Eu__1_6(L_21);
			AsyncTaskMethodBuilder_t3536885450 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083((AsyncTaskMethodBuilder_t3536885450 *)L_22, (SimpleCoroutineAwaiter_t2831853999 **)(&V_1), (U3CStartRecordingAsyncU3Ed__18_t3765132546 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083_RuntimeMethod_var);
			goto IL_0207;
		}

IL_00c9:
		{
			RuntimeObject * L_23 = __this->get_U3CU3Eu__1_6();
			V_1 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_23, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_6(NULL);
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00e5:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_25 = V_1;
			NullCheck(L_25);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_25, /*hidden argument*/NULL);
			// dictationRecognizer.InitialSilenceTimeoutSeconds = initialSilenceTimeout;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationRecognizer_t838322161 * L_26 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			float L_27 = __this->get_initialSilenceTimeout_3();
			NullCheck(L_26);
			DictationRecognizer_set_InitialSilenceTimeoutSeconds_m1289845835(L_26, L_27, /*hidden argument*/NULL);
			// dictationRecognizer.AutoSilenceTimeoutSeconds = autoSilenceTimeout;
			DictationRecognizer_t838322161 * L_28 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			float L_29 = __this->get_autoSilenceTimeout_4();
			NullCheck(L_28);
			DictationRecognizer_set_AutoSilenceTimeoutSeconds_m3461878819(L_28, L_29, /*hidden argument*/NULL);
			// dictationRecognizer.Start();
			DictationRecognizer_t838322161 * L_30 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_30);
			DictationRecognizer_Start_m1602192779(L_30, /*hidden argument*/NULL);
			// await new WaitUntil(() => dictationRecognizer.Status != SpeechSystemStatus.Stopped);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			Func_1_t3822001908 * L_31 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9__18_1_2();
			Func_1_t3822001908 * L_32 = L_31;
			G_B16_0 = L_32;
			if (L_32)
			{
				G_B17_0 = L_32;
				goto IL_0134;
			}
		}

IL_011d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			U3CU3Ec_t2711997429 * L_33 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_34 = (intptr_t)U3CU3Ec_U3CStartRecordingAsyncU3Eb__18_1_m1190701572_RuntimeMethod_var;
			Func_1_t3822001908 * L_35 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
			Func_1__ctor_m4025184632(L_35, L_33, L_34, /*hidden argument*/Func_1__ctor_m4025184632_RuntimeMethod_var);
			Func_1_t3822001908 * L_36 = L_35;
			((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->set_U3CU3E9__18_1_2(L_36);
			G_B17_0 = L_36;
		}

IL_0134:
		{
			WaitUntil_t3373419216 * L_37 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4227046299(L_37, G_B17_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t2831853999 * L_38 = AwaiterExtensions_GetAwaiter_m2122402014(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			V_1 = L_38;
			SimpleCoroutineAwaiter_t2831853999 * L_39 = V_1;
			NullCheck(L_39);
			bool L_40 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_39, /*hidden argument*/NULL);
			if (L_40)
			{
				goto IL_0186;
			}
		}

IL_0147:
		{
			int32_t L_41 = 1;
			V_0 = L_41;
			__this->set_U3CU3E1__state_0(L_41);
			SimpleCoroutineAwaiter_t2831853999 * L_42 = V_1;
			__this->set_U3CU3Eu__1_6(L_42);
			AsyncTaskMethodBuilder_t3536885450 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083((AsyncTaskMethodBuilder_t3536885450 *)L_43, (SimpleCoroutineAwaiter_t2831853999 **)(&V_1), (U3CStartRecordingAsyncU3Ed__18_t3765132546 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStartRecordingAsyncU3Ed__18_t3765132546_m1316423083_RuntimeMethod_var);
			goto IL_0207;
		}

IL_016a:
		{
			RuntimeObject * L_44 = __this->get_U3CU3Eu__1_6();
			V_1 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_44, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_6(NULL);
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->set_U3CU3E1__state_0(L_45);
		}

IL_0186:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_46 = V_1;
			NullCheck(L_46);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_46, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Failed)
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationRecognizer_t838322161 * L_47 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_47);
			int32_t L_48 = DictationRecognizer_get_Status_m3456567143(L_47, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_48) == ((uint32_t)2))))
			{
				goto IL_01b0;
			}
		}

IL_0199:
		{
			// InputSystem.RaiseDictationError(source, "Dictation recognizer failed to start!");
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_49 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			RuntimeObject* L_50 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_source_5();
			NullCheck(L_49);
			InterfaceActionInvoker3< RuntimeObject*, String_t*, AudioClip_t3680889665 * >::Invoke(78 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseDictationError(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,System.String,UnityEngine.AudioClip) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_49, L_50, _stringLiteral629396478, (AudioClip_t3680889665 *)NULL);
			// return;
			goto IL_01f4;
		}

IL_01b0:
		{
			// dictationAudioClip = Microphone.Start(DeviceName, false, recordingTime, samplingRate);
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			String_t* L_51 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_DeviceName_11();
			int32_t L_52 = __this->get_recordingTime_5();
			int32_t L_53 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_samplingRate_12();
			AudioClip_t3680889665 * L_54 = Microphone_Start_m86543297(NULL /*static, unused*/, L_51, (bool)0, L_52, L_53, /*hidden argument*/NULL);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_dictationAudioClip_14(L_54);
			// textSoFar = new StringBuilder();
			StringBuilder_t * L_55 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m3121283359(L_55, /*hidden argument*/NULL);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_textSoFar_10(L_55);
			// isTransitioning = false;
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_isTransitioning_9((bool)0);
			goto IL_01f4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01dd;
		throw e;
	}

CATCH_01dd:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t3536885450 * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_57 = V_2;
		AsyncTaskMethodBuilder_SetException_m3731552766((AsyncTaskMethodBuilder_t3536885450 *)L_56, L_57, /*hidden argument*/NULL);
		goto IL_0207;
	} // end catch (depth: 1)

IL_01f4:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t3536885450 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m3263625660((AsyncTaskMethodBuilder_t3536885450 *)L_58, /*hidden argument*/NULL);
	}

IL_0207:
	{
		return;
	}
}
extern "C"  void U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__18_t3765132546 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__18_t3765132546 *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__18_MoveNext_m1809935374(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StartRecordingAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStartRecordingAsyncU3Ed__18_SetStateMachine_m3031051510 (U3CStartRecordingAsyncU3Ed__18_t3765132546 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t3536885450 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m2617690961((AsyncTaskMethodBuilder_t3536885450 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStartRecordingAsyncU3Ed__18_SetStateMachine_m3031051510_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartRecordingAsyncU3Ed__18_t3765132546 * _thisAdjusted = reinterpret_cast<U3CStartRecordingAsyncU3Ed__18_t3765132546 *>(__this + 1);
	U3CStartRecordingAsyncU3Ed__18_SetStateMachine_m3031051510(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827 (U3CStopRecordingAsyncU3Ed__19_t2153598868 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_t2831853999 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t3822001908 * G_B12_0 = NULL;
	Func_1_t3822001908 * G_B11_0 = NULL;
	Func_1_t3822001908 * G_B17_0 = NULL;
	Func_1_t3822001908 * G_B16_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00ca;
			}
		}

IL_000d:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0143;
			}
		}

IL_0014:
		{
			// if (!IsListening || isTransitioning)
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_3 = DictationInputSource_get_IsListening_m3420185417(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0022;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			bool L_4 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_isTransitioning_9();
			if (!L_4)
			{
				goto IL_0031;
			}
		}

IL_0022:
		{
			// Debug.LogWarning("Unable to stop recording");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3786885215, /*hidden argument*/NULL);
			// return;
			goto IL_0184;
		}

IL_0031:
		{
			// IsListening = false;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationInputSource_set_IsListening_m3821029428(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
			// isTransitioning = true;
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_isTransitioning_9((bool)1);
			// if (hasListener)
			bool L_5 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_hasListener_8();
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0044:
		{
			// InputSystem.PopModalInputHandler();
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_6 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::PopModalInputHandler() */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_6);
			// hasListener = false;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_hasListener_8((bool)0);
		}

IL_0054:
		{
			// Microphone.End(DeviceName);
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			String_t* L_7 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_DeviceName_11();
			Microphone_End_m1566826877(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			// if (dictationRecognizer.Status == SpeechSystemStatus.Running)
			DictationRecognizer_t838322161 * L_8 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_8);
			int32_t L_9 = DictationRecognizer_get_Status_m3456567143(L_8, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0075;
			}
		}

IL_006b:
		{
			// dictationRecognizer.Stop();
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			DictationRecognizer_t838322161 * L_10 = ((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->get_dictationRecognizer_6();
			NullCheck(L_10);
			DictationRecognizer_Stop_m2055576662(L_10, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// await new WaitUntil(() => PhraseRecognitionSystem.Status != SpeechSystemStatus.Running);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			Func_1_t3822001908 * L_11 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9__19_0_3();
			Func_1_t3822001908 * L_12 = L_11;
			G_B11_0 = L_12;
			if (L_12)
			{
				G_B12_0 = L_12;
				goto IL_0094;
			}
		}

IL_007d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			U3CU3Ec_t2711997429 * L_13 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_14 = (intptr_t)U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_0_m1228090609_RuntimeMethod_var;
			Func_1_t3822001908 * L_15 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
			Func_1__ctor_m4025184632(L_15, L_13, L_14, /*hidden argument*/Func_1__ctor_m4025184632_RuntimeMethod_var);
			Func_1_t3822001908 * L_16 = L_15;
			((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->set_U3CU3E9__19_0_3(L_16);
			G_B12_0 = L_16;
		}

IL_0094:
		{
			WaitUntil_t3373419216 * L_17 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4227046299(L_17, G_B12_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t2831853999 * L_18 = AwaiterExtensions_GetAwaiter_m2122402014(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			V_1 = L_18;
			SimpleCoroutineAwaiter_t2831853999 * L_19 = V_1;
			NullCheck(L_19);
			bool L_20 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00e6;
			}
		}

IL_00a7:
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
			SimpleCoroutineAwaiter_t2831853999 * L_22 = V_1;
			__this->set_U3CU3Eu__1_2(L_22);
			AsyncTaskMethodBuilder_t3536885450 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606((AsyncTaskMethodBuilder_t3536885450 *)L_23, (SimpleCoroutineAwaiter_t2831853999 **)(&V_1), (U3CStopRecordingAsyncU3Ed__19_t2153598868 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606_RuntimeMethod_var);
			goto IL_0197;
		}

IL_00ca:
		{
			RuntimeObject * L_24 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_24, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
		}

IL_00e6:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_26 = V_1;
			NullCheck(L_26);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_26, /*hidden argument*/NULL);
			// PhraseRecognitionSystem.Restart();
			PhraseRecognitionSystem_Restart_m1774137830(NULL /*static, unused*/, /*hidden argument*/NULL);
			// await new WaitUntil(() => PhraseRecognitionSystem.Status == SpeechSystemStatus.Running);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			Func_1_t3822001908 * L_27 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9__19_1_4();
			Func_1_t3822001908 * L_28 = L_27;
			G_B16_0 = L_28;
			if (L_28)
			{
				G_B17_0 = L_28;
				goto IL_0110;
			}
		}

IL_00f9:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var);
			U3CU3Ec_t2711997429 * L_29 = ((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_30 = (intptr_t)U3CU3Ec_U3CStopRecordingAsyncU3Eb__19_1_m1228156145_RuntimeMethod_var;
			Func_1_t3822001908 * L_31 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
			Func_1__ctor_m4025184632(L_31, L_29, L_30, /*hidden argument*/Func_1__ctor_m4025184632_RuntimeMethod_var);
			Func_1_t3822001908 * L_32 = L_31;
			((U3CU3Ec_t2711997429_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2711997429_il2cpp_TypeInfo_var))->set_U3CU3E9__19_1_4(L_32);
			G_B17_0 = L_32;
		}

IL_0110:
		{
			WaitUntil_t3373419216 * L_33 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4227046299(L_33, G_B17_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t2831853999 * L_34 = AwaiterExtensions_GetAwaiter_m2122402014(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
			V_1 = L_34;
			SimpleCoroutineAwaiter_t2831853999 * L_35 = V_1;
			NullCheck(L_35);
			bool L_36 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_35, /*hidden argument*/NULL);
			if (L_36)
			{
				goto IL_015f;
			}
		}

IL_0123:
		{
			int32_t L_37 = 1;
			V_0 = L_37;
			__this->set_U3CU3E1__state_0(L_37);
			SimpleCoroutineAwaiter_t2831853999 * L_38 = V_1;
			__this->set_U3CU3Eu__1_2(L_38);
			AsyncTaskMethodBuilder_t3536885450 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606((AsyncTaskMethodBuilder_t3536885450 *)L_39, (SimpleCoroutineAwaiter_t2831853999 **)(&V_1), (U3CStopRecordingAsyncU3Ed__19_t2153598868 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CStopRecordingAsyncU3Ed__19_t2153598868_m974932606_RuntimeMethod_var);
			goto IL_0197;
		}

IL_0143:
		{
			RuntimeObject * L_40 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_40, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->set_U3CU3E1__state_0(L_41);
		}

IL_015f:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_42 = V_1;
			NullCheck(L_42);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_42, /*hidden argument*/NULL);
			// isTransitioning = false;
			IL2CPP_RUNTIME_CLASS_INIT(DictationInputSource_t3573619954_il2cpp_TypeInfo_var);
			((DictationInputSource_t3573619954_StaticFields*)il2cpp_codegen_static_fields_for(DictationInputSource_t3573619954_il2cpp_TypeInfo_var))->set_isTransitioning_9((bool)0);
			goto IL_0184;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_016d;
		throw e;
	}

CATCH_016d:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t3536885450 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_2;
		AsyncTaskMethodBuilder_SetException_m3731552766((AsyncTaskMethodBuilder_t3536885450 *)L_43, L_44, /*hidden argument*/NULL);
		goto IL_0197;
	} // end catch (depth: 1)

IL_0184:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t3536885450 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m3263625660((AsyncTaskMethodBuilder_t3536885450 *)L_45, /*hidden argument*/NULL);
	}

IL_0197:
	{
		return;
	}
}
extern "C"  void U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__19_t2153598868 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__19_t2153598868 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__19_MoveNext_m54910827(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.DictationInputSource/<StopRecordingAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopRecordingAsyncU3Ed__19_SetStateMachine_m3423593062 (U3CStopRecordingAsyncU3Ed__19_t2153598868 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t3536885450 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m2617690961((AsyncTaskMethodBuilder_t3536885450 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CStopRecordingAsyncU3Ed__19_SetStateMachine_m3423593062_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopRecordingAsyncU3Ed__19_t2153598868 * _thisAdjusted = reinterpret_cast<U3CStopRecordingAsyncU3Ed__19_t2153598868 *>(__this + 1);
	U3CStopRecordingAsyncU3Ed__19_SetStateMachine_m3423593062(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::.ctor(Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[],UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource__ctor_m2868700798 (SpeechInputSource_t3338687719 * __this, SpeechCommandsU5BU5D_t2632020690* ___commands0, int32_t ___recognitionConfidenceLevel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource__ctor_m2868700798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly WaitForUpdate waitForUpdate = new WaitForUpdate();
		WaitForUpdate_t3436990142 * L_0 = (WaitForUpdate_t3436990142 *)il2cpp_codegen_object_new(WaitForUpdate_t3436990142_il2cpp_TypeInfo_var);
		WaitForUpdate__ctor_m1145480688(L_0, /*hidden argument*/NULL);
		__this->set_waitForUpdate_6(L_0);
		// public SpeechInputSource(SpeechCommands[] commands, ConfidenceLevel recognitionConfidenceLevel = ConfidenceLevel.Medium) : base("SpeechInput")
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		BaseGenericInputSource__ctor_m1477578704(__this, _stringLiteral2897630553, (IMixedRealityPointerU5BU5D_t2431669734*)(IMixedRealityPointerU5BU5D_t2431669734*)NULL, /*hidden argument*/NULL);
		// Commands = commands;
		SpeechCommandsU5BU5D_t2632020690* L_1 = ___commands0;
		__this->set_U3CCommandsU3Ek__BackingField_5(L_1);
		// RecognitionConfidenceLevel = recognitionConfidenceLevel;
		int32_t L_2 = ___recognitionConfidenceLevel1;
		SpeechInputSource_set_RecognitionConfidenceLevel_m246022595(__this, L_2, /*hidden argument*/NULL);
		// Initialize();
		SpeechInputSource_Initialize_m2562938635(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Initialize()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Initialize_m2562938635 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_Initialize_m2562938635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		bool L_0 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		SpeechCommandsU5BU5D_t2632020690* L_1 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!Application.isPlaying || Commands.Length == 0) { return; }
		return;
	}

IL_0011:
	{
		// var newKeywords = new string[Commands.Length];
		SpeechCommandsU5BU5D_t2632020690* L_2 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_3 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		V_0 = L_3;
		// for (int i = 0; i < Commands.Length; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0023:
	{
		// newKeywords[i] = Commands[i].Keyword;
		StringU5BU5D_t1281789340* L_4 = V_0;
		int32_t L_5 = V_1;
		SpeechCommandsU5BU5D_t2632020690* L_6 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8 = SpeechCommands_get_Keyword_m1598806753((SpeechCommands_t2899055299 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_8);
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < Commands.Length; i++)
		int32_t L_10 = V_1;
		SpeechCommandsU5BU5D_t2632020690* L_11 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		// Setup(newKeywords);
		StringU5BU5D_t1281789340* L_12 = V_0;
		SpeechInputSource_Setup_m754060475(__this, L_12, /*hidden argument*/NULL);
		// if (recognizerStart == RecognizerStartBehavior.AutoStart)
		int32_t L_13 = __this->get_recognizerStart_4();
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		// StartRecognition();
		SpeechInputSource_StartRecognition_m2466601509(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// Run();
		SpeechInputSource_Run_m3598150067(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Dispose_m1018065804 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer == null) { return; }
		KeywordRecognizer_t2141680640 * L_0 = __this->get_keywordRecognizer_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (keywordRecognizer == null) { return; }
		return;
	}

IL_0009:
	{
		// StopRecognition();
		SpeechInputSource_StopRecognition_m4143990232(__this, /*hidden argument*/NULL);
		// Cleanup();
		SpeechInputSource_Cleanup_m2304272612(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.SpeechCommands[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::get_Commands()
extern "C" IL2CPP_METHOD_ATTR SpeechCommandsU5BU5D_t2632020690* SpeechInputSource_get_Commands_m185063296 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands[] Commands { get; }
		SpeechCommandsU5BU5D_t2632020690* L_0 = __this->get_U3CCommandsU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Run_m3598150067 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_Run_m3598150067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunU3Ed__9_t3701686637  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t3819840891  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t3819840891  L_0 = AsyncVoidMethodBuilder_Create_m1976941025(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CRunU3Ed__9_t3701686637  L_1 = V_0;
		AsyncVoidMethodBuilder_t3819840891  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609((AsyncVoidMethodBuilder_t3819840891 *)(&V_1), (U3CRunU3Ed__9_t3701686637 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__9_t3701686637_m3206860609_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Setup(System.String[])
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Setup_m754060475 (SpeechInputSource_t3338687719 * __this, StringU5BU5D_t1281789340* ___newKeywords0, const RuntimeMethod* method)
{
	{
		// WindowsSetup(newKeywords);
		StringU5BU5D_t1281789340* L_0 = ___newKeywords0;
		SpeechInputSource_WindowsSetup_m1213271869(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::RaiseKeywordAction(System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_RaiseKeywordAction_m314662571 (SpeechInputSource_t3338687719 * __this, String_t* ___keyword0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_RaiseKeywordAction_m314662571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnPhraseRecognized(RecognitionConfidenceLevel, TimeSpan.Zero, DateTime.Now, null, keyword);
		int32_t L_0 = SpeechInputSource_get_RecognitionConfidenceLevel_m1696734966(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_Zero_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___keyword0;
		SpeechInputSource_OnPhraseRecognized_m2402041898(__this, L_0, L_1, L_2, (SemanticMeaningU5BU5D_t1653704947*)(SemanticMeaningU5BU5D_t1653704947*)NULL, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::Cleanup()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_Cleanup_m2304272612 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// WindowsCleanup();
		SpeechInputSource_WindowsCleanup_m2454173580(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::StartRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_StartRecognition_m2466601509 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// WindowsStartRecognition();
		SpeechInputSource_WindowsStartRecognition_m1354049730(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::StopRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_StopRecognition_m4143990232 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// WindowsStopRecognition();
		SpeechInputSource_WindowsStopRecognition_m1431962239(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Windows.Speech.ConfidenceLevel Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::get_RecognitionConfidenceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t SpeechInputSource_get_RecognitionConfidenceLevel_m1696734966 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// public ConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = __this->get_U3CRecognitionConfidenceLevelU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::set_RecognitionConfidenceLevel(UnityEngine.Windows.Speech.ConfidenceLevel)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_set_RecognitionConfidenceLevel_m246022595 (SpeechInputSource_t3338687719 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ConfidenceLevel RecognitionConfidenceLevel { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRecognitionConfidenceLevelU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsSetup(System.String[])
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsSetup_m1213271869 (SpeechInputSource_t3338687719 * __this, StringU5BU5D_t1281789340* ___newKeywords0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_WindowsSetup_m1213271869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keywordRecognizer = new KeywordRecognizer(newKeywords, RecognitionConfidenceLevel);
		StringU5BU5D_t1281789340* L_0 = ___newKeywords0;
		int32_t L_1 = SpeechInputSource_get_RecognitionConfidenceLevel_m1696734966(__this, /*hidden argument*/NULL);
		KeywordRecognizer_t2141680640 * L_2 = (KeywordRecognizer_t2141680640 *)il2cpp_codegen_object_new(KeywordRecognizer_t2141680640_il2cpp_TypeInfo_var);
		KeywordRecognizer__ctor_m2118288196(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_keywordRecognizer_7(L_2);
		// keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t2141680640 * L_3 = __this->get_keywordRecognizer_7();
		intptr_t L_4 = (intptr_t)SpeechInputSource_KeywordRecognizer_OnPhraseRecognized_m3233104579_RuntimeMethod_var;
		PhraseRecognizedDelegate_t3092874173 * L_5 = (PhraseRecognizedDelegate_t3092874173 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t3092874173_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m2791032376(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		PhraseRecognizer_add_OnPhraseRecognized_m3697159049(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsCleanup()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsCleanup_m2454173580 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_WindowsCleanup_m2454173580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keywordRecognizer.OnPhraseRecognized -= KeywordRecognizer_OnPhraseRecognized;
		KeywordRecognizer_t2141680640 * L_0 = __this->get_keywordRecognizer_7();
		intptr_t L_1 = (intptr_t)SpeechInputSource_KeywordRecognizer_OnPhraseRecognized_m3233104579_RuntimeMethod_var;
		PhraseRecognizedDelegate_t3092874173 * L_2 = (PhraseRecognizedDelegate_t3092874173 *)il2cpp_codegen_object_new(PhraseRecognizedDelegate_t3092874173_il2cpp_TypeInfo_var);
		PhraseRecognizedDelegate__ctor_m2791032376(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		PhraseRecognizer_remove_OnPhraseRecognized_m840799599(L_0, L_2, /*hidden argument*/NULL);
		// keywordRecognizer.Dispose();
		KeywordRecognizer_t2141680640 * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Dispose_m2940325522(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsStartRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsStartRecognition_m1354049730 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && !keywordRecognizer.IsRunning)
		KeywordRecognizer_t2141680640 * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t2141680640 * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m4096271258(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Start();
		KeywordRecognizer_t2141680640 * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Start_m3966080098(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::WindowsStopRecognition()
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_WindowsStopRecognition_m1431962239 (SpeechInputSource_t3338687719 * __this, const RuntimeMethod* method)
{
	{
		// if (keywordRecognizer != null && keywordRecognizer.IsRunning)
		KeywordRecognizer_t2141680640 * L_0 = __this->get_keywordRecognizer_7();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		KeywordRecognizer_t2141680640 * L_1 = __this->get_keywordRecognizer_7();
		NullCheck(L_1);
		bool L_2 = PhraseRecognizer_get_IsRunning_m4096271258(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// keywordRecognizer.Stop();
		KeywordRecognizer_t2141680640 * L_3 = __this->get_keywordRecognizer_7();
		NullCheck(L_3);
		PhraseRecognizer_Stop_m1221061102(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::KeywordRecognizer_OnPhraseRecognized(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_KeywordRecognizer_OnPhraseRecognized_m3233104579 (SpeechInputSource_t3338687719 * __this, PhraseRecognizedEventArgs_t3182631328  ___args0, const RuntimeMethod* method)
{
	{
		// OnPhraseRecognized(args.confidence, args.phraseDuration, args.phraseStartTime, args.semanticMeanings, args.text);
		PhraseRecognizedEventArgs_t3182631328  L_0 = ___args0;
		int32_t L_1 = L_0.get_confidence_0();
		PhraseRecognizedEventArgs_t3182631328  L_2 = ___args0;
		TimeSpan_t881159249  L_3 = L_2.get_phraseDuration_4();
		PhraseRecognizedEventArgs_t3182631328  L_4 = ___args0;
		DateTime_t3738529785  L_5 = L_4.get_phraseStartTime_3();
		PhraseRecognizedEventArgs_t3182631328  L_6 = ___args0;
		SemanticMeaningU5BU5D_t1653704947* L_7 = L_6.get_semanticMeanings_1();
		PhraseRecognizedEventArgs_t3182631328  L_8 = ___args0;
		String_t* L_9 = L_8.get_text_2();
		SpeechInputSource_OnPhraseRecognized_m2402041898(__this, L_1, L_3, L_5, L_7, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource::OnPhraseRecognized(UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,UnityEngine.Windows.Speech.SemanticMeaning[],System.String)
extern "C" IL2CPP_METHOD_ATTR void SpeechInputSource_OnPhraseRecognized_m2402041898 (SpeechInputSource_t3338687719 * __this, int32_t ___confidence0, TimeSpan_t881159249  ___phraseDuration1, DateTime_t3738529785  ___phraseStartTime2, SemanticMeaningU5BU5D_t1653704947* ___semanticMeanings3, String_t* ___text4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechInputSource_OnPhraseRecognized_m2402041898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t378540539  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t378540539  V_2;
	memset(&V_2, 0, sizeof(V_2));
	SpeechCommandsU5BU5D_t2632020690* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	SpeechCommandsU5BU5D_t2632020690* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Nullable_1_t378540539  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	int32_t G_B7_1 = 0;
	int32_t G_B10_0 = 0;
	{
		// for (int i = 0; i < Commands?.Length; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		// if (Commands[i].Keyword == text)
		SpeechCommandsU5BU5D_t2632020690* L_0 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = SpeechCommands_get_Keyword_m1598806753((SpeechCommands_t2899055299 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), /*hidden argument*/NULL);
		String_t* L_3 = ___text4;
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// InputSystem.RaiseSpeechCommandRecognized(this, Commands[i].Action, confidence, phraseDuration, phraseStartTime, semanticMeanings, text);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		SpeechCommandsU5BU5D_t2632020690* L_6 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		MixedRealityInputAction_t3419222324  L_8 = SpeechCommands_get_Action_m2915621769((SpeechCommands_t2899055299 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		int32_t L_9 = ___confidence0;
		TimeSpan_t881159249  L_10 = ___phraseDuration1;
		DateTime_t3738529785  L_11 = ___phraseStartTime2;
		SemanticMeaningU5BU5D_t1653704947* L_12 = ___semanticMeanings3;
		String_t* L_13 = ___text4;
		NullCheck(L_5);
		InterfaceActionInvoker7< RuntimeObject*, MixedRealityInputAction_t3419222324 , int32_t, TimeSpan_t881159249 , DateTime_t3738529785 , SemanticMeaningU5BU5D_t1653704947*, String_t* >::Invoke(74 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction,UnityEngine.Windows.Speech.ConfidenceLevel,System.TimeSpan,System.DateTime,UnityEngine.Windows.Speech.SemanticMeaning[],System.String) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_5, __this, L_8, L_9, L_10, L_11, L_12, L_13);
		// break;
		return;
	}

IL_0042:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < Commands?.Length; i++)
		int32_t L_15 = V_0;
		SpeechCommandsU5BU5D_t2632020690* L_16 = SpeechInputSource_get_Commands_m185063296(__this, /*hidden argument*/NULL);
		SpeechCommandsU5BU5D_t2632020690* L_17 = L_16;
		G_B5_0 = L_17;
		G_B5_1 = L_15;
		if (L_17)
		{
			G_B6_0 = L_17;
			G_B6_1 = L_15;
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_18 = V_2;
		G_B7_0 = L_18;
		G_B7_1 = G_B5_1;
		goto IL_0063;
	}

IL_005c:
	{
		NullCheck(G_B6_0);
		Nullable_1_t378540539  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Nullable_1__ctor_m2962682148((&L_19), (((int32_t)((int32_t)(((RuntimeArray *)G_B6_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m2962682148_RuntimeMethod_var);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_1;
	}

IL_0063:
	{
		V_1 = G_B7_0;
		int32_t L_20 = Nullable_1_GetValueOrDefault_m463439517((Nullable_1_t378540539 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m463439517_RuntimeMethod_var);
		if ((((int32_t)G_B7_1) < ((int32_t)L_20)))
		{
			goto IL_0070;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_0077;
	}

IL_0070:
	{
		bool L_21 = Nullable_1_get_HasValue_m3898097692((Nullable_1_t378540539 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var);
		G_B10_0 = ((int32_t)(L_21));
	}

IL_0077:
	{
		if (G_B10_0)
		{
			goto IL_0004;
		}
	}
	{
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__9_MoveNext_m3999760580 (U3CRunU3Ed__9_t3701686637 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunU3Ed__9_MoveNext_m3999760580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpeechInputSource_t3338687719 * V_1 = NULL;
	int32_t V_2 = 0;
	SimpleCoroutineAwaiter_t2831853999 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpeechInputSource_t3338687719 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_008c;
			}
		}

IL_0011:
		{
			goto IL_00ae;
		}

IL_0016:
		{
			// for (int i = 0; i < Commands.Length; i++)
			V_2 = 0;
			goto IL_004d;
		}

IL_001a:
		{
			// if (Input.GetKeyDown(Commands[i].KeyCode))
			SpeechInputSource_t3338687719 * L_3 = V_1;
			NullCheck(L_3);
			SpeechCommandsU5BU5D_t2632020690* L_4 = SpeechInputSource_get_Commands_m185063296(L_3, /*hidden argument*/NULL);
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = SpeechCommands_get_KeyCode_m235080407((SpeechCommands_t2899055299 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
			bool L_7 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0049;
			}
		}

IL_0032:
		{
			// RaiseKeywordAction(Commands[i].Keyword);
			SpeechInputSource_t3338687719 * L_8 = V_1;
			SpeechInputSource_t3338687719 * L_9 = V_1;
			NullCheck(L_9);
			SpeechCommandsU5BU5D_t2632020690* L_10 = SpeechInputSource_get_Commands_m185063296(L_9, /*hidden argument*/NULL);
			int32_t L_11 = V_2;
			NullCheck(L_10);
			String_t* L_12 = SpeechCommands_get_Keyword_m1598806753((SpeechCommands_t2899055299 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/NULL);
			NullCheck(L_8);
			SpeechInputSource_RaiseKeywordAction_m314662571(L_8, L_12, /*hidden argument*/NULL);
		}

IL_0049:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_13 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		}

IL_004d:
		{
			// for (int i = 0; i < Commands.Length; i++)
			int32_t L_14 = V_2;
			SpeechInputSource_t3338687719 * L_15 = V_1;
			NullCheck(L_15);
			SpeechCommandsU5BU5D_t2632020690* L_16 = SpeechInputSource_get_Commands_m185063296(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
			{
				goto IL_001a;
			}
		}

IL_0058:
		{
			// await waitForUpdate;
			SpeechInputSource_t3338687719 * L_17 = V_1;
			NullCheck(L_17);
			WaitForUpdate_t3436990142 * L_18 = L_17->get_waitForUpdate_6();
			SimpleCoroutineAwaiter_t2831853999 * L_19 = AwaiterExtensions_GetAwaiter_m126631721(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			SimpleCoroutineAwaiter_t2831853999 * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00a8;
			}
		}

IL_006c:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			SimpleCoroutineAwaiter_t2831853999 * L_23 = V_3;
			__this->set_U3CU3Eu__1_3(L_23);
			AsyncVoidMethodBuilder_t3819840891 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__9_t3701686637_m2923109606((AsyncVoidMethodBuilder_t3819840891 *)L_24, (SimpleCoroutineAwaiter_t2831853999 **)(&V_3), (U3CRunU3Ed__9_t3701686637 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__9_t3701686637_m2923109606_RuntimeMethod_var);
			goto IL_00f4;
		}

IL_008c:
		{
			RuntimeObject * L_25 = __this->get_U3CU3Eu__1_3();
			V_3 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_25, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
		}

IL_00a8:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_27 = V_3;
			NullCheck(L_27);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_27, /*hidden argument*/NULL);
		}

IL_00ae:
		{
			// while (keywordRecognizer != null && keywordRecognizer.IsRunning)
			SpeechInputSource_t3338687719 * L_28 = V_1;
			NullCheck(L_28);
			KeywordRecognizer_t2141680640 * L_29 = L_28->get_keywordRecognizer_7();
			if (!L_29)
			{
				goto IL_00c6;
			}
		}

IL_00b6:
		{
			SpeechInputSource_t3338687719 * L_30 = V_1;
			NullCheck(L_30);
			KeywordRecognizer_t2141680640 * L_31 = L_30->get_keywordRecognizer_7();
			NullCheck(L_31);
			bool L_32 = PhraseRecognizer_get_IsRunning_m4096271258(L_31, /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_0016;
			}
		}

IL_00c6:
		{
			goto IL_00e1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c8;
		throw e;
	}

CATCH_00c8:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_34 = V_4;
		AsyncVoidMethodBuilder_SetException_m1109381469((AsyncVoidMethodBuilder_t3819840891 *)L_33, L_34, /*hidden argument*/NULL);
		goto IL_00f4;
	} // end catch (depth: 1)

IL_00e1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m1991744790((AsyncVoidMethodBuilder_t3819840891 *)L_35, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		return;
	}
}
extern "C"  void U3CRunU3Ed__9_MoveNext_m3999760580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CRunU3Ed__9_t3701686637 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__9_t3701686637 *>(__this + 1);
	U3CRunU3Ed__9_MoveNext_m3999760580(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.SpeechInputSource/<Run>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__9_SetStateMachine_m343003418 (U3CRunU3Ed__9_t3701686637 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t3819840891 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m2384003025((AsyncVoidMethodBuilder_t3819840891 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CRunU3Ed__9_SetStateMachine_m343003418_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRunU3Ed__9_t3701686637 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__9_t3701686637 *>(__this + 1);
	U3CRunU3Ed__9_SetStateMachine_m343003418(_thisAdjusted, ___stateMachine0, method);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource__ctor_m120589884 (TouchscreenInputSource_t2670215125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource__ctor_m120589884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected float MaxTapContactTime = 0.5f;
		__this->set_MaxTapContactTime_5((0.5f));
		// private readonly HashSet<TouchPointer> activeTouches = new HashSet<TouchPointer>();
		HashSet_1_t2155988237 * L_0 = (HashSet_1_t2155988237 *)il2cpp_codegen_object_new(HashSet_1_t2155988237_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3045394649(L_0, /*hidden argument*/HashSet_1__ctor_m3045394649_RuntimeMethod_var);
		__this->set_activeTouches_6(L_0);
		// public TouchscreenInputSource() : base("Touch Screen Input Source")
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		BaseGenericInputSource__ctor_m1477578704(__this, _stringLiteral148519890, (IMixedRealityPointerU5BU5D_t2431669734*)(IMixedRealityPointerU5BU5D_t2431669734*)NULL, /*hidden argument*/NULL);
		// if (Application.isPlaying)
		bool L_1 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Run();
		TouchscreenInputSource_Run_m612308288(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::get_Pointers()
extern "C" IL2CPP_METHOD_ATTR IMixedRealityPointerU5BU5D_t2431669734* TouchscreenInputSource_get_Pointers_m3269699889 (TouchscreenInputSource_t2670215125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_get_Pointers_m3269699889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMixedRealityPointerU5BU5D_t2431669734* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t3861165508  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TouchPointer_t3591038763 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// var pointers = new IMixedRealityPointer[activeTouches.Count];
		HashSet_1_t2155988237 * L_0 = __this->get_activeTouches_6();
		NullCheck(L_0);
		int32_t L_1 = HashSet_1_get_Count_m2591076122(L_0, /*hidden argument*/HashSet_1_get_Count_m2591076122_RuntimeMethod_var);
		IMixedRealityPointerU5BU5D_t2431669734* L_2 = (IMixedRealityPointerU5BU5D_t2431669734*)SZArrayNew(IMixedRealityPointerU5BU5D_t2431669734_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// int count = 0;
		V_1 = 0;
		// foreach (var touch in activeTouches)
		HashSet_1_t2155988237 * L_3 = __this->get_activeTouches_6();
		NullCheck(L_3);
		Enumerator_t3861165508  L_4 = HashSet_1_GetEnumerator_m259392267(L_3, /*hidden argument*/HashSet_1_GetEnumerator_m259392267_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0021:
		{
			// foreach (var touch in activeTouches)
			TouchPointer_t3591038763 * L_5 = Enumerator_get_Current_m3966105722((Enumerator_t3861165508 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m3966105722_RuntimeMethod_var);
			V_3 = L_5;
			// pointers[count++] = touch;
			IMixedRealityPointerU5BU5D_t2431669734* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			TouchPointer_t3591038763 * L_9 = V_3;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_9);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		}

IL_0031:
		{
			// foreach (var touch in activeTouches)
			bool L_10 = Enumerator_MoveNext_m2080996668((Enumerator_t3861165508 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m2080996668_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0021;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383986263((Enumerator_t3861165508 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m383986263_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		// return pointers;
		IMixedRealityPointerU5BU5D_t2431669734* L_11 = V_0;
		return L_11;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::get_PointerAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  TouchscreenInputSource_get_PointerAction_m3597869734 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_get_PointerAction_m3597869734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction PointerAction { get; set; } = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t3419222324  L_0 = ((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->get_U3CPointerActionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::set_PointerAction(Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_set_PointerAction_m4265941453 (RuntimeObject * __this /* static, unused */, MixedRealityInputAction_t3419222324  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_set_PointerAction_m4265941453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction PointerAction { get; set; } = MixedRealityInputAction.None;
		MixedRealityInputAction_t3419222324  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
		((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->set_U3CPointerActionU3Ek__BackingField_8(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::get_HoldAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t3419222324  TouchscreenInputSource_get_HoldAction_m1070353476 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_get_HoldAction_m1070353476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction HoldAction { get; set; } = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t3419222324  L_0 = ((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->get_U3CHoldActionU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::set_HoldAction(Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_set_HoldAction_m4158946731 (RuntimeObject * __this /* static, unused */, MixedRealityInputAction_t3419222324  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_set_HoldAction_m4158946731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction HoldAction { get; set; } = MixedRealityInputAction.None;
		MixedRealityInputAction_t3419222324  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
		((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->set_U3CHoldActionU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::Run()
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_Run_m612308288 (TouchscreenInputSource_t2670215125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_Run_m612308288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunU3Ed__16_t2268004534  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t3819840891  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t3819840891  L_0 = AsyncVoidMethodBuilder_Create_m1976941025(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CRunU3Ed__16_t2268004534  L_1 = V_0;
		AsyncVoidMethodBuilder_t3819840891  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321((AsyncVoidMethodBuilder_t3819840891 *)(&V_1), (U3CRunU3Ed__16_t2268004534 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CRunU3Ed__16_t2268004534_m877128321_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::AddOrUpdateTouch(UnityEngine.Touch,UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_AddOrUpdateTouch_m2674627957 (TouchscreenInputSource_t2670215125 * __this, Touch_t1921856868  ___touch0, Ray_t3785851493  ___ray1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_AddOrUpdateTouch_m2674627957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchPointer_t3591038763 * V_0 = NULL;
	Enumerator_t3861165508  V_1;
	memset(&V_1, 0, sizeof(V_1));
	TouchPointer_t3591038763 * V_2 = NULL;
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (var knownTouch in activeTouches)
		HashSet_1_t2155988237 * L_0 = __this->get_activeTouches_6();
		NullCheck(L_0);
		Enumerator_t3861165508  L_1 = HashSet_1_GetEnumerator_m259392267(L_0, /*hidden argument*/HashSet_1_GetEnumerator_m259392267_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_000e:
		{
			// foreach (var knownTouch in activeTouches)
			TouchPointer_t3591038763 * L_2 = Enumerator_get_Current_m3966105722((Enumerator_t3861165508 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3966105722_RuntimeMethod_var);
			V_2 = L_2;
			// if (knownTouch.TouchData.fingerId == touch.fingerId)
			TouchPointer_t3591038763 * L_3 = V_2;
			NullCheck(L_3);
			Touch_t1921856868  L_4 = L_3->get_TouchData_19();
			V_3 = L_4;
			int32_t L_5 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
			int32_t L_6 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)(&___touch0), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0041;
			}
		}

IL_002d:
		{
			// knownTouch.Lifetime += Time.deltaTime;
			TouchPointer_t3591038763 * L_7 = V_2;
			TouchPointer_t3591038763 * L_8 = L_7;
			NullCheck(L_8);
			float L_9 = L_8->get_Lifetime_21();
			float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_Lifetime_21(((float)il2cpp_codegen_add((float)L_9, (float)L_10)));
			// return;
			IL2CPP_LEAVE(0xBF, FINALLY_004c);
		}

IL_0041:
		{
			// foreach (var knownTouch in activeTouches)
			bool L_11 = Enumerator_MoveNext_m2080996668((Enumerator_t3861165508 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2080996668_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_000e;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383986263((Enumerator_t3861165508 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m383986263_RuntimeMethod_var);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		// if (activeTouches.Count == 0)
		HashSet_1_t2155988237 * L_12 = __this->get_activeTouches_6();
		NullCheck(L_12);
		int32_t L_13 = HashSet_1_get_Count_m2591076122(L_12, /*hidden argument*/HashSet_1_get_Count_m2591076122_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		// InputSystem.RaiseSourceDetected(this);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_14, __this, (RuntimeObject*)NULL);
	}

IL_0073:
	{
		// var newTouch = new TouchPointer($"Touch {touch.fingerId}", touch, ray, this);
		int32_t L_15 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)(&___touch0), /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2749875858, L_17, /*hidden argument*/NULL);
		Touch_t1921856868  L_19 = ___touch0;
		Ray_t3785851493  L_20 = ___ray1;
		TouchPointer_t3591038763 * L_21 = (TouchPointer_t3591038763 *)il2cpp_codegen_object_new(TouchPointer_t3591038763_il2cpp_TypeInfo_var);
		TouchPointer__ctor_m1907458457(L_21, L_18, L_19, L_20, __this, /*hidden argument*/NULL);
		V_0 = L_21;
		// activeTouches.Add(newTouch);
		HashSet_1_t2155988237 * L_22 = __this->get_activeTouches_6();
		TouchPointer_t3591038763 * L_23 = V_0;
		NullCheck(L_22);
		HashSet_1_Add_m3212570406(L_22, L_23, /*hidden argument*/HashSet_1_Add_m3212570406_RuntimeMethod_var);
		// InputSystem.RaisePointerDown(newTouch, PointerAction);
		IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		TouchPointer_t3591038763 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t3419222324  L_26 = TouchscreenInputSource_get_PointerAction_m3597869734(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		// InputSystem.RaiseHoldStarted(this, HoldAction);
		RuntimeObject* L_27 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
		MixedRealityInputAction_t3419222324  L_28 = TouchscreenInputSource_get_HoldAction_m1070353476(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(52 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseHoldStarted(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_27, __this, L_28);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::RemoveTouch(UnityEngine.Touch)
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource_RemoveTouch_m3629533079 (TouchscreenInputSource_t2670215125 * __this, Touch_t1921856868  ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_RemoveTouch_m3629533079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3861165508  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchPointer_t3591038763 * V_1 = NULL;
	Touch_t1921856868  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (var knownTouch in activeTouches)
		HashSet_1_t2155988237 * L_0 = __this->get_activeTouches_6();
		NullCheck(L_0);
		Enumerator_t3861165508  L_1 = HashSet_1_GetEnumerator_m259392267(L_0, /*hidden argument*/HashSet_1_GetEnumerator_m259392267_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f2;
		}

IL_0011:
		{
			// foreach (var knownTouch in activeTouches)
			TouchPointer_t3591038763 * L_2 = Enumerator_get_Current_m3966105722((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3966105722_RuntimeMethod_var);
			V_1 = L_2;
			// if (knownTouch.TouchData.fingerId == touch.fingerId)
			TouchPointer_t3591038763 * L_3 = V_1;
			NullCheck(L_3);
			Touch_t1921856868  L_4 = L_3->get_TouchData_19();
			V_2 = L_4;
			int32_t L_5 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)(&V_2), /*hidden argument*/NULL);
			int32_t L_6 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)(&___touch0), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_00f2;
			}
		}

IL_0033:
		{
			// if (touch.phase == TouchPhase.Ended)
			int32_t L_7 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&___touch0), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_7) == ((uint32_t)3))))
			{
				goto IL_00ac;
			}
		}

IL_003d:
		{
			// if (knownTouch.Lifetime < K_CONTACT_EPSILON)
			TouchPointer_t3591038763 * L_8 = V_1;
			NullCheck(L_8);
			float L_9 = L_8->get_Lifetime_21();
			if ((!(((float)L_9) < ((float)(0.0333333351f)))))
			{
				goto IL_005c;
			}
		}

IL_004a:
		{
			// InputSystem.RaiseHoldCanceled(this, HoldAction);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_10 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t3419222324  L_11 = TouchscreenInputSource_get_HoldAction_m1070353476(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_10);
			InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseHoldCanceled(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_10, __this, L_11);
			// }
			goto IL_00bc;
		}

IL_005c:
		{
			// else if (knownTouch.Lifetime < MaxTapContactTime)
			TouchPointer_t3591038763 * L_12 = V_1;
			NullCheck(L_12);
			float L_13 = L_12->get_Lifetime_21();
			float L_14 = __this->get_MaxTapContactTime_5();
			if ((!(((float)L_13) < ((float)L_14))))
			{
				goto IL_009a;
			}
		}

IL_006a:
		{
			// InputSystem.RaiseHoldCanceled(this, HoldAction);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_15 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t3419222324  L_16 = TouchscreenInputSource_get_HoldAction_m1070353476(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_15);
			InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseHoldCanceled(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_15, __this, L_16);
			// InputSystem.RaisePointerClicked(knownTouch, PointerAction, knownTouch.TouchData.tapCount);
			RuntimeObject* L_17 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			TouchPointer_t3591038763 * L_18 = V_1;
			MixedRealityInputAction_t3419222324  L_19 = TouchscreenInputSource_get_PointerAction_m3597869734(NULL /*static, unused*/, /*hidden argument*/NULL);
			TouchPointer_t3591038763 * L_20 = V_1;
			NullCheck(L_20);
			Touch_t1921856868  L_21 = L_20->get_TouchData_19();
			V_2 = L_21;
			int32_t L_22 = Touch_get_tapCount_m2125417096((Touch_t1921856868 *)(&V_2), /*hidden argument*/NULL);
			NullCheck(L_17);
			InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t3419222324 , int32_t >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction,System.Int32) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_17, L_18, L_19, L_22);
			// }
			goto IL_00bc;
		}

IL_009a:
		{
			// InputSystem.RaiseHoldCompleted(this, HoldAction);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_23 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t3419222324  L_24 = TouchscreenInputSource_get_HoldAction_m1070353476(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_23);
			InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(54 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseHoldCompleted(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_23, __this, L_24);
			// }
			goto IL_00bc;
		}

IL_00ac:
		{
			// InputSystem.RaiseHoldCanceled(this, HoldAction);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_25 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t3419222324  L_26 = TouchscreenInputSource_get_HoldAction_m1070353476(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_25);
			InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseHoldCanceled(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_25, __this, L_26);
		}

IL_00bc:
		{
			// InputSystem.RaisePointerUp(knownTouch, PointerAction);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_27 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			TouchPointer_t3591038763 * L_28 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t3419222324  L_29 = TouchscreenInputSource_get_PointerAction_m3597869734(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_27);
			InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t3419222324  >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Internal.Definitions.InputSystem.MixedRealityInputAction) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_27, L_28, L_29);
			// activeTouches.Remove(knownTouch);
			HashSet_1_t2155988237 * L_30 = __this->get_activeTouches_6();
			TouchPointer_t3591038763 * L_31 = V_1;
			NullCheck(L_30);
			HashSet_1_Remove_m94792918(L_30, L_31, /*hidden argument*/HashSet_1_Remove_m94792918_RuntimeMethod_var);
			// if (activeTouches.Count == 0)
			HashSet_1_t2155988237 * L_32 = __this->get_activeTouches_6();
			NullCheck(L_32);
			int32_t L_33 = HashSet_1_get_Count_m2591076122(L_32, /*hidden argument*/HashSet_1_get_Count_m2591076122_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_00f2;
			}
		}

IL_00e6:
		{
			// InputSystem.RaiseSourceLost(this);
			IL2CPP_RUNTIME_CLASS_INIT(BaseGenericInputSource_t2600286248_il2cpp_TypeInfo_var);
			RuntimeObject* L_34 = BaseGenericInputSource_get_InputSystem_m3766388341(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_34);
			InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController) */, IMixedRealityInputSystem_t3903629218_il2cpp_TypeInfo_var, L_34, __this, (RuntimeObject*)NULL);
		}

IL_00f2:
		{
			// foreach (var knownTouch in activeTouches)
			bool L_35 = Enumerator_MoveNext_m2080996668((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2080996668_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_0011;
			}
		}

IL_00fe:
		{
			IL2CPP_LEAVE(0x10E, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383986263((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m383986263_RuntimeMethod_var);
		IL2CPP_END_FINALLY(256)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x10E, IL_010e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010e:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::TryGetTouchPointer(System.UInt32,Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer&)
extern "C" IL2CPP_METHOD_ATTR bool TouchscreenInputSource_TryGetTouchPointer_m2182457724 (TouchscreenInputSource_t2670215125 * __this, uint32_t ___pointerId0, TouchPointer_t3591038763 ** ___touch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_TryGetTouchPointer_m2182457724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3861165508  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TouchPointer_t3591038763 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// foreach (var activeTouch in activeTouches)
		HashSet_1_t2155988237 * L_0 = __this->get_activeTouches_6();
		NullCheck(L_0);
		Enumerator_t3861165508  L_1 = HashSet_1_GetEnumerator_m259392267(L_0, /*hidden argument*/HashSet_1_GetEnumerator_m259392267_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000e:
		{
			// foreach (var activeTouch in activeTouches)
			TouchPointer_t3591038763 * L_2 = Enumerator_get_Current_m3966105722((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3966105722_RuntimeMethod_var);
			V_1 = L_2;
			// if (activeTouch.PointerId == pointerId)
			TouchPointer_t3591038763 * L_3 = V_1;
			NullCheck(L_3);
			uint32_t L_4 = GenericPointer_get_PointerId_m877692364(L_3, /*hidden argument*/NULL);
			uint32_t L_5 = ___pointerId0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			// touch = activeTouch;
			TouchPointer_t3591038763 ** L_6 = ___touch1;
			TouchPointer_t3591038763 * L_7 = V_1;
			*((RuntimeObject **)(L_6)) = (RuntimeObject *)L_7;
			Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)L_7);
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x44, FINALLY_0031);
		}

IL_0026:
		{
			// foreach (var activeTouch in activeTouches)
			bool L_8 = Enumerator_MoveNext_m2080996668((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2080996668_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m383986263((Enumerator_t3861165508 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m383986263_RuntimeMethod_var);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		// touch = null;
		TouchPointer_t3591038763 ** L_9 = ___touch1;
		*((RuntimeObject **)(L_9)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_9), (RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::TryGetPointerPosition(System.UInt32,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool TouchscreenInputSource_TryGetPointerPosition_m685968135 (TouchscreenInputSource_t2670215125 * __this, uint32_t ___pointerId0, Vector3_t3722313464 * ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource_TryGetPointerPosition_m685968135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchPointer_t3591038763 * V_0 = NULL;
	Touch_t1921856868  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if (TryGetTouchPointer(pointerId, out knownTouch))
		uint32_t L_0 = ___pointerId0;
		bool L_1 = TouchscreenInputSource_TryGetTouchPointer_m2182457724(__this, L_0, (TouchPointer_t3591038763 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// position = knownTouch.TouchData.position;
		Vector3_t3722313464 * L_2 = ___position1;
		TouchPointer_t3591038763 * L_3 = V_0;
		NullCheck(L_3);
		Touch_t1921856868  L_4 = L_3->get_TouchData_19();
		V_1 = L_4;
		Vector2_t2156229523  L_5 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_2 = L_6;
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// position = Vector3.zero;
		Vector3_t3722313464 * L_7 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_7 = L_8;
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::TryGetPointingRay(System.UInt32,UnityEngine.Ray&)
extern "C" IL2CPP_METHOD_ATTR bool TouchscreenInputSource_TryGetPointingRay_m1446557594 (TouchscreenInputSource_t2670215125 * __this, uint32_t ___pointerId0, Ray_t3785851493 * ___pointingRay1, const RuntimeMethod* method)
{
	TouchPointer_t3591038763 * V_0 = NULL;
	{
		// if (TryGetTouchPointer(pointerId, out knownTouch))
		uint32_t L_0 = ___pointerId0;
		bool L_1 = TouchscreenInputSource_TryGetTouchPointer_m2182457724(__this, L_0, (TouchPointer_t3591038763 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// pointingRay = knownTouch.ScreenPointRay;
		Ray_t3785851493 * L_2 = ___pointingRay1;
		TouchPointer_t3591038763 * L_3 = V_0;
		NullCheck(L_3);
		Ray_t3785851493  L_4 = L_3->get_ScreenPointRay_20();
		*(Ray_t3785851493 *)L_2 = L_4;
		// return true;
		return (bool)1;
	}

IL_0019:
	{
		// pointingRay = default(Ray);
		Ray_t3785851493 * L_5 = ___pointingRay1;
		il2cpp_codegen_initobj(L_5, sizeof(Ray_t3785851493 ));
		// return false;
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TouchscreenInputSource__cctor_m652219211 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchscreenInputSource__cctor_m652219211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WaitForUpdate NextUpdate = new WaitForUpdate();
		WaitForUpdate_t3436990142 * L_0 = (WaitForUpdate_t3436990142 *)il2cpp_codegen_object_new(WaitForUpdate_t3436990142_il2cpp_TypeInfo_var);
		WaitForUpdate__ctor_m1145480688(L_0, /*hidden argument*/NULL);
		((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->set_NextUpdate_7(L_0);
		// public static MixedRealityInputAction PointerAction { get; set; } = MixedRealityInputAction.None;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t3419222324_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t3419222324  L_1 = MixedRealityInputAction_get_None_m1569881572(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->set_U3CPointerActionU3Ek__BackingField_8(L_1);
		// public static MixedRealityInputAction HoldAction { get; set; } = MixedRealityInputAction.None;
		MixedRealityInputAction_t3419222324  L_2 = MixedRealityInputAction_get_None_m1569881572(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->set_U3CHoldActionU3Ek__BackingField_9(L_2);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__16_MoveNext_m1231441746 (U3CRunU3Ed__16_t2268004534 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunU3Ed__16_MoveNext_m1231441746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TouchscreenInputSource_t2670215125 * V_1 = NULL;
	int32_t V_2 = 0;
	Touch_t1921856868  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Ray_t3785851493  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	SimpleCoroutineAwaiter_t2831853999 * V_6 = NULL;
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TouchscreenInputSource_t2670215125 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00b1;
			}
		}

IL_0014:
		{
			// for (var i = 0; i < Input.touches.Length; i++)
			V_2 = 0;
			goto IL_0071;
		}

IL_0018:
		{
			// Touch touch = Input.touches[i];
			IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
			TouchU5BU5D_t1849554061* L_3 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			Touch_t1921856868  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			// Ray ray = CameraCache.Main.ScreenPointToRay(touch.position);
			Camera_t4157153871 * L_7 = CameraCache_get_Main_m1380900859(NULL /*static, unused*/, /*hidden argument*/NULL);
			Vector2_t2156229523  L_8 = Touch_get_position_m3109777936((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_9 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Ray_t3785851493  L_10 = Camera_ScreenPointToRay_m3764635188(L_7, L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			// switch (touch.phase)
			int32_t L_11 = Touch_get_phase_m214549210((Touch_t1921856868 *)(&V_3), /*hidden argument*/NULL);
			V_5 = L_11;
			int32_t L_12 = V_5;
			if ((!(((uint32_t)L_12) > ((uint32_t)2))))
			{
				goto IL_0053;
			}
		}

IL_004a:
		{
			int32_t L_13 = V_5;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)3))) > ((uint32_t)1))))
			{
				goto IL_005e;
			}
		}

IL_0051:
		{
			goto IL_0067;
		}

IL_0053:
		{
			// AddOrUpdateTouch(touch, ray);
			TouchscreenInputSource_t2670215125 * L_14 = V_1;
			Touch_t1921856868  L_15 = V_3;
			Ray_t3785851493  L_16 = V_4;
			NullCheck(L_14);
			TouchscreenInputSource_AddOrUpdateTouch_m2674627957(L_14, L_15, L_16, /*hidden argument*/NULL);
			// break;
			goto IL_006d;
		}

IL_005e:
		{
			// RemoveTouch(touch);
			TouchscreenInputSource_t2670215125 * L_17 = V_1;
			Touch_t1921856868  L_18 = V_3;
			NullCheck(L_17);
			TouchscreenInputSource_RemoveTouch_m3629533079(L_17, L_18, /*hidden argument*/NULL);
			// break;
			goto IL_006d;
		}

IL_0067:
		{
			// throw new ArgumentOutOfRangeException();
			ArgumentOutOfRangeException_t777629997 * L_19 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
			ArgumentOutOfRangeException__ctor_m2047740448(L_19, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, U3CRunU3Ed__16_MoveNext_m1231441746_RuntimeMethod_var);
		}

IL_006d:
		{
			// for (var i = 0; i < Input.touches.Length; i++)
			int32_t L_20 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		}

IL_0071:
		{
			// for (var i = 0; i < Input.touches.Length; i++)
			int32_t L_21 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
			TouchU5BU5D_t1849554061* L_22 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
			{
				goto IL_0018;
			}
		}

IL_007b:
		{
			// await NextUpdate;
			IL2CPP_RUNTIME_CLASS_INIT(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var);
			WaitForUpdate_t3436990142 * L_23 = ((TouchscreenInputSource_t2670215125_StaticFields*)il2cpp_codegen_static_fields_for(TouchscreenInputSource_t2670215125_il2cpp_TypeInfo_var))->get_NextUpdate_7();
			SimpleCoroutineAwaiter_t2831853999 * L_24 = AwaiterExtensions_GetAwaiter_m126631721(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			V_6 = L_24;
			SimpleCoroutineAwaiter_t2831853999 * L_25 = V_6;
			NullCheck(L_25);
			bool L_26 = SimpleCoroutineAwaiter_get_IsCompleted_m277308412(L_25, /*hidden argument*/NULL);
			if (L_26)
			{
				goto IL_00ce;
			}
		}

IL_0090:
		{
			int32_t L_27 = 0;
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
			SimpleCoroutineAwaiter_t2831853999 * L_28 = V_6;
			__this->set_U3CU3Eu__1_3(L_28);
			AsyncVoidMethodBuilder_t3819840891 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__16_t2268004534_m536952743((AsyncVoidMethodBuilder_t3819840891 *)L_29, (SimpleCoroutineAwaiter_t2831853999 **)(&V_6), (U3CRunU3Ed__16_t2268004534 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t2831853999_TisU3CRunU3Ed__16_t2268004534_m536952743_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_00b1:
		{
			RuntimeObject * L_30 = __this->get_U3CU3Eu__1_3();
			V_6 = ((SimpleCoroutineAwaiter_t2831853999 *)CastclassClass((RuntimeObject*)L_30, SimpleCoroutineAwaiter_t2831853999_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
		}

IL_00ce:
		{
			SimpleCoroutineAwaiter_t2831853999 * L_32 = V_6;
			NullCheck(L_32);
			SimpleCoroutineAwaiter_GetResult_m87566295(L_32, /*hidden argument*/NULL);
			// while (true)
			goto IL_0014;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00da;
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_34 = V_7;
		AsyncVoidMethodBuilder_SetException_m1109381469((AsyncVoidMethodBuilder_t3819840891 *)L_33, L_34, /*hidden argument*/NULL);
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00f3:
	{
		return;
	}
}
extern "C"  void U3CRunU3Ed__16_MoveNext_m1231441746_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CRunU3Ed__16_t2268004534 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__16_t2268004534 *>(__this + 1);
	U3CRunU3Ed__16_MoveNext_m1231441746(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/<Run>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRunU3Ed__16_SetStateMachine_m94194484 (U3CRunU3Ed__16_t2268004534 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t3819840891 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m2384003025((AsyncVoidMethodBuilder_t3819840891 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CRunU3Ed__16_SetStateMachine_m94194484_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRunU3Ed__16_t2268004534 * _thisAdjusted = reinterpret_cast<U3CRunU3Ed__16_t2268004534 *>(__this + 1);
	U3CRunU3Ed__16_SetStateMachine_m94194484(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::.ctor(System.String,UnityEngine.Touch,UnityEngine.Ray,Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void TouchPointer__ctor_m1907458457 (TouchPointer_t3591038763 * __this, String_t* ___name0, Touch_t1921856868  ___touch1, Ray_t3785851493  ___ray2, RuntimeObject* ___inputSource3, const RuntimeMethod* method)
{
	{
		// public TouchPointer(string name, Touch touch, Ray ray, IMixedRealityInputSource inputSource) : base(name, inputSource)
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = ___inputSource3;
		GenericPointer__ctor_m3815240207(__this, L_0, L_1, /*hidden argument*/NULL);
		// TouchData = touch;
		Touch_t1921856868  L_2 = ___touch1;
		__this->set_TouchData_19(L_2);
		// ScreenPointRay = ray;
		Ray_t3785851493  L_3 = ___ray2;
		__this->set_ScreenPointRay_20(L_3);
		// Lifetime = 0.0f;
		__this->set_Lifetime_21((0.0f));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::get_Controller()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TouchPointer_get_Controller_m1083429967 (TouchPointer_t3591038763 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.TouchscreenInputSource/TouchPointer::set_Controller(Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR void TouchPointer_set_Controller_m2267513844 (TouchPointer_t3591038763 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_22(L_0);
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
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_TryGetFunctionsReturnTrue()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool TryGetFunctionsReturnTrue { get; set; }
		bool L_0 = __this->get_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_TryGetFunctionsReturnTrue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TryGetFunctionsReturnTrue { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsPositionAvailable_m344324191 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsPositionAvailable_m289670261 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripPositionAvailable_m420468453 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGripPositionAvailable { get; set; }
		bool L_0 = __this->get_U3CIsGripPositionAvailableU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGripPositionAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGripPositionAvailableU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGripRotationAvailable { get; set; }
		bool L_0 = __this->get_U3CIsGripRotationAvailableU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGripRotationAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGripRotationAvailableU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Position_m4017137954 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CPositionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Position_m1693592603 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CPositionU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_GripPosition_m2731351932 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GripPosition { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CGripPositionU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_GripPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_GripPosition_m3255082746 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GripPosition { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CGripPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Velocity_m2352156329 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CVelocityU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Velocity_m1475492328 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CVelocityU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_Rotation_m1585180741 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CRotationU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Rotation_m3715431815 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CRotationU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_GripRotation_m344787494 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GripRotation { get; set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CGripRotationU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_GripRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_GripRotation_m1452834212 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GripRotation { get; set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CGripRotationU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_PointerRay()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1213446279  DebugInteractionSourcePose_get_PointerRay_m2396427043 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Ray? PointerRay { get; set; }
		Nullable_1_t1213446279  L_0 = __this->get_U3CPointerRayU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_PointerRay(System.Nullable`1<UnityEngine.Ray>)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_PointerRay_m257526264 (DebugInteractionSourcePose_t1033395397 * __this, Nullable_1_t1213446279  ___value0, const RuntimeMethod* method)
{
	{
		// public Ray? PointerRay { get; set; }
		Nullable_1_t1213446279  L_0 = ___value0;
		__this->set_U3CPointerRayU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose__ctor_m4032196296 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugInteractionSourcePose__ctor_m4032196296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DebugInteractionSourcePose()
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// TryGetFunctionsReturnTrue = false;
		DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322(__this, (bool)0, /*hidden argument*/NULL);
		// IsPositionAvailable = false;
		DebugInteractionSourcePose_set_IsPositionAvailable_m289670261(__this, (bool)0, /*hidden argument*/NULL);
		// IsRotationAvailable = false;
		DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931(__this, (bool)0, /*hidden argument*/NULL);
		// IsGripPositionAvailable = false;
		DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311(__this, (bool)0, /*hidden argument*/NULL);
		// IsGripRotationAvailable = false;
		DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268(__this, (bool)0, /*hidden argument*/NULL);
		// Position = new Vector3(0, 0, 0);
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Position_m1693592603(__this, L_0, /*hidden argument*/NULL);
		// Velocity = new Vector3(0, 0, 0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Velocity_m1475492328(__this, L_1, /*hidden argument*/NULL);
		// Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Rotation_m3715431815(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetPosition_m1485226412 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	{
		// position = Position;
		Vector3_t3722313464 * L_0 = ___position0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_Position_m4017137954(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue)     // TODO: bug? does not test IsPositionAvailable (see TryGetRotation)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetVelocity_m1881433753 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___velocity0, const RuntimeMethod* method)
{
	{
		// velocity = Velocity;
		Vector3_t3722313464 * L_0 = ___velocity0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_Velocity_m2352156329(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// return TryGetFunctionsReturnTrue;
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetRotation_m1640974396 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	{
		// rotation = Rotation;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		Quaternion_t2301928331  L_1 = DebugInteractionSourcePose_get_Rotation_m1585180741(__this, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// return TryGetFunctionsReturnTrue && IsRotationAvailable;
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		bool L_3 = DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetPointerRay(UnityEngine.Ray&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetPointerRay_m3859713426 (DebugInteractionSourcePose_t1033395397 * __this, Ray_t3785851493 * ___pointerRay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugInteractionSourcePose_TryGetPointerRay_m3859713426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1213446279  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// pointerRay = default(Ray);
		Ray_t3785851493 * L_0 = ___pointerRay0;
		il2cpp_codegen_initobj(L_0, sizeof(Ray_t3785851493 ));
		// if (PointerRay == null)
		Nullable_1_t1213446279  L_1 = DebugInteractionSourcePose_get_PointerRay_m2396427043(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m176711023((Nullable_1_t1213446279 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m176711023_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0019:
	{
		// pointerRay = (Ray)PointerRay;
		Ray_t3785851493 * L_3 = ___pointerRay0;
		Nullable_1_t1213446279  L_4 = DebugInteractionSourcePose_get_PointerRay_m2396427043(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		Ray_t3785851493  L_5 = Nullable_1_get_Value_m3822285555((Nullable_1_t1213446279 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m3822285555_RuntimeMethod_var);
		*(Ray_t3785851493 *)L_3 = L_5;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetGripPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetGripPosition_m2431393702 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	{
		// position = GripPosition;
		Vector3_t3722313464 * L_0 = ___position0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_GripPosition_m2731351932(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue)     // TODO: should test IsGripPositionAvailable? (see TryGetPosition)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetGripRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetGripRotation_m2914408061 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	{
		// rotation = GripRotation;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		Quaternion_t2301928331  L_1 = DebugInteractionSourcePose_get_GripRotation_m344787494(__this, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue || !IsGripRotationAvailable)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		bool L_3 = DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke(const DebugInteractionSourceState_t66132725& unmarshaled, DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke_back(const DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled, DebugInteractionSourceState_t66132725& unmarshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke_cleanup(DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_com(const DebugInteractionSourceState_t66132725& unmarshaled, DebugInteractionSourceState_t66132725_marshaled_com& marshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
extern "C" void DebugInteractionSourceState_t66132725_marshal_com_back(const DebugInteractionSourceState_t66132725_marshaled_com& marshaled, DebugInteractionSourceState_t66132725& unmarshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_com_cleanup(DebugInteractionSourceState_t66132725_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
