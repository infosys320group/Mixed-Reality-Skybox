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


// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t3612739097;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController
struct IMixedRealityController_t2386858716;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t2812969632;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_t3685197710;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t3903629218;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t1271752255;
// Microsoft.MixedReality.Toolkit.Internal.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t4279106780;
// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.RaycastResultComparer
struct RaycastResultComparer_t3421807568;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController>
struct Dictionary_2_t3532214643;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t2133550859;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t929709876;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t3446625415;
// System.Func`2<UnityEngine.Vector2,System.Single>
struct Func_2_t3672504941;
// System.Func`2<UnityEngine.Vector3,System.Single>
struct Func_2_t3934069716;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Windows.Speech.SemanticMeaning[]
struct SemanticMeaningU5BU5D_t1653704947;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_t1918115372;




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
#ifndef BASEDEVICEMANAGER_T3319371959_H
#define BASEDEVICEMANAGER_T3319371959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.BaseDeviceManager
struct  BaseDeviceManager_t3319371959  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Internal.Devices.BaseDeviceManager::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Internal.Devices.BaseDeviceManager::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Internal.Devices.BaseDeviceManager::inputSystem
	RuntimeObject* ___inputSystem_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseDeviceManager_t3319371959, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseDeviceManager_t3319371959, ___U3CPriorityU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_1() const { return ___U3CPriorityU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_1() { return &___U3CPriorityU3Ek__BackingField_1; }
	inline void set_U3CPriorityU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_inputSystem_2() { return static_cast<int32_t>(offsetof(BaseDeviceManager_t3319371959, ___inputSystem_2)); }
	inline RuntimeObject* get_inputSystem_2() const { return ___inputSystem_2; }
	inline RuntimeObject** get_address_of_inputSystem_2() { return &___inputSystem_2; }
	inline void set_inputSystem_2(RuntimeObject* value)
	{
		___inputSystem_2 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDEVICEMANAGER_T3319371959_H
#ifndef ANIMATIONCURVEEXTENSIONS_T1522303492_H
#define ANIMATIONCURVEEXTENSIONS_T1522303492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.AnimationCurveExtensions
struct  AnimationCurveExtensions_t1522303492  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCURVEEXTENSIONS_T1522303492_H
#ifndef ARRAYEXTENSIONS_T82977717_H
#define ARRAYEXTENSIONS_T82977717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.ArrayExtensions
struct  ArrayExtensions_t82977717  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYEXTENSIONS_T82977717_H
#ifndef BOUNDSEXTENSIONS_T1931188077_H
#define BOUNDSEXTENSIONS_T1931188077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.BoundsExtensions
struct  BoundsExtensions_t1931188077  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDSEXTENSIONS_T1931188077_H
#ifndef CAMERAEXTENSIONS_T133031286_H
#define CAMERAEXTENSIONS_T133031286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.CameraExtensions
struct  CameraExtensions_t133031286  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEXTENSIONS_T133031286_H
#ifndef COLLECTIONSEXTENSIONS_T2712717340_H
#define COLLECTIONSEXTENSIONS_T2712717340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.CollectionsExtensions
struct  CollectionsExtensions_t2712717340  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONSEXTENSIONS_T2712717340_H
#ifndef COLOR32EXTENSIONS_T1717881815_H
#define COLOR32EXTENSIONS_T1717881815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.Color32Extensions
struct  Color32Extensions_t1717881815  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32EXTENSIONS_T1717881815_H
#ifndef COMPAREREXTENSIONS_T266002122_H
#define COMPAREREXTENSIONS_T266002122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.ComparerExtensions
struct  ComparerExtensions_t266002122  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREREXTENSIONS_T266002122_H
#ifndef COMPONENTEXTENSIONS_T3276774704_H
#define COMPONENTEXTENSIONS_T3276774704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.ComponentExtensions
struct  ComponentExtensions_t3276774704  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTEXTENSIONS_T3276774704_H
#ifndef DOUBLEEXTENSIONS_T579560115_H
#define DOUBLEEXTENSIONS_T579560115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.DoubleExtensions
struct  DoubleExtensions_t579560115  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEEXTENSIONS_T579560115_H
#ifndef ENUMERABLEEXTENSIONS_T3278454789_H
#define ENUMERABLEEXTENSIONS_T3278454789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.EnumerableExtensions
struct  EnumerableExtensions_t3278454789  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEEXTENSIONS_T3278454789_H
#ifndef EVENTSYSTEMEXTENSIONS_T2697708415_H
#define EVENTSYSTEMEXTENSIONS_T2697708415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.EventSystemExtensions
struct  EventSystemExtensions_t2697708415  : public RuntimeObject
{
public:

public:
};

struct EventSystemExtensions_t2697708415_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Microsoft.MixedReality.Toolkit.Internal.Extensions.EventSystemExtensions::RaycastResults
	List_1_t537414295 * ___RaycastResults_0;
	// Microsoft.MixedReality.Toolkit.Internal.Utilities.Physics.RaycastResultComparer Microsoft.MixedReality.Toolkit.Internal.Extensions.EventSystemExtensions::RaycastResultComparer
	RaycastResultComparer_t3421807568 * ___RaycastResultComparer_1;

public:
	inline static int32_t get_offset_of_RaycastResults_0() { return static_cast<int32_t>(offsetof(EventSystemExtensions_t2697708415_StaticFields, ___RaycastResults_0)); }
	inline List_1_t537414295 * get_RaycastResults_0() const { return ___RaycastResults_0; }
	inline List_1_t537414295 ** get_address_of_RaycastResults_0() { return &___RaycastResults_0; }
	inline void set_RaycastResults_0(List_1_t537414295 * value)
	{
		___RaycastResults_0 = value;
		Il2CppCodeGenWriteBarrier((&___RaycastResults_0), value);
	}

	inline static int32_t get_offset_of_RaycastResultComparer_1() { return static_cast<int32_t>(offsetof(EventSystemExtensions_t2697708415_StaticFields, ___RaycastResultComparer_1)); }
	inline RaycastResultComparer_t3421807568 * get_RaycastResultComparer_1() const { return ___RaycastResultComparer_1; }
	inline RaycastResultComparer_t3421807568 ** get_address_of_RaycastResultComparer_1() { return &___RaycastResultComparer_1; }
	inline void set_RaycastResultComparer_1(RaycastResultComparer_t3421807568 * value)
	{
		___RaycastResultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___RaycastResultComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEMEXTENSIONS_T2697708415_H
#ifndef FLOATEXTENSIONS_T699319804_H
#define FLOATEXTENSIONS_T699319804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.FloatExtensions
struct  FloatExtensions_t699319804  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATEXTENSIONS_T699319804_H
#ifndef GAMEOBJECTEXTENSIONS_T349071753_H
#define GAMEOBJECTEXTENSIONS_T349071753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.GameObjectExtensions
struct  GameObjectExtensions_t349071753  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTEXTENSIONS_T349071753_H
#ifndef INTERACTIONSOURCEEXTENSIONS_T725755884_H
#define INTERACTIONSOURCEEXTENSIONS_T725755884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions
struct  InteractionSourceExtensions_t725755884  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEEXTENSIONS_T725755884_H
#ifndef LAYEREXTENSIONS_T4022517484_H
#define LAYEREXTENSIONS_T4022517484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.LayerExtensions
struct  LayerExtensions_t4022517484  : public RuntimeObject
{
public:

public:
};

struct LayerExtensions_t4022517484_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.LayerExtensions::defaultLayer
	int32_t ___defaultLayer_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.LayerExtensions::surfaceLayer
	int32_t ___surfaceLayer_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.LayerExtensions::interactionLayer
	int32_t ___interactionLayer_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.LayerExtensions::activationLayer
	int32_t ___activationLayer_4;

public:
	inline static int32_t get_offset_of_defaultLayer_1() { return static_cast<int32_t>(offsetof(LayerExtensions_t4022517484_StaticFields, ___defaultLayer_1)); }
	inline int32_t get_defaultLayer_1() const { return ___defaultLayer_1; }
	inline int32_t* get_address_of_defaultLayer_1() { return &___defaultLayer_1; }
	inline void set_defaultLayer_1(int32_t value)
	{
		___defaultLayer_1 = value;
	}

	inline static int32_t get_offset_of_surfaceLayer_2() { return static_cast<int32_t>(offsetof(LayerExtensions_t4022517484_StaticFields, ___surfaceLayer_2)); }
	inline int32_t get_surfaceLayer_2() const { return ___surfaceLayer_2; }
	inline int32_t* get_address_of_surfaceLayer_2() { return &___surfaceLayer_2; }
	inline void set_surfaceLayer_2(int32_t value)
	{
		___surfaceLayer_2 = value;
	}

	inline static int32_t get_offset_of_interactionLayer_3() { return static_cast<int32_t>(offsetof(LayerExtensions_t4022517484_StaticFields, ___interactionLayer_3)); }
	inline int32_t get_interactionLayer_3() const { return ___interactionLayer_3; }
	inline int32_t* get_address_of_interactionLayer_3() { return &___interactionLayer_3; }
	inline void set_interactionLayer_3(int32_t value)
	{
		___interactionLayer_3 = value;
	}

	inline static int32_t get_offset_of_activationLayer_4() { return static_cast<int32_t>(offsetof(LayerExtensions_t4022517484_StaticFields, ___activationLayer_4)); }
	inline int32_t get_activationLayer_4() const { return ___activationLayer_4; }
	inline int32_t* get_address_of_activationLayer_4() { return &___activationLayer_4; }
	inline void set_activationLayer_4(int32_t value)
	{
		___activationLayer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYEREXTENSIONS_T4022517484_H
#ifndef MATHEXTENSIONS_T1568903749_H
#define MATHEXTENSIONS_T1568903749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.MathExtensions
struct  MathExtensions_t1568903749  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHEXTENSIONS_T1568903749_H
#ifndef QUATERNIONEXTENSIONS_T2234277290_H
#define QUATERNIONEXTENSIONS_T2234277290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.QuaternionExtensions
struct  QuaternionExtensions_t2234277290  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNIONEXTENSIONS_T2234277290_H
#ifndef RAYEXTENSIONS_T3328392730_H
#define RAYEXTENSIONS_T3328392730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.RayExtensions
struct  RayExtensions_t3328392730  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYEXTENSIONS_T3328392730_H
#ifndef STRINGEXTENSIONS_T4095729862_H
#define STRINGEXTENSIONS_T4095729862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.StringExtensions
struct  StringExtensions_t4095729862  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGEXTENSIONS_T4095729862_H
#ifndef TRANSFORMEXTENSIONS_T3648135903_H
#define TRANSFORMEXTENSIONS_T3648135903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions
struct  TransformExtensions_t3648135903  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMEXTENSIONS_T3648135903_H
#ifndef U3CENUMERATEANCESTORSU3ED__8_T3446041379_H
#define U3CENUMERATEANCESTORSU3ED__8_T3446041379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8
struct  U3CEnumerateAncestorsU3Ed__8_t3446041379  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_t3600365921 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_t3600365921 * ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_t3600365921 * ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_t3600365921 * ___U3CtransformU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CU3E2__current_1)); }
	inline Transform_t3600365921 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_t3600365921 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_startTransform_5() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___startTransform_5)); }
	inline Transform_t3600365921 * get_startTransform_5() const { return ___startTransform_5; }
	inline Transform_t3600365921 ** get_address_of_startTransform_5() { return &___startTransform_5; }
	inline void set_startTransform_5(Transform_t3600365921 * value)
	{
		___startTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___startTransform_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__startTransform_6() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CU3E3__startTransform_6)); }
	inline Transform_t3600365921 * get_U3CU3E3__startTransform_6() const { return ___U3CU3E3__startTransform_6; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E3__startTransform_6() { return &___U3CU3E3__startTransform_6; }
	inline void set_U3CU3E3__startTransform_6(Transform_t3600365921 * value)
	{
		___U3CU3E3__startTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__startTransform_6), value);
	}

	inline static int32_t get_offset_of_U3CtransformU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t3446041379, ___U3CtransformU3E5__2_7)); }
	inline Transform_t3600365921 * get_U3CtransformU3E5__2_7() const { return ___U3CtransformU3E5__2_7; }
	inline Transform_t3600365921 ** get_address_of_U3CtransformU3E5__2_7() { return &___U3CtransformU3E5__2_7; }
	inline void set_U3CtransformU3E5__2_7(Transform_t3600365921 * value)
	{
		___U3CtransformU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransformU3E5__2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATEANCESTORSU3ED__8_T3446041379_H
#ifndef U3CENUMERATEHIERARCHYCOREU3ED__4_T2298766955_H
#define U3CENUMERATEHIERARCHYCOREU3ED__4_T2298766955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4
struct  U3CEnumerateHierarchyCoreU3Ed__4_t2298766955  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_t3600365921 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_t3600365921 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_t3600365921 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Internal.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_t3446625415 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CU3E2__current_1)); }
	inline Transform_t3600365921 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_t3600365921 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___root_3)); }
	inline Transform_t3600365921 * get_root_3() const { return ___root_3; }
	inline Transform_t3600365921 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_t3600365921 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((&___root_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CU3E3__root_4)); }
	inline Transform_t3600365921 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_t3600365921 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__root_4), value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((&___ignore_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__ignore_6), value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t2298766955, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_t3446625415 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_t3446625415 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_t3446625415 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransformQueueU3E5__2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATEHIERARCHYCOREU3ED__4_T2298766955_H
#ifndef UNITYOBJECTEXTENSIONS_T2554519737_H
#define UNITYOBJECTEXTENSIONS_T2554519737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.UnityObjectExtensions
struct  UnityObjectExtensions_t2554519737  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYOBJECTEXTENSIONS_T2554519737_H
#ifndef VECTOREXTENSIONS_T3501961738_H
#define VECTOREXTENSIONS_T3501961738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions
struct  VectorExtensions_t3501961738  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOREXTENSIONS_T3501961738_H
#ifndef U3CU3EC_T585490654_H
#define U3CU3EC_T585490654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c
struct  U3CU3Ec_t585490654  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t585490654_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c::<>9
	U3CU3Ec_t585490654 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c::<>9__12_0
	Func_2_t3672504941 * ___U3CU3E9__12_0_1;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c::<>9__13_0
	Func_2_t3934069716 * ___U3CU3E9__13_0_2;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c::<>9__14_0
	Func_2_t3672504941 * ___U3CU3E9__14_0_3;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.Internal.Extensions.VectorExtensions/<>c::<>9__15_0
	Func_2_t3934069716 * ___U3CU3E9__15_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t585490654_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t585490654 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t585490654 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t585490654 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t585490654_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t3672504941 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t3672504941 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t3672504941 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__12_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t585490654_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_t3934069716 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_t3934069716 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_t3934069716 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__13_0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t585490654_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Func_2_t3672504941 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Func_2_t3672504941 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Func_2_t3672504941 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__14_0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t585490654_StaticFields, ___U3CU3E9__15_0_4)); }
	inline Func_2_t3934069716 * get_U3CU3E9__15_0_4() const { return ___U3CU3E9__15_0_4; }
	inline Func_2_t3934069716 ** get_address_of_U3CU3E9__15_0_4() { return &___U3CU3E9__15_0_4; }
	inline void set_U3CU3E9__15_0_4(Func_2_t3934069716 * value)
	{
		___U3CU3E9__15_0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T585490654_H
#ifndef U3CU3EC__DISPLAYCLASS33_0_T1464830466_H
#define U3CU3EC__DISPLAYCLASS33_0_T1464830466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager/<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t1464830466  : public RuntimeObject
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager/<>c__DisplayClass33_0::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t1464830466, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS33_0_T1464830466_H
#ifndef U3CU3EC__DISPLAYCLASS34_0_T2656471554_H
#define U3CU3EC__DISPLAYCLASS34_0_T2656471554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager/<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_t2656471554  : public RuntimeObject
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager/<>c__DisplayClass34_0::type
	Type_t * ___type_0;
	// System.String Microsoft.MixedReality.Toolkit.Internal.Managers.MixedRealityManager/<>c__DisplayClass34_0::managerName
	String_t* ___managerName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t2656471554, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_managerName_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t2656471554, ___managerName_1)); }
	inline String_t* get_managerName_1() const { return ___managerName_1; }
	inline String_t** get_address_of_managerName_1() { return &___managerName_1; }
	inline void set_managerName_1(String_t* value)
	{
		___managerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___managerName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS34_0_T2656471554_H
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
#ifndef OPENXRDEVICEMANAGER_T3439081049_H
#define OPENXRDEVICEMANAGER_T3439081049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenXR.OpenXRDeviceManager
struct  OpenXRDeviceManager_t3439081049  : public BaseDeviceManager_t3319371959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENXRDEVICEMANAGER_T3439081049_H
#ifndef SIMULATEDDEVICEMANAGER_T1661827628_H
#define SIMULATEDDEVICEMANAGER_T1661827628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.Simulator.SimulatedDeviceManager
struct  SimulatedDeviceManager_t1661827628  : public BaseDeviceManager_t3319371959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDDEVICEMANAGER_T1661827628_H
#ifndef UNITYDEVICEMANAGER_T2602583478_H
#define UNITYDEVICEMANAGER_T2602583478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.UnityDeviceManager
struct  UnityDeviceManager_t2602583478  : public BaseDeviceManager_t3319371959
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.UnityDeviceManager::deviceRefreshTimer
	float ___deviceRefreshTimer_5;
	// System.String[] Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.UnityDeviceManager::lastDeviceList
	StringU5BU5D_t1281789340* ___lastDeviceList_6;

public:
	inline static int32_t get_offset_of_deviceRefreshTimer_5() { return static_cast<int32_t>(offsetof(UnityDeviceManager_t2602583478, ___deviceRefreshTimer_5)); }
	inline float get_deviceRefreshTimer_5() const { return ___deviceRefreshTimer_5; }
	inline float* get_address_of_deviceRefreshTimer_5() { return &___deviceRefreshTimer_5; }
	inline void set_deviceRefreshTimer_5(float value)
	{
		___deviceRefreshTimer_5 = value;
	}

	inline static int32_t get_offset_of_lastDeviceList_6() { return static_cast<int32_t>(offsetof(UnityDeviceManager_t2602583478, ___lastDeviceList_6)); }
	inline StringU5BU5D_t1281789340* get_lastDeviceList_6() const { return ___lastDeviceList_6; }
	inline StringU5BU5D_t1281789340** get_address_of_lastDeviceList_6() { return &___lastDeviceList_6; }
	inline void set_lastDeviceList_6(StringU5BU5D_t1281789340* value)
	{
		___lastDeviceList_6 = value;
		Il2CppCodeGenWriteBarrier((&___lastDeviceList_6), value);
	}
};

struct UnityDeviceManager_t2602583478_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController> Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.UnityDeviceManager::ActiveControllers
	Dictionary_2_t3532214643 * ___ActiveControllers_4;

public:
	inline static int32_t get_offset_of_ActiveControllers_4() { return static_cast<int32_t>(offsetof(UnityDeviceManager_t2602583478_StaticFields, ___ActiveControllers_4)); }
	inline Dictionary_2_t3532214643 * get_ActiveControllers_4() const { return ___ActiveControllers_4; }
	inline Dictionary_2_t3532214643 ** get_address_of_ActiveControllers_4() { return &___ActiveControllers_4; }
	inline void set_ActiveControllers_4(Dictionary_2_t3532214643 * value)
	{
		___ActiveControllers_4 = value;
		Il2CppCodeGenWriteBarrier((&___ActiveControllers_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYDEVICEMANAGER_T2602583478_H
#ifndef WINDOWSGAMINGDEVICEMANAGER_T201464995_H
#define WINDOWSGAMINGDEVICEMANAGER_T201464995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.WindowsGaming.WindowsGamingDeviceManager
struct  WindowsGamingDeviceManager_t201464995  : public BaseDeviceManager_t3319371959
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSGAMINGDEVICEMANAGER_T201464995_H
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
#ifndef OPENVRDEVICEMANAGER_T2634003954_H
#define OPENVRDEVICEMANAGER_T2634003954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.OpenVRDeviceManager
struct  OpenVRDeviceManager_t2634003954  : public UnityDeviceManager_t2602583478
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPENVRDEVICEMANAGER_T2634003954_H
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
#ifndef AXIS_T3977467019_H
#define AXIS_T3977467019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.BoundsExtensions/Axis
struct  Axis_t3977467019 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.Extensions.BoundsExtensions/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t3977467019, ___value___2)); }
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
#endif // AXIS_T3977467019_H
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
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___2)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
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
#ifndef AVAILABLETRACKINGDATA_T3752197997_H
#define AVAILABLETRACKINGDATA_T3752197997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_t3752197997 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_t3752197997, ___value___2)); }
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
#endif // AVAILABLETRACKINGDATA_T3752197997_H
#ifndef INTERACTIONSOURCEFLAGS_T1798650303_H
#define INTERACTIONSOURCEFLAGS_T1798650303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_t1798650303 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_t1798650303, ___value___2)); }
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
#endif // INTERACTIONSOURCEFLAGS_T1798650303_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#define INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t3096408347 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t3096408347, ___value___2)); }
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
#endif // INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifndef INTERACTIONSOURCEKIND_T3005082353_H
#define INTERACTIONSOURCEKIND_T3005082353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t3005082353 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t3005082353, ___value___2)); }
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
#endif // INTERACTIONSOURCEKIND_T3005082353_H
#ifndef XRNODE_T3929440994_H
#define XRNODE_T3929440994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3929440994 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t3929440994, ___value___2)); }
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
#endif // XRNODE_T3929440994_H
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
#ifndef BASECONTROLLER_T1056426174_H
#define BASECONTROLLER_T1056426174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController
struct  BaseController_t1056426174  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t3612739097* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t3612739097* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t3612739097* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::inputSystem
	RuntimeObject* ___inputSystem_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.TrackingState Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Internal.Devices.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t3612739097* ___U3CInteractionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t3612739097* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultInteractionsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t3612739097* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t3612739097* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_inputSystem_3() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___inputSystem_3)); }
	inline RuntimeObject* get_inputSystem_3() const { return ___inputSystem_3; }
	inline RuntimeObject** get_address_of_inputSystem_3() { return &___inputSystem_3; }
	inline void set_inputSystem_3(RuntimeObject* value)
	{
		___inputSystem_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_3), value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CEnabledU3Ek__BackingField_4)); }
	inline bool get_U3CEnabledU3Ek__BackingField_4() const { return ___U3CEnabledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_4() { return &___U3CEnabledU3Ek__BackingField_4; }
	inline void set_U3CEnabledU3Ek__BackingField_4(bool value)
	{
		___U3CEnabledU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CTrackingStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_5() const { return ___U3CTrackingStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_5() { return &___U3CTrackingStateU3Ek__BackingField_5; }
	inline void set_U3CTrackingStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CControllerHandednessU3Ek__BackingField_6)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_6() const { return ___U3CControllerHandednessU3Ek__BackingField_6; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_6() { return &___U3CControllerHandednessU3Ek__BackingField_6; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_6(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CInputSourceU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_7() const { return ___U3CInputSourceU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_7() { return &___U3CInputSourceU3Ek__BackingField_7; }
	inline void set_U3CInputSourceU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t1056426174, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t3612739097** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t3612739097* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInteractionsU3Ek__BackingField_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLER_T1056426174_H
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
#ifndef PLACEMENTEVENTDATA_T1182598775_H
#define PLACEMENTEVENTDATA_T1182598775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.PlacementEventData
struct  PlacementEventData_t1182598775  : public GenericBaseEventData_t112130871
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Internal.EventDatum.PlacementEventData::<ObjectBeingPlaced>k__BackingField
	GameObject_t1113636619 * ___U3CObjectBeingPlacedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CObjectBeingPlacedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlacementEventData_t1182598775, ___U3CObjectBeingPlacedU3Ek__BackingField_3)); }
	inline GameObject_t1113636619 * get_U3CObjectBeingPlacedU3Ek__BackingField_3() const { return ___U3CObjectBeingPlacedU3Ek__BackingField_3; }
	inline GameObject_t1113636619 ** get_address_of_U3CObjectBeingPlacedU3Ek__BackingField_3() { return &___U3CObjectBeingPlacedU3Ek__BackingField_3; }
	inline void set_U3CObjectBeingPlacedU3Ek__BackingField_3(GameObject_t1113636619 * value)
	{
		___U3CObjectBeingPlacedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectBeingPlacedU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEMENTEVENTDATA_T1182598775_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef INTERACTIONSOURCE_T872619030_H
#define INTERACTIONSOURCE_T872619030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t872619030 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T872619030_H
#ifndef XRNODESTATE_T3752602430_H
#define XRNODESTATE_T3752602430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t3752602430 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t3722313464  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t2301928331  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t3722313464  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t3722313464  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t3722313464  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Position_2)); }
	inline Vector3_t3722313464  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t3722313464 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t3722313464  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Rotation_3)); }
	inline Quaternion_t2301928331  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t2301928331  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Velocity_4)); }
	inline Vector3_t3722313464  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t3722313464  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularVelocity_5)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Acceleration_6)); }
	inline Vector3_t3722313464  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t3722313464 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t3722313464  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularAcceleration_7)); }
	inline Vector3_t3722313464  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t3722313464 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t3722313464  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODESTATE_T3752602430_H
#ifndef GENERICOPENXRCONTROLLER_T1259934344_H
#define GENERICOPENXRCONTROLLER_T1259934344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenXR.GenericOpenXRController
struct  GenericOpenXRController_t1259934344  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICOPENXRCONTROLLER_T1259934344_H
#ifndef SIMULATEDCONTROLLER_T2324945972_H
#define SIMULATEDCONTROLLER_T2324945972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.Simulator.SimulatedController
struct  SimulatedController_t2324945972  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDCONTROLLER_T2324945972_H
#ifndef SIMULATEDHANDCONTROLLER_T542639827_H
#define SIMULATEDHANDCONTROLLER_T542639827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.Simulator.SimulatedHandController
struct  SimulatedHandController_t542639827  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHANDCONTROLLER_T542639827_H
#ifndef GENERICUNITYCONTROLLER_T3746958344_H
#define GENERICUNITYCONTROLLER_T3746958344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController
struct  GenericUnityController_t3746958344  : public BaseController_t1056426174
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::<PointerOffsetAngle>k__BackingField
	float ___U3CPointerOffsetAngleU3Ek__BackingField_12;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::dualAxisPosition
	Vector2_t2156229523  ___dualAxisPosition_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::CurrentControllerPosition
	Vector3_t3722313464  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::CurrentControllerRotation
	Quaternion_t2301928331  ___CurrentControllerRotation_15;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::pointerOffsetPose
	MixedRealityPose_t1367237071  ___pointerOffsetPose_16;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::LastControllerPose
	MixedRealityPose_t1367237071  ___LastControllerPose_17;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.GenericUnityController::CurrentControllerPose
	MixedRealityPose_t1367237071  ___CurrentControllerPose_18;

public:
	inline static int32_t get_offset_of_U3CPointerOffsetAngleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___U3CPointerOffsetAngleU3Ek__BackingField_12)); }
	inline float get_U3CPointerOffsetAngleU3Ek__BackingField_12() const { return ___U3CPointerOffsetAngleU3Ek__BackingField_12; }
	inline float* get_address_of_U3CPointerOffsetAngleU3Ek__BackingField_12() { return &___U3CPointerOffsetAngleU3Ek__BackingField_12; }
	inline void set_U3CPointerOffsetAngleU3Ek__BackingField_12(float value)
	{
		___U3CPointerOffsetAngleU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_dualAxisPosition_13() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___dualAxisPosition_13)); }
	inline Vector2_t2156229523  get_dualAxisPosition_13() const { return ___dualAxisPosition_13; }
	inline Vector2_t2156229523 * get_address_of_dualAxisPosition_13() { return &___dualAxisPosition_13; }
	inline void set_dualAxisPosition_13(Vector2_t2156229523  value)
	{
		___dualAxisPosition_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___CurrentControllerPosition_14)); }
	inline Vector3_t3722313464  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_t3722313464 * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_t3722313464  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___CurrentControllerRotation_15)); }
	inline Quaternion_t2301928331  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t2301928331 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t2301928331  value)
	{
		___CurrentControllerRotation_15 = value;
	}

	inline static int32_t get_offset_of_pointerOffsetPose_16() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___pointerOffsetPose_16)); }
	inline MixedRealityPose_t1367237071  get_pointerOffsetPose_16() const { return ___pointerOffsetPose_16; }
	inline MixedRealityPose_t1367237071 * get_address_of_pointerOffsetPose_16() { return &___pointerOffsetPose_16; }
	inline void set_pointerOffsetPose_16(MixedRealityPose_t1367237071  value)
	{
		___pointerOffsetPose_16 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_17() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___LastControllerPose_17)); }
	inline MixedRealityPose_t1367237071  get_LastControllerPose_17() const { return ___LastControllerPose_17; }
	inline MixedRealityPose_t1367237071 * get_address_of_LastControllerPose_17() { return &___LastControllerPose_17; }
	inline void set_LastControllerPose_17(MixedRealityPose_t1367237071  value)
	{
		___LastControllerPose_17 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPose_18() { return static_cast<int32_t>(offsetof(GenericUnityController_t3746958344, ___CurrentControllerPose_18)); }
	inline MixedRealityPose_t1367237071  get_CurrentControllerPose_18() const { return ___CurrentControllerPose_18; }
	inline MixedRealityPose_t1367237071 * get_address_of_CurrentControllerPose_18() { return &___CurrentControllerPose_18; }
	inline void set_CurrentControllerPose_18(MixedRealityPose_t1367237071  value)
	{
		___CurrentControllerPose_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICUNITYCONTROLLER_T3746958344_H
#ifndef ARCADESTICKCONTROLLER_T2151894077_H
#define ARCADESTICKCONTROLLER_T2151894077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.WindowsGaming.ArcadeStickController
struct  ArcadeStickController_t2151894077  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCADESTICKCONTROLLER_T2151894077_H
#ifndef GAMEPADCONTROLLER_T3305936222_H
#define GAMEPADCONTROLLER_T3305936222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.WindowsGaming.GamepadController
struct  GamepadController_t3305936222  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADCONTROLLER_T3305936222_H
#ifndef JOYSTICKCONTROLLER_T625044773_H
#define JOYSTICKCONTROLLER_T625044773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.WindowsGaming.JoystickController
struct  JoystickController_t625044773  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICKCONTROLLER_T625044773_H
#ifndef RACINGWHEELCONTROLLER_T78956154_H
#define RACINGWHEELCONTROLLER_T78956154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.WindowsGaming.RacingWheelController
struct  RacingWheelController_t78956154  : public BaseController_t1056426174
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RACINGWHEELCONTROLLER_T78956154_H
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
#ifndef GRAPHICINPUTEVENTDATA_T1427830494_H
#define GRAPHICINPUTEVENTDATA_T1427830494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.GraphicInputEventData
struct  GraphicInputEventData_t1427830494  : public PointerEventData_t3807901092
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICINPUTEVENTDATA_T1427830494_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_T3794261883_H
#define U3CU3EC__DISPLAYCLASS2_0_T3794261883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3794261883  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::durationInSeconds
	float ___durationInSeconds_1;
	// System.Single Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::intensity
	float ___intensity_2;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3794261883, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}

	inline static int32_t get_offset_of_durationInSeconds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3794261883, ___durationInSeconds_1)); }
	inline float get_durationInSeconds_1() const { return ___durationInSeconds_1; }
	inline float* get_address_of_durationInSeconds_1() { return &___durationInSeconds_1; }
	inline void set_durationInSeconds_1(float value)
	{
		___durationInSeconds_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3794261883, ___intensity_2)); }
	inline float get_intensity_2() const { return ___intensity_2; }
	inline float* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(float value)
	{
		___intensity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_T3794261883_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T3794261882_H
#define U3CU3EC__DISPLAYCLASS3_0_T3794261882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t3794261882  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass3_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t3794261882, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T3794261882_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T3794261885_H
#define U3CU3EC__DISPLAYCLASS4_0_T3794261885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t3794261885  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;
	// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Microsoft.MixedReality.Toolkit.Internal.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0::returnValue
	RuntimeObject* ___returnValue_1;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3794261885, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}

	inline static int32_t get_offset_of_returnValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3794261885, ___returnValue_1)); }
	inline RuntimeObject* get_returnValue_1() const { return ___returnValue_1; }
	inline RuntimeObject** get_address_of_returnValue_1() { return &___returnValue_1; }
	inline void set_returnValue_1(RuntimeObject* value)
	{
		___returnValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___returnValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T3794261885_H
#ifndef GENERICOPENVRCONTROLLER_T989755555_H
#define GENERICOPENVRCONTROLLER_T989755555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.GenericOpenVRController
struct  GenericOpenVRController_t989755555  : public GenericUnityController_t3746958344
{
public:
	// UnityEngine.XR.XRNode Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.GenericOpenVRController::nodeType
	int32_t ___nodeType_19;
	// UnityEngine.XR.XRNodeState Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.GenericOpenVRController::<LastXrNodeStateReading>k__BackingField
	XRNodeState_t3752602430  ___U3CLastXrNodeStateReadingU3Ek__BackingField_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.GenericOpenVRController::nodeStates
	List_1_t929709876 * ___nodeStates_21;

public:
	inline static int32_t get_offset_of_nodeType_19() { return static_cast<int32_t>(offsetof(GenericOpenVRController_t989755555, ___nodeType_19)); }
	inline int32_t get_nodeType_19() const { return ___nodeType_19; }
	inline int32_t* get_address_of_nodeType_19() { return &___nodeType_19; }
	inline void set_nodeType_19(int32_t value)
	{
		___nodeType_19 = value;
	}

	inline static int32_t get_offset_of_U3CLastXrNodeStateReadingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GenericOpenVRController_t989755555, ___U3CLastXrNodeStateReadingU3Ek__BackingField_20)); }
	inline XRNodeState_t3752602430  get_U3CLastXrNodeStateReadingU3Ek__BackingField_20() const { return ___U3CLastXrNodeStateReadingU3Ek__BackingField_20; }
	inline XRNodeState_t3752602430 * get_address_of_U3CLastXrNodeStateReadingU3Ek__BackingField_20() { return &___U3CLastXrNodeStateReadingU3Ek__BackingField_20; }
	inline void set_U3CLastXrNodeStateReadingU3Ek__BackingField_20(XRNodeState_t3752602430  value)
	{
		___U3CLastXrNodeStateReadingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_nodeStates_21() { return static_cast<int32_t>(offsetof(GenericOpenVRController_t989755555, ___nodeStates_21)); }
	inline List_1_t929709876 * get_nodeStates_21() const { return ___nodeStates_21; }
	inline List_1_t929709876 ** get_address_of_nodeStates_21() { return &___nodeStates_21; }
	inline void set_nodeStates_21(List_1_t929709876 * value)
	{
		___nodeStates_21 = value;
		Il2CppCodeGenWriteBarrier((&___nodeStates_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICOPENVRCONTROLLER_T989755555_H
#ifndef XBOXCONTROLLER_T3951291578_H
#define XBOXCONTROLLER_T3951291578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.UnityInput.XboxController
struct  XboxController_t3951291578  : public GenericUnityController_t3746958344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXCONTROLLER_T3951291578_H
#ifndef DICTATIONEVENTDATA_T3614455429_H
#define DICTATIONEVENTDATA_T3614455429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.DictationEventData
struct  DictationEventData_t3614455429  : public BaseInputEventData_t1713972929
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t3680889665 * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_t3614455429, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationResultU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t3614455429, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t3680889665 * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t3680889665 ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t3680889665 * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationAudioClipU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONEVENTDATA_T3614455429_H
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
#ifndef SOURCESTATEEVENTDATA_T3089655425_H
#define SOURCESTATEEVENTDATA_T3089655425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourceStateEventData
struct  SourceStateEventData_t3089655425  : public BaseInputEventData_t1713972929
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_t3089655425, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControllerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCESTATEEVENTDATA_T3089655425_H
#ifndef SPEECHEVENTDATA_T1426245001_H
#define SPEECHEVENTDATA_T1426245001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData
struct  SpeechEventData_t1426245001  : public BaseInputEventData_t1713972929
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t881159249  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t3738529785  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// System.String Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData::<RecognizedText>k__BackingField
	String_t* ___U3CRecognizedTextU3Ek__BackingField_7;
	// UnityEngine.Windows.Speech.ConfidenceLevel Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;
	// UnityEngine.Windows.Speech.SemanticMeaning[] Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SpeechEventData::<SemanticMeanings>k__BackingField
	SemanticMeaningU5BU5D_t1653704947* ___U3CSemanticMeaningsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_t1426245001, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t881159249  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t881159249 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t881159249  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t1426245001, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_t3738529785  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_t3738529785 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_t3738529785  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRecognizedTextU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t1426245001, ___U3CRecognizedTextU3Ek__BackingField_7)); }
	inline String_t* get_U3CRecognizedTextU3Ek__BackingField_7() const { return ___U3CRecognizedTextU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CRecognizedTextU3Ek__BackingField_7() { return &___U3CRecognizedTextU3Ek__BackingField_7; }
	inline void set_U3CRecognizedTextU3Ek__BackingField_7(String_t* value)
	{
		___U3CRecognizedTextU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRecognizedTextU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t1426245001, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CSemanticMeaningsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechEventData_t1426245001, ___U3CSemanticMeaningsU3Ek__BackingField_9)); }
	inline SemanticMeaningU5BU5D_t1653704947* get_U3CSemanticMeaningsU3Ek__BackingField_9() const { return ___U3CSemanticMeaningsU3Ek__BackingField_9; }
	inline SemanticMeaningU5BU5D_t1653704947** get_address_of_U3CSemanticMeaningsU3Ek__BackingField_9() { return &___U3CSemanticMeaningsU3Ek__BackingField_9; }
	inline void set_U3CSemanticMeaningsU3Ek__BackingField_9(SemanticMeaningU5BU5D_t1653704947* value)
	{
		___U3CSemanticMeaningsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSemanticMeaningsU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHEVENTDATA_T1426245001_H
#ifndef OCULUSREMOTECONTROLLER_T2557282592_H
#define OCULUSREMOTECONTROLLER_T2557282592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.OculusRemoteController
struct  OculusRemoteController_t2557282592  : public GenericOpenVRController_t989755555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OCULUSREMOTECONTROLLER_T2557282592_H
#ifndef OCULUSTOUCHCONTROLLER_T732141521_H
#define OCULUSTOUCHCONTROLLER_T732141521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.OculusTouchController
struct  OculusTouchController_t732141521  : public GenericOpenVRController_t989755555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OCULUSTOUCHCONTROLLER_T732141521_H
#ifndef VIVEKNUCKLESCONTROLLER_T3463585562_H
#define VIVEKNUCKLESCONTROLLER_T3463585562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.Devices.OpenVR.ViveKnucklesController
struct  ViveKnucklesController_t3463585562  : public GenericOpenVRController_t989755555
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIVEKNUCKLESCONTROLLER_T3463585562_H
#ifndef MIXEDREALITYPOINTEREVENTDATA_T4230511545_H
#define MIXEDREALITYPOINTEREVENTDATA_T4230511545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_t4230511545  : public InputEventData_t2928432700
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t4230511545, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t4230511545, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOINTEREVENTDATA_T4230511545_H
#ifndef SOURCEPOSEEVENTDATA_T2315697768_H
#define SOURCEPOSEEVENTDATA_T2315697768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData
struct  SourcePoseEventData_t2315697768  : public SourceStateEventData_t3089655425
{
public:
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Devices.TrackingState Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_6;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData::<TwoDofPosition>k__BackingField
	Vector2_t2156229523  ___U3CTwoDofPositionU3Ek__BackingField_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData::<ThreeDofPosition>k__BackingField
	Vector3_t3722313464  ___U3CThreeDofPositionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData::<ThreeDofRotation>k__BackingField
	Quaternion_t2301928331  ___U3CThreeDofRotationU3Ek__BackingField_9;
	// Microsoft.MixedReality.Toolkit.Internal.Definitions.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Internal.EventDatum.Input.SourcePoseEventData::<MixedRealityPose>k__BackingField
	MixedRealityPose_t1367237071  ___U3CMixedRealityPoseU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_t2315697768, ___U3CTrackingStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_6() const { return ___U3CTrackingStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_6() { return &___U3CTrackingStateU3Ek__BackingField_6; }
	inline void set_U3CTrackingStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CTwoDofPositionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SourcePoseEventData_t2315697768, ___U3CTwoDofPositionU3Ek__BackingField_7)); }
	inline Vector2_t2156229523  get_U3CTwoDofPositionU3Ek__BackingField_7() const { return ___U3CTwoDofPositionU3Ek__BackingField_7; }
	inline Vector2_t2156229523 * get_address_of_U3CTwoDofPositionU3Ek__BackingField_7() { return &___U3CTwoDofPositionU3Ek__BackingField_7; }
	inline void set_U3CTwoDofPositionU3Ek__BackingField_7(Vector2_t2156229523  value)
	{
		___U3CTwoDofPositionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CThreeDofPositionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SourcePoseEventData_t2315697768, ___U3CThreeDofPositionU3Ek__BackingField_8)); }
	inline Vector3_t3722313464  get_U3CThreeDofPositionU3Ek__BackingField_8() const { return ___U3CThreeDofPositionU3Ek__BackingField_8; }
	inline Vector3_t3722313464 * get_address_of_U3CThreeDofPositionU3Ek__BackingField_8() { return &___U3CThreeDofPositionU3Ek__BackingField_8; }
	inline void set_U3CThreeDofPositionU3Ek__BackingField_8(Vector3_t3722313464  value)
	{
		___U3CThreeDofPositionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CThreeDofRotationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SourcePoseEventData_t2315697768, ___U3CThreeDofRotationU3Ek__BackingField_9)); }
	inline Quaternion_t2301928331  get_U3CThreeDofRotationU3Ek__BackingField_9() const { return ___U3CThreeDofRotationU3Ek__BackingField_9; }
	inline Quaternion_t2301928331 * get_address_of_U3CThreeDofRotationU3Ek__BackingField_9() { return &___U3CThreeDofRotationU3Ek__BackingField_9; }
	inline void set_U3CThreeDofRotationU3Ek__BackingField_9(Quaternion_t2301928331  value)
	{
		___U3CThreeDofRotationU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityPoseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SourcePoseEventData_t2315697768, ___U3CMixedRealityPoseU3Ek__BackingField_10)); }
	inline MixedRealityPose_t1367237071  get_U3CMixedRealityPoseU3Ek__BackingField_10() const { return ___U3CMixedRealityPoseU3Ek__BackingField_10; }
	inline MixedRealityPose_t1367237071 * get_address_of_U3CMixedRealityPoseU3Ek__BackingField_10() { return &___U3CMixedRealityPoseU3Ek__BackingField_10; }
	inline void set_U3CMixedRealityPoseU3Ek__BackingField_10(MixedRealityPose_t1367237071  value)
	{
		___U3CMixedRealityPoseU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEPOSEEVENTDATA_T2315697768_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4300 = { sizeof (U3CU3Ec__DisplayClass33_0_t1464830466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4300[1] = 
{
	U3CU3Ec__DisplayClass33_0_t1464830466::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4301 = { sizeof (U3CU3Ec__DisplayClass34_0_t2656471554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4301[2] = 
{
	U3CU3Ec__DisplayClass34_0_t2656471554::get_offset_of_type_0(),
	U3CU3Ec__DisplayClass34_0_t2656471554::get_offset_of_managerName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4303 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4304 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4306 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4307 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4308 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4309 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4310 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4311 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4312 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4313 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4314 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4315 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4316 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4317 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4318 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4319 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4320 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4321 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4322 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4323 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4324 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4325 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4326 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4327 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4328 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4329 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4330 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4331 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4336 = { sizeof (AnimationCurveExtensions_t1522303492), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4337 = { sizeof (ArrayExtensions_t82977717), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4338 = { sizeof (BoundsExtensions_t1931188077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4338[34] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4339 = { sizeof (Axis_t3977467019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4339[4] = 
{
	Axis_t3977467019::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4340 = { sizeof (CameraExtensions_t133031286), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4341 = { sizeof (CollectionsExtensions_t2712717340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4342 = { sizeof (Color32Extensions_t1717881815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4343 = { sizeof (ComparerExtensions_t266002122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4344 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4344[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4345 = { sizeof (ComponentExtensions_t3276774704), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4346 = { sizeof (DoubleExtensions_t579560115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4347 = { sizeof (EnumerableExtensions_t3278454789), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4348 = { sizeof (EventSystemExtensions_t2697708415), -1, sizeof(EventSystemExtensions_t2697708415_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4348[2] = 
{
	EventSystemExtensions_t2697708415_StaticFields::get_offset_of_RaycastResults_0(),
	EventSystemExtensions_t2697708415_StaticFields::get_offset_of_RaycastResultComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4349 = { sizeof (FloatExtensions_t699319804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4350 = { sizeof (GameObjectExtensions_t349071753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4351 = { sizeof (InteractionSourceExtensions_t725755884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4351[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4352 = { sizeof (U3CU3Ec__DisplayClass2_0_t3794261883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4352[3] = 
{
	U3CU3Ec__DisplayClass2_0_t3794261883::get_offset_of_interactionSource_0(),
	U3CU3Ec__DisplayClass2_0_t3794261883::get_offset_of_durationInSeconds_1(),
	U3CU3Ec__DisplayClass2_0_t3794261883::get_offset_of_intensity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4353 = { sizeof (U3CU3Ec__DisplayClass3_0_t3794261882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4353[1] = 
{
	U3CU3Ec__DisplayClass3_0_t3794261882::get_offset_of_interactionSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4354 = { sizeof (U3CU3Ec__DisplayClass4_0_t3794261885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4354[2] = 
{
	U3CU3Ec__DisplayClass4_0_t3794261885::get_offset_of_interactionSource_0(),
	U3CU3Ec__DisplayClass4_0_t3794261885::get_offset_of_returnValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4355 = { sizeof (LayerExtensions_t4022517484), -1, sizeof(LayerExtensions_t4022517484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4355[5] = 
{
	0,
	LayerExtensions_t4022517484_StaticFields::get_offset_of_defaultLayer_1(),
	LayerExtensions_t4022517484_StaticFields::get_offset_of_surfaceLayer_2(),
	LayerExtensions_t4022517484_StaticFields::get_offset_of_interactionLayer_3(),
	LayerExtensions_t4022517484_StaticFields::get_offset_of_activationLayer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4356 = { sizeof (MathExtensions_t1568903749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4357 = { sizeof (QuaternionExtensions_t2234277290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4358 = { sizeof (RayExtensions_t3328392730), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4359 = { sizeof (StringExtensions_t4095729862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4360 = { sizeof (TransformExtensions_t3648135903), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4361 = { sizeof (U3CEnumerateHierarchyCoreU3Ed__4_t2298766955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4361[8] = 
{
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CU3E1__state_0(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CU3E2__current_1(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CU3El__initialThreadId_2(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_root_3(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CU3E3__root_4(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_ignore_5(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CU3E3__ignore_6(),
	U3CEnumerateHierarchyCoreU3Ed__4_t2298766955::get_offset_of_U3CtransformQueueU3E5__2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4362 = { sizeof (U3CEnumerateAncestorsU3Ed__8_t3446041379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4362[8] = 
{
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CU3E1__state_0(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CU3E2__current_1(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CU3El__initialThreadId_2(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_includeSelf_3(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CU3E3__includeSelf_4(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_startTransform_5(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CU3E3__startTransform_6(),
	U3CEnumerateAncestorsU3Ed__8_t3446041379::get_offset_of_U3CtransformU3E5__2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4363 = { sizeof (UnityObjectExtensions_t2554519737), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4364 = { sizeof (VectorExtensions_t3501961738), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4365 = { sizeof (U3CU3Ec_t585490654), -1, sizeof(U3CU3Ec_t585490654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4365[5] = 
{
	U3CU3Ec_t585490654_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t585490654_StaticFields::get_offset_of_U3CU3E9__12_0_1(),
	U3CU3Ec_t585490654_StaticFields::get_offset_of_U3CU3E9__13_0_2(),
	U3CU3Ec_t585490654_StaticFields::get_offset_of_U3CU3E9__14_0_3(),
	U3CU3Ec_t585490654_StaticFields::get_offset_of_U3CU3E9__15_0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4366 = { sizeof (GenericBaseEventData_t112130871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4366[1] = 
{
	GenericBaseEventData_t112130871::get_offset_of_U3CEventSourceU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4367 = { sizeof (PlacementEventData_t1182598775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4367[1] = 
{
	PlacementEventData_t1182598775::get_offset_of_U3CObjectBeingPlacedU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4368 = { sizeof (TeleportEventData_t1342032624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4368[2] = 
{
	TeleportEventData_t1342032624::get_offset_of_U3CPointerU3Ek__BackingField_3(),
	TeleportEventData_t1342032624::get_offset_of_U3CHotSpotU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4369 = { sizeof (BaseInputEventData_t1713972929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4369[3] = 
{
	BaseInputEventData_t1713972929::get_offset_of_U3CInputSourceU3Ek__BackingField_2(),
	BaseInputEventData_t1713972929::get_offset_of_U3CSourceIdU3Ek__BackingField_3(),
	BaseInputEventData_t1713972929::get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4370 = { sizeof (DictationEventData_t3614455429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4370[2] = 
{
	DictationEventData_t3614455429::get_offset_of_U3CDictationResultU3Ek__BackingField_5(),
	DictationEventData_t3614455429::get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4371 = { sizeof (FocusEventData_t473508985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4371[3] = 
{
	FocusEventData_t473508985::get_offset_of_U3CPointerU3Ek__BackingField_2(),
	FocusEventData_t473508985::get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3(),
	FocusEventData_t473508985::get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4372 = { sizeof (GraphicInputEventData_t1427830494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4373 = { sizeof (InputEventData_t2928432700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4373[1] = 
{
	InputEventData_t2928432700::get_offset_of_U3CHandednessU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4374[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4375 = { sizeof (MixedRealityPointerEventData_t4230511545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4375[2] = 
{
	MixedRealityPointerEventData_t4230511545::get_offset_of_U3CPointerU3Ek__BackingField_6(),
	MixedRealityPointerEventData_t4230511545::get_offset_of_U3CCountU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4376 = { sizeof (SourcePoseEventData_t2315697768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4376[5] = 
{
	SourcePoseEventData_t2315697768::get_offset_of_U3CTrackingStateU3Ek__BackingField_6(),
	SourcePoseEventData_t2315697768::get_offset_of_U3CTwoDofPositionU3Ek__BackingField_7(),
	SourcePoseEventData_t2315697768::get_offset_of_U3CThreeDofPositionU3Ek__BackingField_8(),
	SourcePoseEventData_t2315697768::get_offset_of_U3CThreeDofRotationU3Ek__BackingField_9(),
	SourcePoseEventData_t2315697768::get_offset_of_U3CMixedRealityPoseU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4377 = { sizeof (SourceStateEventData_t3089655425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4377[1] = 
{
	SourceStateEventData_t3089655425::get_offset_of_U3CControllerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4378 = { sizeof (SpeechEventData_t1426245001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4378[5] = 
{
	SpeechEventData_t1426245001::get_offset_of_U3CPhraseDurationU3Ek__BackingField_5(),
	SpeechEventData_t1426245001::get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6(),
	SpeechEventData_t1426245001::get_offset_of_U3CRecognizedTextU3Ek__BackingField_7(),
	SpeechEventData_t1426245001::get_offset_of_U3CConfidenceU3Ek__BackingField_8(),
	SpeechEventData_t1426245001::get_offset_of_U3CSemanticMeaningsU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4379 = { sizeof (BoundaryEventData_t3752774623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4379[5] = 
{
	BoundaryEventData_t3752774623::get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_3(),
	BoundaryEventData_t3752774623::get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4(),
	BoundaryEventData_t3752774623::get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5(),
	BoundaryEventData_t3752774623::get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6(),
	BoundaryEventData_t3752774623::get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4380 = { sizeof (BaseController_t1056426174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4380[12] = 
{
	BaseController_t1056426174::get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0(),
	BaseController_t1056426174::get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(),
	BaseController_t1056426174::get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(),
	BaseController_t1056426174::get_offset_of_inputSystem_3(),
	BaseController_t1056426174::get_offset_of_U3CEnabledU3Ek__BackingField_4(),
	BaseController_t1056426174::get_offset_of_U3CTrackingStateU3Ek__BackingField_5(),
	BaseController_t1056426174::get_offset_of_U3CControllerHandednessU3Ek__BackingField_6(),
	BaseController_t1056426174::get_offset_of_U3CInputSourceU3Ek__BackingField_7(),
	BaseController_t1056426174::get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8(),
	BaseController_t1056426174::get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9(),
	BaseController_t1056426174::get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10(),
	BaseController_t1056426174::get_offset_of_U3CInteractionsU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4381 = { sizeof (BaseDeviceManager_t3319371959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4381[3] = 
{
	BaseDeviceManager_t3319371959::get_offset_of_U3CNameU3Ek__BackingField_0(),
	BaseDeviceManager_t3319371959::get_offset_of_U3CPriorityU3Ek__BackingField_1(),
	BaseDeviceManager_t3319371959::get_offset_of_inputSystem_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4382 = { sizeof (ArcadeStickController_t2151894077), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4383 = { sizeof (GamepadController_t3305936222), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4384 = { sizeof (JoystickController_t625044773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4385 = { sizeof (RacingWheelController_t78956154), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4386 = { sizeof (WindowsGamingDeviceManager_t201464995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4387 = { sizeof (GenericUnityController_t3746958344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4387[7] = 
{
	GenericUnityController_t3746958344::get_offset_of_U3CPointerOffsetAngleU3Ek__BackingField_12(),
	GenericUnityController_t3746958344::get_offset_of_dualAxisPosition_13(),
	GenericUnityController_t3746958344::get_offset_of_CurrentControllerPosition_14(),
	GenericUnityController_t3746958344::get_offset_of_CurrentControllerRotation_15(),
	GenericUnityController_t3746958344::get_offset_of_pointerOffsetPose_16(),
	GenericUnityController_t3746958344::get_offset_of_LastControllerPose_17(),
	GenericUnityController_t3746958344::get_offset_of_CurrentControllerPose_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4388 = { sizeof (UnityDeviceManager_t2602583478), -1, sizeof(UnityDeviceManager_t2602583478_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4388[4] = 
{
	0,
	UnityDeviceManager_t2602583478_StaticFields::get_offset_of_ActiveControllers_4(),
	UnityDeviceManager_t2602583478::get_offset_of_deviceRefreshTimer_5(),
	UnityDeviceManager_t2602583478::get_offset_of_lastDeviceList_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4389 = { sizeof (XboxController_t3951291578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4390 = { sizeof (SimulatedController_t2324945972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4391 = { sizeof (SimulatedDeviceManager_t1661827628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4392 = { sizeof (SimulatedHandController_t542639827), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4393 = { sizeof (GenericOpenXRController_t1259934344), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4394 = { sizeof (OpenXRDeviceManager_t3439081049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4395 = { sizeof (GenericOpenVRController_t989755555), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4395[3] = 
{
	GenericOpenVRController_t989755555::get_offset_of_nodeType_19(),
	GenericOpenVRController_t989755555::get_offset_of_U3CLastXrNodeStateReadingU3Ek__BackingField_20(),
	GenericOpenVRController_t989755555::get_offset_of_nodeStates_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4396 = { sizeof (OculusRemoteController_t2557282592), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4397 = { sizeof (OculusTouchController_t732141521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4398 = { sizeof (OpenVRDeviceManager_t2634003954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4399 = { sizeof (ViveKnucklesController_t3463585562), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
