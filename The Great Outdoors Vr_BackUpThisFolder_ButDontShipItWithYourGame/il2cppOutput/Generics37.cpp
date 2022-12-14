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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// SteamVR_Utils/RigidTransform[]
struct RigidTransformU5BU5D_tC98EB3576009E5D825D0D43671A65D32A2449ECC;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE;
// System.Collections.Generic.Dictionary`2/Entry<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>[]
struct EntryU5BU5D_t0D734C3A9FC2BB7756EB66C40676302F9403E7B4;
// System.Collections.Generic.Dictionary`2/Entry<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>[]
struct EntryU5BU5D_t4C418D5E5DDBE9A638DF5FCBCD97719CB925049C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct KeyCollection_tC5563A0DFC99AE3308EBB251D476B5F437201422;
// System.Collections.Generic.Dictionary`2/KeyCollection<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct KeyCollection_t222A2A2A227AA04D875F92FF286ED9B7BFE610D1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct ValueCollection_t580278AC1C4FB6ECDDE191FE2CD101DFB2E28E5F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct ValueCollection_t51897762541CBB71F34AD5387A825932750A674F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_Action>
struct Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245;
// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_ActionSet>
struct Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D;
// System.Collections.Generic.Dictionary`2<System.UInt64,Valve.VR.SteamVR_Input_Sources>
struct Dictionary_2_tAEA5E8A9E7453E81FE8219225916E4BC29B908B4;
// System.Collections.Generic.Dictionary`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F;
// System.Collections.Generic.Dictionary`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>
struct IEqualityComparer_1_tCFAF66AA9C78327361B9F197F0C7965E4B1054FF;
// System.Collections.Generic.IEqualityComparer`1<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>
struct IEqualityComparer_1_t8A00BE39088A891F156B3B4FCA6805306C8123FF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Func`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD;
// System.Func`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>
struct UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF;
// UnityEngine.Events.UnityAction`2<System.Int32,System.Boolean>
struct UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160;
// UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>
struct UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`3<UnityEngine.Color,System.Single,System.Boolean>
struct UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1<System.Object>
struct U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass5_0`1<System.Object>
struct U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass6_0`1<System.Object>
struct U3CU3Ec__DisplayClass6_0_1_tC607F8CE914DC616495517869B38C8D10D496EC2;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_tDA4A777753C292F8E7229BECCB201D492018125E;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass8_0`1<System.Object>
struct U3CU3Ec__DisplayClass8_0_1_tCE80B60452706E42B3CB1FFE37C0AA9AFA966CDA;
// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass9_0`1<System.Object>
struct U3CU3Ec__DisplayClass9_0_1_tD9FD9DC48459CC7232A45D9773871845C774B5DB;
// Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC;
// Valve.Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass13_0`1<System.Object>
struct U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4;
// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92;
// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E;
// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA;
// Valve.VR.CVRCompositor
struct CVRCompositor_t7E9A7ACFAB7C4BC0CAFC520CB63213C2C5AA1F4A;
// Valve.VR.CVROverlay
struct CVROverlay_t98FB767D8969B5694A45224BD8D432ACBEE020A8;
// Valve.VR.CVRSystem
struct CVRSystem_t5B252CC3E969ED765C4C346EC5CF6A79657D5380;
// Valve.VR.EVRInputStringBits[]
struct EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511;
// Valve.VR.ISteamVR_Action_In[]
struct ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B;
// Valve.VR.ISteamVR_Action_Out[]
struct ISteamVR_Action_OutU5BU5D_t7A49A166FF69691341BA55E5A16540FE292A37C9;
// Valve.VR.InteractionSystem.Util/<>c__47`1<System.Object>
struct U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF;
// Valve.VR.SteamVR
struct SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F;
// Valve.VR.SteamVR_Action
struct SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734;
// Valve.VR.SteamVR_ActionSet
struct SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6;
// Valve.VR.SteamVR_ActionSet[]
struct SteamVR_ActionSetU5BU5D_tC9136AFAEDB1DBB1ED428EDDD4B9B49EC82698FA;
// Valve.VR.SteamVR_ActionSet_Data
struct SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529;
// Valve.VR.SteamVR_Action[]
struct SteamVR_ActionU5BU5D_tEC1A53652514EC91CD9B299E87348746BA59DEAB;
// Valve.VR.SteamVR_Action_Boolean[]
struct SteamVR_Action_BooleanU5BU5D_tBB030CD0CA82DB08AEB7456EC4C614EA8B7A5E34;
// Valve.VR.SteamVR_Action_In_Source
struct SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB;
// Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>
struct SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D;
// Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>
struct SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243;
// Valve.VR.SteamVR_Action_Out`2<System.Object,System.Object>
struct SteamVR_Action_Out_2_tBFC90712829F4A53DB24EF908459C469ADC749B7;
// Valve.VR.SteamVR_Action_Pose
struct SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C;
// Valve.VR.SteamVR_Action_Pose/ActiveChangeHandler
struct ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E;
// Valve.VR.SteamVR_Action_Pose/ChangeHandler
struct ChangeHandler_tBB749BC376815901B6E13DF03202383F3302BFBE;
// Valve.VR.SteamVR_Action_Pose/DeviceConnectedChangeHandler
struct DeviceConnectedChangeHandler_t4AC124A9A94D668A0FB45EA8FC718729CEA3D0D9;
// Valve.VR.SteamVR_Action_Pose/TrackingChangeHandler
struct TrackingChangeHandler_t1CC1FD6A7111B86684B749C4E751B1F5237D2914;
// Valve.VR.SteamVR_Action_Pose/UpdateHandler
struct UpdateHandler_t4F6AB1825F5E5CE6A7BBCD6C84541B3DF13C2AA1;
// Valve.VR.SteamVR_Action_Pose/ValidPoseChangeHandler
struct ValidPoseChangeHandler_t1D487A0B0E2FB0D02C72EF5365E81BCD3E33B41A;
// Valve.VR.SteamVR_Action_Pose[]
struct SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968;
// Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>
struct SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900;
// Valve.VR.SteamVR_Action_Pose_Source
struct SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27;
// Valve.VR.SteamVR_Action_Pose_Source[]
struct SteamVR_Action_Pose_SourceU5BU5D_t22552112660E2C6809DF49AE76F3B6C3DF47DA18;
// Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>
struct SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163;
// Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>
struct SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9;
// Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Skeleton_Source>
struct SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125;
// Valve.VR.SteamVR_Action_Single[]
struct SteamVR_Action_SingleU5BU5D_t17606A7D166DFF733AFE6D853883DEBF3D7A34A2;
// Valve.VR.SteamVR_Action_Skeleton
struct SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504;
// Valve.VR.SteamVR_Action_Skeleton[]
struct SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56;
// Valve.VR.SteamVR_Action_Skeleton_Source[]
struct SteamVR_Action_Skeleton_SourceU5BU5D_tD7F80DE17D413EA1E866B222C9A63AEBFF0CE5D4;
// Valve.VR.SteamVR_Action_Skeleton_Source_Map
struct SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB;
// Valve.VR.SteamVR_Action_Source_Map
struct SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17;
// Valve.VR.SteamVR_Action_Source_Map`1<System.Object>
struct SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14;
// Valve.VR.SteamVR_Action_Vector2[]
struct SteamVR_Action_Vector2U5BU5D_t59620E37FA97264ED8B42C392F939C8ECCC6AC1B;
// Valve.VR.SteamVR_Action_Vector3[]
struct SteamVR_Action_Vector3U5BU5D_tCB49AE6A470D2C2A5C963F6B94A56EFE0E0B9E9D;
// Valve.VR.SteamVR_Action_Vibration[]
struct SteamVR_Action_VibrationU5BU5D_tD7B0D0DE94599F6D17C88113C883DC686AE1BD12;
// Valve.VR.SteamVR_Action`2<System.Object,System.Object>
struct SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B;
// Valve.VR.SteamVR_Events/Action
struct Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5;
// Valve.VR.SteamVR_Events/Action`1<System.Boolean>
struct Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894;
// Valve.VR.SteamVR_Events/Action`1<System.Object>
struct Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94;
// Valve.VR.SteamVR_Events/Action`1<System.Single>
struct Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA;
// Valve.VR.SteamVR_Events/Action`1<Valve.VR.VREvent_t>
struct Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242;
// Valve.VR.SteamVR_Events/Action`2<System.Int32,System.Boolean>
struct Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226;
// Valve.VR.SteamVR_Events/Action`2<System.Object,System.Boolean>
struct Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1;
// Valve.VR.SteamVR_Events/Action`2<System.Object,System.Object>
struct Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A;
// Valve.VR.SteamVR_Events/Action`3<System.Object,System.Object,System.Object>
struct Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39;
// Valve.VR.SteamVR_Events/Action`3<UnityEngine.Color,System.Single,System.Boolean>
struct Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE;
// Valve.VR.SteamVR_Events/Event`1<System.Boolean>
struct Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B;
// Valve.VR.SteamVR_Events/Event`1<System.Object>
struct Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F;
// Valve.VR.SteamVR_Events/Event`1<System.Single>
struct Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F;
// Valve.VR.SteamVR_Events/Event`1<Valve.VR.VREvent_t>
struct Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262;
// Valve.VR.SteamVR_Events/Event`2<System.Int32,System.Boolean>
struct Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF;
// Valve.VR.SteamVR_Events/Event`2<System.Object,System.Boolean>
struct Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522;
// Valve.VR.SteamVR_Events/Event`2<System.Object,System.Object>
struct Event_2_t3615C727C978524006980D0666EC556B57802FE3;
// Valve.VR.SteamVR_Events/Event`3<System.Object,System.Object,System.Object>
struct Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0;
// Valve.VR.SteamVR_Events/Event`3<UnityEngine.Color,System.Single,System.Boolean>
struct Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB;
// Valve.VR.SteamVR_Input/PosesUpdatedHandler
struct PosesUpdatedHandler_tFA469337ADC152B8E747DB034400AE77D45238CA;
// Valve.VR.SteamVR_Input/SkeletonsUpdatedHandler
struct SkeletonsUpdatedHandler_t87EC02E2FFD91D305E5C4E8B64110AA2981F3DD6;
// Valve.VR.SteamVR_Input_ActionFile
struct SteamVR_Input_ActionFile_tC425AB8156D447975E61DFF0C51888DE25BA09B1;
// Valve.VR.SteamVR_Input_Sources[]
struct SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A;
// Valve.VR.SteamVR_RingBuffer`1<System.Object>
struct SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74;
// Valve.VR.SteamVR_Settings
struct SteamVR_Settings_t64E5B6E42EEDC6ACB51C476970EF3AA6270E555C;
// Valve.VR.VRActiveActionSet_t[]
struct VRActiveActionSet_tU5BU5D_t2D5643D6F85DAE8CC600EF80D45C90EFC71ADBD5;
// Valve.VR.VRTextureBounds_t[]
struct VRTextureBounds_tU5BU5D_tAE079634A0FDBA61CBA97C5AE3C69BD032940E02;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m689A1C27C967F079E455944299436F672441C982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m8EBF75CA71099C7A7E1480E9E14AE13613E06B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_m326F7A2B1892AD60B192245345D475865D849EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_m64864A801771A6A0BD95E95481F0BC0D06413919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_m8C1D384C95449C62D83ACF3512CB67ADF0751281_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2_Initialize_mAC98709EEB89AD1E0E53E38F59DDAADF77E1FD3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2_TryNeedsInitData_m0583C85672E85527F54B5651A3F8FBC528775420_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2__ctor_mAED1FACF82DCD111FFFE1851937D1979A4B6B59C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_2_GetControllerType_m2E28257B2E7DCB4B4ACC565AFDCBA2D5C3B777B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_Source_Map_1_ForceAddSourceToUpdateList_m5470B6183D388945F754A5D6FD6D495ED51592B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_Source_Map_1_IsUpdating_m42B62F1D9AB85D68C8802F01630E493FD9E5A4AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_Source_Map_1_OnAccessSource_mF687BAA4362121649AD62519D882C2CBF673851F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_Source_Map_1_UpdateValues_m95C60460A969C2142CD970539350489AAF52A16A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_In_Source_Map_1__ctor_mABEF0F1512ABB73914B960E4A67930AC81E767F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_Pose_Base_2_SetUniverseOrigin_mD2B7C5BD95B32757F2C081384D169A35F877578A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_Pose_Source_Map_1_UpdateValues_mCE5CB3D806E602B7AB83CB62EE250E25173C8C93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_Source_Map_1__ctor_mE8EB35AF2F507C1EA04DB21FFAE722DFE57C6B25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_m326F7A2B1892AD60B192245345D475865D849EB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_m64864A801771A6A0BD95E95481F0BC0D06413919_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_m8C1D384C95449C62D83ACF3512CB67ADF0751281_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511;
struct SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968;
struct SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0D734C3A9FC2BB7756EB66C40676302F9403E7B4* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC5563A0DFC99AE3308EBB251D476B5F437201422 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t580278AC1C4FB6ECDDE191FE2CD101DFB2E28E5F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___entries_1)); }
	inline EntryU5BU5D_t0D734C3A9FC2BB7756EB66C40676302F9403E7B4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0D734C3A9FC2BB7756EB66C40676302F9403E7B4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0D734C3A9FC2BB7756EB66C40676302F9403E7B4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___keys_7)); }
	inline KeyCollection_tC5563A0DFC99AE3308EBB251D476B5F437201422 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC5563A0DFC99AE3308EBB251D476B5F437201422 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC5563A0DFC99AE3308EBB251D476B5F437201422 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ___values_8)); }
	inline ValueCollection_t580278AC1C4FB6ECDDE191FE2CD101DFB2E28E5F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t580278AC1C4FB6ECDDE191FE2CD101DFB2E28E5F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t580278AC1C4FB6ECDDE191FE2CD101DFB2E28E5F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4C418D5E5DDBE9A638DF5FCBCD97719CB925049C* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t222A2A2A227AA04D875F92FF286ED9B7BFE610D1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t51897762541CBB71F34AD5387A825932750A674F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___entries_1)); }
	inline EntryU5BU5D_t4C418D5E5DDBE9A638DF5FCBCD97719CB925049C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4C418D5E5DDBE9A638DF5FCBCD97719CB925049C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4C418D5E5DDBE9A638DF5FCBCD97719CB925049C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___keys_7)); }
	inline KeyCollection_t222A2A2A227AA04D875F92FF286ED9B7BFE610D1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t222A2A2A227AA04D875F92FF286ED9B7BFE610D1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t222A2A2A227AA04D875F92FF286ED9B7BFE610D1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ___values_8)); }
	inline ValueCollection_t51897762541CBB71F34AD5387A825932750A674F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t51897762541CBB71F34AD5387A825932750A674F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t51897762541CBB71F34AD5387A825932750A674F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>
struct  U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::c
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___c_0;
	// System.Reflection.MethodBase Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1, ___c_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>
struct  U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384  : public RuntimeObject
{
public:
	// System.Type Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1::type
	Type_t * ___type_0;
	// System.Reflection.ConstructorInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1::constructorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___constructorInfo_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_constructorInfo_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384, ___constructorInfo_1)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_constructorInfo_1() const { return ___constructorInfo_1; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_constructorInfo_1() { return &___constructorInfo_1; }
	inline void set_constructorInfo_1(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___constructorInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorInfo_1), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>
struct  U3CU3Ec__DisplayClass6_0_1_tC607F8CE914DC616495517869B38C8D10D496EC2  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_1_tC607F8CE914DC616495517869B38C8D10D496EC2, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>
struct  U3CU3Ec__DisplayClass7_0_1_tDA4A777753C292F8E7229BECCB201D492018125E  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_1_tDA4A777753C292F8E7229BECCB201D492018125E, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>
struct  U3CU3Ec__DisplayClass8_0_1_tCE80B60452706E42B3CB1FFE37C0AA9AFA966CDA  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_1_tCE80B60452706E42B3CB1FFE37C0AA9AFA966CDA, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>
struct  U3CU3Ec__DisplayClass9_0_1_tD9FD9DC48459CC7232A45D9773871845C774B5DB  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_1_tD9FD9DC48459CC7232A45D9773871845C774B5DB, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1<System.Object>
struct  U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4  : public RuntimeObject
{
public:
	// System.Func`2<TSource,System.String> Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1::valueSelector
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ___valueSelector_0;
	// System.String Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1::testValue
	String_t* ___testValue_1;

public:
	inline static int32_t get_offset_of_valueSelector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4, ___valueSelector_0)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get_valueSelector_0() const { return ___valueSelector_0; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of_valueSelector_0() { return &___valueSelector_0; }
	inline void set_valueSelector_0(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		___valueSelector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueSelector_0), (void*)value);
	}

	inline static int32_t get_offset_of_testValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4, ___testValue_1)); }
	inline String_t* get_testValue_1() const { return ___testValue_1; }
	inline String_t** get_address_of_testValue_1() { return &___testValue_1; }
	inline void set_testValue_1(String_t* value)
	{
		___testValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValue_1), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct  ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92  : public RuntimeObject
{
public:
	// System.Object Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ____store_1;
	// System.Func`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92, ____store_1)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92, ____creator_2)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get__creator_2() const { return ____creator_2; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E  : public RuntimeObject
{
public:
	// System.Object Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * ____store_1;
	// System.Func`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E, ____store_1)); }
	inline Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * get__store_1() const { return ____store_1; }
	inline Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E, ____creator_2)); }
	inline Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * get__creator_2() const { return ____creator_2; }
	inline Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA  : public RuntimeObject
{
public:
	// System.Object Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * ____store_1;
	// System.Func`2<TKey,TValue> Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA, ____store_1)); }
	inline Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA, ____creator_2)); }
	inline Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * get__creator_2() const { return ____creator_2; }
	inline Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Util_<>c__47`1<System.Object>
struct  U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF_StaticFields
{
public:
	// Valve.VR.InteractionSystem.Util_<>c__47`1<T> Valve.VR.InteractionSystem.Util_<>c__47`1::<>9
	U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * ___U3CU3E9_0;
	// System.Func`2<T,T> Valve.VR.InteractionSystem.Util_<>c__47`1::<>9__47_0
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___U3CU3E9__47_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF_StaticFields, ___U3CU3E9__47_0_1)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get_U3CU3E9__47_0_1() const { return ___U3CU3E9__47_0_1; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of_U3CU3E9__47_0_1() { return &___U3CU3E9__47_0_1; }
	inline void set_U3CU3E9__47_0_1(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		___U3CU3E9__47_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Action
struct  SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_Action::actionPath
	String_t* ___actionPath_0;
	// System.Boolean Valve.VR.SteamVR_Action::needsReinit
	bool ___needsReinit_1;
	// System.String Valve.VR.SteamVR_Action::cachedShortName
	String_t* ___cachedShortName_3;

public:
	inline static int32_t get_offset_of_actionPath_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___actionPath_0)); }
	inline String_t* get_actionPath_0() const { return ___actionPath_0; }
	inline String_t** get_address_of_actionPath_0() { return &___actionPath_0; }
	inline void set_actionPath_0(String_t* value)
	{
		___actionPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_needsReinit_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___needsReinit_1)); }
	inline bool get_needsReinit_1() const { return ___needsReinit_1; }
	inline bool* get_address_of_needsReinit_1() { return &___needsReinit_1; }
	inline void set_needsReinit_1(bool value)
	{
		___needsReinit_1 = value;
	}

	inline static int32_t get_offset_of_cachedShortName_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___cachedShortName_3)); }
	inline String_t* get_cachedShortName_3() const { return ___cachedShortName_3; }
	inline String_t** get_address_of_cachedShortName_3() { return &___cachedShortName_3; }
	inline void set_cachedShortName_3(String_t* value)
	{
		___cachedShortName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedShortName_3), (void*)value);
	}
};

struct SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_StaticFields
{
public:
	// System.Boolean Valve.VR.SteamVR_Action::startUpdatingSourceOnAccess
	bool ___startUpdatingSourceOnAccess_2;

public:
	inline static int32_t get_offset_of_startUpdatingSourceOnAccess_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_StaticFields, ___startUpdatingSourceOnAccess_2)); }
	inline bool get_startUpdatingSourceOnAccess_2() const { return ___startUpdatingSourceOnAccess_2; }
	inline bool* get_address_of_startUpdatingSourceOnAccess_2() { return &___startUpdatingSourceOnAccess_2; }
	inline void set_startUpdatingSourceOnAccess_2(bool value)
	{
		___startUpdatingSourceOnAccess_2 = value;
	}
};


// Valve.VR.SteamVR_ActionSet
struct  SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_ActionSet::actionSetPath
	String_t* ___actionSetPath_0;
	// Valve.VR.SteamVR_ActionSet_Data Valve.VR.SteamVR_ActionSet::setData
	SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * ___setData_1;
	// System.Boolean Valve.VR.SteamVR_ActionSet::initialized
	bool ___initialized_2;

public:
	inline static int32_t get_offset_of_actionSetPath_0() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___actionSetPath_0)); }
	inline String_t* get_actionSetPath_0() const { return ___actionSetPath_0; }
	inline String_t** get_address_of_actionSetPath_0() { return &___actionSetPath_0; }
	inline void set_actionSetPath_0(String_t* value)
	{
		___actionSetPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_setData_1() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___setData_1)); }
	inline SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * get_setData_1() const { return ___setData_1; }
	inline SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 ** get_address_of_setData_1() { return &___setData_1; }
	inline void set_setData_1(SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * value)
	{
		___setData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setData_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_2() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___initialized_2)); }
	inline bool get_initialized_2() const { return ___initialized_2; }
	inline bool* get_address_of_initialized_2() { return &___initialized_2; }
	inline void set_initialized_2(bool value)
	{
		___initialized_2 = value;
	}
};


// Valve.VR.SteamVR_Events_Action
struct  Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5  : public RuntimeObject
{
public:

public:
};


// Valve.VR.SteamVR_Input
struct  SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF  : public RuntimeObject
{
public:

public:
};

struct SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields
{
public:
	// System.Boolean Valve.VR.SteamVR_Input::fileInitialized
	bool ___fileInitialized_2;
	// System.Boolean Valve.VR.SteamVR_Input::initialized
	bool ___initialized_3;
	// System.Boolean Valve.VR.SteamVR_Input::preInitialized
	bool ___preInitialized_4;
	// Valve.VR.SteamVR_Input_ActionFile Valve.VR.SteamVR_Input::actionFile
	SteamVR_Input_ActionFile_tC425AB8156D447975E61DFF0C51888DE25BA09B1 * ___actionFile_5;
	// System.String Valve.VR.SteamVR_Input::actionFileHash
	String_t* ___actionFileHash_6;
	// System.Action Valve.VR.SteamVR_Input::onNonVisualActionsUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onNonVisualActionsUpdated_7;
	// Valve.VR.SteamVR_Input_PosesUpdatedHandler Valve.VR.SteamVR_Input::onPosesUpdated
	PosesUpdatedHandler_tFA469337ADC152B8E747DB034400AE77D45238CA * ___onPosesUpdated_8;
	// Valve.VR.SteamVR_Input_SkeletonsUpdatedHandler Valve.VR.SteamVR_Input::onSkeletonsUpdated
	SkeletonsUpdatedHandler_t87EC02E2FFD91D305E5C4E8B64110AA2981F3DD6 * ___onSkeletonsUpdated_9;
	// System.Boolean Valve.VR.SteamVR_Input::initializing
	bool ___initializing_10;
	// System.Int32 Valve.VR.SteamVR_Input::startupFrame
	int32_t ___startupFrame_11;
	// Valve.VR.SteamVR_ActionSet[] Valve.VR.SteamVR_Input::actionSets
	SteamVR_ActionSetU5BU5D_tC9136AFAEDB1DBB1ED428EDDD4B9B49EC82698FA* ___actionSets_12;
	// Valve.VR.SteamVR_Action[] Valve.VR.SteamVR_Input::actions
	SteamVR_ActionU5BU5D_tEC1A53652514EC91CD9B299E87348746BA59DEAB* ___actions_13;
	// Valve.VR.ISteamVR_Action_In[] Valve.VR.SteamVR_Input::actionsIn
	ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* ___actionsIn_14;
	// Valve.VR.ISteamVR_Action_Out[] Valve.VR.SteamVR_Input::actionsOut
	ISteamVR_Action_OutU5BU5D_t7A49A166FF69691341BA55E5A16540FE292A37C9* ___actionsOut_15;
	// Valve.VR.SteamVR_Action_Boolean[] Valve.VR.SteamVR_Input::actionsBoolean
	SteamVR_Action_BooleanU5BU5D_tBB030CD0CA82DB08AEB7456EC4C614EA8B7A5E34* ___actionsBoolean_16;
	// Valve.VR.SteamVR_Action_Single[] Valve.VR.SteamVR_Input::actionsSingle
	SteamVR_Action_SingleU5BU5D_t17606A7D166DFF733AFE6D853883DEBF3D7A34A2* ___actionsSingle_17;
	// Valve.VR.SteamVR_Action_Vector2[] Valve.VR.SteamVR_Input::actionsVector2
	SteamVR_Action_Vector2U5BU5D_t59620E37FA97264ED8B42C392F939C8ECCC6AC1B* ___actionsVector2_18;
	// Valve.VR.SteamVR_Action_Vector3[] Valve.VR.SteamVR_Input::actionsVector3
	SteamVR_Action_Vector3U5BU5D_tCB49AE6A470D2C2A5C963F6B94A56EFE0E0B9E9D* ___actionsVector3_19;
	// Valve.VR.SteamVR_Action_Pose[] Valve.VR.SteamVR_Input::actionsPose
	SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968* ___actionsPose_20;
	// Valve.VR.SteamVR_Action_Skeleton[] Valve.VR.SteamVR_Input::actionsSkeleton
	SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56* ___actionsSkeleton_21;
	// Valve.VR.SteamVR_Action_Vibration[] Valve.VR.SteamVR_Input::actionsVibration
	SteamVR_Action_VibrationU5BU5D_tD7B0D0DE94599F6D17C88113C883DC686AE1BD12* ___actionsVibration_22;
	// Valve.VR.ISteamVR_Action_In[] Valve.VR.SteamVR_Input::actionsNonPoseNonSkeletonIn
	ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* ___actionsNonPoseNonSkeletonIn_23;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_ActionSet> Valve.VR.SteamVR_Input::actionSetsByPath
	Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * ___actionSetsByPath_24;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_ActionSet> Valve.VR.SteamVR_Input::actionSetsByPathLowered
	Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * ___actionSetsByPathLowered_25;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_Action> Valve.VR.SteamVR_Input::actionsByPath
	Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * ___actionsByPath_26;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_Action> Valve.VR.SteamVR_Input::actionsByPathLowered
	Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * ___actionsByPathLowered_27;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_ActionSet> Valve.VR.SteamVR_Input::actionSetsByPathCache
	Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * ___actionSetsByPathCache_28;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_Action> Valve.VR.SteamVR_Input::actionsByPathCache
	Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * ___actionsByPathCache_29;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_Action> Valve.VR.SteamVR_Input::actionsByNameCache
	Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * ___actionsByNameCache_30;
	// System.Collections.Generic.Dictionary`2<System.String,Valve.VR.SteamVR_ActionSet> Valve.VR.SteamVR_Input::actionSetsByNameCache
	Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * ___actionSetsByNameCache_31;
	// System.UInt32 Valve.VR.SteamVR_Input::sizeVRActiveActionSet_t
	uint32_t ___sizeVRActiveActionSet_t_32;
	// Valve.VR.VRActiveActionSet_t[] Valve.VR.SteamVR_Input::setCache
	VRActiveActionSet_tU5BU5D_t2D5643D6F85DAE8CC600EF80D45C90EFC71ADBD5* ___setCache_33;

public:
	inline static int32_t get_offset_of_fileInitialized_2() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___fileInitialized_2)); }
	inline bool get_fileInitialized_2() const { return ___fileInitialized_2; }
	inline bool* get_address_of_fileInitialized_2() { return &___fileInitialized_2; }
	inline void set_fileInitialized_2(bool value)
	{
		___fileInitialized_2 = value;
	}

	inline static int32_t get_offset_of_initialized_3() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___initialized_3)); }
	inline bool get_initialized_3() const { return ___initialized_3; }
	inline bool* get_address_of_initialized_3() { return &___initialized_3; }
	inline void set_initialized_3(bool value)
	{
		___initialized_3 = value;
	}

	inline static int32_t get_offset_of_preInitialized_4() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___preInitialized_4)); }
	inline bool get_preInitialized_4() const { return ___preInitialized_4; }
	inline bool* get_address_of_preInitialized_4() { return &___preInitialized_4; }
	inline void set_preInitialized_4(bool value)
	{
		___preInitialized_4 = value;
	}

	inline static int32_t get_offset_of_actionFile_5() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionFile_5)); }
	inline SteamVR_Input_ActionFile_tC425AB8156D447975E61DFF0C51888DE25BA09B1 * get_actionFile_5() const { return ___actionFile_5; }
	inline SteamVR_Input_ActionFile_tC425AB8156D447975E61DFF0C51888DE25BA09B1 ** get_address_of_actionFile_5() { return &___actionFile_5; }
	inline void set_actionFile_5(SteamVR_Input_ActionFile_tC425AB8156D447975E61DFF0C51888DE25BA09B1 * value)
	{
		___actionFile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionFile_5), (void*)value);
	}

	inline static int32_t get_offset_of_actionFileHash_6() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionFileHash_6)); }
	inline String_t* get_actionFileHash_6() const { return ___actionFileHash_6; }
	inline String_t** get_address_of_actionFileHash_6() { return &___actionFileHash_6; }
	inline void set_actionFileHash_6(String_t* value)
	{
		___actionFileHash_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionFileHash_6), (void*)value);
	}

	inline static int32_t get_offset_of_onNonVisualActionsUpdated_7() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___onNonVisualActionsUpdated_7)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onNonVisualActionsUpdated_7() const { return ___onNonVisualActionsUpdated_7; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onNonVisualActionsUpdated_7() { return &___onNonVisualActionsUpdated_7; }
	inline void set_onNonVisualActionsUpdated_7(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onNonVisualActionsUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNonVisualActionsUpdated_7), (void*)value);
	}

	inline static int32_t get_offset_of_onPosesUpdated_8() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___onPosesUpdated_8)); }
	inline PosesUpdatedHandler_tFA469337ADC152B8E747DB034400AE77D45238CA * get_onPosesUpdated_8() const { return ___onPosesUpdated_8; }
	inline PosesUpdatedHandler_tFA469337ADC152B8E747DB034400AE77D45238CA ** get_address_of_onPosesUpdated_8() { return &___onPosesUpdated_8; }
	inline void set_onPosesUpdated_8(PosesUpdatedHandler_tFA469337ADC152B8E747DB034400AE77D45238CA * value)
	{
		___onPosesUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPosesUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_onSkeletonsUpdated_9() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___onSkeletonsUpdated_9)); }
	inline SkeletonsUpdatedHandler_t87EC02E2FFD91D305E5C4E8B64110AA2981F3DD6 * get_onSkeletonsUpdated_9() const { return ___onSkeletonsUpdated_9; }
	inline SkeletonsUpdatedHandler_t87EC02E2FFD91D305E5C4E8B64110AA2981F3DD6 ** get_address_of_onSkeletonsUpdated_9() { return &___onSkeletonsUpdated_9; }
	inline void set_onSkeletonsUpdated_9(SkeletonsUpdatedHandler_t87EC02E2FFD91D305E5C4E8B64110AA2981F3DD6 * value)
	{
		___onSkeletonsUpdated_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSkeletonsUpdated_9), (void*)value);
	}

	inline static int32_t get_offset_of_initializing_10() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___initializing_10)); }
	inline bool get_initializing_10() const { return ___initializing_10; }
	inline bool* get_address_of_initializing_10() { return &___initializing_10; }
	inline void set_initializing_10(bool value)
	{
		___initializing_10 = value;
	}

	inline static int32_t get_offset_of_startupFrame_11() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___startupFrame_11)); }
	inline int32_t get_startupFrame_11() const { return ___startupFrame_11; }
	inline int32_t* get_address_of_startupFrame_11() { return &___startupFrame_11; }
	inline void set_startupFrame_11(int32_t value)
	{
		___startupFrame_11 = value;
	}

	inline static int32_t get_offset_of_actionSets_12() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionSets_12)); }
	inline SteamVR_ActionSetU5BU5D_tC9136AFAEDB1DBB1ED428EDDD4B9B49EC82698FA* get_actionSets_12() const { return ___actionSets_12; }
	inline SteamVR_ActionSetU5BU5D_tC9136AFAEDB1DBB1ED428EDDD4B9B49EC82698FA** get_address_of_actionSets_12() { return &___actionSets_12; }
	inline void set_actionSets_12(SteamVR_ActionSetU5BU5D_tC9136AFAEDB1DBB1ED428EDDD4B9B49EC82698FA* value)
	{
		___actionSets_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSets_12), (void*)value);
	}

	inline static int32_t get_offset_of_actions_13() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actions_13)); }
	inline SteamVR_ActionU5BU5D_tEC1A53652514EC91CD9B299E87348746BA59DEAB* get_actions_13() const { return ___actions_13; }
	inline SteamVR_ActionU5BU5D_tEC1A53652514EC91CD9B299E87348746BA59DEAB** get_address_of_actions_13() { return &___actions_13; }
	inline void set_actions_13(SteamVR_ActionU5BU5D_tEC1A53652514EC91CD9B299E87348746BA59DEAB* value)
	{
		___actions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actions_13), (void*)value);
	}

	inline static int32_t get_offset_of_actionsIn_14() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsIn_14)); }
	inline ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* get_actionsIn_14() const { return ___actionsIn_14; }
	inline ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B** get_address_of_actionsIn_14() { return &___actionsIn_14; }
	inline void set_actionsIn_14(ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* value)
	{
		___actionsIn_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsIn_14), (void*)value);
	}

	inline static int32_t get_offset_of_actionsOut_15() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsOut_15)); }
	inline ISteamVR_Action_OutU5BU5D_t7A49A166FF69691341BA55E5A16540FE292A37C9* get_actionsOut_15() const { return ___actionsOut_15; }
	inline ISteamVR_Action_OutU5BU5D_t7A49A166FF69691341BA55E5A16540FE292A37C9** get_address_of_actionsOut_15() { return &___actionsOut_15; }
	inline void set_actionsOut_15(ISteamVR_Action_OutU5BU5D_t7A49A166FF69691341BA55E5A16540FE292A37C9* value)
	{
		___actionsOut_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsOut_15), (void*)value);
	}

	inline static int32_t get_offset_of_actionsBoolean_16() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsBoolean_16)); }
	inline SteamVR_Action_BooleanU5BU5D_tBB030CD0CA82DB08AEB7456EC4C614EA8B7A5E34* get_actionsBoolean_16() const { return ___actionsBoolean_16; }
	inline SteamVR_Action_BooleanU5BU5D_tBB030CD0CA82DB08AEB7456EC4C614EA8B7A5E34** get_address_of_actionsBoolean_16() { return &___actionsBoolean_16; }
	inline void set_actionsBoolean_16(SteamVR_Action_BooleanU5BU5D_tBB030CD0CA82DB08AEB7456EC4C614EA8B7A5E34* value)
	{
		___actionsBoolean_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsBoolean_16), (void*)value);
	}

	inline static int32_t get_offset_of_actionsSingle_17() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsSingle_17)); }
	inline SteamVR_Action_SingleU5BU5D_t17606A7D166DFF733AFE6D853883DEBF3D7A34A2* get_actionsSingle_17() const { return ___actionsSingle_17; }
	inline SteamVR_Action_SingleU5BU5D_t17606A7D166DFF733AFE6D853883DEBF3D7A34A2** get_address_of_actionsSingle_17() { return &___actionsSingle_17; }
	inline void set_actionsSingle_17(SteamVR_Action_SingleU5BU5D_t17606A7D166DFF733AFE6D853883DEBF3D7A34A2* value)
	{
		___actionsSingle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsSingle_17), (void*)value);
	}

	inline static int32_t get_offset_of_actionsVector2_18() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsVector2_18)); }
	inline SteamVR_Action_Vector2U5BU5D_t59620E37FA97264ED8B42C392F939C8ECCC6AC1B* get_actionsVector2_18() const { return ___actionsVector2_18; }
	inline SteamVR_Action_Vector2U5BU5D_t59620E37FA97264ED8B42C392F939C8ECCC6AC1B** get_address_of_actionsVector2_18() { return &___actionsVector2_18; }
	inline void set_actionsVector2_18(SteamVR_Action_Vector2U5BU5D_t59620E37FA97264ED8B42C392F939C8ECCC6AC1B* value)
	{
		___actionsVector2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsVector2_18), (void*)value);
	}

	inline static int32_t get_offset_of_actionsVector3_19() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsVector3_19)); }
	inline SteamVR_Action_Vector3U5BU5D_tCB49AE6A470D2C2A5C963F6B94A56EFE0E0B9E9D* get_actionsVector3_19() const { return ___actionsVector3_19; }
	inline SteamVR_Action_Vector3U5BU5D_tCB49AE6A470D2C2A5C963F6B94A56EFE0E0B9E9D** get_address_of_actionsVector3_19() { return &___actionsVector3_19; }
	inline void set_actionsVector3_19(SteamVR_Action_Vector3U5BU5D_tCB49AE6A470D2C2A5C963F6B94A56EFE0E0B9E9D* value)
	{
		___actionsVector3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsVector3_19), (void*)value);
	}

	inline static int32_t get_offset_of_actionsPose_20() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsPose_20)); }
	inline SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968* get_actionsPose_20() const { return ___actionsPose_20; }
	inline SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968** get_address_of_actionsPose_20() { return &___actionsPose_20; }
	inline void set_actionsPose_20(SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968* value)
	{
		___actionsPose_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsPose_20), (void*)value);
	}

	inline static int32_t get_offset_of_actionsSkeleton_21() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsSkeleton_21)); }
	inline SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56* get_actionsSkeleton_21() const { return ___actionsSkeleton_21; }
	inline SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56** get_address_of_actionsSkeleton_21() { return &___actionsSkeleton_21; }
	inline void set_actionsSkeleton_21(SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56* value)
	{
		___actionsSkeleton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsSkeleton_21), (void*)value);
	}

	inline static int32_t get_offset_of_actionsVibration_22() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsVibration_22)); }
	inline SteamVR_Action_VibrationU5BU5D_tD7B0D0DE94599F6D17C88113C883DC686AE1BD12* get_actionsVibration_22() const { return ___actionsVibration_22; }
	inline SteamVR_Action_VibrationU5BU5D_tD7B0D0DE94599F6D17C88113C883DC686AE1BD12** get_address_of_actionsVibration_22() { return &___actionsVibration_22; }
	inline void set_actionsVibration_22(SteamVR_Action_VibrationU5BU5D_tD7B0D0DE94599F6D17C88113C883DC686AE1BD12* value)
	{
		___actionsVibration_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsVibration_22), (void*)value);
	}

	inline static int32_t get_offset_of_actionsNonPoseNonSkeletonIn_23() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsNonPoseNonSkeletonIn_23)); }
	inline ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* get_actionsNonPoseNonSkeletonIn_23() const { return ___actionsNonPoseNonSkeletonIn_23; }
	inline ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B** get_address_of_actionsNonPoseNonSkeletonIn_23() { return &___actionsNonPoseNonSkeletonIn_23; }
	inline void set_actionsNonPoseNonSkeletonIn_23(ISteamVR_Action_InU5BU5D_t885FD4873503D2E67016E079D86F2143691C9A8B* value)
	{
		___actionsNonPoseNonSkeletonIn_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsNonPoseNonSkeletonIn_23), (void*)value);
	}

	inline static int32_t get_offset_of_actionSetsByPath_24() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionSetsByPath_24)); }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * get_actionSetsByPath_24() const { return ___actionSetsByPath_24; }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D ** get_address_of_actionSetsByPath_24() { return &___actionSetsByPath_24; }
	inline void set_actionSetsByPath_24(Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * value)
	{
		___actionSetsByPath_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetsByPath_24), (void*)value);
	}

	inline static int32_t get_offset_of_actionSetsByPathLowered_25() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionSetsByPathLowered_25)); }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * get_actionSetsByPathLowered_25() const { return ___actionSetsByPathLowered_25; }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D ** get_address_of_actionSetsByPathLowered_25() { return &___actionSetsByPathLowered_25; }
	inline void set_actionSetsByPathLowered_25(Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * value)
	{
		___actionSetsByPathLowered_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetsByPathLowered_25), (void*)value);
	}

	inline static int32_t get_offset_of_actionsByPath_26() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsByPath_26)); }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * get_actionsByPath_26() const { return ___actionsByPath_26; }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 ** get_address_of_actionsByPath_26() { return &___actionsByPath_26; }
	inline void set_actionsByPath_26(Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * value)
	{
		___actionsByPath_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsByPath_26), (void*)value);
	}

	inline static int32_t get_offset_of_actionsByPathLowered_27() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsByPathLowered_27)); }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * get_actionsByPathLowered_27() const { return ___actionsByPathLowered_27; }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 ** get_address_of_actionsByPathLowered_27() { return &___actionsByPathLowered_27; }
	inline void set_actionsByPathLowered_27(Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * value)
	{
		___actionsByPathLowered_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsByPathLowered_27), (void*)value);
	}

	inline static int32_t get_offset_of_actionSetsByPathCache_28() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionSetsByPathCache_28)); }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * get_actionSetsByPathCache_28() const { return ___actionSetsByPathCache_28; }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D ** get_address_of_actionSetsByPathCache_28() { return &___actionSetsByPathCache_28; }
	inline void set_actionSetsByPathCache_28(Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * value)
	{
		___actionSetsByPathCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetsByPathCache_28), (void*)value);
	}

	inline static int32_t get_offset_of_actionsByPathCache_29() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsByPathCache_29)); }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * get_actionsByPathCache_29() const { return ___actionsByPathCache_29; }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 ** get_address_of_actionsByPathCache_29() { return &___actionsByPathCache_29; }
	inline void set_actionsByPathCache_29(Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * value)
	{
		___actionsByPathCache_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsByPathCache_29), (void*)value);
	}

	inline static int32_t get_offset_of_actionsByNameCache_30() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionsByNameCache_30)); }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * get_actionsByNameCache_30() const { return ___actionsByNameCache_30; }
	inline Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 ** get_address_of_actionsByNameCache_30() { return &___actionsByNameCache_30; }
	inline void set_actionsByNameCache_30(Dictionary_2_tEA505316CA2FE10B186C980E36CFDA57F4EA7245 * value)
	{
		___actionsByNameCache_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionsByNameCache_30), (void*)value);
	}

	inline static int32_t get_offset_of_actionSetsByNameCache_31() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___actionSetsByNameCache_31)); }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * get_actionSetsByNameCache_31() const { return ___actionSetsByNameCache_31; }
	inline Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D ** get_address_of_actionSetsByNameCache_31() { return &___actionSetsByNameCache_31; }
	inline void set_actionSetsByNameCache_31(Dictionary_2_t1BA72EAB6CBC0542D28379D19A5333D3EDD4559D * value)
	{
		___actionSetsByNameCache_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetsByNameCache_31), (void*)value);
	}

	inline static int32_t get_offset_of_sizeVRActiveActionSet_t_32() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___sizeVRActiveActionSet_t_32)); }
	inline uint32_t get_sizeVRActiveActionSet_t_32() const { return ___sizeVRActiveActionSet_t_32; }
	inline uint32_t* get_address_of_sizeVRActiveActionSet_t_32() { return &___sizeVRActiveActionSet_t_32; }
	inline void set_sizeVRActiveActionSet_t_32(uint32_t value)
	{
		___sizeVRActiveActionSet_t_32 = value;
	}

	inline static int32_t get_offset_of_setCache_33() { return static_cast<int32_t>(offsetof(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields, ___setCache_33)); }
	inline VRActiveActionSet_tU5BU5D_t2D5643D6F85DAE8CC600EF80D45C90EFC71ADBD5* get_setCache_33() const { return ___setCache_33; }
	inline VRActiveActionSet_tU5BU5D_t2D5643D6F85DAE8CC600EF80D45C90EFC71ADBD5** get_address_of_setCache_33() { return &___setCache_33; }
	inline void set_setCache_33(VRActiveActionSet_tU5BU5D_t2D5643D6F85DAE8CC600EF80D45C90EFC71ADBD5* value)
	{
		___setCache_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setCache_33), (void*)value);
	}
};


// Valve.VR.SteamVR_Input_Source
struct  SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0  : public RuntimeObject
{
public:

public:
};

struct SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields
{
public:
	// System.Int32 Valve.VR.SteamVR_Input_Source::numSources
	int32_t ___numSources_0;
	// System.UInt64[] Valve.VR.SteamVR_Input_Source::inputSourceHandlesBySource
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___inputSourceHandlesBySource_1;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Valve.VR.SteamVR_Input_Sources> Valve.VR.SteamVR_Input_Source::inputSourceSourcesByHandle
	Dictionary_2_tAEA5E8A9E7453E81FE8219225916E4BC29B908B4 * ___inputSourceSourcesByHandle_2;
	// System.Type Valve.VR.SteamVR_Input_Source::enumType
	Type_t * ___enumType_3;
	// System.Type Valve.VR.SteamVR_Input_Source::descriptionType
	Type_t * ___descriptionType_4;
	// Valve.VR.SteamVR_Input_Sources[] Valve.VR.SteamVR_Input_Source::allSources
	SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* ___allSources_5;

public:
	inline static int32_t get_offset_of_numSources_0() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___numSources_0)); }
	inline int32_t get_numSources_0() const { return ___numSources_0; }
	inline int32_t* get_address_of_numSources_0() { return &___numSources_0; }
	inline void set_numSources_0(int32_t value)
	{
		___numSources_0 = value;
	}

	inline static int32_t get_offset_of_inputSourceHandlesBySource_1() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___inputSourceHandlesBySource_1)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get_inputSourceHandlesBySource_1() const { return ___inputSourceHandlesBySource_1; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of_inputSourceHandlesBySource_1() { return &___inputSourceHandlesBySource_1; }
	inline void set_inputSourceHandlesBySource_1(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		___inputSourceHandlesBySource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceHandlesBySource_1), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceSourcesByHandle_2() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___inputSourceSourcesByHandle_2)); }
	inline Dictionary_2_tAEA5E8A9E7453E81FE8219225916E4BC29B908B4 * get_inputSourceSourcesByHandle_2() const { return ___inputSourceSourcesByHandle_2; }
	inline Dictionary_2_tAEA5E8A9E7453E81FE8219225916E4BC29B908B4 ** get_address_of_inputSourceSourcesByHandle_2() { return &___inputSourceSourcesByHandle_2; }
	inline void set_inputSourceSourcesByHandle_2(Dictionary_2_tAEA5E8A9E7453E81FE8219225916E4BC29B908B4 * value)
	{
		___inputSourceSourcesByHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceSourcesByHandle_2), (void*)value);
	}

	inline static int32_t get_offset_of_enumType_3() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___enumType_3)); }
	inline Type_t * get_enumType_3() const { return ___enumType_3; }
	inline Type_t ** get_address_of_enumType_3() { return &___enumType_3; }
	inline void set_enumType_3(Type_t * value)
	{
		___enumType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumType_3), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionType_4() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___descriptionType_4)); }
	inline Type_t * get_descriptionType_4() const { return ___descriptionType_4; }
	inline Type_t ** get_address_of_descriptionType_4() { return &___descriptionType_4; }
	inline void set_descriptionType_4(Type_t * value)
	{
		___descriptionType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionType_4), (void*)value);
	}

	inline static int32_t get_offset_of_allSources_5() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___allSources_5)); }
	inline SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* get_allSources_5() const { return ___allSources_5; }
	inline SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A** get_address_of_allSources_5() { return &___allSources_5; }
	inline void set_allSources_5(SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* value)
	{
		___allSources_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allSources_5), (void*)value);
	}
};


// Valve.VR.SteamVR_RingBuffer`1<System.Object>
struct  SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74  : public RuntimeObject
{
public:
	// T[] Valve.VR.SteamVR_RingBuffer`1::buffer
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___buffer_0;
	// System.Int32 Valve.VR.SteamVR_RingBuffer`1::currentIndex
	int32_t ___currentIndex_1;
	// T Valve.VR.SteamVR_RingBuffer`1::lastElement
	RuntimeObject * ___lastElement_2;
	// System.Boolean Valve.VR.SteamVR_RingBuffer`1::cleared
	bool ___cleared_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74, ___buffer_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_buffer_0() const { return ___buffer_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastElement_2() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74, ___lastElement_2)); }
	inline RuntimeObject * get_lastElement_2() const { return ___lastElement_2; }
	inline RuntimeObject ** get_address_of_lastElement_2() { return &___lastElement_2; }
	inline void set_lastElement_2(RuntimeObject * value)
	{
		___lastElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_cleared_3() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74, ___cleared_3)); }
	inline bool get_cleared_3() const { return ___cleared_3; }
	inline bool* get_address_of_cleared_3() { return &___cleared_3; }
	inline void set_cleared_3(bool value)
	{
		___cleared_3 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Valve.VR.VREvent_t>
struct  UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Int32,System.Boolean>
struct  UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Boolean>
struct  UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<UnityEngine.Color,System.Single,System.Boolean>
struct  UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey
struct  TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 
{
public:
	// System.String Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};

// Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey
struct  TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E 
{
public:
	// System.Type Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialType_0), (void*)value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Valve.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};

// Valve.VR.HmdMatrix34_t
struct  HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669 
{
public:
	// System.Single Valve.VR.HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix34_t::m11
	float ___m11_11;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}
};


// Valve.VR.HmdVector3_t
struct  HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A 
{
public:
	// System.Single Valve.VR.HmdVector3_t::v0
	float ___v0_0;
	// System.Single Valve.VR.HmdVector3_t::v1
	float ___v1_1;
	// System.Single Valve.VR.HmdVector3_t::v2
	float ___v2_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A, ___v0_0)); }
	inline float get_v0_0() const { return ___v0_0; }
	inline float* get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(float value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A, ___v1_1)); }
	inline float get_v1_1() const { return ___v1_1; }
	inline float* get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(float value)
	{
		___v1_1 = value;
	}

	inline static int32_t get_offset_of_v2_2() { return static_cast<int32_t>(offsetof(HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A, ___v2_2)); }
	inline float get_v2_2() const { return ___v2_2; }
	inline float* get_address_of_v2_2() { return &___v2_2; }
	inline void set_v2_2(float value)
	{
		___v2_2 = value;
	}
};


// Valve.VR.InputOriginInfo_t
struct  InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A 
{
public:
	// System.UInt64 Valve.VR.InputOriginInfo_t::devicePath
	uint64_t ___devicePath_0;
	// System.UInt32 Valve.VR.InputOriginInfo_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName0
	uint8_t ___rchRenderModelComponentName0_2;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName1
	uint8_t ___rchRenderModelComponentName1_3;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName2
	uint8_t ___rchRenderModelComponentName2_4;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName3
	uint8_t ___rchRenderModelComponentName3_5;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName4
	uint8_t ___rchRenderModelComponentName4_6;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName5
	uint8_t ___rchRenderModelComponentName5_7;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName6
	uint8_t ___rchRenderModelComponentName6_8;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName7
	uint8_t ___rchRenderModelComponentName7_9;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName8
	uint8_t ___rchRenderModelComponentName8_10;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName9
	uint8_t ___rchRenderModelComponentName9_11;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName10
	uint8_t ___rchRenderModelComponentName10_12;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName11
	uint8_t ___rchRenderModelComponentName11_13;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName12
	uint8_t ___rchRenderModelComponentName12_14;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName13
	uint8_t ___rchRenderModelComponentName13_15;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName14
	uint8_t ___rchRenderModelComponentName14_16;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName15
	uint8_t ___rchRenderModelComponentName15_17;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName16
	uint8_t ___rchRenderModelComponentName16_18;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName17
	uint8_t ___rchRenderModelComponentName17_19;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName18
	uint8_t ___rchRenderModelComponentName18_20;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName19
	uint8_t ___rchRenderModelComponentName19_21;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName20
	uint8_t ___rchRenderModelComponentName20_22;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName21
	uint8_t ___rchRenderModelComponentName21_23;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName22
	uint8_t ___rchRenderModelComponentName22_24;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName23
	uint8_t ___rchRenderModelComponentName23_25;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName24
	uint8_t ___rchRenderModelComponentName24_26;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName25
	uint8_t ___rchRenderModelComponentName25_27;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName26
	uint8_t ___rchRenderModelComponentName26_28;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName27
	uint8_t ___rchRenderModelComponentName27_29;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName28
	uint8_t ___rchRenderModelComponentName28_30;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName29
	uint8_t ___rchRenderModelComponentName29_31;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName30
	uint8_t ___rchRenderModelComponentName30_32;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName31
	uint8_t ___rchRenderModelComponentName31_33;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName32
	uint8_t ___rchRenderModelComponentName32_34;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName33
	uint8_t ___rchRenderModelComponentName33_35;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName34
	uint8_t ___rchRenderModelComponentName34_36;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName35
	uint8_t ___rchRenderModelComponentName35_37;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName36
	uint8_t ___rchRenderModelComponentName36_38;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName37
	uint8_t ___rchRenderModelComponentName37_39;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName38
	uint8_t ___rchRenderModelComponentName38_40;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName39
	uint8_t ___rchRenderModelComponentName39_41;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName40
	uint8_t ___rchRenderModelComponentName40_42;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName41
	uint8_t ___rchRenderModelComponentName41_43;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName42
	uint8_t ___rchRenderModelComponentName42_44;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName43
	uint8_t ___rchRenderModelComponentName43_45;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName44
	uint8_t ___rchRenderModelComponentName44_46;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName45
	uint8_t ___rchRenderModelComponentName45_47;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName46
	uint8_t ___rchRenderModelComponentName46_48;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName47
	uint8_t ___rchRenderModelComponentName47_49;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName48
	uint8_t ___rchRenderModelComponentName48_50;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName49
	uint8_t ___rchRenderModelComponentName49_51;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName50
	uint8_t ___rchRenderModelComponentName50_52;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName51
	uint8_t ___rchRenderModelComponentName51_53;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName52
	uint8_t ___rchRenderModelComponentName52_54;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName53
	uint8_t ___rchRenderModelComponentName53_55;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName54
	uint8_t ___rchRenderModelComponentName54_56;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName55
	uint8_t ___rchRenderModelComponentName55_57;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName56
	uint8_t ___rchRenderModelComponentName56_58;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName57
	uint8_t ___rchRenderModelComponentName57_59;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName58
	uint8_t ___rchRenderModelComponentName58_60;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName59
	uint8_t ___rchRenderModelComponentName59_61;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName60
	uint8_t ___rchRenderModelComponentName60_62;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName61
	uint8_t ___rchRenderModelComponentName61_63;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName62
	uint8_t ___rchRenderModelComponentName62_64;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName63
	uint8_t ___rchRenderModelComponentName63_65;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName64
	uint8_t ___rchRenderModelComponentName64_66;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName65
	uint8_t ___rchRenderModelComponentName65_67;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName66
	uint8_t ___rchRenderModelComponentName66_68;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName67
	uint8_t ___rchRenderModelComponentName67_69;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName68
	uint8_t ___rchRenderModelComponentName68_70;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName69
	uint8_t ___rchRenderModelComponentName69_71;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName70
	uint8_t ___rchRenderModelComponentName70_72;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName71
	uint8_t ___rchRenderModelComponentName71_73;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName72
	uint8_t ___rchRenderModelComponentName72_74;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName73
	uint8_t ___rchRenderModelComponentName73_75;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName74
	uint8_t ___rchRenderModelComponentName74_76;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName75
	uint8_t ___rchRenderModelComponentName75_77;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName76
	uint8_t ___rchRenderModelComponentName76_78;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName77
	uint8_t ___rchRenderModelComponentName77_79;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName78
	uint8_t ___rchRenderModelComponentName78_80;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName79
	uint8_t ___rchRenderModelComponentName79_81;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName80
	uint8_t ___rchRenderModelComponentName80_82;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName81
	uint8_t ___rchRenderModelComponentName81_83;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName82
	uint8_t ___rchRenderModelComponentName82_84;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName83
	uint8_t ___rchRenderModelComponentName83_85;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName84
	uint8_t ___rchRenderModelComponentName84_86;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName85
	uint8_t ___rchRenderModelComponentName85_87;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName86
	uint8_t ___rchRenderModelComponentName86_88;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName87
	uint8_t ___rchRenderModelComponentName87_89;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName88
	uint8_t ___rchRenderModelComponentName88_90;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName89
	uint8_t ___rchRenderModelComponentName89_91;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName90
	uint8_t ___rchRenderModelComponentName90_92;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName91
	uint8_t ___rchRenderModelComponentName91_93;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName92
	uint8_t ___rchRenderModelComponentName92_94;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName93
	uint8_t ___rchRenderModelComponentName93_95;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName94
	uint8_t ___rchRenderModelComponentName94_96;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName95
	uint8_t ___rchRenderModelComponentName95_97;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName96
	uint8_t ___rchRenderModelComponentName96_98;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName97
	uint8_t ___rchRenderModelComponentName97_99;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName98
	uint8_t ___rchRenderModelComponentName98_100;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName99
	uint8_t ___rchRenderModelComponentName99_101;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName100
	uint8_t ___rchRenderModelComponentName100_102;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName101
	uint8_t ___rchRenderModelComponentName101_103;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName102
	uint8_t ___rchRenderModelComponentName102_104;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName103
	uint8_t ___rchRenderModelComponentName103_105;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName104
	uint8_t ___rchRenderModelComponentName104_106;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName105
	uint8_t ___rchRenderModelComponentName105_107;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName106
	uint8_t ___rchRenderModelComponentName106_108;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName107
	uint8_t ___rchRenderModelComponentName107_109;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName108
	uint8_t ___rchRenderModelComponentName108_110;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName109
	uint8_t ___rchRenderModelComponentName109_111;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName110
	uint8_t ___rchRenderModelComponentName110_112;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName111
	uint8_t ___rchRenderModelComponentName111_113;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName112
	uint8_t ___rchRenderModelComponentName112_114;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName113
	uint8_t ___rchRenderModelComponentName113_115;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName114
	uint8_t ___rchRenderModelComponentName114_116;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName115
	uint8_t ___rchRenderModelComponentName115_117;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName116
	uint8_t ___rchRenderModelComponentName116_118;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName117
	uint8_t ___rchRenderModelComponentName117_119;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName118
	uint8_t ___rchRenderModelComponentName118_120;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName119
	uint8_t ___rchRenderModelComponentName119_121;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName120
	uint8_t ___rchRenderModelComponentName120_122;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName121
	uint8_t ___rchRenderModelComponentName121_123;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName122
	uint8_t ___rchRenderModelComponentName122_124;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName123
	uint8_t ___rchRenderModelComponentName123_125;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName124
	uint8_t ___rchRenderModelComponentName124_126;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName125
	uint8_t ___rchRenderModelComponentName125_127;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName126
	uint8_t ___rchRenderModelComponentName126_128;
	// System.Byte Valve.VR.InputOriginInfo_t::rchRenderModelComponentName127
	uint8_t ___rchRenderModelComponentName127_129;

public:
	inline static int32_t get_offset_of_devicePath_0() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___devicePath_0)); }
	inline uint64_t get_devicePath_0() const { return ___devicePath_0; }
	inline uint64_t* get_address_of_devicePath_0() { return &___devicePath_0; }
	inline void set_devicePath_0(uint64_t value)
	{
		___devicePath_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName0_2() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName0_2)); }
	inline uint8_t get_rchRenderModelComponentName0_2() const { return ___rchRenderModelComponentName0_2; }
	inline uint8_t* get_address_of_rchRenderModelComponentName0_2() { return &___rchRenderModelComponentName0_2; }
	inline void set_rchRenderModelComponentName0_2(uint8_t value)
	{
		___rchRenderModelComponentName0_2 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName1_3() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName1_3)); }
	inline uint8_t get_rchRenderModelComponentName1_3() const { return ___rchRenderModelComponentName1_3; }
	inline uint8_t* get_address_of_rchRenderModelComponentName1_3() { return &___rchRenderModelComponentName1_3; }
	inline void set_rchRenderModelComponentName1_3(uint8_t value)
	{
		___rchRenderModelComponentName1_3 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName2_4() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName2_4)); }
	inline uint8_t get_rchRenderModelComponentName2_4() const { return ___rchRenderModelComponentName2_4; }
	inline uint8_t* get_address_of_rchRenderModelComponentName2_4() { return &___rchRenderModelComponentName2_4; }
	inline void set_rchRenderModelComponentName2_4(uint8_t value)
	{
		___rchRenderModelComponentName2_4 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName3_5() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName3_5)); }
	inline uint8_t get_rchRenderModelComponentName3_5() const { return ___rchRenderModelComponentName3_5; }
	inline uint8_t* get_address_of_rchRenderModelComponentName3_5() { return &___rchRenderModelComponentName3_5; }
	inline void set_rchRenderModelComponentName3_5(uint8_t value)
	{
		___rchRenderModelComponentName3_5 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName4_6() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName4_6)); }
	inline uint8_t get_rchRenderModelComponentName4_6() const { return ___rchRenderModelComponentName4_6; }
	inline uint8_t* get_address_of_rchRenderModelComponentName4_6() { return &___rchRenderModelComponentName4_6; }
	inline void set_rchRenderModelComponentName4_6(uint8_t value)
	{
		___rchRenderModelComponentName4_6 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName5_7() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName5_7)); }
	inline uint8_t get_rchRenderModelComponentName5_7() const { return ___rchRenderModelComponentName5_7; }
	inline uint8_t* get_address_of_rchRenderModelComponentName5_7() { return &___rchRenderModelComponentName5_7; }
	inline void set_rchRenderModelComponentName5_7(uint8_t value)
	{
		___rchRenderModelComponentName5_7 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName6_8() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName6_8)); }
	inline uint8_t get_rchRenderModelComponentName6_8() const { return ___rchRenderModelComponentName6_8; }
	inline uint8_t* get_address_of_rchRenderModelComponentName6_8() { return &___rchRenderModelComponentName6_8; }
	inline void set_rchRenderModelComponentName6_8(uint8_t value)
	{
		___rchRenderModelComponentName6_8 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName7_9() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName7_9)); }
	inline uint8_t get_rchRenderModelComponentName7_9() const { return ___rchRenderModelComponentName7_9; }
	inline uint8_t* get_address_of_rchRenderModelComponentName7_9() { return &___rchRenderModelComponentName7_9; }
	inline void set_rchRenderModelComponentName7_9(uint8_t value)
	{
		___rchRenderModelComponentName7_9 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName8_10() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName8_10)); }
	inline uint8_t get_rchRenderModelComponentName8_10() const { return ___rchRenderModelComponentName8_10; }
	inline uint8_t* get_address_of_rchRenderModelComponentName8_10() { return &___rchRenderModelComponentName8_10; }
	inline void set_rchRenderModelComponentName8_10(uint8_t value)
	{
		___rchRenderModelComponentName8_10 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName9_11() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName9_11)); }
	inline uint8_t get_rchRenderModelComponentName9_11() const { return ___rchRenderModelComponentName9_11; }
	inline uint8_t* get_address_of_rchRenderModelComponentName9_11() { return &___rchRenderModelComponentName9_11; }
	inline void set_rchRenderModelComponentName9_11(uint8_t value)
	{
		___rchRenderModelComponentName9_11 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName10_12() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName10_12)); }
	inline uint8_t get_rchRenderModelComponentName10_12() const { return ___rchRenderModelComponentName10_12; }
	inline uint8_t* get_address_of_rchRenderModelComponentName10_12() { return &___rchRenderModelComponentName10_12; }
	inline void set_rchRenderModelComponentName10_12(uint8_t value)
	{
		___rchRenderModelComponentName10_12 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName11_13() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName11_13)); }
	inline uint8_t get_rchRenderModelComponentName11_13() const { return ___rchRenderModelComponentName11_13; }
	inline uint8_t* get_address_of_rchRenderModelComponentName11_13() { return &___rchRenderModelComponentName11_13; }
	inline void set_rchRenderModelComponentName11_13(uint8_t value)
	{
		___rchRenderModelComponentName11_13 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName12_14() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName12_14)); }
	inline uint8_t get_rchRenderModelComponentName12_14() const { return ___rchRenderModelComponentName12_14; }
	inline uint8_t* get_address_of_rchRenderModelComponentName12_14() { return &___rchRenderModelComponentName12_14; }
	inline void set_rchRenderModelComponentName12_14(uint8_t value)
	{
		___rchRenderModelComponentName12_14 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName13_15() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName13_15)); }
	inline uint8_t get_rchRenderModelComponentName13_15() const { return ___rchRenderModelComponentName13_15; }
	inline uint8_t* get_address_of_rchRenderModelComponentName13_15() { return &___rchRenderModelComponentName13_15; }
	inline void set_rchRenderModelComponentName13_15(uint8_t value)
	{
		___rchRenderModelComponentName13_15 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName14_16() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName14_16)); }
	inline uint8_t get_rchRenderModelComponentName14_16() const { return ___rchRenderModelComponentName14_16; }
	inline uint8_t* get_address_of_rchRenderModelComponentName14_16() { return &___rchRenderModelComponentName14_16; }
	inline void set_rchRenderModelComponentName14_16(uint8_t value)
	{
		___rchRenderModelComponentName14_16 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName15_17() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName15_17)); }
	inline uint8_t get_rchRenderModelComponentName15_17() const { return ___rchRenderModelComponentName15_17; }
	inline uint8_t* get_address_of_rchRenderModelComponentName15_17() { return &___rchRenderModelComponentName15_17; }
	inline void set_rchRenderModelComponentName15_17(uint8_t value)
	{
		___rchRenderModelComponentName15_17 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName16_18() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName16_18)); }
	inline uint8_t get_rchRenderModelComponentName16_18() const { return ___rchRenderModelComponentName16_18; }
	inline uint8_t* get_address_of_rchRenderModelComponentName16_18() { return &___rchRenderModelComponentName16_18; }
	inline void set_rchRenderModelComponentName16_18(uint8_t value)
	{
		___rchRenderModelComponentName16_18 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName17_19() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName17_19)); }
	inline uint8_t get_rchRenderModelComponentName17_19() const { return ___rchRenderModelComponentName17_19; }
	inline uint8_t* get_address_of_rchRenderModelComponentName17_19() { return &___rchRenderModelComponentName17_19; }
	inline void set_rchRenderModelComponentName17_19(uint8_t value)
	{
		___rchRenderModelComponentName17_19 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName18_20() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName18_20)); }
	inline uint8_t get_rchRenderModelComponentName18_20() const { return ___rchRenderModelComponentName18_20; }
	inline uint8_t* get_address_of_rchRenderModelComponentName18_20() { return &___rchRenderModelComponentName18_20; }
	inline void set_rchRenderModelComponentName18_20(uint8_t value)
	{
		___rchRenderModelComponentName18_20 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName19_21() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName19_21)); }
	inline uint8_t get_rchRenderModelComponentName19_21() const { return ___rchRenderModelComponentName19_21; }
	inline uint8_t* get_address_of_rchRenderModelComponentName19_21() { return &___rchRenderModelComponentName19_21; }
	inline void set_rchRenderModelComponentName19_21(uint8_t value)
	{
		___rchRenderModelComponentName19_21 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName20_22() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName20_22)); }
	inline uint8_t get_rchRenderModelComponentName20_22() const { return ___rchRenderModelComponentName20_22; }
	inline uint8_t* get_address_of_rchRenderModelComponentName20_22() { return &___rchRenderModelComponentName20_22; }
	inline void set_rchRenderModelComponentName20_22(uint8_t value)
	{
		___rchRenderModelComponentName20_22 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName21_23() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName21_23)); }
	inline uint8_t get_rchRenderModelComponentName21_23() const { return ___rchRenderModelComponentName21_23; }
	inline uint8_t* get_address_of_rchRenderModelComponentName21_23() { return &___rchRenderModelComponentName21_23; }
	inline void set_rchRenderModelComponentName21_23(uint8_t value)
	{
		___rchRenderModelComponentName21_23 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName22_24() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName22_24)); }
	inline uint8_t get_rchRenderModelComponentName22_24() const { return ___rchRenderModelComponentName22_24; }
	inline uint8_t* get_address_of_rchRenderModelComponentName22_24() { return &___rchRenderModelComponentName22_24; }
	inline void set_rchRenderModelComponentName22_24(uint8_t value)
	{
		___rchRenderModelComponentName22_24 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName23_25() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName23_25)); }
	inline uint8_t get_rchRenderModelComponentName23_25() const { return ___rchRenderModelComponentName23_25; }
	inline uint8_t* get_address_of_rchRenderModelComponentName23_25() { return &___rchRenderModelComponentName23_25; }
	inline void set_rchRenderModelComponentName23_25(uint8_t value)
	{
		___rchRenderModelComponentName23_25 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName24_26() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName24_26)); }
	inline uint8_t get_rchRenderModelComponentName24_26() const { return ___rchRenderModelComponentName24_26; }
	inline uint8_t* get_address_of_rchRenderModelComponentName24_26() { return &___rchRenderModelComponentName24_26; }
	inline void set_rchRenderModelComponentName24_26(uint8_t value)
	{
		___rchRenderModelComponentName24_26 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName25_27() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName25_27)); }
	inline uint8_t get_rchRenderModelComponentName25_27() const { return ___rchRenderModelComponentName25_27; }
	inline uint8_t* get_address_of_rchRenderModelComponentName25_27() { return &___rchRenderModelComponentName25_27; }
	inline void set_rchRenderModelComponentName25_27(uint8_t value)
	{
		___rchRenderModelComponentName25_27 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName26_28() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName26_28)); }
	inline uint8_t get_rchRenderModelComponentName26_28() const { return ___rchRenderModelComponentName26_28; }
	inline uint8_t* get_address_of_rchRenderModelComponentName26_28() { return &___rchRenderModelComponentName26_28; }
	inline void set_rchRenderModelComponentName26_28(uint8_t value)
	{
		___rchRenderModelComponentName26_28 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName27_29() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName27_29)); }
	inline uint8_t get_rchRenderModelComponentName27_29() const { return ___rchRenderModelComponentName27_29; }
	inline uint8_t* get_address_of_rchRenderModelComponentName27_29() { return &___rchRenderModelComponentName27_29; }
	inline void set_rchRenderModelComponentName27_29(uint8_t value)
	{
		___rchRenderModelComponentName27_29 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName28_30() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName28_30)); }
	inline uint8_t get_rchRenderModelComponentName28_30() const { return ___rchRenderModelComponentName28_30; }
	inline uint8_t* get_address_of_rchRenderModelComponentName28_30() { return &___rchRenderModelComponentName28_30; }
	inline void set_rchRenderModelComponentName28_30(uint8_t value)
	{
		___rchRenderModelComponentName28_30 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName29_31() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName29_31)); }
	inline uint8_t get_rchRenderModelComponentName29_31() const { return ___rchRenderModelComponentName29_31; }
	inline uint8_t* get_address_of_rchRenderModelComponentName29_31() { return &___rchRenderModelComponentName29_31; }
	inline void set_rchRenderModelComponentName29_31(uint8_t value)
	{
		___rchRenderModelComponentName29_31 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName30_32() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName30_32)); }
	inline uint8_t get_rchRenderModelComponentName30_32() const { return ___rchRenderModelComponentName30_32; }
	inline uint8_t* get_address_of_rchRenderModelComponentName30_32() { return &___rchRenderModelComponentName30_32; }
	inline void set_rchRenderModelComponentName30_32(uint8_t value)
	{
		___rchRenderModelComponentName30_32 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName31_33() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName31_33)); }
	inline uint8_t get_rchRenderModelComponentName31_33() const { return ___rchRenderModelComponentName31_33; }
	inline uint8_t* get_address_of_rchRenderModelComponentName31_33() { return &___rchRenderModelComponentName31_33; }
	inline void set_rchRenderModelComponentName31_33(uint8_t value)
	{
		___rchRenderModelComponentName31_33 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName32_34() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName32_34)); }
	inline uint8_t get_rchRenderModelComponentName32_34() const { return ___rchRenderModelComponentName32_34; }
	inline uint8_t* get_address_of_rchRenderModelComponentName32_34() { return &___rchRenderModelComponentName32_34; }
	inline void set_rchRenderModelComponentName32_34(uint8_t value)
	{
		___rchRenderModelComponentName32_34 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName33_35() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName33_35)); }
	inline uint8_t get_rchRenderModelComponentName33_35() const { return ___rchRenderModelComponentName33_35; }
	inline uint8_t* get_address_of_rchRenderModelComponentName33_35() { return &___rchRenderModelComponentName33_35; }
	inline void set_rchRenderModelComponentName33_35(uint8_t value)
	{
		___rchRenderModelComponentName33_35 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName34_36() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName34_36)); }
	inline uint8_t get_rchRenderModelComponentName34_36() const { return ___rchRenderModelComponentName34_36; }
	inline uint8_t* get_address_of_rchRenderModelComponentName34_36() { return &___rchRenderModelComponentName34_36; }
	inline void set_rchRenderModelComponentName34_36(uint8_t value)
	{
		___rchRenderModelComponentName34_36 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName35_37() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName35_37)); }
	inline uint8_t get_rchRenderModelComponentName35_37() const { return ___rchRenderModelComponentName35_37; }
	inline uint8_t* get_address_of_rchRenderModelComponentName35_37() { return &___rchRenderModelComponentName35_37; }
	inline void set_rchRenderModelComponentName35_37(uint8_t value)
	{
		___rchRenderModelComponentName35_37 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName36_38() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName36_38)); }
	inline uint8_t get_rchRenderModelComponentName36_38() const { return ___rchRenderModelComponentName36_38; }
	inline uint8_t* get_address_of_rchRenderModelComponentName36_38() { return &___rchRenderModelComponentName36_38; }
	inline void set_rchRenderModelComponentName36_38(uint8_t value)
	{
		___rchRenderModelComponentName36_38 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName37_39() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName37_39)); }
	inline uint8_t get_rchRenderModelComponentName37_39() const { return ___rchRenderModelComponentName37_39; }
	inline uint8_t* get_address_of_rchRenderModelComponentName37_39() { return &___rchRenderModelComponentName37_39; }
	inline void set_rchRenderModelComponentName37_39(uint8_t value)
	{
		___rchRenderModelComponentName37_39 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName38_40() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName38_40)); }
	inline uint8_t get_rchRenderModelComponentName38_40() const { return ___rchRenderModelComponentName38_40; }
	inline uint8_t* get_address_of_rchRenderModelComponentName38_40() { return &___rchRenderModelComponentName38_40; }
	inline void set_rchRenderModelComponentName38_40(uint8_t value)
	{
		___rchRenderModelComponentName38_40 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName39_41() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName39_41)); }
	inline uint8_t get_rchRenderModelComponentName39_41() const { return ___rchRenderModelComponentName39_41; }
	inline uint8_t* get_address_of_rchRenderModelComponentName39_41() { return &___rchRenderModelComponentName39_41; }
	inline void set_rchRenderModelComponentName39_41(uint8_t value)
	{
		___rchRenderModelComponentName39_41 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName40_42() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName40_42)); }
	inline uint8_t get_rchRenderModelComponentName40_42() const { return ___rchRenderModelComponentName40_42; }
	inline uint8_t* get_address_of_rchRenderModelComponentName40_42() { return &___rchRenderModelComponentName40_42; }
	inline void set_rchRenderModelComponentName40_42(uint8_t value)
	{
		___rchRenderModelComponentName40_42 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName41_43() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName41_43)); }
	inline uint8_t get_rchRenderModelComponentName41_43() const { return ___rchRenderModelComponentName41_43; }
	inline uint8_t* get_address_of_rchRenderModelComponentName41_43() { return &___rchRenderModelComponentName41_43; }
	inline void set_rchRenderModelComponentName41_43(uint8_t value)
	{
		___rchRenderModelComponentName41_43 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName42_44() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName42_44)); }
	inline uint8_t get_rchRenderModelComponentName42_44() const { return ___rchRenderModelComponentName42_44; }
	inline uint8_t* get_address_of_rchRenderModelComponentName42_44() { return &___rchRenderModelComponentName42_44; }
	inline void set_rchRenderModelComponentName42_44(uint8_t value)
	{
		___rchRenderModelComponentName42_44 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName43_45() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName43_45)); }
	inline uint8_t get_rchRenderModelComponentName43_45() const { return ___rchRenderModelComponentName43_45; }
	inline uint8_t* get_address_of_rchRenderModelComponentName43_45() { return &___rchRenderModelComponentName43_45; }
	inline void set_rchRenderModelComponentName43_45(uint8_t value)
	{
		___rchRenderModelComponentName43_45 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName44_46() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName44_46)); }
	inline uint8_t get_rchRenderModelComponentName44_46() const { return ___rchRenderModelComponentName44_46; }
	inline uint8_t* get_address_of_rchRenderModelComponentName44_46() { return &___rchRenderModelComponentName44_46; }
	inline void set_rchRenderModelComponentName44_46(uint8_t value)
	{
		___rchRenderModelComponentName44_46 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName45_47() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName45_47)); }
	inline uint8_t get_rchRenderModelComponentName45_47() const { return ___rchRenderModelComponentName45_47; }
	inline uint8_t* get_address_of_rchRenderModelComponentName45_47() { return &___rchRenderModelComponentName45_47; }
	inline void set_rchRenderModelComponentName45_47(uint8_t value)
	{
		___rchRenderModelComponentName45_47 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName46_48() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName46_48)); }
	inline uint8_t get_rchRenderModelComponentName46_48() const { return ___rchRenderModelComponentName46_48; }
	inline uint8_t* get_address_of_rchRenderModelComponentName46_48() { return &___rchRenderModelComponentName46_48; }
	inline void set_rchRenderModelComponentName46_48(uint8_t value)
	{
		___rchRenderModelComponentName46_48 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName47_49() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName47_49)); }
	inline uint8_t get_rchRenderModelComponentName47_49() const { return ___rchRenderModelComponentName47_49; }
	inline uint8_t* get_address_of_rchRenderModelComponentName47_49() { return &___rchRenderModelComponentName47_49; }
	inline void set_rchRenderModelComponentName47_49(uint8_t value)
	{
		___rchRenderModelComponentName47_49 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName48_50() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName48_50)); }
	inline uint8_t get_rchRenderModelComponentName48_50() const { return ___rchRenderModelComponentName48_50; }
	inline uint8_t* get_address_of_rchRenderModelComponentName48_50() { return &___rchRenderModelComponentName48_50; }
	inline void set_rchRenderModelComponentName48_50(uint8_t value)
	{
		___rchRenderModelComponentName48_50 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName49_51() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName49_51)); }
	inline uint8_t get_rchRenderModelComponentName49_51() const { return ___rchRenderModelComponentName49_51; }
	inline uint8_t* get_address_of_rchRenderModelComponentName49_51() { return &___rchRenderModelComponentName49_51; }
	inline void set_rchRenderModelComponentName49_51(uint8_t value)
	{
		___rchRenderModelComponentName49_51 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName50_52() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName50_52)); }
	inline uint8_t get_rchRenderModelComponentName50_52() const { return ___rchRenderModelComponentName50_52; }
	inline uint8_t* get_address_of_rchRenderModelComponentName50_52() { return &___rchRenderModelComponentName50_52; }
	inline void set_rchRenderModelComponentName50_52(uint8_t value)
	{
		___rchRenderModelComponentName50_52 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName51_53() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName51_53)); }
	inline uint8_t get_rchRenderModelComponentName51_53() const { return ___rchRenderModelComponentName51_53; }
	inline uint8_t* get_address_of_rchRenderModelComponentName51_53() { return &___rchRenderModelComponentName51_53; }
	inline void set_rchRenderModelComponentName51_53(uint8_t value)
	{
		___rchRenderModelComponentName51_53 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName52_54() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName52_54)); }
	inline uint8_t get_rchRenderModelComponentName52_54() const { return ___rchRenderModelComponentName52_54; }
	inline uint8_t* get_address_of_rchRenderModelComponentName52_54() { return &___rchRenderModelComponentName52_54; }
	inline void set_rchRenderModelComponentName52_54(uint8_t value)
	{
		___rchRenderModelComponentName52_54 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName53_55() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName53_55)); }
	inline uint8_t get_rchRenderModelComponentName53_55() const { return ___rchRenderModelComponentName53_55; }
	inline uint8_t* get_address_of_rchRenderModelComponentName53_55() { return &___rchRenderModelComponentName53_55; }
	inline void set_rchRenderModelComponentName53_55(uint8_t value)
	{
		___rchRenderModelComponentName53_55 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName54_56() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName54_56)); }
	inline uint8_t get_rchRenderModelComponentName54_56() const { return ___rchRenderModelComponentName54_56; }
	inline uint8_t* get_address_of_rchRenderModelComponentName54_56() { return &___rchRenderModelComponentName54_56; }
	inline void set_rchRenderModelComponentName54_56(uint8_t value)
	{
		___rchRenderModelComponentName54_56 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName55_57() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName55_57)); }
	inline uint8_t get_rchRenderModelComponentName55_57() const { return ___rchRenderModelComponentName55_57; }
	inline uint8_t* get_address_of_rchRenderModelComponentName55_57() { return &___rchRenderModelComponentName55_57; }
	inline void set_rchRenderModelComponentName55_57(uint8_t value)
	{
		___rchRenderModelComponentName55_57 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName56_58() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName56_58)); }
	inline uint8_t get_rchRenderModelComponentName56_58() const { return ___rchRenderModelComponentName56_58; }
	inline uint8_t* get_address_of_rchRenderModelComponentName56_58() { return &___rchRenderModelComponentName56_58; }
	inline void set_rchRenderModelComponentName56_58(uint8_t value)
	{
		___rchRenderModelComponentName56_58 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName57_59() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName57_59)); }
	inline uint8_t get_rchRenderModelComponentName57_59() const { return ___rchRenderModelComponentName57_59; }
	inline uint8_t* get_address_of_rchRenderModelComponentName57_59() { return &___rchRenderModelComponentName57_59; }
	inline void set_rchRenderModelComponentName57_59(uint8_t value)
	{
		___rchRenderModelComponentName57_59 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName58_60() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName58_60)); }
	inline uint8_t get_rchRenderModelComponentName58_60() const { return ___rchRenderModelComponentName58_60; }
	inline uint8_t* get_address_of_rchRenderModelComponentName58_60() { return &___rchRenderModelComponentName58_60; }
	inline void set_rchRenderModelComponentName58_60(uint8_t value)
	{
		___rchRenderModelComponentName58_60 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName59_61() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName59_61)); }
	inline uint8_t get_rchRenderModelComponentName59_61() const { return ___rchRenderModelComponentName59_61; }
	inline uint8_t* get_address_of_rchRenderModelComponentName59_61() { return &___rchRenderModelComponentName59_61; }
	inline void set_rchRenderModelComponentName59_61(uint8_t value)
	{
		___rchRenderModelComponentName59_61 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName60_62() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName60_62)); }
	inline uint8_t get_rchRenderModelComponentName60_62() const { return ___rchRenderModelComponentName60_62; }
	inline uint8_t* get_address_of_rchRenderModelComponentName60_62() { return &___rchRenderModelComponentName60_62; }
	inline void set_rchRenderModelComponentName60_62(uint8_t value)
	{
		___rchRenderModelComponentName60_62 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName61_63() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName61_63)); }
	inline uint8_t get_rchRenderModelComponentName61_63() const { return ___rchRenderModelComponentName61_63; }
	inline uint8_t* get_address_of_rchRenderModelComponentName61_63() { return &___rchRenderModelComponentName61_63; }
	inline void set_rchRenderModelComponentName61_63(uint8_t value)
	{
		___rchRenderModelComponentName61_63 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName62_64() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName62_64)); }
	inline uint8_t get_rchRenderModelComponentName62_64() const { return ___rchRenderModelComponentName62_64; }
	inline uint8_t* get_address_of_rchRenderModelComponentName62_64() { return &___rchRenderModelComponentName62_64; }
	inline void set_rchRenderModelComponentName62_64(uint8_t value)
	{
		___rchRenderModelComponentName62_64 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName63_65() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName63_65)); }
	inline uint8_t get_rchRenderModelComponentName63_65() const { return ___rchRenderModelComponentName63_65; }
	inline uint8_t* get_address_of_rchRenderModelComponentName63_65() { return &___rchRenderModelComponentName63_65; }
	inline void set_rchRenderModelComponentName63_65(uint8_t value)
	{
		___rchRenderModelComponentName63_65 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName64_66() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName64_66)); }
	inline uint8_t get_rchRenderModelComponentName64_66() const { return ___rchRenderModelComponentName64_66; }
	inline uint8_t* get_address_of_rchRenderModelComponentName64_66() { return &___rchRenderModelComponentName64_66; }
	inline void set_rchRenderModelComponentName64_66(uint8_t value)
	{
		___rchRenderModelComponentName64_66 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName65_67() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName65_67)); }
	inline uint8_t get_rchRenderModelComponentName65_67() const { return ___rchRenderModelComponentName65_67; }
	inline uint8_t* get_address_of_rchRenderModelComponentName65_67() { return &___rchRenderModelComponentName65_67; }
	inline void set_rchRenderModelComponentName65_67(uint8_t value)
	{
		___rchRenderModelComponentName65_67 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName66_68() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName66_68)); }
	inline uint8_t get_rchRenderModelComponentName66_68() const { return ___rchRenderModelComponentName66_68; }
	inline uint8_t* get_address_of_rchRenderModelComponentName66_68() { return &___rchRenderModelComponentName66_68; }
	inline void set_rchRenderModelComponentName66_68(uint8_t value)
	{
		___rchRenderModelComponentName66_68 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName67_69() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName67_69)); }
	inline uint8_t get_rchRenderModelComponentName67_69() const { return ___rchRenderModelComponentName67_69; }
	inline uint8_t* get_address_of_rchRenderModelComponentName67_69() { return &___rchRenderModelComponentName67_69; }
	inline void set_rchRenderModelComponentName67_69(uint8_t value)
	{
		___rchRenderModelComponentName67_69 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName68_70() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName68_70)); }
	inline uint8_t get_rchRenderModelComponentName68_70() const { return ___rchRenderModelComponentName68_70; }
	inline uint8_t* get_address_of_rchRenderModelComponentName68_70() { return &___rchRenderModelComponentName68_70; }
	inline void set_rchRenderModelComponentName68_70(uint8_t value)
	{
		___rchRenderModelComponentName68_70 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName69_71() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName69_71)); }
	inline uint8_t get_rchRenderModelComponentName69_71() const { return ___rchRenderModelComponentName69_71; }
	inline uint8_t* get_address_of_rchRenderModelComponentName69_71() { return &___rchRenderModelComponentName69_71; }
	inline void set_rchRenderModelComponentName69_71(uint8_t value)
	{
		___rchRenderModelComponentName69_71 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName70_72() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName70_72)); }
	inline uint8_t get_rchRenderModelComponentName70_72() const { return ___rchRenderModelComponentName70_72; }
	inline uint8_t* get_address_of_rchRenderModelComponentName70_72() { return &___rchRenderModelComponentName70_72; }
	inline void set_rchRenderModelComponentName70_72(uint8_t value)
	{
		___rchRenderModelComponentName70_72 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName71_73() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName71_73)); }
	inline uint8_t get_rchRenderModelComponentName71_73() const { return ___rchRenderModelComponentName71_73; }
	inline uint8_t* get_address_of_rchRenderModelComponentName71_73() { return &___rchRenderModelComponentName71_73; }
	inline void set_rchRenderModelComponentName71_73(uint8_t value)
	{
		___rchRenderModelComponentName71_73 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName72_74() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName72_74)); }
	inline uint8_t get_rchRenderModelComponentName72_74() const { return ___rchRenderModelComponentName72_74; }
	inline uint8_t* get_address_of_rchRenderModelComponentName72_74() { return &___rchRenderModelComponentName72_74; }
	inline void set_rchRenderModelComponentName72_74(uint8_t value)
	{
		___rchRenderModelComponentName72_74 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName73_75() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName73_75)); }
	inline uint8_t get_rchRenderModelComponentName73_75() const { return ___rchRenderModelComponentName73_75; }
	inline uint8_t* get_address_of_rchRenderModelComponentName73_75() { return &___rchRenderModelComponentName73_75; }
	inline void set_rchRenderModelComponentName73_75(uint8_t value)
	{
		___rchRenderModelComponentName73_75 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName74_76() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName74_76)); }
	inline uint8_t get_rchRenderModelComponentName74_76() const { return ___rchRenderModelComponentName74_76; }
	inline uint8_t* get_address_of_rchRenderModelComponentName74_76() { return &___rchRenderModelComponentName74_76; }
	inline void set_rchRenderModelComponentName74_76(uint8_t value)
	{
		___rchRenderModelComponentName74_76 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName75_77() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName75_77)); }
	inline uint8_t get_rchRenderModelComponentName75_77() const { return ___rchRenderModelComponentName75_77; }
	inline uint8_t* get_address_of_rchRenderModelComponentName75_77() { return &___rchRenderModelComponentName75_77; }
	inline void set_rchRenderModelComponentName75_77(uint8_t value)
	{
		___rchRenderModelComponentName75_77 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName76_78() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName76_78)); }
	inline uint8_t get_rchRenderModelComponentName76_78() const { return ___rchRenderModelComponentName76_78; }
	inline uint8_t* get_address_of_rchRenderModelComponentName76_78() { return &___rchRenderModelComponentName76_78; }
	inline void set_rchRenderModelComponentName76_78(uint8_t value)
	{
		___rchRenderModelComponentName76_78 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName77_79() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName77_79)); }
	inline uint8_t get_rchRenderModelComponentName77_79() const { return ___rchRenderModelComponentName77_79; }
	inline uint8_t* get_address_of_rchRenderModelComponentName77_79() { return &___rchRenderModelComponentName77_79; }
	inline void set_rchRenderModelComponentName77_79(uint8_t value)
	{
		___rchRenderModelComponentName77_79 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName78_80() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName78_80)); }
	inline uint8_t get_rchRenderModelComponentName78_80() const { return ___rchRenderModelComponentName78_80; }
	inline uint8_t* get_address_of_rchRenderModelComponentName78_80() { return &___rchRenderModelComponentName78_80; }
	inline void set_rchRenderModelComponentName78_80(uint8_t value)
	{
		___rchRenderModelComponentName78_80 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName79_81() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName79_81)); }
	inline uint8_t get_rchRenderModelComponentName79_81() const { return ___rchRenderModelComponentName79_81; }
	inline uint8_t* get_address_of_rchRenderModelComponentName79_81() { return &___rchRenderModelComponentName79_81; }
	inline void set_rchRenderModelComponentName79_81(uint8_t value)
	{
		___rchRenderModelComponentName79_81 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName80_82() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName80_82)); }
	inline uint8_t get_rchRenderModelComponentName80_82() const { return ___rchRenderModelComponentName80_82; }
	inline uint8_t* get_address_of_rchRenderModelComponentName80_82() { return &___rchRenderModelComponentName80_82; }
	inline void set_rchRenderModelComponentName80_82(uint8_t value)
	{
		___rchRenderModelComponentName80_82 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName81_83() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName81_83)); }
	inline uint8_t get_rchRenderModelComponentName81_83() const { return ___rchRenderModelComponentName81_83; }
	inline uint8_t* get_address_of_rchRenderModelComponentName81_83() { return &___rchRenderModelComponentName81_83; }
	inline void set_rchRenderModelComponentName81_83(uint8_t value)
	{
		___rchRenderModelComponentName81_83 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName82_84() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName82_84)); }
	inline uint8_t get_rchRenderModelComponentName82_84() const { return ___rchRenderModelComponentName82_84; }
	inline uint8_t* get_address_of_rchRenderModelComponentName82_84() { return &___rchRenderModelComponentName82_84; }
	inline void set_rchRenderModelComponentName82_84(uint8_t value)
	{
		___rchRenderModelComponentName82_84 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName83_85() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName83_85)); }
	inline uint8_t get_rchRenderModelComponentName83_85() const { return ___rchRenderModelComponentName83_85; }
	inline uint8_t* get_address_of_rchRenderModelComponentName83_85() { return &___rchRenderModelComponentName83_85; }
	inline void set_rchRenderModelComponentName83_85(uint8_t value)
	{
		___rchRenderModelComponentName83_85 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName84_86() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName84_86)); }
	inline uint8_t get_rchRenderModelComponentName84_86() const { return ___rchRenderModelComponentName84_86; }
	inline uint8_t* get_address_of_rchRenderModelComponentName84_86() { return &___rchRenderModelComponentName84_86; }
	inline void set_rchRenderModelComponentName84_86(uint8_t value)
	{
		___rchRenderModelComponentName84_86 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName85_87() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName85_87)); }
	inline uint8_t get_rchRenderModelComponentName85_87() const { return ___rchRenderModelComponentName85_87; }
	inline uint8_t* get_address_of_rchRenderModelComponentName85_87() { return &___rchRenderModelComponentName85_87; }
	inline void set_rchRenderModelComponentName85_87(uint8_t value)
	{
		___rchRenderModelComponentName85_87 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName86_88() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName86_88)); }
	inline uint8_t get_rchRenderModelComponentName86_88() const { return ___rchRenderModelComponentName86_88; }
	inline uint8_t* get_address_of_rchRenderModelComponentName86_88() { return &___rchRenderModelComponentName86_88; }
	inline void set_rchRenderModelComponentName86_88(uint8_t value)
	{
		___rchRenderModelComponentName86_88 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName87_89() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName87_89)); }
	inline uint8_t get_rchRenderModelComponentName87_89() const { return ___rchRenderModelComponentName87_89; }
	inline uint8_t* get_address_of_rchRenderModelComponentName87_89() { return &___rchRenderModelComponentName87_89; }
	inline void set_rchRenderModelComponentName87_89(uint8_t value)
	{
		___rchRenderModelComponentName87_89 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName88_90() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName88_90)); }
	inline uint8_t get_rchRenderModelComponentName88_90() const { return ___rchRenderModelComponentName88_90; }
	inline uint8_t* get_address_of_rchRenderModelComponentName88_90() { return &___rchRenderModelComponentName88_90; }
	inline void set_rchRenderModelComponentName88_90(uint8_t value)
	{
		___rchRenderModelComponentName88_90 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName89_91() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName89_91)); }
	inline uint8_t get_rchRenderModelComponentName89_91() const { return ___rchRenderModelComponentName89_91; }
	inline uint8_t* get_address_of_rchRenderModelComponentName89_91() { return &___rchRenderModelComponentName89_91; }
	inline void set_rchRenderModelComponentName89_91(uint8_t value)
	{
		___rchRenderModelComponentName89_91 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName90_92() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName90_92)); }
	inline uint8_t get_rchRenderModelComponentName90_92() const { return ___rchRenderModelComponentName90_92; }
	inline uint8_t* get_address_of_rchRenderModelComponentName90_92() { return &___rchRenderModelComponentName90_92; }
	inline void set_rchRenderModelComponentName90_92(uint8_t value)
	{
		___rchRenderModelComponentName90_92 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName91_93() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName91_93)); }
	inline uint8_t get_rchRenderModelComponentName91_93() const { return ___rchRenderModelComponentName91_93; }
	inline uint8_t* get_address_of_rchRenderModelComponentName91_93() { return &___rchRenderModelComponentName91_93; }
	inline void set_rchRenderModelComponentName91_93(uint8_t value)
	{
		___rchRenderModelComponentName91_93 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName92_94() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName92_94)); }
	inline uint8_t get_rchRenderModelComponentName92_94() const { return ___rchRenderModelComponentName92_94; }
	inline uint8_t* get_address_of_rchRenderModelComponentName92_94() { return &___rchRenderModelComponentName92_94; }
	inline void set_rchRenderModelComponentName92_94(uint8_t value)
	{
		___rchRenderModelComponentName92_94 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName93_95() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName93_95)); }
	inline uint8_t get_rchRenderModelComponentName93_95() const { return ___rchRenderModelComponentName93_95; }
	inline uint8_t* get_address_of_rchRenderModelComponentName93_95() { return &___rchRenderModelComponentName93_95; }
	inline void set_rchRenderModelComponentName93_95(uint8_t value)
	{
		___rchRenderModelComponentName93_95 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName94_96() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName94_96)); }
	inline uint8_t get_rchRenderModelComponentName94_96() const { return ___rchRenderModelComponentName94_96; }
	inline uint8_t* get_address_of_rchRenderModelComponentName94_96() { return &___rchRenderModelComponentName94_96; }
	inline void set_rchRenderModelComponentName94_96(uint8_t value)
	{
		___rchRenderModelComponentName94_96 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName95_97() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName95_97)); }
	inline uint8_t get_rchRenderModelComponentName95_97() const { return ___rchRenderModelComponentName95_97; }
	inline uint8_t* get_address_of_rchRenderModelComponentName95_97() { return &___rchRenderModelComponentName95_97; }
	inline void set_rchRenderModelComponentName95_97(uint8_t value)
	{
		___rchRenderModelComponentName95_97 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName96_98() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName96_98)); }
	inline uint8_t get_rchRenderModelComponentName96_98() const { return ___rchRenderModelComponentName96_98; }
	inline uint8_t* get_address_of_rchRenderModelComponentName96_98() { return &___rchRenderModelComponentName96_98; }
	inline void set_rchRenderModelComponentName96_98(uint8_t value)
	{
		___rchRenderModelComponentName96_98 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName97_99() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName97_99)); }
	inline uint8_t get_rchRenderModelComponentName97_99() const { return ___rchRenderModelComponentName97_99; }
	inline uint8_t* get_address_of_rchRenderModelComponentName97_99() { return &___rchRenderModelComponentName97_99; }
	inline void set_rchRenderModelComponentName97_99(uint8_t value)
	{
		___rchRenderModelComponentName97_99 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName98_100() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName98_100)); }
	inline uint8_t get_rchRenderModelComponentName98_100() const { return ___rchRenderModelComponentName98_100; }
	inline uint8_t* get_address_of_rchRenderModelComponentName98_100() { return &___rchRenderModelComponentName98_100; }
	inline void set_rchRenderModelComponentName98_100(uint8_t value)
	{
		___rchRenderModelComponentName98_100 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName99_101() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName99_101)); }
	inline uint8_t get_rchRenderModelComponentName99_101() const { return ___rchRenderModelComponentName99_101; }
	inline uint8_t* get_address_of_rchRenderModelComponentName99_101() { return &___rchRenderModelComponentName99_101; }
	inline void set_rchRenderModelComponentName99_101(uint8_t value)
	{
		___rchRenderModelComponentName99_101 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName100_102() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName100_102)); }
	inline uint8_t get_rchRenderModelComponentName100_102() const { return ___rchRenderModelComponentName100_102; }
	inline uint8_t* get_address_of_rchRenderModelComponentName100_102() { return &___rchRenderModelComponentName100_102; }
	inline void set_rchRenderModelComponentName100_102(uint8_t value)
	{
		___rchRenderModelComponentName100_102 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName101_103() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName101_103)); }
	inline uint8_t get_rchRenderModelComponentName101_103() const { return ___rchRenderModelComponentName101_103; }
	inline uint8_t* get_address_of_rchRenderModelComponentName101_103() { return &___rchRenderModelComponentName101_103; }
	inline void set_rchRenderModelComponentName101_103(uint8_t value)
	{
		___rchRenderModelComponentName101_103 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName102_104() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName102_104)); }
	inline uint8_t get_rchRenderModelComponentName102_104() const { return ___rchRenderModelComponentName102_104; }
	inline uint8_t* get_address_of_rchRenderModelComponentName102_104() { return &___rchRenderModelComponentName102_104; }
	inline void set_rchRenderModelComponentName102_104(uint8_t value)
	{
		___rchRenderModelComponentName102_104 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName103_105() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName103_105)); }
	inline uint8_t get_rchRenderModelComponentName103_105() const { return ___rchRenderModelComponentName103_105; }
	inline uint8_t* get_address_of_rchRenderModelComponentName103_105() { return &___rchRenderModelComponentName103_105; }
	inline void set_rchRenderModelComponentName103_105(uint8_t value)
	{
		___rchRenderModelComponentName103_105 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName104_106() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName104_106)); }
	inline uint8_t get_rchRenderModelComponentName104_106() const { return ___rchRenderModelComponentName104_106; }
	inline uint8_t* get_address_of_rchRenderModelComponentName104_106() { return &___rchRenderModelComponentName104_106; }
	inline void set_rchRenderModelComponentName104_106(uint8_t value)
	{
		___rchRenderModelComponentName104_106 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName105_107() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName105_107)); }
	inline uint8_t get_rchRenderModelComponentName105_107() const { return ___rchRenderModelComponentName105_107; }
	inline uint8_t* get_address_of_rchRenderModelComponentName105_107() { return &___rchRenderModelComponentName105_107; }
	inline void set_rchRenderModelComponentName105_107(uint8_t value)
	{
		___rchRenderModelComponentName105_107 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName106_108() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName106_108)); }
	inline uint8_t get_rchRenderModelComponentName106_108() const { return ___rchRenderModelComponentName106_108; }
	inline uint8_t* get_address_of_rchRenderModelComponentName106_108() { return &___rchRenderModelComponentName106_108; }
	inline void set_rchRenderModelComponentName106_108(uint8_t value)
	{
		___rchRenderModelComponentName106_108 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName107_109() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName107_109)); }
	inline uint8_t get_rchRenderModelComponentName107_109() const { return ___rchRenderModelComponentName107_109; }
	inline uint8_t* get_address_of_rchRenderModelComponentName107_109() { return &___rchRenderModelComponentName107_109; }
	inline void set_rchRenderModelComponentName107_109(uint8_t value)
	{
		___rchRenderModelComponentName107_109 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName108_110() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName108_110)); }
	inline uint8_t get_rchRenderModelComponentName108_110() const { return ___rchRenderModelComponentName108_110; }
	inline uint8_t* get_address_of_rchRenderModelComponentName108_110() { return &___rchRenderModelComponentName108_110; }
	inline void set_rchRenderModelComponentName108_110(uint8_t value)
	{
		___rchRenderModelComponentName108_110 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName109_111() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName109_111)); }
	inline uint8_t get_rchRenderModelComponentName109_111() const { return ___rchRenderModelComponentName109_111; }
	inline uint8_t* get_address_of_rchRenderModelComponentName109_111() { return &___rchRenderModelComponentName109_111; }
	inline void set_rchRenderModelComponentName109_111(uint8_t value)
	{
		___rchRenderModelComponentName109_111 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName110_112() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName110_112)); }
	inline uint8_t get_rchRenderModelComponentName110_112() const { return ___rchRenderModelComponentName110_112; }
	inline uint8_t* get_address_of_rchRenderModelComponentName110_112() { return &___rchRenderModelComponentName110_112; }
	inline void set_rchRenderModelComponentName110_112(uint8_t value)
	{
		___rchRenderModelComponentName110_112 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName111_113() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName111_113)); }
	inline uint8_t get_rchRenderModelComponentName111_113() const { return ___rchRenderModelComponentName111_113; }
	inline uint8_t* get_address_of_rchRenderModelComponentName111_113() { return &___rchRenderModelComponentName111_113; }
	inline void set_rchRenderModelComponentName111_113(uint8_t value)
	{
		___rchRenderModelComponentName111_113 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName112_114() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName112_114)); }
	inline uint8_t get_rchRenderModelComponentName112_114() const { return ___rchRenderModelComponentName112_114; }
	inline uint8_t* get_address_of_rchRenderModelComponentName112_114() { return &___rchRenderModelComponentName112_114; }
	inline void set_rchRenderModelComponentName112_114(uint8_t value)
	{
		___rchRenderModelComponentName112_114 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName113_115() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName113_115)); }
	inline uint8_t get_rchRenderModelComponentName113_115() const { return ___rchRenderModelComponentName113_115; }
	inline uint8_t* get_address_of_rchRenderModelComponentName113_115() { return &___rchRenderModelComponentName113_115; }
	inline void set_rchRenderModelComponentName113_115(uint8_t value)
	{
		___rchRenderModelComponentName113_115 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName114_116() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName114_116)); }
	inline uint8_t get_rchRenderModelComponentName114_116() const { return ___rchRenderModelComponentName114_116; }
	inline uint8_t* get_address_of_rchRenderModelComponentName114_116() { return &___rchRenderModelComponentName114_116; }
	inline void set_rchRenderModelComponentName114_116(uint8_t value)
	{
		___rchRenderModelComponentName114_116 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName115_117() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName115_117)); }
	inline uint8_t get_rchRenderModelComponentName115_117() const { return ___rchRenderModelComponentName115_117; }
	inline uint8_t* get_address_of_rchRenderModelComponentName115_117() { return &___rchRenderModelComponentName115_117; }
	inline void set_rchRenderModelComponentName115_117(uint8_t value)
	{
		___rchRenderModelComponentName115_117 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName116_118() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName116_118)); }
	inline uint8_t get_rchRenderModelComponentName116_118() const { return ___rchRenderModelComponentName116_118; }
	inline uint8_t* get_address_of_rchRenderModelComponentName116_118() { return &___rchRenderModelComponentName116_118; }
	inline void set_rchRenderModelComponentName116_118(uint8_t value)
	{
		___rchRenderModelComponentName116_118 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName117_119() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName117_119)); }
	inline uint8_t get_rchRenderModelComponentName117_119() const { return ___rchRenderModelComponentName117_119; }
	inline uint8_t* get_address_of_rchRenderModelComponentName117_119() { return &___rchRenderModelComponentName117_119; }
	inline void set_rchRenderModelComponentName117_119(uint8_t value)
	{
		___rchRenderModelComponentName117_119 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName118_120() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName118_120)); }
	inline uint8_t get_rchRenderModelComponentName118_120() const { return ___rchRenderModelComponentName118_120; }
	inline uint8_t* get_address_of_rchRenderModelComponentName118_120() { return &___rchRenderModelComponentName118_120; }
	inline void set_rchRenderModelComponentName118_120(uint8_t value)
	{
		___rchRenderModelComponentName118_120 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName119_121() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName119_121)); }
	inline uint8_t get_rchRenderModelComponentName119_121() const { return ___rchRenderModelComponentName119_121; }
	inline uint8_t* get_address_of_rchRenderModelComponentName119_121() { return &___rchRenderModelComponentName119_121; }
	inline void set_rchRenderModelComponentName119_121(uint8_t value)
	{
		___rchRenderModelComponentName119_121 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName120_122() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName120_122)); }
	inline uint8_t get_rchRenderModelComponentName120_122() const { return ___rchRenderModelComponentName120_122; }
	inline uint8_t* get_address_of_rchRenderModelComponentName120_122() { return &___rchRenderModelComponentName120_122; }
	inline void set_rchRenderModelComponentName120_122(uint8_t value)
	{
		___rchRenderModelComponentName120_122 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName121_123() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName121_123)); }
	inline uint8_t get_rchRenderModelComponentName121_123() const { return ___rchRenderModelComponentName121_123; }
	inline uint8_t* get_address_of_rchRenderModelComponentName121_123() { return &___rchRenderModelComponentName121_123; }
	inline void set_rchRenderModelComponentName121_123(uint8_t value)
	{
		___rchRenderModelComponentName121_123 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName122_124() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName122_124)); }
	inline uint8_t get_rchRenderModelComponentName122_124() const { return ___rchRenderModelComponentName122_124; }
	inline uint8_t* get_address_of_rchRenderModelComponentName122_124() { return &___rchRenderModelComponentName122_124; }
	inline void set_rchRenderModelComponentName122_124(uint8_t value)
	{
		___rchRenderModelComponentName122_124 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName123_125() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName123_125)); }
	inline uint8_t get_rchRenderModelComponentName123_125() const { return ___rchRenderModelComponentName123_125; }
	inline uint8_t* get_address_of_rchRenderModelComponentName123_125() { return &___rchRenderModelComponentName123_125; }
	inline void set_rchRenderModelComponentName123_125(uint8_t value)
	{
		___rchRenderModelComponentName123_125 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName124_126() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName124_126)); }
	inline uint8_t get_rchRenderModelComponentName124_126() const { return ___rchRenderModelComponentName124_126; }
	inline uint8_t* get_address_of_rchRenderModelComponentName124_126() { return &___rchRenderModelComponentName124_126; }
	inline void set_rchRenderModelComponentName124_126(uint8_t value)
	{
		___rchRenderModelComponentName124_126 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName125_127() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName125_127)); }
	inline uint8_t get_rchRenderModelComponentName125_127() const { return ___rchRenderModelComponentName125_127; }
	inline uint8_t* get_address_of_rchRenderModelComponentName125_127() { return &___rchRenderModelComponentName125_127; }
	inline void set_rchRenderModelComponentName125_127(uint8_t value)
	{
		___rchRenderModelComponentName125_127 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName126_128() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName126_128)); }
	inline uint8_t get_rchRenderModelComponentName126_128() const { return ___rchRenderModelComponentName126_128; }
	inline uint8_t* get_address_of_rchRenderModelComponentName126_128() { return &___rchRenderModelComponentName126_128; }
	inline void set_rchRenderModelComponentName126_128(uint8_t value)
	{
		___rchRenderModelComponentName126_128 = value;
	}

	inline static int32_t get_offset_of_rchRenderModelComponentName127_129() { return static_cast<int32_t>(offsetof(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A, ___rchRenderModelComponentName127_129)); }
	inline uint8_t get_rchRenderModelComponentName127_129() const { return ___rchRenderModelComponentName127_129; }
	inline uint8_t* get_address_of_rchRenderModelComponentName127_129() { return &___rchRenderModelComponentName127_129; }
	inline void set_rchRenderModelComponentName127_129(uint8_t value)
	{
		___rchRenderModelComponentName127_129 = value;
	}
};


// Valve.VR.SteamVR_Action`2<System.Object,System.Object>
struct  SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B  : public SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734
{
public:
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	RuntimeObject * ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_sourceMap_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B, ___sourceMap_4)); }
	inline RuntimeObject * get_sourceMap_4() const { return ___sourceMap_4; }
	inline RuntimeObject ** get_address_of_sourceMap_4() { return &___sourceMap_4; }
	inline void set_sourceMap_4(RuntimeObject * value)
	{
		___sourceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};


// Valve.VR.SteamVR_Action`2<Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>,Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_2_tDED2DB9236CA9398BCDCB18DB8DDA3DB1D98FBAC  : public SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734
{
public:
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 * ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_sourceMap_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_tDED2DB9236CA9398BCDCB18DB8DDA3DB1D98FBAC, ___sourceMap_4)); }
	inline SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 * get_sourceMap_4() const { return ___sourceMap_4; }
	inline SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 ** get_address_of_sourceMap_4() { return &___sourceMap_4; }
	inline void set_sourceMap_4(SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 * value)
	{
		___sourceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_tDED2DB9236CA9398BCDCB18DB8DDA3DB1D98FBAC, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};


// Valve.VR.SteamVR_Action`2<Valve.VR.SteamVR_Action_Skeleton_Source_Map,Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_2_t2D32D7E2FBDFB6126D5E6B0594C0F688ED213F5D  : public SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734
{
public:
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB * ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_sourceMap_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t2D32D7E2FBDFB6126D5E6B0594C0F688ED213F5D, ___sourceMap_4)); }
	inline SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB * get_sourceMap_4() const { return ___sourceMap_4; }
	inline SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB ** get_address_of_sourceMap_4() { return &___sourceMap_4; }
	inline void set_sourceMap_4(SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB * value)
	{
		___sourceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t2D32D7E2FBDFB6126D5E6B0594C0F688ED213F5D, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Boolean>
struct  Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894, ____event_0)); }
	inline Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * get__event_0() const { return ____event_0; }
	inline Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894, ___action_1)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_action_1() const { return ___action_1; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Object>
struct  Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94, ____event_0)); }
	inline Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * get__event_0() const { return ____event_0; }
	inline Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94, ___action_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Single>
struct  Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA, ____event_0)); }
	inline Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * get__event_0() const { return ____event_0; }
	inline Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA, ___action_1)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>
struct  Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242, ____event_0)); }
	inline Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * get__event_0() const { return ____event_0; }
	inline Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242, ___action_1)); }
	inline UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * get_action_1() const { return ___action_1; }
	inline UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>
struct  Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226, ____event_0)); }
	inline Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * get__event_0() const { return ____event_0; }
	inline Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226, ___action_1)); }
	inline UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * get_action_1() const { return ___action_1; }
	inline UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>
struct  Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1, ____event_0)); }
	inline Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * get__event_0() const { return ____event_0; }
	inline Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1, ___action_1)); }
	inline UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * get_action_1() const { return ___action_1; }
	inline UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>
struct  Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_t3615C727C978524006980D0666EC556B57802FE3 * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A, ____event_0)); }
	inline Event_2_t3615C727C978524006980D0666EC556B57802FE3 * get__event_0() const { return ____event_0; }
	inline Event_2_t3615C727C978524006980D0666EC556B57802FE3 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_t3615C727C978524006980D0666EC556B57802FE3 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A, ___action_1)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_action_1() const { return ___action_1; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>
struct  Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::_event
	Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * ____event_0;
	// UnityEngine.Events.UnityAction`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::action
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39, ____event_0)); }
	inline Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * get__event_0() const { return ____event_0; }
	inline Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39, ___action_1)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_action_1() const { return ___action_1; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>
struct  Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::_event
	Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * ____event_0;
	// UnityEngine.Events.UnityAction`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::action
	UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE, ____event_0)); }
	inline Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * get__event_0() const { return ____event_0; }
	inline Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE, ___action_1)); }
	inline UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * get_action_1() const { return ___action_1; }
	inline UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.VREvent_ApplicationLaunch_t
struct  VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389 
{
public:
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::unArgsHandle
	uint32_t ___unArgsHandle_1;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_unArgsHandle_1() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389, ___unArgsHandle_1)); }
	inline uint32_t get_unArgsHandle_1() const { return ___unArgsHandle_1; }
	inline uint32_t* get_address_of_unArgsHandle_1() { return &___unArgsHandle_1; }
	inline void set_unArgsHandle_1(uint32_t value)
	{
		___unArgsHandle_1 = value;
	}
};


// Valve.VR.VREvent_Chaperone_t
struct  VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85 
{
public:
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nPreviousUniverse
	uint64_t ___m_nPreviousUniverse_0;
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nCurrentUniverse
	uint64_t ___m_nCurrentUniverse_1;

public:
	inline static int32_t get_offset_of_m_nPreviousUniverse_0() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85, ___m_nPreviousUniverse_0)); }
	inline uint64_t get_m_nPreviousUniverse_0() const { return ___m_nPreviousUniverse_0; }
	inline uint64_t* get_address_of_m_nPreviousUniverse_0() { return &___m_nPreviousUniverse_0; }
	inline void set_m_nPreviousUniverse_0(uint64_t value)
	{
		___m_nPreviousUniverse_0 = value;
	}

	inline static int32_t get_offset_of_m_nCurrentUniverse_1() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85, ___m_nCurrentUniverse_1)); }
	inline uint64_t get_m_nCurrentUniverse_1() const { return ___m_nCurrentUniverse_1; }
	inline uint64_t* get_address_of_m_nCurrentUniverse_1() { return &___m_nCurrentUniverse_1; }
	inline void set_m_nCurrentUniverse_1(uint64_t value)
	{
		___m_nCurrentUniverse_1 = value;
	}
};


// Valve.VR.VREvent_Controller_t
struct  VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05 
{
public:
	// System.UInt32 Valve.VR.VREvent_Controller_t::button
	uint32_t ___button_0;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05, ___button_0)); }
	inline uint32_t get_button_0() const { return ___button_0; }
	inline uint32_t* get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(uint32_t value)
	{
		___button_0 = value;
	}
};


// Valve.VR.VREvent_EditingCameraSurface_t
struct  VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC 
{
public:
	// System.UInt64 Valve.VR.VREvent_EditingCameraSurface_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt32 Valve.VR.VREvent_EditingCameraSurface_t::nVisualMode
	uint32_t ___nVisualMode_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_nVisualMode_1() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC, ___nVisualMode_1)); }
	inline uint32_t get_nVisualMode_1() const { return ___nVisualMode_1; }
	inline uint32_t* get_address_of_nVisualMode_1() { return &___nVisualMode_1; }
	inline void set_nVisualMode_1(uint32_t value)
	{
		___nVisualMode_1 = value;
	}
};


// Valve.VR.VREvent_HapticVibration_t
struct  VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F 
{
public:
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::containerHandle
	uint64_t ___containerHandle_0;
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::componentHandle
	uint64_t ___componentHandle_1;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fDurationSeconds
	float ___fDurationSeconds_2;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fFrequency
	float ___fFrequency_3;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fAmplitude
	float ___fAmplitude_4;

public:
	inline static int32_t get_offset_of_containerHandle_0() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___containerHandle_0)); }
	inline uint64_t get_containerHandle_0() const { return ___containerHandle_0; }
	inline uint64_t* get_address_of_containerHandle_0() { return &___containerHandle_0; }
	inline void set_containerHandle_0(uint64_t value)
	{
		___containerHandle_0 = value;
	}

	inline static int32_t get_offset_of_componentHandle_1() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___componentHandle_1)); }
	inline uint64_t get_componentHandle_1() const { return ___componentHandle_1; }
	inline uint64_t* get_address_of_componentHandle_1() { return &___componentHandle_1; }
	inline void set_componentHandle_1(uint64_t value)
	{
		___componentHandle_1 = value;
	}

	inline static int32_t get_offset_of_fDurationSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fDurationSeconds_2)); }
	inline float get_fDurationSeconds_2() const { return ___fDurationSeconds_2; }
	inline float* get_address_of_fDurationSeconds_2() { return &___fDurationSeconds_2; }
	inline void set_fDurationSeconds_2(float value)
	{
		___fDurationSeconds_2 = value;
	}

	inline static int32_t get_offset_of_fFrequency_3() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fFrequency_3)); }
	inline float get_fFrequency_3() const { return ___fFrequency_3; }
	inline float* get_address_of_fFrequency_3() { return &___fFrequency_3; }
	inline void set_fFrequency_3(float value)
	{
		___fFrequency_3 = value;
	}

	inline static int32_t get_offset_of_fAmplitude_4() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fAmplitude_4)); }
	inline float get_fAmplitude_4() const { return ___fAmplitude_4; }
	inline float* get_address_of_fAmplitude_4() { return &___fAmplitude_4; }
	inline void set_fAmplitude_4(float value)
	{
		___fAmplitude_4 = value;
	}
};


// Valve.VR.VREvent_InputActionManifestLoad_t
struct  VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathAppKey
	uint64_t ___pathAppKey_0;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessageParam
	uint64_t ___pathMessageParam_2;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathManifestPath
	uint64_t ___pathManifestPath_3;

public:
	inline static int32_t get_offset_of_pathAppKey_0() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathAppKey_0)); }
	inline uint64_t get_pathAppKey_0() const { return ___pathAppKey_0; }
	inline uint64_t* get_address_of_pathAppKey_0() { return &___pathAppKey_0; }
	inline void set_pathAppKey_0(uint64_t value)
	{
		___pathAppKey_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathMessageParam_2() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathMessageParam_2)); }
	inline uint64_t get_pathMessageParam_2() const { return ___pathMessageParam_2; }
	inline uint64_t* get_address_of_pathMessageParam_2() { return &___pathMessageParam_2; }
	inline void set_pathMessageParam_2(uint64_t value)
	{
		___pathMessageParam_2 = value;
	}

	inline static int32_t get_offset_of_pathManifestPath_3() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathManifestPath_3)); }
	inline uint64_t get_pathManifestPath_3() const { return ___pathManifestPath_3; }
	inline uint64_t* get_address_of_pathManifestPath_3() { return &___pathManifestPath_3; }
	inline void set_pathManifestPath_3(uint64_t value)
	{
		___pathManifestPath_3 = value;
	}
};


// Valve.VR.VREvent_InputBindingLoad_t
struct  VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::ulAppContainer
	uint64_t ___ulAppContainer_0;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathUrl
	uint64_t ___pathUrl_2;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathControllerType
	uint64_t ___pathControllerType_3;

public:
	inline static int32_t get_offset_of_ulAppContainer_0() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___ulAppContainer_0)); }
	inline uint64_t get_ulAppContainer_0() const { return ___ulAppContainer_0; }
	inline uint64_t* get_address_of_ulAppContainer_0() { return &___ulAppContainer_0; }
	inline void set_ulAppContainer_0(uint64_t value)
	{
		___ulAppContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathUrl_2() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathUrl_2)); }
	inline uint64_t get_pathUrl_2() const { return ___pathUrl_2; }
	inline uint64_t* get_address_of_pathUrl_2() { return &___pathUrl_2; }
	inline void set_pathUrl_2(uint64_t value)
	{
		___pathUrl_2 = value;
	}

	inline static int32_t get_offset_of_pathControllerType_3() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathControllerType_3)); }
	inline uint64_t get_pathControllerType_3() const { return ___pathControllerType_3; }
	inline uint64_t* get_address_of_pathControllerType_3() { return &___pathControllerType_3; }
	inline void set_pathControllerType_3(uint64_t value)
	{
		___pathControllerType_3 = value;
	}
};


// Valve.VR.VREvent_Ipd_t
struct  VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400 
{
public:
	// System.Single Valve.VR.VREvent_Ipd_t::ipdMeters
	float ___ipdMeters_0;

public:
	inline static int32_t get_offset_of_ipdMeters_0() { return static_cast<int32_t>(offsetof(VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400, ___ipdMeters_0)); }
	inline float get_ipdMeters_0() const { return ___ipdMeters_0; }
	inline float* get_address_of_ipdMeters_0() { return &___ipdMeters_0; }
	inline void set_ipdMeters_0(float value)
	{
		___ipdMeters_0 = value;
	}
};


// Valve.VR.VREvent_Keyboard_t
struct  VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297 
{
public:
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput0
	uint8_t ___cNewInput0_0;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput1
	uint8_t ___cNewInput1_1;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput2
	uint8_t ___cNewInput2_2;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput3
	uint8_t ___cNewInput3_3;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput4
	uint8_t ___cNewInput4_4;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput5
	uint8_t ___cNewInput5_5;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput6
	uint8_t ___cNewInput6_6;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput7
	uint8_t ___cNewInput7_7;
	// System.UInt64 Valve.VR.VREvent_Keyboard_t::uUserValue
	uint64_t ___uUserValue_8;

public:
	inline static int32_t get_offset_of_cNewInput0_0() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput0_0)); }
	inline uint8_t get_cNewInput0_0() const { return ___cNewInput0_0; }
	inline uint8_t* get_address_of_cNewInput0_0() { return &___cNewInput0_0; }
	inline void set_cNewInput0_0(uint8_t value)
	{
		___cNewInput0_0 = value;
	}

	inline static int32_t get_offset_of_cNewInput1_1() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput1_1)); }
	inline uint8_t get_cNewInput1_1() const { return ___cNewInput1_1; }
	inline uint8_t* get_address_of_cNewInput1_1() { return &___cNewInput1_1; }
	inline void set_cNewInput1_1(uint8_t value)
	{
		___cNewInput1_1 = value;
	}

	inline static int32_t get_offset_of_cNewInput2_2() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput2_2)); }
	inline uint8_t get_cNewInput2_2() const { return ___cNewInput2_2; }
	inline uint8_t* get_address_of_cNewInput2_2() { return &___cNewInput2_2; }
	inline void set_cNewInput2_2(uint8_t value)
	{
		___cNewInput2_2 = value;
	}

	inline static int32_t get_offset_of_cNewInput3_3() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput3_3)); }
	inline uint8_t get_cNewInput3_3() const { return ___cNewInput3_3; }
	inline uint8_t* get_address_of_cNewInput3_3() { return &___cNewInput3_3; }
	inline void set_cNewInput3_3(uint8_t value)
	{
		___cNewInput3_3 = value;
	}

	inline static int32_t get_offset_of_cNewInput4_4() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput4_4)); }
	inline uint8_t get_cNewInput4_4() const { return ___cNewInput4_4; }
	inline uint8_t* get_address_of_cNewInput4_4() { return &___cNewInput4_4; }
	inline void set_cNewInput4_4(uint8_t value)
	{
		___cNewInput4_4 = value;
	}

	inline static int32_t get_offset_of_cNewInput5_5() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput5_5)); }
	inline uint8_t get_cNewInput5_5() const { return ___cNewInput5_5; }
	inline uint8_t* get_address_of_cNewInput5_5() { return &___cNewInput5_5; }
	inline void set_cNewInput5_5(uint8_t value)
	{
		___cNewInput5_5 = value;
	}

	inline static int32_t get_offset_of_cNewInput6_6() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput6_6)); }
	inline uint8_t get_cNewInput6_6() const { return ___cNewInput6_6; }
	inline uint8_t* get_address_of_cNewInput6_6() { return &___cNewInput6_6; }
	inline void set_cNewInput6_6(uint8_t value)
	{
		___cNewInput6_6 = value;
	}

	inline static int32_t get_offset_of_cNewInput7_7() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput7_7)); }
	inline uint8_t get_cNewInput7_7() const { return ___cNewInput7_7; }
	inline uint8_t* get_address_of_cNewInput7_7() { return &___cNewInput7_7; }
	inline void set_cNewInput7_7(uint8_t value)
	{
		___cNewInput7_7 = value;
	}

	inline static int32_t get_offset_of_uUserValue_8() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___uUserValue_8)); }
	inline uint64_t get_uUserValue_8() const { return ___uUserValue_8; }
	inline uint64_t* get_address_of_uUserValue_8() { return &___uUserValue_8; }
	inline void set_uUserValue_8(uint64_t value)
	{
		___uUserValue_8 = value;
	}
};


// Valve.VR.VREvent_MessageOverlay_t
struct  VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1 
{
public:
	// System.UInt32 Valve.VR.VREvent_MessageOverlay_t::unVRMessageOverlayResponse
	uint32_t ___unVRMessageOverlayResponse_0;

public:
	inline static int32_t get_offset_of_unVRMessageOverlayResponse_0() { return static_cast<int32_t>(offsetof(VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1, ___unVRMessageOverlayResponse_0)); }
	inline uint32_t get_unVRMessageOverlayResponse_0() const { return ___unVRMessageOverlayResponse_0; }
	inline uint32_t* get_address_of_unVRMessageOverlayResponse_0() { return &___unVRMessageOverlayResponse_0; }
	inline void set_unVRMessageOverlayResponse_0(uint32_t value)
	{
		___unVRMessageOverlayResponse_0 = value;
	}
};


// Valve.VR.VREvent_Mouse_t
struct  VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B 
{
public:
	// System.Single Valve.VR.VREvent_Mouse_t::x
	float ___x_0;
	// System.Single Valve.VR.VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 Valve.VR.VREvent_Mouse_t::button
	uint32_t ___button_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___button_2)); }
	inline uint32_t get_button_2() const { return ___button_2; }
	inline uint32_t* get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(uint32_t value)
	{
		___button_2 = value;
	}
};


// Valve.VR.VREvent_Notification_t
struct  VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB 
{
public:
	// System.UInt64 Valve.VR.VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 Valve.VR.VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;

public:
	inline static int32_t get_offset_of_ulUserValue_0() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB, ___ulUserValue_0)); }
	inline uint64_t get_ulUserValue_0() const { return ___ulUserValue_0; }
	inline uint64_t* get_address_of_ulUserValue_0() { return &___ulUserValue_0; }
	inline void set_ulUserValue_0(uint64_t value)
	{
		___ulUserValue_0 = value;
	}

	inline static int32_t get_offset_of_notificationId_1() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB, ___notificationId_1)); }
	inline uint32_t get_notificationId_1() const { return ___notificationId_1; }
	inline uint32_t* get_address_of_notificationId_1() { return &___notificationId_1; }
	inline void set_notificationId_1(uint32_t value)
	{
		___notificationId_1 = value;
	}
};


// Valve.VR.VREvent_Overlay_t
struct  VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C 
{
public:
	// System.UInt64 Valve.VR.VREvent_Overlay_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt64 Valve.VR.VREvent_Overlay_t::devicePath
	uint64_t ___devicePath_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_devicePath_1() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C, ___devicePath_1)); }
	inline uint64_t get_devicePath_1() const { return ___devicePath_1; }
	inline uint64_t* get_address_of_devicePath_1() { return &___devicePath_1; }
	inline void set_devicePath_1(uint64_t value)
	{
		___devicePath_1 = value;
	}
};


// Valve.VR.VREvent_PerformanceTest_t
struct  VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA 
{
public:
	// System.UInt32 Valve.VR.VREvent_PerformanceTest_t::m_nFidelityLevel
	uint32_t ___m_nFidelityLevel_0;

public:
	inline static int32_t get_offset_of_m_nFidelityLevel_0() { return static_cast<int32_t>(offsetof(VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA, ___m_nFidelityLevel_0)); }
	inline uint32_t get_m_nFidelityLevel_0() const { return ___m_nFidelityLevel_0; }
	inline uint32_t* get_address_of_m_nFidelityLevel_0() { return &___m_nFidelityLevel_0; }
	inline void set_m_nFidelityLevel_0(uint32_t value)
	{
		___m_nFidelityLevel_0 = value;
	}
};


// Valve.VR.VREvent_Process_t
struct  VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E 
{
public:
	// System.UInt32 Valve.VR.VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean Valve.VR.VREvent_Process_t::bForced
	bool ___bForced_2;
	// System.Boolean Valve.VR.VREvent_Process_t::bConnectionLost
	bool ___bConnectionLost_3;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_oldPid_1() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___oldPid_1)); }
	inline uint32_t get_oldPid_1() const { return ___oldPid_1; }
	inline uint32_t* get_address_of_oldPid_1() { return &___oldPid_1; }
	inline void set_oldPid_1(uint32_t value)
	{
		___oldPid_1 = value;
	}

	inline static int32_t get_offset_of_bForced_2() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___bForced_2)); }
	inline bool get_bForced_2() const { return ___bForced_2; }
	inline bool* get_address_of_bForced_2() { return &___bForced_2; }
	inline void set_bForced_2(bool value)
	{
		___bForced_2 = value;
	}

	inline static int32_t get_offset_of_bConnectionLost_3() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___bConnectionLost_3)); }
	inline bool get_bConnectionLost_3() const { return ___bConnectionLost_3; }
	inline bool* get_address_of_bConnectionLost_3() { return &___bConnectionLost_3; }
	inline void set_bConnectionLost_3(bool value)
	{
		___bConnectionLost_3 = value;
	}
};


// Valve.VR.VREvent_ProgressUpdate_t
struct  VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE 
{
public:
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::ulApplicationPropertyContainer
	uint64_t ___ulApplicationPropertyContainer_0;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathDevice
	uint64_t ___pathDevice_1;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathInputSource
	uint64_t ___pathInputSource_2;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathProgressAction
	uint64_t ___pathProgressAction_3;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathIcon
	uint64_t ___pathIcon_4;
	// System.Single Valve.VR.VREvent_ProgressUpdate_t::fProgress
	float ___fProgress_5;

public:
	inline static int32_t get_offset_of_ulApplicationPropertyContainer_0() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___ulApplicationPropertyContainer_0)); }
	inline uint64_t get_ulApplicationPropertyContainer_0() const { return ___ulApplicationPropertyContainer_0; }
	inline uint64_t* get_address_of_ulApplicationPropertyContainer_0() { return &___ulApplicationPropertyContainer_0; }
	inline void set_ulApplicationPropertyContainer_0(uint64_t value)
	{
		___ulApplicationPropertyContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathDevice_1() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathDevice_1)); }
	inline uint64_t get_pathDevice_1() const { return ___pathDevice_1; }
	inline uint64_t* get_address_of_pathDevice_1() { return &___pathDevice_1; }
	inline void set_pathDevice_1(uint64_t value)
	{
		___pathDevice_1 = value;
	}

	inline static int32_t get_offset_of_pathInputSource_2() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathInputSource_2)); }
	inline uint64_t get_pathInputSource_2() const { return ___pathInputSource_2; }
	inline uint64_t* get_address_of_pathInputSource_2() { return &___pathInputSource_2; }
	inline void set_pathInputSource_2(uint64_t value)
	{
		___pathInputSource_2 = value;
	}

	inline static int32_t get_offset_of_pathProgressAction_3() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathProgressAction_3)); }
	inline uint64_t get_pathProgressAction_3() const { return ___pathProgressAction_3; }
	inline uint64_t* get_address_of_pathProgressAction_3() { return &___pathProgressAction_3; }
	inline void set_pathProgressAction_3(uint64_t value)
	{
		___pathProgressAction_3 = value;
	}

	inline static int32_t get_offset_of_pathIcon_4() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathIcon_4)); }
	inline uint64_t get_pathIcon_4() const { return ___pathIcon_4; }
	inline uint64_t* get_address_of_pathIcon_4() { return &___pathIcon_4; }
	inline void set_pathIcon_4(uint64_t value)
	{
		___pathIcon_4 = value;
	}

	inline static int32_t get_offset_of_fProgress_5() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___fProgress_5)); }
	inline float get_fProgress_5() const { return ___fProgress_5; }
	inline float* get_address_of_fProgress_5() { return &___fProgress_5; }
	inline void set_fProgress_5(float value)
	{
		___fProgress_5 = value;
	}
};


// Valve.VR.VREvent_Reserved_t
struct  VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3 
{
public:
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved2
	uint64_t ___reserved2_2;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved3
	uint64_t ___reserved3_3;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved4
	uint64_t ___reserved4_4;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved5
	uint64_t ___reserved5_5;

public:
	inline static int32_t get_offset_of_reserved0_0() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved0_0)); }
	inline uint64_t get_reserved0_0() const { return ___reserved0_0; }
	inline uint64_t* get_address_of_reserved0_0() { return &___reserved0_0; }
	inline void set_reserved0_0(uint64_t value)
	{
		___reserved0_0 = value;
	}

	inline static int32_t get_offset_of_reserved1_1() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved1_1)); }
	inline uint64_t get_reserved1_1() const { return ___reserved1_1; }
	inline uint64_t* get_address_of_reserved1_1() { return &___reserved1_1; }
	inline void set_reserved1_1(uint64_t value)
	{
		___reserved1_1 = value;
	}

	inline static int32_t get_offset_of_reserved2_2() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved2_2)); }
	inline uint64_t get_reserved2_2() const { return ___reserved2_2; }
	inline uint64_t* get_address_of_reserved2_2() { return &___reserved2_2; }
	inline void set_reserved2_2(uint64_t value)
	{
		___reserved2_2 = value;
	}

	inline static int32_t get_offset_of_reserved3_3() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved3_3)); }
	inline uint64_t get_reserved3_3() const { return ___reserved3_3; }
	inline uint64_t* get_address_of_reserved3_3() { return &___reserved3_3; }
	inline void set_reserved3_3(uint64_t value)
	{
		___reserved3_3 = value;
	}

	inline static int32_t get_offset_of_reserved4_4() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved4_4)); }
	inline uint64_t get_reserved4_4() const { return ___reserved4_4; }
	inline uint64_t* get_address_of_reserved4_4() { return &___reserved4_4; }
	inline void set_reserved4_4(uint64_t value)
	{
		___reserved4_4 = value;
	}

	inline static int32_t get_offset_of_reserved5_5() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved5_5)); }
	inline uint64_t get_reserved5_5() const { return ___reserved5_5; }
	inline uint64_t* get_address_of_reserved5_5() { return &___reserved5_5; }
	inline void set_reserved5_5(uint64_t value)
	{
		___reserved5_5 = value;
	}
};


// Valve.VR.VREvent_ScreenshotProgress_t
struct  VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED 
{
public:
	// System.Single Valve.VR.VREvent_ScreenshotProgress_t::progress
	float ___progress_0;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED, ___progress_0)); }
	inline float get_progress_0() const { return ___progress_0; }
	inline float* get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(float value)
	{
		___progress_0 = value;
	}
};


// Valve.VR.VREvent_Screenshot_t
struct  VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97 
{
public:
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::handle
	uint32_t ___handle_0;
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::type
	uint32_t ___type_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97, ___handle_0)); }
	inline uint32_t get_handle_0() const { return ___handle_0; }
	inline uint32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97, ___type_1)); }
	inline uint32_t get_type_1() const { return ___type_1; }
	inline uint32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(uint32_t value)
	{
		___type_1 = value;
	}
};


// Valve.VR.VREvent_Scroll_t
struct  VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160 
{
public:
	// System.Single Valve.VR.VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single Valve.VR.VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 Valve.VR.VREvent_Scroll_t::unused
	uint32_t ___unused_2;
	// System.Single Valve.VR.VREvent_Scroll_t::viewportscale
	float ___viewportscale_3;

public:
	inline static int32_t get_offset_of_xdelta_0() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___xdelta_0)); }
	inline float get_xdelta_0() const { return ___xdelta_0; }
	inline float* get_address_of_xdelta_0() { return &___xdelta_0; }
	inline void set_xdelta_0(float value)
	{
		___xdelta_0 = value;
	}

	inline static int32_t get_offset_of_ydelta_1() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___ydelta_1)); }
	inline float get_ydelta_1() const { return ___ydelta_1; }
	inline float* get_address_of_ydelta_1() { return &___ydelta_1; }
	inline void set_ydelta_1(float value)
	{
		___ydelta_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___unused_2)); }
	inline uint32_t get_unused_2() const { return ___unused_2; }
	inline uint32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(uint32_t value)
	{
		___unused_2 = value;
	}

	inline static int32_t get_offset_of_viewportscale_3() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___viewportscale_3)); }
	inline float get_viewportscale_3() const { return ___viewportscale_3; }
	inline float* get_address_of_viewportscale_3() { return &___viewportscale_3; }
	inline void set_viewportscale_3(float value)
	{
		___viewportscale_3 = value;
	}
};


// Valve.VR.VREvent_SeatedZeroPoseReset_t
struct  VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323 
{
public:
	// System.Boolean Valve.VR.VREvent_SeatedZeroPoseReset_t::bResetBySystemMenu
	bool ___bResetBySystemMenu_0;

public:
	inline static int32_t get_offset_of_bResetBySystemMenu_0() { return static_cast<int32_t>(offsetof(VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323, ___bResetBySystemMenu_0)); }
	inline bool get_bResetBySystemMenu_0() const { return ___bResetBySystemMenu_0; }
	inline bool* get_address_of_bResetBySystemMenu_0() { return &___bResetBySystemMenu_0; }
	inline void set_bResetBySystemMenu_0(bool value)
	{
		___bResetBySystemMenu_0 = value;
	}
};


// Valve.VR.VREvent_ShowDevTools_t
struct  VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6 
{
public:
	// System.Int32 Valve.VR.VREvent_ShowDevTools_t::nBrowserIdentifier
	int32_t ___nBrowserIdentifier_0;

public:
	inline static int32_t get_offset_of_nBrowserIdentifier_0() { return static_cast<int32_t>(offsetof(VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6, ___nBrowserIdentifier_0)); }
	inline int32_t get_nBrowserIdentifier_0() const { return ___nBrowserIdentifier_0; }
	inline int32_t* get_address_of_nBrowserIdentifier_0() { return &___nBrowserIdentifier_0; }
	inline void set_nBrowserIdentifier_0(int32_t value)
	{
		___nBrowserIdentifier_0 = value;
	}
};


// Valve.VR.VREvent_SpatialAnchor_t
struct  VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473 
{
public:
	// System.UInt32 Valve.VR.VREvent_SpatialAnchor_t::unHandle
	uint32_t ___unHandle_0;

public:
	inline static int32_t get_offset_of_unHandle_0() { return static_cast<int32_t>(offsetof(VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473, ___unHandle_0)); }
	inline uint32_t get_unHandle_0() const { return ___unHandle_0; }
	inline uint32_t* get_address_of_unHandle_0() { return &___unHandle_0; }
	inline void set_unHandle_0(uint32_t value)
	{
		___unHandle_0 = value;
	}
};


// Valve.VR.VREvent_Status_t
struct  VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB 
{
public:
	// System.UInt32 Valve.VR.VREvent_Status_t::statusState
	uint32_t ___statusState_0;

public:
	inline static int32_t get_offset_of_statusState_0() { return static_cast<int32_t>(offsetof(VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB, ___statusState_0)); }
	inline uint32_t get_statusState_0() const { return ___statusState_0; }
	inline uint32_t* get_address_of_statusState_0() { return &___statusState_0; }
	inline void set_statusState_0(uint32_t value)
	{
		___statusState_0 = value;
	}
};


// Valve.VR.VREvent_TouchPadMove_t
struct  VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D 
{
public:
	// System.Boolean Valve.VR.VREvent_TouchPadMove_t::bFingerDown
	bool ___bFingerDown_0;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::flSecondsFingerDown
	float ___flSecondsFingerDown_1;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXFirst
	float ___fValueXFirst_2;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYFirst
	float ___fValueYFirst_3;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXRaw
	float ___fValueXRaw_4;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYRaw
	float ___fValueYRaw_5;

public:
	inline static int32_t get_offset_of_bFingerDown_0() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___bFingerDown_0)); }
	inline bool get_bFingerDown_0() const { return ___bFingerDown_0; }
	inline bool* get_address_of_bFingerDown_0() { return &___bFingerDown_0; }
	inline void set_bFingerDown_0(bool value)
	{
		___bFingerDown_0 = value;
	}

	inline static int32_t get_offset_of_flSecondsFingerDown_1() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___flSecondsFingerDown_1)); }
	inline float get_flSecondsFingerDown_1() const { return ___flSecondsFingerDown_1; }
	inline float* get_address_of_flSecondsFingerDown_1() { return &___flSecondsFingerDown_1; }
	inline void set_flSecondsFingerDown_1(float value)
	{
		___flSecondsFingerDown_1 = value;
	}

	inline static int32_t get_offset_of_fValueXFirst_2() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueXFirst_2)); }
	inline float get_fValueXFirst_2() const { return ___fValueXFirst_2; }
	inline float* get_address_of_fValueXFirst_2() { return &___fValueXFirst_2; }
	inline void set_fValueXFirst_2(float value)
	{
		___fValueXFirst_2 = value;
	}

	inline static int32_t get_offset_of_fValueYFirst_3() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueYFirst_3)); }
	inline float get_fValueYFirst_3() const { return ___fValueYFirst_3; }
	inline float* get_address_of_fValueYFirst_3() { return &___fValueYFirst_3; }
	inline void set_fValueYFirst_3(float value)
	{
		___fValueYFirst_3 = value;
	}

	inline static int32_t get_offset_of_fValueXRaw_4() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueXRaw_4)); }
	inline float get_fValueXRaw_4() const { return ___fValueXRaw_4; }
	inline float* get_address_of_fValueXRaw_4() { return &___fValueXRaw_4; }
	inline void set_fValueXRaw_4(float value)
	{
		___fValueXRaw_4 = value;
	}

	inline static int32_t get_offset_of_fValueYRaw_5() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueYRaw_5)); }
	inline float get_fValueYRaw_5() const { return ___fValueYRaw_5; }
	inline float* get_address_of_fValueYRaw_5() { return &___fValueYRaw_5; }
	inline void set_fValueYRaw_5(float value)
	{
		___fValueYRaw_5 = value;
	}
};


// Valve.VR.VREvent_WebConsole_t
struct  VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75 
{
public:
	// System.UInt64 Valve.VR.VREvent_WebConsole_t::webConsoleHandle
	uint64_t ___webConsoleHandle_0;

public:
	inline static int32_t get_offset_of_webConsoleHandle_0() { return static_cast<int32_t>(offsetof(VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75, ___webConsoleHandle_0)); }
	inline uint64_t get_webConsoleHandle_0() const { return ___webConsoleHandle_0; }
	inline uint64_t* get_address_of_webConsoleHandle_0() { return &___webConsoleHandle_0; }
	inline void set_webConsoleHandle_0(uint64_t value)
	{
		___webConsoleHandle_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Valve.VR.EHDCPError
struct  EHDCPError_tEA1A3B61ABC539BEB5968E78D67A977D9B8FFC8F 
{
public:
	// System.Int32 Valve.VR.EHDCPError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EHDCPError_tEA1A3B61ABC539BEB5968E78D67A977D9B8FFC8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EShowUIType
struct  EShowUIType_tBD146F5D1D019E27B82F6FCAE6A9EE94568DE7CF 
{
public:
	// System.Int32 Valve.VR.EShowUIType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EShowUIType_tBD146F5D1D019E27B82F6FCAE6A9EE94568DE7CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETextureType
struct  ETextureType_t4851CBECD96258ADBF296BDC72BB194C76BA8400 
{
public:
	// System.Int32 Valve.VR.ETextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETextureType_t4851CBECD96258ADBF296BDC72BB194C76BA8400, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackedDeviceProperty
struct  ETrackedDeviceProperty_tF72385D21B16A4502DC9E4F05A6C3F3D63202678 
{
public:
	// System.Int32 Valve.VR.ETrackedDeviceProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceProperty_tF72385D21B16A4502DC9E4F05A6C3F3D63202678, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackingResult
struct  ETrackingResult_t989C2212A7DBCBBF86EA2C1E776BC60223B3126E 
{
public:
	// System.Int32 Valve.VR.ETrackingResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingResult_t989C2212A7DBCBBF86EA2C1E776BC60223B3126E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackingUniverseOrigin
struct  ETrackingUniverseOrigin_t3002504453445C01FD1564845C065DDDEE23937B 
{
public:
	// System.Int32 Valve.VR.ETrackingUniverseOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackingUniverseOrigin_t3002504453445C01FD1564845C065DDDEE23937B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EVRInputStringBits
struct  EVRInputStringBits_t6D50955CC5A3AB1CC794A0582C59C3AC98F60E60 
{
public:
	// System.Int32 Valve.VR.EVRInputStringBits::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EVRInputStringBits_t6D50955CC5A3AB1CC794A0582C59C3AC98F60E60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_InitializedStates
struct  InitializedStates_t2D84949EC0DFFB6C94ACBDA93736E7DEB8D4B9F9 
{
public:
	// System.Int32 Valve.VR.SteamVR_InitializedStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializedStates_t2D84949EC0DFFB6C94ACBDA93736E7DEB8D4B9F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_ActionDirections
struct  SteamVR_ActionDirections_tC7760C9A471565840E2F1D11A61E44735571D8B1 
{
public:
	// System.Int32 Valve.VR.SteamVR_ActionDirections::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_ActionDirections_tC7760C9A471565840E2F1D11A61E44735571D8B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>
struct  SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243  : public SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B
{
public:

public:
};


// Valve.VR.SteamVR_Action_In`2<Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>,Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_In_2_t2C5C166B83FDF97166A2B5B007C2A5742BBE2199  : public SteamVR_Action_2_tDED2DB9236CA9398BCDCB18DB8DDA3DB1D98FBAC
{
public:

public:
};


// Valve.VR.SteamVR_Action_In`2<Valve.VR.SteamVR_Action_Skeleton_Source_Map,Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_In_2_t648DCC49A164ED0184532F0961391833D01917D6  : public SteamVR_Action_2_t2D32D7E2FBDFB6126D5E6B0594C0F688ED213F5D
{
public:

public:
};


// Valve.VR.SteamVR_Action_Out`2<System.Object,System.Object>
struct  SteamVR_Action_Out_2_tBFC90712829F4A53DB24EF908459C469ADC749B7  : public SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<System.Boolean>
struct  Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B  : public UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<System.Object>
struct  Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F  : public UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<System.Single>
struct  Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F  : public UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>
struct  Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262  : public UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>
struct  Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF  : public UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>
struct  Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522  : public UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>
struct  Event_2_t3615C727C978524006980D0666EC556B57802FE3  : public UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>
struct  Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0  : public UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>
struct  Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB  : public UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5
{
public:

public:
};


// Valve.VR.SteamVR_Input_Sources
struct  SteamVR_Input_Sources_tCE41AA589FB3B9516BDE0DFABDCB4AAEA29528F7 
{
public:
	// System.Int32 Valve.VR.SteamVR_Input_Sources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_Input_Sources_tCE41AA589FB3B9516BDE0DFABDCB4AAEA29528F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Valve.VR.SteamVR
struct  SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F  : public RuntimeObject
{
public:
	// Valve.VR.CVRSystem Valve.VR.SteamVR::<hmd>k__BackingField
	CVRSystem_t5B252CC3E969ED765C4C346EC5CF6A79657D5380 * ___U3ChmdU3Ek__BackingField_4;
	// Valve.VR.CVRCompositor Valve.VR.SteamVR::<compositor>k__BackingField
	CVRCompositor_t7E9A7ACFAB7C4BC0CAFC520CB63213C2C5AA1F4A * ___U3CcompositorU3Ek__BackingField_5;
	// Valve.VR.CVROverlay Valve.VR.SteamVR::<overlay>k__BackingField
	CVROverlay_t98FB767D8969B5694A45224BD8D432ACBEE020A8 * ___U3CoverlayU3Ek__BackingField_6;
	// System.Single Valve.VR.SteamVR::<sceneWidth>k__BackingField
	float ___U3CsceneWidthU3Ek__BackingField_11;
	// System.Single Valve.VR.SteamVR::<sceneHeight>k__BackingField
	float ___U3CsceneHeightU3Ek__BackingField_12;
	// System.Single Valve.VR.SteamVR::<aspect>k__BackingField
	float ___U3CaspectU3Ek__BackingField_13;
	// System.Single Valve.VR.SteamVR::<fieldOfView>k__BackingField
	float ___U3CfieldOfViewU3Ek__BackingField_14;
	// UnityEngine.Vector2 Valve.VR.SteamVR::<tanHalfFov>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CtanHalfFovU3Ek__BackingField_15;
	// Valve.VR.VRTextureBounds_t[] Valve.VR.SteamVR::<textureBounds>k__BackingField
	VRTextureBounds_tU5BU5D_tAE079634A0FDBA61CBA97C5AE3C69BD032940E02* ___U3CtextureBoundsU3Ek__BackingField_16;
	// SteamVR_Utils_RigidTransform[] Valve.VR.SteamVR::<eyes>k__BackingField
	RigidTransformU5BU5D_tC98EB3576009E5D825D0D43671A65D32A2449ECC* ___U3CeyesU3Ek__BackingField_17;
	// Valve.VR.ETextureType Valve.VR.SteamVR::textureType
	int32_t ___textureType_18;

public:
	inline static int32_t get_offset_of_U3ChmdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3ChmdU3Ek__BackingField_4)); }
	inline CVRSystem_t5B252CC3E969ED765C4C346EC5CF6A79657D5380 * get_U3ChmdU3Ek__BackingField_4() const { return ___U3ChmdU3Ek__BackingField_4; }
	inline CVRSystem_t5B252CC3E969ED765C4C346EC5CF6A79657D5380 ** get_address_of_U3ChmdU3Ek__BackingField_4() { return &___U3ChmdU3Ek__BackingField_4; }
	inline void set_U3ChmdU3Ek__BackingField_4(CVRSystem_t5B252CC3E969ED765C4C346EC5CF6A79657D5380 * value)
	{
		___U3ChmdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChmdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcompositorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CcompositorU3Ek__BackingField_5)); }
	inline CVRCompositor_t7E9A7ACFAB7C4BC0CAFC520CB63213C2C5AA1F4A * get_U3CcompositorU3Ek__BackingField_5() const { return ___U3CcompositorU3Ek__BackingField_5; }
	inline CVRCompositor_t7E9A7ACFAB7C4BC0CAFC520CB63213C2C5AA1F4A ** get_address_of_U3CcompositorU3Ek__BackingField_5() { return &___U3CcompositorU3Ek__BackingField_5; }
	inline void set_U3CcompositorU3Ek__BackingField_5(CVRCompositor_t7E9A7ACFAB7C4BC0CAFC520CB63213C2C5AA1F4A * value)
	{
		___U3CcompositorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcompositorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoverlayU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CoverlayU3Ek__BackingField_6)); }
	inline CVROverlay_t98FB767D8969B5694A45224BD8D432ACBEE020A8 * get_U3CoverlayU3Ek__BackingField_6() const { return ___U3CoverlayU3Ek__BackingField_6; }
	inline CVROverlay_t98FB767D8969B5694A45224BD8D432ACBEE020A8 ** get_address_of_U3CoverlayU3Ek__BackingField_6() { return &___U3CoverlayU3Ek__BackingField_6; }
	inline void set_U3CoverlayU3Ek__BackingField_6(CVROverlay_t98FB767D8969B5694A45224BD8D432ACBEE020A8 * value)
	{
		___U3CoverlayU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoverlayU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsceneWidthU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CsceneWidthU3Ek__BackingField_11)); }
	inline float get_U3CsceneWidthU3Ek__BackingField_11() const { return ___U3CsceneWidthU3Ek__BackingField_11; }
	inline float* get_address_of_U3CsceneWidthU3Ek__BackingField_11() { return &___U3CsceneWidthU3Ek__BackingField_11; }
	inline void set_U3CsceneWidthU3Ek__BackingField_11(float value)
	{
		___U3CsceneWidthU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsceneHeightU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CsceneHeightU3Ek__BackingField_12)); }
	inline float get_U3CsceneHeightU3Ek__BackingField_12() const { return ___U3CsceneHeightU3Ek__BackingField_12; }
	inline float* get_address_of_U3CsceneHeightU3Ek__BackingField_12() { return &___U3CsceneHeightU3Ek__BackingField_12; }
	inline void set_U3CsceneHeightU3Ek__BackingField_12(float value)
	{
		___U3CsceneHeightU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CaspectU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CaspectU3Ek__BackingField_13)); }
	inline float get_U3CaspectU3Ek__BackingField_13() const { return ___U3CaspectU3Ek__BackingField_13; }
	inline float* get_address_of_U3CaspectU3Ek__BackingField_13() { return &___U3CaspectU3Ek__BackingField_13; }
	inline void set_U3CaspectU3Ek__BackingField_13(float value)
	{
		___U3CaspectU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CfieldOfViewU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CfieldOfViewU3Ek__BackingField_14)); }
	inline float get_U3CfieldOfViewU3Ek__BackingField_14() const { return ___U3CfieldOfViewU3Ek__BackingField_14; }
	inline float* get_address_of_U3CfieldOfViewU3Ek__BackingField_14() { return &___U3CfieldOfViewU3Ek__BackingField_14; }
	inline void set_U3CfieldOfViewU3Ek__BackingField_14(float value)
	{
		___U3CfieldOfViewU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CtanHalfFovU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CtanHalfFovU3Ek__BackingField_15)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CtanHalfFovU3Ek__BackingField_15() const { return ___U3CtanHalfFovU3Ek__BackingField_15; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CtanHalfFovU3Ek__BackingField_15() { return &___U3CtanHalfFovU3Ek__BackingField_15; }
	inline void set_U3CtanHalfFovU3Ek__BackingField_15(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CtanHalfFovU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CtextureBoundsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CtextureBoundsU3Ek__BackingField_16)); }
	inline VRTextureBounds_tU5BU5D_tAE079634A0FDBA61CBA97C5AE3C69BD032940E02* get_U3CtextureBoundsU3Ek__BackingField_16() const { return ___U3CtextureBoundsU3Ek__BackingField_16; }
	inline VRTextureBounds_tU5BU5D_tAE079634A0FDBA61CBA97C5AE3C69BD032940E02** get_address_of_U3CtextureBoundsU3Ek__BackingField_16() { return &___U3CtextureBoundsU3Ek__BackingField_16; }
	inline void set_U3CtextureBoundsU3Ek__BackingField_16(VRTextureBounds_tU5BU5D_tAE079634A0FDBA61CBA97C5AE3C69BD032940E02* value)
	{
		___U3CtextureBoundsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextureBoundsU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeyesU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___U3CeyesU3Ek__BackingField_17)); }
	inline RigidTransformU5BU5D_tC98EB3576009E5D825D0D43671A65D32A2449ECC* get_U3CeyesU3Ek__BackingField_17() const { return ___U3CeyesU3Ek__BackingField_17; }
	inline RigidTransformU5BU5D_tC98EB3576009E5D825D0D43671A65D32A2449ECC** get_address_of_U3CeyesU3Ek__BackingField_17() { return &___U3CeyesU3Ek__BackingField_17; }
	inline void set_U3CeyesU3Ek__BackingField_17(RigidTransformU5BU5D_tC98EB3576009E5D825D0D43671A65D32A2449ECC* value)
	{
		___U3CeyesU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeyesU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_textureType_18() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F, ___textureType_18)); }
	inline int32_t get_textureType_18() const { return ___textureType_18; }
	inline int32_t* get_address_of_textureType_18() { return &___textureType_18; }
	inline void set_textureType_18(int32_t value)
	{
		___textureType_18 = value;
	}
};

struct SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields
{
public:
	// System.Boolean Valve.VR.SteamVR::_enabled
	bool ____enabled_0;
	// Valve.VR.SteamVR Valve.VR.SteamVR::_instance
	SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * ____instance_1;
	// Valve.VR.SteamVR_InitializedStates Valve.VR.SteamVR::initializedState
	int32_t ___initializedState_2;
	// Valve.VR.SteamVR_Settings Valve.VR.SteamVR::<settings>k__BackingField
	SteamVR_Settings_t64E5B6E42EEDC6ACB51C476970EF3AA6270E555C * ___U3CsettingsU3Ek__BackingField_3;
	// System.Boolean Valve.VR.SteamVR::<initializing>k__BackingField
	bool ___U3CinitializingU3Ek__BackingField_7;
	// System.Boolean Valve.VR.SteamVR::<calibrating>k__BackingField
	bool ___U3CcalibratingU3Ek__BackingField_8;
	// System.Boolean Valve.VR.SteamVR::<outOfRange>k__BackingField
	bool ___U3CoutOfRangeU3Ek__BackingField_9;
	// System.Boolean[] Valve.VR.SteamVR::connected
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___connected_10;
	// System.Boolean Valve.VR.SteamVR::runningTemporarySession
	bool ___runningTemporarySession_19;

public:
	inline static int32_t get_offset_of__enabled_0() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ____enabled_0)); }
	inline bool get__enabled_0() const { return ____enabled_0; }
	inline bool* get_address_of__enabled_0() { return &____enabled_0; }
	inline void set__enabled_0(bool value)
	{
		____enabled_0 = value;
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ____instance_1)); }
	inline SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * get__instance_1() const { return ____instance_1; }
	inline SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}

	inline static int32_t get_offset_of_initializedState_2() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___initializedState_2)); }
	inline int32_t get_initializedState_2() const { return ___initializedState_2; }
	inline int32_t* get_address_of_initializedState_2() { return &___initializedState_2; }
	inline void set_initializedState_2(int32_t value)
	{
		___initializedState_2 = value;
	}

	inline static int32_t get_offset_of_U3CsettingsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___U3CsettingsU3Ek__BackingField_3)); }
	inline SteamVR_Settings_t64E5B6E42EEDC6ACB51C476970EF3AA6270E555C * get_U3CsettingsU3Ek__BackingField_3() const { return ___U3CsettingsU3Ek__BackingField_3; }
	inline SteamVR_Settings_t64E5B6E42EEDC6ACB51C476970EF3AA6270E555C ** get_address_of_U3CsettingsU3Ek__BackingField_3() { return &___U3CsettingsU3Ek__BackingField_3; }
	inline void set_U3CsettingsU3Ek__BackingField_3(SteamVR_Settings_t64E5B6E42EEDC6ACB51C476970EF3AA6270E555C * value)
	{
		___U3CsettingsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsettingsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitializingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___U3CinitializingU3Ek__BackingField_7)); }
	inline bool get_U3CinitializingU3Ek__BackingField_7() const { return ___U3CinitializingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CinitializingU3Ek__BackingField_7() { return &___U3CinitializingU3Ek__BackingField_7; }
	inline void set_U3CinitializingU3Ek__BackingField_7(bool value)
	{
		___U3CinitializingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CcalibratingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___U3CcalibratingU3Ek__BackingField_8)); }
	inline bool get_U3CcalibratingU3Ek__BackingField_8() const { return ___U3CcalibratingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CcalibratingU3Ek__BackingField_8() { return &___U3CcalibratingU3Ek__BackingField_8; }
	inline void set_U3CcalibratingU3Ek__BackingField_8(bool value)
	{
		___U3CcalibratingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CoutOfRangeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___U3CoutOfRangeU3Ek__BackingField_9)); }
	inline bool get_U3CoutOfRangeU3Ek__BackingField_9() const { return ___U3CoutOfRangeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CoutOfRangeU3Ek__BackingField_9() { return &___U3CoutOfRangeU3Ek__BackingField_9; }
	inline void set_U3CoutOfRangeU3Ek__BackingField_9(bool value)
	{
		___U3CoutOfRangeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_connected_10() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___connected_10)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_connected_10() const { return ___connected_10; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_connected_10() { return &___connected_10; }
	inline void set_connected_10(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___connected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connected_10), (void*)value);
	}

	inline static int32_t get_offset_of_runningTemporarySession_19() { return static_cast<int32_t>(offsetof(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_StaticFields, ___runningTemporarySession_19)); }
	inline bool get_runningTemporarySession_19() const { return ___runningTemporarySession_19; }
	inline bool* get_address_of_runningTemporarySession_19() { return &___runningTemporarySession_19; }
	inline void set_runningTemporarySession_19(bool value)
	{
		___runningTemporarySession_19 = value;
	}
};


// Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>
struct  SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900  : public SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243
{
public:

public:
};


// Valve.VR.SteamVR_Action_Pose_Base`2<Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>,Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_Pose_Base_2_tBAE9134F2B018AC078BAF24A2A5197F0A976D59A  : public SteamVR_Action_In_2_t2C5C166B83FDF97166A2B5B007C2A5742BBE2199
{
public:

public:
};


// Valve.VR.SteamVR_Action_Pose_Base`2<Valve.VR.SteamVR_Action_Skeleton_Source_Map,Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_Pose_Base_2_tCF260D4E08F45DC042B3B5B7B7A2F6B84880C2C2  : public SteamVR_Action_In_2_t648DCC49A164ED0184532F0961391833D01917D6
{
public:

public:
};


// Valve.VR.SteamVR_Action_Source
struct  SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0  : public RuntimeObject
{
public:
	// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Action_Source::<inputSource>k__BackingField
	int32_t ___U3CinputSourceU3Ek__BackingField_0;
	// System.UInt64 Valve.VR.SteamVR_Action_Source::inputSourceHandle
	uint64_t ___inputSourceHandle_1;
	// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action_Source::action
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action_2;

public:
	inline static int32_t get_offset_of_U3CinputSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___U3CinputSourceU3Ek__BackingField_0)); }
	inline int32_t get_U3CinputSourceU3Ek__BackingField_0() const { return ___U3CinputSourceU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CinputSourceU3Ek__BackingField_0() { return &___U3CinputSourceU3Ek__BackingField_0; }
	inline void set_U3CinputSourceU3Ek__BackingField_0(int32_t value)
	{
		___U3CinputSourceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_inputSourceHandle_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___inputSourceHandle_1)); }
	inline uint64_t get_inputSourceHandle_1() const { return ___inputSourceHandle_1; }
	inline uint64_t* get_address_of_inputSourceHandle_1() { return &___inputSourceHandle_1; }
	inline void set_inputSourceHandle_1(uint64_t value)
	{
		___inputSourceHandle_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___action_2)); }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * get_action_2() const { return ___action_2; }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_2), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_Source_Map
struct  SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_Action_Source_Map::<fullPath>k__BackingField
	String_t* ___U3CfullPathU3Ek__BackingField_0;
	// System.UInt64 Valve.VR.SteamVR_Action_Source_Map::<handle>k__BackingField
	uint64_t ___U3ChandleU3Ek__BackingField_1;
	// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action_Source_Map::<actionSet>k__BackingField
	SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * ___U3CactionSetU3Ek__BackingField_2;
	// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action_Source_Map::<direction>k__BackingField
	int32_t ___U3CdirectionU3Ek__BackingField_3;
	// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action_Source_Map::action
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action_4;

public:
	inline static int32_t get_offset_of_U3CfullPathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CfullPathU3Ek__BackingField_0)); }
	inline String_t* get_U3CfullPathU3Ek__BackingField_0() const { return ___U3CfullPathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CfullPathU3Ek__BackingField_0() { return &___U3CfullPathU3Ek__BackingField_0; }
	inline void set_U3CfullPathU3Ek__BackingField_0(String_t* value)
	{
		___U3CfullPathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullPathU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3ChandleU3Ek__BackingField_1)); }
	inline uint64_t get_U3ChandleU3Ek__BackingField_1() const { return ___U3ChandleU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3ChandleU3Ek__BackingField_1() { return &___U3ChandleU3Ek__BackingField_1; }
	inline void set_U3ChandleU3Ek__BackingField_1(uint64_t value)
	{
		___U3ChandleU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CactionSetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CactionSetU3Ek__BackingField_2)); }
	inline SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * get_U3CactionSetU3Ek__BackingField_2() const { return ___U3CactionSetU3Ek__BackingField_2; }
	inline SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 ** get_address_of_U3CactionSetU3Ek__BackingField_2() { return &___U3CactionSetU3Ek__BackingField_2; }
	inline void set_U3CactionSetU3Ek__BackingField_2(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * value)
	{
		___U3CactionSetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactionSetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CdirectionU3Ek__BackingField_3)); }
	inline int32_t get_U3CdirectionU3Ek__BackingField_3() const { return ___U3CdirectionU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CdirectionU3Ek__BackingField_3() { return &___U3CdirectionU3Ek__BackingField_3; }
	inline void set_U3CdirectionU3Ek__BackingField_3(int32_t value)
	{
		___U3CdirectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___action_4)); }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * get_action_4() const { return ___action_4; }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}
};

struct SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields
{
public:
	// System.String Valve.VR.SteamVR_Action_Source_Map::inLowered
	String_t* ___inLowered_5;
	// System.String Valve.VR.SteamVR_Action_Source_Map::outLowered
	String_t* ___outLowered_6;

public:
	inline static int32_t get_offset_of_inLowered_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields, ___inLowered_5)); }
	inline String_t* get_inLowered_5() const { return ___inLowered_5; }
	inline String_t** get_address_of_inLowered_5() { return &___inLowered_5; }
	inline void set_inLowered_5(String_t* value)
	{
		___inLowered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inLowered_5), (void*)value);
	}

	inline static int32_t get_offset_of_outLowered_6() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields, ___outLowered_6)); }
	inline String_t* get_outLowered_6() const { return ___outLowered_6; }
	inline String_t** get_address_of_outLowered_6() { return &___outLowered_6; }
	inline void set_outLowered_6(String_t* value)
	{
		___outLowered_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outLowered_6), (void*)value);
	}
};


// Valve.VR.TrackedDevicePose_t
struct  TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669  ___mDeviceToAbsoluteTracking_0;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vVelocity
	HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  ___vVelocity_1;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  ___vAngularVelocity_2;
	// Valve.VR.ETrackingResult Valve.VR.TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;

public:
	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_0() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___mDeviceToAbsoluteTracking_0)); }
	inline HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669  get_mDeviceToAbsoluteTracking_0() const { return ___mDeviceToAbsoluteTracking_0; }
	inline HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669 * get_address_of_mDeviceToAbsoluteTracking_0() { return &___mDeviceToAbsoluteTracking_0; }
	inline void set_mDeviceToAbsoluteTracking_0(HmdMatrix34_t_t69CC0A858D1EBF95773929B6228EE953DE612669  value)
	{
		___mDeviceToAbsoluteTracking_0 = value;
	}

	inline static int32_t get_offset_of_vVelocity_1() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___vVelocity_1)); }
	inline HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  get_vVelocity_1() const { return ___vVelocity_1; }
	inline HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A * get_address_of_vVelocity_1() { return &___vVelocity_1; }
	inline void set_vVelocity_1(HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  value)
	{
		___vVelocity_1 = value;
	}

	inline static int32_t get_offset_of_vAngularVelocity_2() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___vAngularVelocity_2)); }
	inline HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  get_vAngularVelocity_2() const { return ___vAngularVelocity_2; }
	inline HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A * get_address_of_vAngularVelocity_2() { return &___vAngularVelocity_2; }
	inline void set_vAngularVelocity_2(HmdVector3_t_t62AE508B69C04959DCD5633927536E28C2E6113A  value)
	{
		___vAngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_eTrackingResult_3() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___eTrackingResult_3)); }
	inline int32_t get_eTrackingResult_3() const { return ___eTrackingResult_3; }
	inline int32_t* get_address_of_eTrackingResult_3() { return &___eTrackingResult_3; }
	inline void set_eTrackingResult_3(int32_t value)
	{
		___eTrackingResult_3 = value;
	}

	inline static int32_t get_offset_of_bPoseIsValid_4() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___bPoseIsValid_4)); }
	inline bool get_bPoseIsValid_4() const { return ___bPoseIsValid_4; }
	inline bool* get_address_of_bPoseIsValid_4() { return &___bPoseIsValid_4; }
	inline void set_bPoseIsValid_4(bool value)
	{
		___bPoseIsValid_4 = value;
	}

	inline static int32_t get_offset_of_bDeviceIsConnected_5() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365, ___bDeviceIsConnected_5)); }
	inline bool get_bDeviceIsConnected_5() const { return ___bDeviceIsConnected_5; }
	inline bool* get_address_of_bDeviceIsConnected_5() { return &___bDeviceIsConnected_5; }
	inline void set_bDeviceIsConnected_5(bool value)
	{
		___bDeviceIsConnected_5 = value;
	}
};


// Valve.VR.VREvent_HDCPError_t
struct  VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E 
{
public:
	// Valve.VR.EHDCPError Valve.VR.VREvent_HDCPError_t::eCode
	int32_t ___eCode_0;

public:
	inline static int32_t get_offset_of_eCode_0() { return static_cast<int32_t>(offsetof(VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E, ___eCode_0)); }
	inline int32_t get_eCode_0() const { return ___eCode_0; }
	inline int32_t* get_address_of_eCode_0() { return &___eCode_0; }
	inline void set_eCode_0(int32_t value)
	{
		___eCode_0 = value;
	}
};


// Valve.VR.VREvent_Property_t
struct  VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5 
{
public:
	// System.UInt64 Valve.VR.VREvent_Property_t::container
	uint64_t ___container_0;
	// Valve.VR.ETrackedDeviceProperty Valve.VR.VREvent_Property_t::prop
	int32_t ___prop_1;

public:
	inline static int32_t get_offset_of_container_0() { return static_cast<int32_t>(offsetof(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5, ___container_0)); }
	inline uint64_t get_container_0() const { return ___container_0; }
	inline uint64_t* get_address_of_container_0() { return &___container_0; }
	inline void set_container_0(uint64_t value)
	{
		___container_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5, ___prop_1)); }
	inline int32_t get_prop_1() const { return ___prop_1; }
	inline int32_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(int32_t value)
	{
		___prop_1 = value;
	}
};


// Valve.VR.VREvent_ShowUI_t
struct  VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997 
{
public:
	// Valve.VR.EShowUIType Valve.VR.VREvent_ShowUI_t::eType
	int32_t ___eType_0;

public:
	inline static int32_t get_offset_of_eType_0() { return static_cast<int32_t>(offsetof(VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997, ___eType_0)); }
	inline int32_t get_eType_0() const { return ___eType_0; }
	inline int32_t* get_address_of_eType_0() { return &___eType_0; }
	inline void set_eType_0(int32_t value)
	{
		___eType_0 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.String>
struct  Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Int32,System.Boolean>
struct  UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>
struct  UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<UnityEngine.Color,System.Single,System.Boolean>
struct  UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC  : public MulticastDelegate_t
{
public:

public:
};


// Valve.VR.InputPoseActionData_t
struct  InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607 
{
public:
	// System.Boolean Valve.VR.InputPoseActionData_t::bActive
	bool ___bActive_0;
	// System.UInt64 Valve.VR.InputPoseActionData_t::activeOrigin
	uint64_t ___activeOrigin_1;
	// Valve.VR.TrackedDevicePose_t Valve.VR.InputPoseActionData_t::pose
	TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365  ___pose_2;

public:
	inline static int32_t get_offset_of_bActive_0() { return static_cast<int32_t>(offsetof(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607, ___bActive_0)); }
	inline bool get_bActive_0() const { return ___bActive_0; }
	inline bool* get_address_of_bActive_0() { return &___bActive_0; }
	inline void set_bActive_0(bool value)
	{
		___bActive_0 = value;
	}

	inline static int32_t get_offset_of_activeOrigin_1() { return static_cast<int32_t>(offsetof(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607, ___activeOrigin_1)); }
	inline uint64_t get_activeOrigin_1() const { return ___activeOrigin_1; }
	inline uint64_t* get_address_of_activeOrigin_1() { return &___activeOrigin_1; }
	inline void set_activeOrigin_1(uint64_t value)
	{
		___activeOrigin_1 = value;
	}

	inline static int32_t get_offset_of_pose_2() { return static_cast<int32_t>(offsetof(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607, ___pose_2)); }
	inline TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365  get_pose_2() const { return ___pose_2; }
	inline TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365 * get_address_of_pose_2() { return &___pose_2; }
	inline void set_pose_2(TrackedDevicePose_t_t0028622C5DF863D4DC12877439D4A679A0D46365  value)
	{
		___pose_2 = value;
	}
};


// Valve.VR.SteamVR_Action_In_Source
struct  SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB  : public SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0
{
public:
	// System.Boolean Valve.VR.SteamVR_Action_In_Source::<isUpdating>k__BackingField
	bool ___U3CisUpdatingU3Ek__BackingField_4;
	// System.Single Valve.VR.SteamVR_Action_In_Source::<updateTime>k__BackingField
	float ___U3CupdateTimeU3Ek__BackingField_5;
	// System.Single Valve.VR.SteamVR_Action_In_Source::<changedTime>k__BackingField
	float ___U3CchangedTimeU3Ek__BackingField_6;
	// System.Int32 Valve.VR.SteamVR_Action_In_Source::<lastOriginGetFrame>k__BackingField
	int32_t ___U3ClastOriginGetFrameU3Ek__BackingField_7;
	// Valve.VR.InputOriginInfo_t Valve.VR.SteamVR_Action_In_Source::inputOriginInfo
	InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  ___inputOriginInfo_8;
	// Valve.VR.InputOriginInfo_t Valve.VR.SteamVR_Action_In_Source::lastInputOriginInfo
	InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  ___lastInputOriginInfo_9;

public:
	inline static int32_t get_offset_of_U3CisUpdatingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___U3CisUpdatingU3Ek__BackingField_4)); }
	inline bool get_U3CisUpdatingU3Ek__BackingField_4() const { return ___U3CisUpdatingU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisUpdatingU3Ek__BackingField_4() { return &___U3CisUpdatingU3Ek__BackingField_4; }
	inline void set_U3CisUpdatingU3Ek__BackingField_4(bool value)
	{
		___U3CisUpdatingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CupdateTimeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___U3CupdateTimeU3Ek__BackingField_5)); }
	inline float get_U3CupdateTimeU3Ek__BackingField_5() const { return ___U3CupdateTimeU3Ek__BackingField_5; }
	inline float* get_address_of_U3CupdateTimeU3Ek__BackingField_5() { return &___U3CupdateTimeU3Ek__BackingField_5; }
	inline void set_U3CupdateTimeU3Ek__BackingField_5(float value)
	{
		___U3CupdateTimeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CchangedTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___U3CchangedTimeU3Ek__BackingField_6)); }
	inline float get_U3CchangedTimeU3Ek__BackingField_6() const { return ___U3CchangedTimeU3Ek__BackingField_6; }
	inline float* get_address_of_U3CchangedTimeU3Ek__BackingField_6() { return &___U3CchangedTimeU3Ek__BackingField_6; }
	inline void set_U3CchangedTimeU3Ek__BackingField_6(float value)
	{
		___U3CchangedTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3ClastOriginGetFrameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___U3ClastOriginGetFrameU3Ek__BackingField_7)); }
	inline int32_t get_U3ClastOriginGetFrameU3Ek__BackingField_7() const { return ___U3ClastOriginGetFrameU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClastOriginGetFrameU3Ek__BackingField_7() { return &___U3ClastOriginGetFrameU3Ek__BackingField_7; }
	inline void set_U3ClastOriginGetFrameU3Ek__BackingField_7(int32_t value)
	{
		___U3ClastOriginGetFrameU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_inputOriginInfo_8() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___inputOriginInfo_8)); }
	inline InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  get_inputOriginInfo_8() const { return ___inputOriginInfo_8; }
	inline InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A * get_address_of_inputOriginInfo_8() { return &___inputOriginInfo_8; }
	inline void set_inputOriginInfo_8(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  value)
	{
		___inputOriginInfo_8 = value;
	}

	inline static int32_t get_offset_of_lastInputOriginInfo_9() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB, ___lastInputOriginInfo_9)); }
	inline InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  get_lastInputOriginInfo_9() const { return ___lastInputOriginInfo_9; }
	inline InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A * get_address_of_lastInputOriginInfo_9() { return &___lastInputOriginInfo_9; }
	inline void set_lastInputOriginInfo_9(InputOriginInfo_t_t3705CF3B58A0333E5B99988AEC0CF03B79777C3A  value)
	{
		___lastInputOriginInfo_9 = value;
	}
};

struct SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB_StaticFields
{
public:
	// System.UInt32 Valve.VR.SteamVR_Action_In_Source::inputOriginInfo_size
	uint32_t ___inputOriginInfo_size_3;

public:
	inline static int32_t get_offset_of_inputOriginInfo_size_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB_StaticFields, ___inputOriginInfo_size_3)); }
	inline uint32_t get_inputOriginInfo_size_3() const { return ___inputOriginInfo_size_3; }
	inline uint32_t* get_address_of_inputOriginInfo_size_3() { return &___inputOriginInfo_size_3; }
	inline void set_inputOriginInfo_size_3(uint32_t value)
	{
		___inputOriginInfo_size_3 = value;
	}
};


// Valve.VR.SteamVR_Action_Pose
struct  SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C  : public SteamVR_Action_Pose_Base_2_tBAE9134F2B018AC078BAF24A2A5197F0A976D59A
{
public:

public:
};


// Valve.VR.SteamVR_Action_Skeleton
struct  SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504  : public SteamVR_Action_Pose_Base_2_tCF260D4E08F45DC042B3B5B7B7A2F6B84880C2C2
{
public:

public:
};

struct SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504_StaticFields
{
public:
	// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Skeleton::steamVRFixUpRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___steamVRFixUpRotation_7;

public:
	inline static int32_t get_offset_of_steamVRFixUpRotation_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504_StaticFields, ___steamVRFixUpRotation_7)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_steamVRFixUpRotation_7() const { return ___steamVRFixUpRotation_7; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_steamVRFixUpRotation_7() { return &___steamVRFixUpRotation_7; }
	inline void set_steamVRFixUpRotation_7(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___steamVRFixUpRotation_7 = value;
	}
};


// Valve.VR.SteamVR_Action_Source_Map`1<System.Object>
struct  SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14  : public SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17
{
public:
	// SourceElement[] Valve.VR.SteamVR_Action_Source_Map`1::sources
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___sources_7;

public:
	inline static int32_t get_offset_of_sources_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14, ___sources_7)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_sources_7() const { return ___sources_7; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_sources_7() { return &___sources_7; }
	inline void set_sources_7(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___sources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_7), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_Source_Map_1_t4A3528A78F542534FFD6E6F281FB9A8905078A20  : public SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17
{
public:
	// SourceElement[] Valve.VR.SteamVR_Action_Source_Map`1::sources
	SteamVR_Action_Pose_SourceU5BU5D_t22552112660E2C6809DF49AE76F3B6C3DF47DA18* ___sources_7;

public:
	inline static int32_t get_offset_of_sources_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_1_t4A3528A78F542534FFD6E6F281FB9A8905078A20, ___sources_7)); }
	inline SteamVR_Action_Pose_SourceU5BU5D_t22552112660E2C6809DF49AE76F3B6C3DF47DA18* get_sources_7() const { return ___sources_7; }
	inline SteamVR_Action_Pose_SourceU5BU5D_t22552112660E2C6809DF49AE76F3B6C3DF47DA18** get_address_of_sources_7() { return &___sources_7; }
	inline void set_sources_7(SteamVR_Action_Pose_SourceU5BU5D_t22552112660E2C6809DF49AE76F3B6C3DF47DA18* value)
	{
		___sources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_7), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_Source_Map`1<Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_Source_Map_1_t27BBF2BA23BB14D6B7B203EF8ABFEF3D68E13AB1  : public SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17
{
public:
	// SourceElement[] Valve.VR.SteamVR_Action_Source_Map`1::sources
	SteamVR_Action_Skeleton_SourceU5BU5D_tD7F80DE17D413EA1E866B222C9A63AEBFF0CE5D4* ___sources_7;

public:
	inline static int32_t get_offset_of_sources_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_1_t27BBF2BA23BB14D6B7B203EF8ABFEF3D68E13AB1, ___sources_7)); }
	inline SteamVR_Action_Skeleton_SourceU5BU5D_tD7F80DE17D413EA1E866B222C9A63AEBFF0CE5D4* get_sources_7() const { return ___sources_7; }
	inline SteamVR_Action_Skeleton_SourceU5BU5D_tD7F80DE17D413EA1E866B222C9A63AEBFF0CE5D4** get_address_of_sources_7() { return &___sources_7; }
	inline void set_sources_7(SteamVR_Action_Skeleton_SourceU5BU5D_tD7F80DE17D413EA1E866B222C9A63AEBFF0CE5D4* value)
	{
		___sources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_7), (void*)value);
	}
};


// Valve.VR.VREvent_Data_t
struct  VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Reserved_t Valve.VR.VREvent_Data_t::reserved
			VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Controller_t Valve.VR.VREvent_Data_t::controller
			VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Mouse_t Valve.VR.VREvent_Data_t::mouse
			VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Scroll_t Valve.VR.VREvent_Data_t::scroll
			VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Process_t Valve.VR.VREvent_Data_t::process
			VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Notification_t Valve.VR.VREvent_Data_t::notification
			VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Overlay_t Valve.VR.VREvent_Data_t::overlay
			VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Status_t Valve.VR.VREvent_Data_t::status
			VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Ipd_t Valve.VR.VREvent_Data_t::ipd
			VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Chaperone_t Valve.VR.VREvent_Data_t::chaperone
			VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_PerformanceTest_t Valve.VR.VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_TouchPadMove_t Valve.VR.VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SeatedZeroPoseReset_t Valve.VR.VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Screenshot_t Valve.VR.VREvent_Data_t::screenshot
			VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ScreenshotProgress_t Valve.VR.VREvent_Data_t::screenshotProgress
			VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  ___screenshotProgress_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  ___screenshotProgress_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ApplicationLaunch_t Valve.VR.VREvent_Data_t::applicationLaunch
			VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  ___applicationLaunch_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  ___applicationLaunch_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_EditingCameraSurface_t Valve.VR.VREvent_Data_t::cameraSurface
			VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  ___cameraSurface_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  ___cameraSurface_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_MessageOverlay_t Valve.VR.VREvent_Data_t::messageOverlay
			VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  ___messageOverlay_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  ___messageOverlay_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Property_t Valve.VR.VREvent_Data_t::property
			VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  ___property_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  ___property_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HapticVibration_t Valve.VR.VREvent_Data_t::hapticVibration
			VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  ___hapticVibration_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  ___hapticVibration_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_WebConsole_t Valve.VR.VREvent_Data_t::webConsole
			VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  ___webConsole_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  ___webConsole_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputBindingLoad_t Valve.VR.VREvent_Data_t::inputBinding
			VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  ___inputBinding_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  ___inputBinding_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SpatialAnchor_t Valve.VR.VREvent_Data_t::spatialAnchor
			VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  ___spatialAnchor_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  ___spatialAnchor_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputActionManifestLoad_t Valve.VR.VREvent_Data_t::actionManifest
			VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  ___actionManifest_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  ___actionManifest_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ProgressUpdate_t Valve.VR.VREvent_Data_t::progressUpdate
			VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  ___progressUpdate_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  ___progressUpdate_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowUI_t Valve.VR.VREvent_Data_t::showUi
			VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  ___showUi_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  ___showUi_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowDevTools_t Valve.VR.VREvent_Data_t::showDevTools
			VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  ___showDevTools_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  ___showDevTools_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HDCPError_t Valve.VR.VREvent_Data_t::hdcpError
			VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  ___hdcpError_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  ___hdcpError_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Keyboard_t Valve.VR.VREvent_Data_t::keyboard
			VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  ___keyboard_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  ___keyboard_28_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___reserved_0)); }
	inline VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  get_reserved_0() const { return ___reserved_0; }
	inline VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3 * get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___controller_1)); }
	inline VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  get_controller_1() const { return ___controller_1; }
	inline VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05 * get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  value)
	{
		___controller_1 = value;
	}

	inline static int32_t get_offset_of_mouse_2() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___mouse_2)); }
	inline VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  get_mouse_2() const { return ___mouse_2; }
	inline VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B * get_address_of_mouse_2() { return &___mouse_2; }
	inline void set_mouse_2(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  value)
	{
		___mouse_2 = value;
	}

	inline static int32_t get_offset_of_scroll_3() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___scroll_3)); }
	inline VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  get_scroll_3() const { return ___scroll_3; }
	inline VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160 * get_address_of_scroll_3() { return &___scroll_3; }
	inline void set_scroll_3(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  value)
	{
		___scroll_3 = value;
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___process_4)); }
	inline VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  get_process_4() const { return ___process_4; }
	inline VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E * get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_notification_5() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___notification_5)); }
	inline VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  get_notification_5() const { return ___notification_5; }
	inline VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB * get_address_of_notification_5() { return &___notification_5; }
	inline void set_notification_5(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  value)
	{
		___notification_5 = value;
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___overlay_6)); }
	inline VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  get_overlay_6() const { return ___overlay_6; }
	inline VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C * get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  value)
	{
		___overlay_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___status_7)); }
	inline VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  get_status_7() const { return ___status_7; }
	inline VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB * get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  value)
	{
		___status_7 = value;
	}

	inline static int32_t get_offset_of_ipd_8() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___ipd_8)); }
	inline VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  get_ipd_8() const { return ___ipd_8; }
	inline VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400 * get_address_of_ipd_8() { return &___ipd_8; }
	inline void set_ipd_8(VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  value)
	{
		___ipd_8 = value;
	}

	inline static int32_t get_offset_of_chaperone_9() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___chaperone_9)); }
	inline VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  get_chaperone_9() const { return ___chaperone_9; }
	inline VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85 * get_address_of_chaperone_9() { return &___chaperone_9; }
	inline void set_chaperone_9(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  value)
	{
		___chaperone_9 = value;
	}

	inline static int32_t get_offset_of_performanceTest_10() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___performanceTest_10)); }
	inline VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  get_performanceTest_10() const { return ___performanceTest_10; }
	inline VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA * get_address_of_performanceTest_10() { return &___performanceTest_10; }
	inline void set_performanceTest_10(VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  value)
	{
		___performanceTest_10 = value;
	}

	inline static int32_t get_offset_of_touchPadMove_11() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___touchPadMove_11)); }
	inline VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  get_touchPadMove_11() const { return ___touchPadMove_11; }
	inline VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D * get_address_of_touchPadMove_11() { return &___touchPadMove_11; }
	inline void set_touchPadMove_11(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  value)
	{
		___touchPadMove_11 = value;
	}

	inline static int32_t get_offset_of_seatedZeroPoseReset_12() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___seatedZeroPoseReset_12)); }
	inline VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  get_seatedZeroPoseReset_12() const { return ___seatedZeroPoseReset_12; }
	inline VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323 * get_address_of_seatedZeroPoseReset_12() { return &___seatedZeroPoseReset_12; }
	inline void set_seatedZeroPoseReset_12(VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  value)
	{
		___seatedZeroPoseReset_12 = value;
	}

	inline static int32_t get_offset_of_screenshot_13() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___screenshot_13)); }
	inline VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  get_screenshot_13() const { return ___screenshot_13; }
	inline VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97 * get_address_of_screenshot_13() { return &___screenshot_13; }
	inline void set_screenshot_13(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  value)
	{
		___screenshot_13 = value;
	}

	inline static int32_t get_offset_of_screenshotProgress_14() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___screenshotProgress_14)); }
	inline VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  get_screenshotProgress_14() const { return ___screenshotProgress_14; }
	inline VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED * get_address_of_screenshotProgress_14() { return &___screenshotProgress_14; }
	inline void set_screenshotProgress_14(VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  value)
	{
		___screenshotProgress_14 = value;
	}

	inline static int32_t get_offset_of_applicationLaunch_15() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___applicationLaunch_15)); }
	inline VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  get_applicationLaunch_15() const { return ___applicationLaunch_15; }
	inline VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389 * get_address_of_applicationLaunch_15() { return &___applicationLaunch_15; }
	inline void set_applicationLaunch_15(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  value)
	{
		___applicationLaunch_15 = value;
	}

	inline static int32_t get_offset_of_cameraSurface_16() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___cameraSurface_16)); }
	inline VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  get_cameraSurface_16() const { return ___cameraSurface_16; }
	inline VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC * get_address_of_cameraSurface_16() { return &___cameraSurface_16; }
	inline void set_cameraSurface_16(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  value)
	{
		___cameraSurface_16 = value;
	}

	inline static int32_t get_offset_of_messageOverlay_17() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___messageOverlay_17)); }
	inline VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  get_messageOverlay_17() const { return ___messageOverlay_17; }
	inline VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1 * get_address_of_messageOverlay_17() { return &___messageOverlay_17; }
	inline void set_messageOverlay_17(VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  value)
	{
		___messageOverlay_17 = value;
	}

	inline static int32_t get_offset_of_property_18() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___property_18)); }
	inline VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  get_property_18() const { return ___property_18; }
	inline VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5 * get_address_of_property_18() { return &___property_18; }
	inline void set_property_18(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  value)
	{
		___property_18 = value;
	}

	inline static int32_t get_offset_of_hapticVibration_19() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___hapticVibration_19)); }
	inline VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  get_hapticVibration_19() const { return ___hapticVibration_19; }
	inline VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F * get_address_of_hapticVibration_19() { return &___hapticVibration_19; }
	inline void set_hapticVibration_19(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  value)
	{
		___hapticVibration_19 = value;
	}

	inline static int32_t get_offset_of_webConsole_20() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___webConsole_20)); }
	inline VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  get_webConsole_20() const { return ___webConsole_20; }
	inline VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75 * get_address_of_webConsole_20() { return &___webConsole_20; }
	inline void set_webConsole_20(VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  value)
	{
		___webConsole_20 = value;
	}

	inline static int32_t get_offset_of_inputBinding_21() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___inputBinding_21)); }
	inline VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  get_inputBinding_21() const { return ___inputBinding_21; }
	inline VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED * get_address_of_inputBinding_21() { return &___inputBinding_21; }
	inline void set_inputBinding_21(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  value)
	{
		___inputBinding_21 = value;
	}

	inline static int32_t get_offset_of_spatialAnchor_22() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___spatialAnchor_22)); }
	inline VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  get_spatialAnchor_22() const { return ___spatialAnchor_22; }
	inline VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473 * get_address_of_spatialAnchor_22() { return &___spatialAnchor_22; }
	inline void set_spatialAnchor_22(VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  value)
	{
		___spatialAnchor_22 = value;
	}

	inline static int32_t get_offset_of_actionManifest_23() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___actionManifest_23)); }
	inline VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  get_actionManifest_23() const { return ___actionManifest_23; }
	inline VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76 * get_address_of_actionManifest_23() { return &___actionManifest_23; }
	inline void set_actionManifest_23(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  value)
	{
		___actionManifest_23 = value;
	}

	inline static int32_t get_offset_of_progressUpdate_24() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___progressUpdate_24)); }
	inline VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  get_progressUpdate_24() const { return ___progressUpdate_24; }
	inline VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE * get_address_of_progressUpdate_24() { return &___progressUpdate_24; }
	inline void set_progressUpdate_24(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  value)
	{
		___progressUpdate_24 = value;
	}

	inline static int32_t get_offset_of_showUi_25() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___showUi_25)); }
	inline VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  get_showUi_25() const { return ___showUi_25; }
	inline VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997 * get_address_of_showUi_25() { return &___showUi_25; }
	inline void set_showUi_25(VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  value)
	{
		___showUi_25 = value;
	}

	inline static int32_t get_offset_of_showDevTools_26() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___showDevTools_26)); }
	inline VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  get_showDevTools_26() const { return ___showDevTools_26; }
	inline VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6 * get_address_of_showDevTools_26() { return &___showDevTools_26; }
	inline void set_showDevTools_26(VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  value)
	{
		___showDevTools_26 = value;
	}

	inline static int32_t get_offset_of_hdcpError_27() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___hdcpError_27)); }
	inline VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  get_hdcpError_27() const { return ___hdcpError_27; }
	inline VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E * get_address_of_hdcpError_27() { return &___hdcpError_27; }
	inline void set_hdcpError_27(VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  value)
	{
		___hdcpError_27 = value;
	}

	inline static int32_t get_offset_of_keyboard_28() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___keyboard_28)); }
	inline VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  get_keyboard_28() const { return ___keyboard_28; }
	inline VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297 * get_address_of_keyboard_28() { return &___keyboard_28; }
	inline void set_keyboard_28(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  value)
	{
		___keyboard_28 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>
struct  SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D  : public SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14
{
public:
	// System.Collections.Generic.List`1<System.Int32> Valve.VR.SteamVR_Action_In_Source_Map`1::updatingSources
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___updatingSources_8;

public:
	inline static int32_t get_offset_of_updatingSources_8() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D, ___updatingSources_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_updatingSources_8() const { return ___updatingSources_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_updatingSources_8() { return &___updatingSources_8; }
	inline void set_updatingSources_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___updatingSources_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updatingSources_8), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_In_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_In_Source_Map_1_t8620836FE3BF53CCD96DF04716DB518EAEEC2584  : public SteamVR_Action_Source_Map_1_t4A3528A78F542534FFD6E6F281FB9A8905078A20
{
public:
	// System.Collections.Generic.List`1<System.Int32> Valve.VR.SteamVR_Action_In_Source_Map`1::updatingSources
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___updatingSources_8;

public:
	inline static int32_t get_offset_of_updatingSources_8() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_Map_1_t8620836FE3BF53CCD96DF04716DB518EAEEC2584, ___updatingSources_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_updatingSources_8() const { return ___updatingSources_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_updatingSources_8() { return &___updatingSources_8; }
	inline void set_updatingSources_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___updatingSources_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updatingSources_8), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_In_Source_Map`1<Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_In_Source_Map_1_t65B6CC75798A38C0D5EA4E4B15FB9C8DE87145B4  : public SteamVR_Action_Source_Map_1_t27BBF2BA23BB14D6B7B203EF8ABFEF3D68E13AB1
{
public:
	// System.Collections.Generic.List`1<System.Int32> Valve.VR.SteamVR_Action_In_Source_Map`1::updatingSources
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___updatingSources_8;

public:
	inline static int32_t get_offset_of_updatingSources_8() { return static_cast<int32_t>(offsetof(SteamVR_Action_In_Source_Map_1_t65B6CC75798A38C0D5EA4E4B15FB9C8DE87145B4, ___updatingSources_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_updatingSources_8() const { return ___updatingSources_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_updatingSources_8() { return &___updatingSources_8; }
	inline void set_updatingSources_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___updatingSources_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updatingSources_8), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_Pose_Source
struct  SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27  : public SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB
{
public:
	// Valve.VR.ETrackingUniverseOrigin Valve.VR.SteamVR_Action_Pose_Source::universeOrigin
	int32_t ___universeOrigin_10;
	// System.Single Valve.VR.SteamVR_Action_Pose_Source::changeTolerance
	float ___changeTolerance_12;
	// Valve.VR.SteamVR_Action_Pose_ActiveChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onActiveChange
	ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * ___onActiveChange_13;
	// Valve.VR.SteamVR_Action_Pose_ActiveChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onActiveBindingChange
	ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * ___onActiveBindingChange_14;
	// Valve.VR.SteamVR_Action_Pose_ChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onChange
	ChangeHandler_tBB749BC376815901B6E13DF03202383F3302BFBE * ___onChange_15;
	// Valve.VR.SteamVR_Action_Pose_UpdateHandler Valve.VR.SteamVR_Action_Pose_Source::onUpdate
	UpdateHandler_t4F6AB1825F5E5CE6A7BBCD6C84541B3DF13C2AA1 * ___onUpdate_16;
	// Valve.VR.SteamVR_Action_Pose_TrackingChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onTrackingChanged
	TrackingChangeHandler_t1CC1FD6A7111B86684B749C4E751B1F5237D2914 * ___onTrackingChanged_17;
	// Valve.VR.SteamVR_Action_Pose_ValidPoseChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onValidPoseChanged
	ValidPoseChangeHandler_t1D487A0B0E2FB0D02C72EF5365E81BCD3E33B41A * ___onValidPoseChanged_18;
	// Valve.VR.SteamVR_Action_Pose_DeviceConnectedChangeHandler Valve.VR.SteamVR_Action_Pose_Source::onDeviceConnectedChanged
	DeviceConnectedChangeHandler_t4AC124A9A94D668A0FB45EA8FC718729CEA3D0D9 * ___onDeviceConnectedChanged_19;
	// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::<changed>k__BackingField
	bool ___U3CchangedU3Ek__BackingField_20;
	// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::<lastChanged>k__BackingField
	bool ___U3ClastChangedU3Ek__BackingField_21;
	// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::<lastActive>k__BackingField
	bool ___U3ClastActiveU3Ek__BackingField_22;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<localPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClocalPositionU3Ek__BackingField_23;
	// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Source::<localRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3ClocalRotationU3Ek__BackingField_24;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<lastLocalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClastLocalPositionU3Ek__BackingField_25;
	// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Source::<lastLocalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3ClastLocalRotationU3Ek__BackingField_26;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CvelocityU3Ek__BackingField_27;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<lastVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClastVelocityU3Ek__BackingField_28;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<angularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CangularVelocityU3Ek__BackingField_29;
	// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::<lastAngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClastAngularVelocityU3Ek__BackingField_30;
	// Valve.VR.InputPoseActionData_t Valve.VR.SteamVR_Action_Pose_Source::poseActionData
	InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  ___poseActionData_31;
	// Valve.VR.InputPoseActionData_t Valve.VR.SteamVR_Action_Pose_Source::lastPoseActionData
	InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  ___lastPoseActionData_32;
	// Valve.VR.InputPoseActionData_t Valve.VR.SteamVR_Action_Pose_Source::tempPoseActionData
	InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  ___tempPoseActionData_33;
	// Valve.VR.SteamVR_Action_Pose Valve.VR.SteamVR_Action_Pose_Source::poseAction
	SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * ___poseAction_34;

public:
	inline static int32_t get_offset_of_universeOrigin_10() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___universeOrigin_10)); }
	inline int32_t get_universeOrigin_10() const { return ___universeOrigin_10; }
	inline int32_t* get_address_of_universeOrigin_10() { return &___universeOrigin_10; }
	inline void set_universeOrigin_10(int32_t value)
	{
		___universeOrigin_10 = value;
	}

	inline static int32_t get_offset_of_changeTolerance_12() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___changeTolerance_12)); }
	inline float get_changeTolerance_12() const { return ___changeTolerance_12; }
	inline float* get_address_of_changeTolerance_12() { return &___changeTolerance_12; }
	inline void set_changeTolerance_12(float value)
	{
		___changeTolerance_12 = value;
	}

	inline static int32_t get_offset_of_onActiveChange_13() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onActiveChange_13)); }
	inline ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * get_onActiveChange_13() const { return ___onActiveChange_13; }
	inline ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E ** get_address_of_onActiveChange_13() { return &___onActiveChange_13; }
	inline void set_onActiveChange_13(ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * value)
	{
		___onActiveChange_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onActiveChange_13), (void*)value);
	}

	inline static int32_t get_offset_of_onActiveBindingChange_14() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onActiveBindingChange_14)); }
	inline ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * get_onActiveBindingChange_14() const { return ___onActiveBindingChange_14; }
	inline ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E ** get_address_of_onActiveBindingChange_14() { return &___onActiveBindingChange_14; }
	inline void set_onActiveBindingChange_14(ActiveChangeHandler_t2BD02546A8103AFCEA506FDB4C84A21F0218D36E * value)
	{
		___onActiveBindingChange_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onActiveBindingChange_14), (void*)value);
	}

	inline static int32_t get_offset_of_onChange_15() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onChange_15)); }
	inline ChangeHandler_tBB749BC376815901B6E13DF03202383F3302BFBE * get_onChange_15() const { return ___onChange_15; }
	inline ChangeHandler_tBB749BC376815901B6E13DF03202383F3302BFBE ** get_address_of_onChange_15() { return &___onChange_15; }
	inline void set_onChange_15(ChangeHandler_tBB749BC376815901B6E13DF03202383F3302BFBE * value)
	{
		___onChange_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onChange_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onUpdate_16)); }
	inline UpdateHandler_t4F6AB1825F5E5CE6A7BBCD6C84541B3DF13C2AA1 * get_onUpdate_16() const { return ___onUpdate_16; }
	inline UpdateHandler_t4F6AB1825F5E5CE6A7BBCD6C84541B3DF13C2AA1 ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(UpdateHandler_t4F6AB1825F5E5CE6A7BBCD6C84541B3DF13C2AA1 * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onTrackingChanged_17() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onTrackingChanged_17)); }
	inline TrackingChangeHandler_t1CC1FD6A7111B86684B749C4E751B1F5237D2914 * get_onTrackingChanged_17() const { return ___onTrackingChanged_17; }
	inline TrackingChangeHandler_t1CC1FD6A7111B86684B749C4E751B1F5237D2914 ** get_address_of_onTrackingChanged_17() { return &___onTrackingChanged_17; }
	inline void set_onTrackingChanged_17(TrackingChangeHandler_t1CC1FD6A7111B86684B749C4E751B1F5237D2914 * value)
	{
		___onTrackingChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTrackingChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_onValidPoseChanged_18() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onValidPoseChanged_18)); }
	inline ValidPoseChangeHandler_t1D487A0B0E2FB0D02C72EF5365E81BCD3E33B41A * get_onValidPoseChanged_18() const { return ___onValidPoseChanged_18; }
	inline ValidPoseChangeHandler_t1D487A0B0E2FB0D02C72EF5365E81BCD3E33B41A ** get_address_of_onValidPoseChanged_18() { return &___onValidPoseChanged_18; }
	inline void set_onValidPoseChanged_18(ValidPoseChangeHandler_t1D487A0B0E2FB0D02C72EF5365E81BCD3E33B41A * value)
	{
		___onValidPoseChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValidPoseChanged_18), (void*)value);
	}

	inline static int32_t get_offset_of_onDeviceConnectedChanged_19() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___onDeviceConnectedChanged_19)); }
	inline DeviceConnectedChangeHandler_t4AC124A9A94D668A0FB45EA8FC718729CEA3D0D9 * get_onDeviceConnectedChanged_19() const { return ___onDeviceConnectedChanged_19; }
	inline DeviceConnectedChangeHandler_t4AC124A9A94D668A0FB45EA8FC718729CEA3D0D9 ** get_address_of_onDeviceConnectedChanged_19() { return &___onDeviceConnectedChanged_19; }
	inline void set_onDeviceConnectedChanged_19(DeviceConnectedChangeHandler_t4AC124A9A94D668A0FB45EA8FC718729CEA3D0D9 * value)
	{
		___onDeviceConnectedChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDeviceConnectedChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchangedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3CchangedU3Ek__BackingField_20)); }
	inline bool get_U3CchangedU3Ek__BackingField_20() const { return ___U3CchangedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CchangedU3Ek__BackingField_20() { return &___U3CchangedU3Ek__BackingField_20; }
	inline void set_U3CchangedU3Ek__BackingField_20(bool value)
	{
		___U3CchangedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3ClastChangedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastChangedU3Ek__BackingField_21)); }
	inline bool get_U3ClastChangedU3Ek__BackingField_21() const { return ___U3ClastChangedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3ClastChangedU3Ek__BackingField_21() { return &___U3ClastChangedU3Ek__BackingField_21; }
	inline void set_U3ClastChangedU3Ek__BackingField_21(bool value)
	{
		___U3ClastChangedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3ClastActiveU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastActiveU3Ek__BackingField_22)); }
	inline bool get_U3ClastActiveU3Ek__BackingField_22() const { return ___U3ClastActiveU3Ek__BackingField_22; }
	inline bool* get_address_of_U3ClastActiveU3Ek__BackingField_22() { return &___U3ClastActiveU3Ek__BackingField_22; }
	inline void set_U3ClastActiveU3Ek__BackingField_22(bool value)
	{
		___U3ClastActiveU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClocalPositionU3Ek__BackingField_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClocalPositionU3Ek__BackingField_23() const { return ___U3ClocalPositionU3Ek__BackingField_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClocalPositionU3Ek__BackingField_23() { return &___U3ClocalPositionU3Ek__BackingField_23; }
	inline void set_U3ClocalPositionU3Ek__BackingField_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClocalPositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalRotationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClocalRotationU3Ek__BackingField_24)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3ClocalRotationU3Ek__BackingField_24() const { return ___U3ClocalRotationU3Ek__BackingField_24; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3ClocalRotationU3Ek__BackingField_24() { return &___U3ClocalRotationU3Ek__BackingField_24; }
	inline void set_U3ClocalRotationU3Ek__BackingField_24(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3ClocalRotationU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3ClastLocalPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastLocalPositionU3Ek__BackingField_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClastLocalPositionU3Ek__BackingField_25() const { return ___U3ClastLocalPositionU3Ek__BackingField_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClastLocalPositionU3Ek__BackingField_25() { return &___U3ClastLocalPositionU3Ek__BackingField_25; }
	inline void set_U3ClastLocalPositionU3Ek__BackingField_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClastLocalPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3ClastLocalRotationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastLocalRotationU3Ek__BackingField_26)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3ClastLocalRotationU3Ek__BackingField_26() const { return ___U3ClastLocalRotationU3Ek__BackingField_26; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3ClastLocalRotationU3Ek__BackingField_26() { return &___U3ClastLocalRotationU3Ek__BackingField_26; }
	inline void set_U3ClastLocalRotationU3Ek__BackingField_26(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3ClastLocalRotationU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CvelocityU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3CvelocityU3Ek__BackingField_27)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CvelocityU3Ek__BackingField_27() const { return ___U3CvelocityU3Ek__BackingField_27; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CvelocityU3Ek__BackingField_27() { return &___U3CvelocityU3Ek__BackingField_27; }
	inline void set_U3CvelocityU3Ek__BackingField_27(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CvelocityU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3ClastVelocityU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastVelocityU3Ek__BackingField_28)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClastVelocityU3Ek__BackingField_28() const { return ___U3ClastVelocityU3Ek__BackingField_28; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClastVelocityU3Ek__BackingField_28() { return &___U3ClastVelocityU3Ek__BackingField_28; }
	inline void set_U3ClastVelocityU3Ek__BackingField_28(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClastVelocityU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CangularVelocityU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3CangularVelocityU3Ek__BackingField_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CangularVelocityU3Ek__BackingField_29() const { return ___U3CangularVelocityU3Ek__BackingField_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CangularVelocityU3Ek__BackingField_29() { return &___U3CangularVelocityU3Ek__BackingField_29; }
	inline void set_U3CangularVelocityU3Ek__BackingField_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CangularVelocityU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3ClastAngularVelocityU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___U3ClastAngularVelocityU3Ek__BackingField_30)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClastAngularVelocityU3Ek__BackingField_30() const { return ___U3ClastAngularVelocityU3Ek__BackingField_30; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClastAngularVelocityU3Ek__BackingField_30() { return &___U3ClastAngularVelocityU3Ek__BackingField_30; }
	inline void set_U3ClastAngularVelocityU3Ek__BackingField_30(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClastAngularVelocityU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_poseActionData_31() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___poseActionData_31)); }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  get_poseActionData_31() const { return ___poseActionData_31; }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607 * get_address_of_poseActionData_31() { return &___poseActionData_31; }
	inline void set_poseActionData_31(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  value)
	{
		___poseActionData_31 = value;
	}

	inline static int32_t get_offset_of_lastPoseActionData_32() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___lastPoseActionData_32)); }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  get_lastPoseActionData_32() const { return ___lastPoseActionData_32; }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607 * get_address_of_lastPoseActionData_32() { return &___lastPoseActionData_32; }
	inline void set_lastPoseActionData_32(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  value)
	{
		___lastPoseActionData_32 = value;
	}

	inline static int32_t get_offset_of_tempPoseActionData_33() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___tempPoseActionData_33)); }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  get_tempPoseActionData_33() const { return ___tempPoseActionData_33; }
	inline InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607 * get_address_of_tempPoseActionData_33() { return &___tempPoseActionData_33; }
	inline void set_tempPoseActionData_33(InputPoseActionData_t_t6F2C776E0AA5528E702E6079C156B7747182C607  value)
	{
		___tempPoseActionData_33 = value;
	}

	inline static int32_t get_offset_of_poseAction_34() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27, ___poseAction_34)); }
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * get_poseAction_34() const { return ___poseAction_34; }
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C ** get_address_of_poseAction_34() { return &___poseAction_34; }
	inline void set_poseAction_34(SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * value)
	{
		___poseAction_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseAction_34), (void*)value);
	}
};

struct SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27_StaticFields
{
public:
	// System.UInt32 Valve.VR.SteamVR_Action_Pose_Source::poseActionData_size
	uint32_t ___poseActionData_size_11;
	// System.Single Valve.VR.SteamVR_Action_Pose_Source::framesAhead
	float ___framesAhead_35;

public:
	inline static int32_t get_offset_of_poseActionData_size_11() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27_StaticFields, ___poseActionData_size_11)); }
	inline uint32_t get_poseActionData_size_11() const { return ___poseActionData_size_11; }
	inline uint32_t* get_address_of_poseActionData_size_11() { return &___poseActionData_size_11; }
	inline void set_poseActionData_size_11(uint32_t value)
	{
		___poseActionData_size_11 = value;
	}

	inline static int32_t get_offset_of_framesAhead_35() { return static_cast<int32_t>(offsetof(SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27_StaticFields, ___framesAhead_35)); }
	inline float get_framesAhead_35() const { return ___framesAhead_35; }
	inline float* get_address_of_framesAhead_35() { return &___framesAhead_35; }
	inline void set_framesAhead_35(float value)
	{
		___framesAhead_35 = value;
	}
};


// Valve.VR.VREvent_t
struct  VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C 
{
public:
	// System.UInt32 Valve.VR.VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Valve.VR.VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Valve.VR.VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Valve.VR.VREvent_Data_t Valve.VR.VREvent_t::data
	VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___data_3)); }
	inline VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  value)
	{
		___data_3 = value;
	}
};


// UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>
struct  UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF  : public MulticastDelegate_t
{
public:

public:
};


// Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>
struct  SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163  : public SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D
{
public:

public:
};


// Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>
struct  SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9  : public SteamVR_Action_In_Source_Map_1_t8620836FE3BF53CCD96DF04716DB518EAEEC2584
{
public:

public:
};


// Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Skeleton_Source>
struct  SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125  : public SteamVR_Action_In_Source_Map_1_t65B6CC75798A38C0D5EA4E4B15FB9C8DE87145B4
{
public:

public:
};


// Valve.VR.SteamVR_Action_Skeleton_Source_Map
struct  SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB  : public SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Valve.VR.EVRInputStringBits[]
struct EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Valve.VR.SteamVR_Action_Pose[]
struct SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * m_Items[1];

public:
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Valve.VR.SteamVR_Action_Skeleton[]
struct SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * m_Items[1];

public:
	inline SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>::SetTrackingUniverseOrigin(Valve.VR.ETrackingUniverseOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m3FA656C01774ECEF66B5CAC7E4B20D0CE8FB8943_gshared (SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 * __this, int32_t ___newOrigin0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_mAB9F6B8404ACCE0D17BEDBD656782FEDDBC9FB8A (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// System.Boolean Valve.VR.SteamVR_Action_In_Source::get_isUpdating()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SteamVR_Action_In_Source_get_isUpdating_m85A55DF822095397B0032B8627D56ABA9F1F0A60_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Void Valve.VR.SteamVR_Action_In_Source::set_isUpdating(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_set_isUpdating_m907328DCCD2733DA877A4914FCEEAA08BF4527EE_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Input::get_isStartupFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Input_get_isStartupFrame_mD1CC14482229680D1CF35F90798A2374A3B8CFE6 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Single Valve.VR.SteamVR_Action_In_Source::get_changedTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SteamVR_Action_In_Source_get_changedTime_m55B868F934C945AF841AD79C7418EE75F54B9319_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.Single Valve.VR.SteamVR_Action_In_Source::get_updateTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SteamVR_Action_In_Source_get_updateTime_m382370EEA7C181B050BF718DBCD8476067A12CA9_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Action_In_Source::get_activeDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_In_Source_get_activeDevice_m889780B67CDEDA524D6D5B264228DF2598AC3ED7 (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.UInt32 Valve.VR.SteamVR_Action_In_Source::get_trackedDeviceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SteamVR_Action_In_Source_get_trackedDeviceIndex_m59E74A19E16DBA17CB6C467C0DB2B2F78FBCB9EE (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_In_Source::get_renderModelComponentName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_Source_get_renderModelComponentName_mC1CB2C1D9A4CC549A42F33229CA0A897918DC116 (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_In_Source::get_localizedOriginName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_Source_get_localizedOriginName_mDC95A0FF89C4C7DC1DE3C14CB77709E74A0F5508 (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_In_Source::GetLocalizedOriginPart(Valve.VR.EVRInputStringBits[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_Source_GetLocalizedOriginPart_m8A1FC7BEF4660C4D7D7573EE13F399C76D325938 (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511* ___localizedParts0, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_In_Source::GetLocalizedOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_Source_GetLocalizedOrigin_m3F7940786DFA6BAC3C618A67EA65C503E585D9CC (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR Valve.VR.SteamVR::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * SteamVR_get_instance_m051B21845BD2F1EACC9DAF67416E7B898EB8E248 (const RuntimeMethod* method);
// System.String Valve.VR.SteamVR::GetStringProperty(Valve.VR.ETrackedDeviceProperty,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_GetStringProperty_m063C0AA17C2A4A8AB6CD5F67042A86050ACC9ED8 (SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * __this, int32_t ___prop0, uint32_t ___deviceId1, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Pose_Source>::SetTrackingUniverseOrigin(Valve.VR.ETrackingUniverseOrigin)
inline void SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m8EBF75CA71099C7A7E1480E9E14AE13613E06B0F (SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 * __this, int32_t ___newOrigin0, const RuntimeMethod* method)
{
	((  void (*) (SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 *, int32_t, const RuntimeMethod*))SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m3FA656C01774ECEF66B5CAC7E4B20D0CE8FB8943_gshared)(__this, ___newOrigin0, method);
}
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<Valve.VR.SteamVR_Action_Skeleton_Source>::SetTrackingUniverseOrigin(Valve.VR.ETrackingUniverseOrigin)
inline void SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m689A1C27C967F079E455944299436F672441C982 (SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125 * __this, int32_t ___newOrigin0, const RuntimeMethod* method)
{
	((  void (*) (SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125 *, int32_t, const RuntimeMethod*))SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m3FA656C01774ECEF66B5CAC7E4B20D0CE8FB8943_gshared)(__this, ___newOrigin0, method);
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_localPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_localPosition_mE065A826D8D1A8CF44D9E7F0D038F24D70985833_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Source::get_localRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Source_get_localRotation_m307D9DD92DFFFCC30446A71D9BD15674A797ED2A_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Source::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Source_get_trackingState_mAA7FE0C2B01A8508823AA7E0D8EED81D5DADCABD (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_velocity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_velocity_m2B71BB7981006080D113442CB374529602A310BF_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_angularVelocity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_angularVelocity_mACAA45CB05DB94C9292ED147F3156109DAFA0209_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::get_poseIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_get_poseIsValid_m45C4445DBD635BF4EDAA590D30874EA233DED74D (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::get_deviceIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_get_deviceIsConnected_mF1AE6114E98F19B5783F49FDB71381DF6D7CC963 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_lastLocalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastLocalPosition_mB748F9D4600498E9BACCEBE5C8F00DED8125C307_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Source::get_lastLocalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Source_get_lastLocalRotation_m15622BCE4A3D32548EBFE7DC98F8751352617660_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Source::get_lastTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Source_get_lastTrackingState_mC3978EC30F22D70155C39DDF5F263447D9273500 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_lastVelocity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastVelocity_mB9FD7955140F713C63842433E1E50D498EAD0A21_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Source::get_lastAngularVelocity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastAngularVelocity_m3EE729ECF16DA55CFE069E25EB9099A80667C55F_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::get_lastPoseIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_get_lastPoseIsValid_mED2AB07587C45C6503F49F9B165A0E4861C35202 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::get_lastDeviceIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_get_lastDeviceIsConnected_m13EFE0AE18A9B2F59BA86780A1A61B9BB367604D (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::GetVelocitiesAtTimeOffset(System.Single,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_GetVelocitiesAtTimeOffset_m68F72C5D84CF5620C5FF8978BCCC52B3F79C7935 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, float ___secondsFromNow0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocityAtTime1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocityAtTime2, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action_Pose_Source::GetPoseAtTimeOffset(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Source_GetPoseAtTimeOffset_m139061D3915BC3462FBEA4CBFCB3BD8DDB7FF4C7 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, float ___secondsFromNow0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___positionAtTime1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotationAtTime2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocityAtTime3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocityAtTime4, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Pose_Source::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Source_UpdateTransform_m83614007AB0B80DB53701A76344CCDFCF92CC730 (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformToUpdate0, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Source_Map::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_Initialize_mF2DCDEC5F104A3F7879C6D0CE8D60483334DBAC6 (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Source_Map::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map__ctor_m357508E2B821CFFCA32DAA7B72C9CEC839318744 (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_Source_Map::get_fullPath()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SteamVR_Action_Source_Map_get_fullPath_m17B3B1227ABDCC35456A1B37EE9919772DD1F24E_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.UInt64 Valve.VR.SteamVR_Action_Source_Map::get_handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_Source_Map_get_handle_mDD116BA67A37900EC7D7FBB831D8C6FD1BA2903D_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action_Source_Map::get_actionSet()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action_Source_Map::get_direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Input_ActionFile_Action::CreateNewName(System.String,Valve.VR.SteamVR_ActionDirections,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Input_ActionFile_Action_CreateNewName_m2762E7D5749B574DADCFC053A0D551E593A3D434 (String_t* ___actionSet0, int32_t ___direction1, String_t* ___actionName2, const RuntimeMethod* method);
// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action::FindExistingActionForPartialPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * SteamVR_Action_FindExistingActionForPartialPath_m3053DA1C5558CD5E5D0C4D1A09E3361C94E3112C (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action::op_Equality(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_op_Equality_m16F1109154021CF7DC424B937A8AA5FC34463EE2 (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action10, SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action21, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action__ctor_m951561A059F566EEBC3EBD45D77C7DB2D2C60359 (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Events/Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4 (Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_1__ctor_mE1F02F18584AAF194990FE1D0754B7766513151A_gshared (U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::<CreateMethodCall>b__0(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass4_0_1_U3CCreateMethodCallU3Eb__0_m38F6A414EAD60EA2EC2CBFF7C78CB38E1BED7351_gshared (U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1 * __this, RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___a1, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_0 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)__this->get_c_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___a1;
		NullCheck((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::<CreateMethodCall>b__1(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass4_0_1_U3CCreateMethodCallU3Eb__1_mD3606B9538B85379079BE61ADDB42FB8F2514AE2_gshared (U3CU3Ec__DisplayClass4_0_1_t54C69E47F13B0AD44FDBC762CD3C5E5AE8D5CBB1 * __this, RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___a1, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = (MethodBase_t *)__this->get_method_1();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___a1;
		NullCheck((MethodBase_t *)L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674((MethodBase_t *)L_0, (RuntimeObject *)L_1, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_1__ctor_m4ADB61B40D08BE70E400C196BD42238659BD5C5D_gshared (U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::<CreateDefaultConstructor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass5_0_1_U3CCreateDefaultConstructorU3Eb__0_mF006E631AF9397CCC2D051EF322A24112F8F07A4_gshared (U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = (Type_t *)__this->get_type_0();
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_0, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
	}
}
// T Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::<CreateDefaultConstructor>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass5_0_1_U3CCreateDefaultConstructorU3Eb__1_m72ABA94DF13429C5F39045473F597125CA8104B7_gshared (U3CU3Ec__DisplayClass5_0_1_tE6E49D9C25B55D65B99D2A14E1D135CDB88E7384 * __this, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_0 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)__this->get_constructorInfo_1();
		NullCheck((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0);
		RuntimeObject * L_1 = ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
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
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_1__ctor_m6B1A5CB7A58DDBEDBDBC263D893C96955EFD7E8D_gshared (U3CU3Ec__DisplayClass6_0_1_tC607F8CE914DC616495517869B38C8D10D496EC2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>::<CreateGet>b__0(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass6_0_1_U3CCreateGetU3Eb__0_m95F9A9514B47E7DB635742B174E6CFB2F0E69A3A_gshared (U3CU3Ec__DisplayClass6_0_1_tC607F8CE914DC616495517869B38C8D10D496EC2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = (PropertyInfo_t *)__this->get_propertyInfo_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck((PropertyInfo_t *)L_0);
		RuntimeObject * L_2 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)L_0, (RuntimeObject *)L_1, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_2;
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
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_1__ctor_mEE7AB96747CD083E464A2A806E186B272244F016_gshared (U3CU3Ec__DisplayClass7_0_1_tDA4A777753C292F8E7229BECCB201D492018125E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::<CreateGet>b__0(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass7_0_1_U3CCreateGetU3Eb__0_m8E8284B23A4E2854B2C8C1DC5D120E4C9BD4DA2A_gshared (U3CU3Ec__DisplayClass7_0_1_tDA4A777753C292F8E7229BECCB201D492018125E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = (FieldInfo_t *)__this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck((FieldInfo_t *)L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)L_0, (RuntimeObject *)L_1);
		return L_2;
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
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_1__ctor_m394D1907055C935673C7D5AFB6F0D3CCC5E46F42_gshared (U3CU3Ec__DisplayClass8_0_1_tCE80B60452706E42B3CB1FFE37C0AA9AFA966CDA * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>::<CreateSet>b__0(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_1_U3CCreateSetU3Eb__0_mE18CD090EEF23AEF68CEB78B35ED21EC145C6FA3_gshared (U3CU3Ec__DisplayClass8_0_1_tCE80B60452706E42B3CB1FFE37C0AA9AFA966CDA * __this, RuntimeObject * ___o0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = (FieldInfo_t *)__this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___o0;
		RuntimeObject * L_2 = ___v1;
		NullCheck((FieldInfo_t *)L_0);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41((FieldInfo_t *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
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
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_1__ctor_m8BBB9D3FF81AD12D1C12178DCE54132BD0B93A25_gshared (U3CU3Ec__DisplayClass9_0_1_tD9FD9DC48459CC7232A45D9773871845C774B5DB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Valve.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>::<CreateSet>b__0(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_1_U3CCreateSetU3Eb__0_m7AD2741B8F12EE2652369562DABF6D97BF38EE34_gshared (U3CU3Ec__DisplayClass9_0_1_tD9FD9DC48459CC7232A45D9773871845C774B5DB * __this, RuntimeObject * ___o0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = (PropertyInfo_t *)__this->get_propertyInfo_0();
		RuntimeObject * L_1 = ___o0;
		RuntimeObject * L_2 = ___v1;
		NullCheck((PropertyInfo_t *)L_0);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
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
// System.Void Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2__ctor_m73E5DB213F8B7F52F5E9B2C3454B44F21578F265_gshared (MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m614565DD357D42A60D8A80E7B1292EF287D88034_gshared (MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___target0, ___args1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args1) - 1), targetMethod);
				}
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___target0, ___args1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___target0) - 1), ___args1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::BeginInvoke(T,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodCall_2_BeginInvoke_mEE00ACA75EB36B18F6A83BD81B97FB5C41458885_gshared (MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult Valve.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_EndInvoke_m4B8593B788D7C38D5B0DE488CE7B9B3282471DDE_gshared (MethodCall_2_t56986CA125FFF5F08B7842782AF0C0E8499096EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_1__ctor_m7988FB268FC5B074E12EE0B56685ECA397439109_gshared (U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1<System.Object>::<ForgivingCaseSensitiveFind>b__0(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_1_U3CForgivingCaseSensitiveFindU3Eb__0_m194F9DE0E894C9F9CAF01651743C12F04E458214_gshared (U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_0 = (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)__this->get_valueSelector_0();
		RuntimeObject * L_1 = ___s0;
		NullCheck((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0);
		String_t* L_2 = ((  String_t* (*) (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		String_t* L_3 = (String_t*)__this->get_testValue_1();
		bool L_4 = String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43((String_t*)L_2, (String_t*)L_3, (int32_t)5, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Valve.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass13_0`1<System.Object>::<ForgivingCaseSensitiveFind>b__1(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_1_U3CForgivingCaseSensitiveFindU3Eb__1_mB7B8F1CB6DC570443AA86AAE87BB57959C76DE79_gshared (U3CU3Ec__DisplayClass13_0_1_t73AEB6CAC7BDCFAA2B905A24863C042ACD506ED4 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_0 = (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)__this->get_valueSelector_0();
		RuntimeObject * L_1 = ___s0;
		NullCheck((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0);
		String_t* L_2 = ((  String_t* (*) (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		String_t* L_3 = (String_t*)__this->get_testValue_1();
		bool L_4 = String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43((String_t*)L_2, (String_t*)L_3, (int32_t)4, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_m64864A801771A6A0BD95E95481F0BC0D06413919_gshared (ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 * __this, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_m64864A801771A6A0BD95E95481F0BC0D06413919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_m64864A801771A6A0BD95E95481F0BC0D06413919_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_m850E4027FEF190D03ED6E7AA601BCE4D8ABA1695_gshared (ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
		RuntimeObject * L_1 = ___key0;
		NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 *)__this, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_mFA63633D9E702F1B2330046EFC714698114A9D03_gshared (ThreadSafeStore_2_t19D22A3563418EE4995064758622E3892119EF92 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_0 = (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)__this->get__creator_2();
		RuntimeObject * L_1 = ___key0;
		NullCheck((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102((RuntimeObject *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_5 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_0022:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_6 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_7 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			RuntimeObject * L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_7);
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0071;
		}

IL_003c:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_10 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			RuntimeObject * L_11 = ___key0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_10, (RuntimeObject *)L_11, (RuntimeObject **)(RuntimeObject **)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0051;
			}
		}

IL_004c:
		{
			RuntimeObject * L_13 = V_2;
			V_4 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}

IL_0051:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_14 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_15 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_3 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_15;
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_16 = V_3;
			RuntimeObject * L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_16);
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_16, (RuntimeObject *)L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Thread_MemoryBarrier_mAB9F6B8404ACCE0D17BEDBD656782FEDDBC9FB8A(/*hidden argument*/NULL);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_19 = V_3;
			__this->set__store_1(L_19);
		}

IL_0071:
		{
			RuntimeObject * L_20 = V_0;
			V_4 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		RuntimeObject * L_21 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		RuntimeObject * L_22 = V_4;
		return L_22;
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
// System.Void Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_m326F7A2B1892AD60B192245345D475865D849EB8_gshared (ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E * __this, Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_m326F7A2B1892AD60B192245345D475865D849EB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_m326F7A2B1892AD60B192245345D475865D849EB8_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_4 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_mCC4CA7817233EBB8CF196D666E830EE5C7C1F498_gshared (ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E * __this, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_0 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)__this->get__store_1();
		TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_1 = ___key0;
		NullCheck((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_0, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E *)__this, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_m12C6F00B147EC9955B8C9127D137EF5A6532725D_gshared (ThreadSafeStore_2_tD81F450F1E882CA01ABD9599FE3AD28E8E39532E * __this, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD * L_0 = (Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD *)__this->get__creator_2();
		TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_1 = ___key0;
		NullCheck((Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE5701C2289C2DE5C70D801898DAB7305A6A10ABD *)L_0, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102((RuntimeObject *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_5 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)__this->get__store_1();
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_0022:
		{
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_6 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_7 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)__this->get__store_1();
			TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_7);
			((  void (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_7, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0071;
		}

IL_003c:
		{
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_10 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)__this->get__store_1();
			TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_11 = ___key0;
			NullCheck((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_10, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_11, (RuntimeObject **)(RuntimeObject **)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0051;
			}
		}

IL_004c:
		{
			RuntimeObject * L_13 = V_2;
			V_4 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}

IL_0051:
		{
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_14 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)__this->get__store_1();
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_15 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_3 = (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_15;
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_16 = V_3;
			TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312  L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_16);
			((  void (*) (Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *, TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F *)L_16, (TypeNameKey_tF95DA6A58197B920C4D8C069E6543C6EEDA08312 )L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Thread_MemoryBarrier_mAB9F6B8404ACCE0D17BEDBD656782FEDDBC9FB8A(/*hidden argument*/NULL);
			Dictionary_2_tBB91D669902493BA471E0673E46EB7A25452FD6F * L_19 = V_3;
			__this->set__store_1(L_19);
		}

IL_0071:
		{
			RuntimeObject * L_20 = V_0;
			V_4 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		RuntimeObject * L_21 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		RuntimeObject * L_22 = V_4;
		return L_22;
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
// System.Void Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_m8C1D384C95449C62D83ACF3512CB67ADF0751281_gshared (ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA * __this, Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_m8C1D384C95449C62D83ACF3512CB67ADF0751281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_m8C1D384C95449C62D83ACF3512CB67ADF0751281_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_4 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_mB618E28BDD383B64592C122AC3E01622E5245DFE_gshared (ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA * __this, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_0 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)__this->get__store_1();
		TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_1 = ___key0;
		NullCheck((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_0, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA *)__this, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Valve.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Valve.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_mCC525A26BEC9639EFE7DE106D946D7283E576BE0_gshared (ThreadSafeStore_2_tBE5EB3789D83BC7AA6DBE568D04C833B0932B1CA * __this, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 * L_0 = (Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 *)__this->get__creator_2();
		TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_1 = ___key0;
		NullCheck((Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tDE4AA5D34E5E9A0D963FBC7291748852FE610006 *)L_0, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102((RuntimeObject *)L_4, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_5 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)__this->get__store_1();
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_0022:
		{
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_6 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_7 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)__this->get__store_1();
			TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_7);
			((  void (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_7, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0071;
		}

IL_003c:
		{
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_10 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)__this->get__store_1();
			TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_11 = ___key0;
			NullCheck((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_10, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_11, (RuntimeObject **)(RuntimeObject **)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0051;
			}
		}

IL_004c:
		{
			RuntimeObject * L_13 = V_2;
			V_4 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}

IL_0051:
		{
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_14 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)__this->get__store_1();
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_15 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_3 = (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_15;
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_16 = V_3;
			TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E  L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_16);
			((  void (*) (Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *, TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 *)L_16, (TypeConvertKey_t6ADB07B666B250DA3F8DBEDF68B409172EFCAF2E )L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Thread_MemoryBarrier_mAB9F6B8404ACCE0D17BEDBD656782FEDDBC9FB8A(/*hidden argument*/NULL);
			Dictionary_2_tEE6CD07DBFF350F97B5ADCDE07537F8F10194C98 * L_19 = V_3;
			__this->set__store_1(L_19);
		}

IL_0071:
		{
			RuntimeObject * L_20 = V_0;
			V_4 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x7D, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		RuntimeObject * L_21 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		RuntimeObject * L_22 = V_4;
		return L_22;
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
// System.Void Valve.VR.InteractionSystem.Util_<>c__47`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__47_1__cctor_m6125392D957083D76FC5AD493635CF09E981B9D4_gshared (const RuntimeMethod* method)
{
	{
		U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * L_0 = (U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Util_<>c__47`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__47_1__ctor_mCBE6D77BFB0D9ACD7A657F76EE2AB5EF61BD6AD8_gshared (U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T Valve.VR.InteractionSystem.Util_<>c__47`1<System.Object>::<Median>b__47_0(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__47_1_U3CMedianU3Eb__47_0_mC506F3EF0D7639021E225239F860CFBE08F3E8E9_gshared (U3CU3Ec__47_1_t54614F076D65061F8ACB066A8E095D62135CEBFF * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		// return source.OrderBy( x => x ).ElementAt( count / 2 );
		RuntimeObject * L_0 = ___x0;
		return L_0;
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
// System.Boolean Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>::IsUpdating(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_In_Source_Map_1_IsUpdating_m42B62F1D9AB85D68C8802F01630E493FD9E5A4AF_gshared (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_Source_Map_1_IsUpdating_m42B62F1D9AB85D68C8802F01630E493FD9E5A4AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// int isUpdatingSourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		V_1 = (int32_t)0;
		goto IL_0024;
	}

IL_0007:
	{
		// if (isUpdatingSourceIndex == updatingSources[sourceIndex])
		int32_t L_1 = V_0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_updatingSources_8();
		int32_t L_3 = V_1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_2);
		int32_t L_4 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_003c;
	}

IL_001f:
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_6 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_7 = V_1;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_updatingSources_8();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8);
		int32_t L_9 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0007;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>::OnAccessSource(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_Map_1_OnAccessSource_mF687BAA4362121649AD62519D882C2CBF673851F_gshared (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_Source_Map_1_OnAccessSource_mF687BAA4362121649AD62519D882C2CBF673851F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SteamVR_Action.startUpdatingSourceOnAccess)
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var);
		bool L_0 = ((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var))->get_startUpdatingSourceOnAccess_2();
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// ForceAddSourceToUpdateList(inputSource);
		int32_t L_2 = ___inputSource0;
		NullCheck((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this);
		((  void (*) (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>::ForceAddSourceToUpdateList(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_Map_1_ForceAddSourceToUpdateList_m5470B6183D388945F754A5D6FD6D495ED51592B2_gshared (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_Source_Map_1_ForceAddSourceToUpdateList_m5470B6183D388945F754A5D6FD6D495ED51592B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// int sourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// if (sources[sourceIndex] == null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// sources[sourceIndex] = new SourceElement();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_7 = V_0;
		RuntimeObject * L_8 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_8);
	}

IL_002e:
	{
		// if (sources[sourceIndex].isUpdating == false)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_12);
		bool L_13 = SteamVR_Action_In_Source_get_isUpdating_m85A55DF822095397B0032B8627D56ABA9F1F0A60_inline((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_12, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		// updatingSources.Add(sourceIndex);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_15 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_updatingSources_8();
		int32_t L_16 = V_0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_15);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_15, (int32_t)L_16, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// sources[sourceIndex].isUpdating = true;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_20);
		SteamVR_Action_In_Source_set_isUpdating_m907328DCCD2733DA877A4914FCEEAA08BF4527EE_inline((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_20, (bool)1, /*hidden argument*/NULL);
		// if (SteamVR_Input.isStartupFrame == false)
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		bool L_21 = SteamVR_Input_get_isStartupFrame_mD1CC14482229680D1CF35F90798A2374A3B8CFE6(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// sources[sourceIndex].UpdateValue();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_26);
		VirtActionInvoker0::Invoke(35 /* System.Void Valve.VR.SteamVR_Action_In_Source::UpdateValue() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_26);
	}

IL_0094:
	{
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>::UpdateValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_Map_1_UpdateValues_m95C60460A969C2142CD970539350489AAF52A16A_gshared (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_Source_Map_1_UpdateValues_m95C60460A969C2142CD970539350489AAF52A16A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		V_0 = (int32_t)0;
		goto IL_002d;
	}

IL_0005:
	{
		// sources[updatingSources[sourceIndex]].UpdateValue();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_updatingSources_8();
		int32_t L_2 = V_0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1);
		int32_t L_3 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_5);
		VirtActionInvoker0::Invoke(35 /* System.Void Valve.VR.SteamVR_Action_In_Source::UpdateValue() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_5);
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002d:
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_7 = V_0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_updatingSources_8();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8);
		int32_t L_9 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_In_Source_Map`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_Map_1__ctor_mABEF0F1512ABB73914B960E4A67930AC81E767F1_gshared (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_Source_Map_1__ctor_mABEF0F1512ABB73914B960E4A67930AC81E767F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<int> updatingSources = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_updatingSources_8(L_0);
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this);
		((  void (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Boolean Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_In_2_get_changed_mE915E70AF76B451BB139F7426AA1B80148ABC838_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool changed { get { return sourceMap[SteamVR_Input_Sources.Any].changed; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean Valve.VR.SteamVR_Action_In_Source::get_changed() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool changed { get { return sourceMap[SteamVR_Input_Sources.Any].changed; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_lastChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_In_2_get_lastChanged_m7057ADBE1326476698B161FAAF40773CD2F8C692_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool lastChanged { get { return sourceMap[SteamVR_Input_Sources.Any].changed; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean Valve.VR.SteamVR_Action_In_Source::get_changed() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool lastChanged { get { return sourceMap[SteamVR_Input_Sources.Any].changed; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Single Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_changedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SteamVR_Action_In_2_get_changedTime_m78B1FA490BC73257C76BB11C9E95AE288DF7E180_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float changedTime { get { return sourceMap[SteamVR_Input_Sources.Any].changedTime; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		float L_2 = SteamVR_Action_In_Source_get_changedTime_m55B868F934C945AF841AD79C7418EE75F54B9319_inline((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (float)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public float changedTime { get { return sourceMap[SteamVR_Input_Sources.Any].changedTime; } }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_updateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SteamVR_Action_In_2_get_updateTime_m83E6D14EE3C80D2F8F4D1B8FB5F012E15195FAC4_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// public float updateTime { get { return sourceMap[SteamVR_Input_Sources.Any].updateTime; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		float L_2 = SteamVR_Action_In_Source_get_updateTime_m382370EEA7C181B050BF718DBCD8476067A12CA9_inline((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (float)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public float updateTime { get { return sourceMap[SteamVR_Input_Sources.Any].updateTime; } }
		float L_3 = V_0;
		return L_3;
	}
}
// System.UInt64 Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_activeOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_In_2_get_activeOrigin_mFCC38E8CA2B30AE8C314113158C2C00CC952C534_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// public ulong activeOrigin { get { return sourceMap[SteamVR_Input_Sources.Any].activeOrigin; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		uint64_t L_2 = VirtFuncInvoker0< uint64_t >::Invoke(29 /* System.UInt64 Valve.VR.SteamVR_Action_In_Source::get_activeOrigin() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		V_0 = (uint64_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public ulong activeOrigin { get { return sourceMap[SteamVR_Input_Sources.Any].activeOrigin; } }
		uint64_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt64 Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_lastActiveOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_In_2_get_lastActiveOrigin_m9B140AA0007CF89D3FE3AF5DEF7FC9884C661AA4_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// public ulong lastActiveOrigin { get { return sourceMap[SteamVR_Input_Sources.Any].lastActiveOrigin; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		uint64_t L_2 = VirtFuncInvoker0< uint64_t >::Invoke(30 /* System.UInt64 Valve.VR.SteamVR_Action_In_Source::get_lastActiveOrigin() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		V_0 = (uint64_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public ulong lastActiveOrigin { get { return sourceMap[SteamVR_Input_Sources.Any].lastActiveOrigin; } }
		uint64_t L_3 = V_0;
		return L_3;
	}
}
// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_activeDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_In_2_get_activeDevice_mD6AD6BA32A29B9D426DB665330C974BEB78D71E4_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public SteamVR_Input_Sources activeDevice { get { return sourceMap[SteamVR_Input_Sources.Any].activeDevice; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		int32_t L_2 = SteamVR_Action_In_Source_get_activeDevice_m889780B67CDEDA524D6D5B264228DF2598AC3ED7((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public SteamVR_Input_Sources activeDevice { get { return sourceMap[SteamVR_Input_Sources.Any].activeDevice; } }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_trackedDeviceIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SteamVR_Action_In_2_get_trackedDeviceIndex_m4CA3B63528B235B675FEE48918018CEC4DD47011_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// public uint trackedDeviceIndex { get { return sourceMap[SteamVR_Input_Sources.Any].trackedDeviceIndex; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		uint32_t L_2 = SteamVR_Action_In_Source_get_trackedDeviceIndex_m59E74A19E16DBA17CB6C467C0DB2B2F78FBCB9EE((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (uint32_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public uint trackedDeviceIndex { get { return sourceMap[SteamVR_Input_Sources.Any].trackedDeviceIndex; } }
		uint32_t L_3 = V_0;
		return L_3;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_renderModelComponentName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_get_renderModelComponentName_m28564617EA391E5AA1A80C4B7F093D08C2C4679F_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string renderModelComponentName { get { return sourceMap[SteamVR_Input_Sources.Any].renderModelComponentName; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		String_t* L_2 = SteamVR_Action_In_Source_get_renderModelComponentName_mC1CB2C1D9A4CC549A42F33229CA0A897918DC116((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (String_t*)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public string renderModelComponentName { get { return sourceMap[SteamVR_Input_Sources.Any].renderModelComponentName; } }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::get_localizedOriginName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_get_localizedOriginName_m6DC7769293229C22E4477B80D54D5CC90409C1D8_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string localizedOriginName { get { return sourceMap[SteamVR_Input_Sources.Any].localizedOriginName; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1);
		String_t* L_2 = SteamVR_Action_In_Source_get_localizedOriginName_mDC95A0FF89C4C7DC1DE3C14CB77709E74A0F5508((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_1, /*hidden argument*/NULL);
		V_0 = (String_t*)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public string localizedOriginName { get { return sourceMap[SteamVR_Input_Sources.Any].localizedOriginName; } }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::UpdateValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_2_UpdateValues_mDF250BD6DCAB3A53A1885F764CFF286678A30BA6_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	{
		// sourceMap.UpdateValues();
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0);
		((  void (*) (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetRenderModelComponentName(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_GetRenderModelComponentName_mB22C49ADA1AF53F848EE253AC6C543AB31060611_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return sourceMap[inputSource].renderModelComponentName;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		String_t* L_3 = SteamVR_Action_In_Source_get_renderModelComponentName_mC1CB2C1D9A4CC549A42F33229CA0A897918DC116((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetActiveDevice(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_In_2_GetActiveDevice_mFFABB0049367379D63A919C31FCBC27D5AC4B372_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return sourceMap[inputSource].activeDevice;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		int32_t L_3 = SteamVR_Action_In_Source_get_activeDevice_m889780B67CDEDA524D6D5B264228DF2598AC3ED7((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.UInt32 Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetDeviceIndex(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SteamVR_Action_In_2_GetDeviceIndex_m6690B9A47E8C462C88ADECB5EA02891FE780E02B_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// return sourceMap[inputSource].trackedDeviceIndex;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		uint32_t L_3 = SteamVR_Action_In_Source_get_trackedDeviceIndex_m59E74A19E16DBA17CB6C467C0DB2B2F78FBCB9EE((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, /*hidden argument*/NULL);
		V_0 = (uint32_t)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetChanged(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_In_2_GetChanged_m96992223D5241815593E70B28B335133600E5C69_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].changed;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean Valve.VR.SteamVR_Action_In_Source::get_changed() */, (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetTimeLastChanged(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SteamVR_Action_In_2_GetTimeLastChanged_mA602530CA515E1047316DF90CE053089B7530FF0_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return sourceMap[inputSource].changedTime;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		float L_3 = SteamVR_Action_In_Source_get_changedTime_m55B868F934C945AF841AD79C7418EE75F54B9319_inline((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, /*hidden argument*/NULL);
		V_0 = (float)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetLocalizedOriginPart(Valve.VR.SteamVR_Input_Sources,Valve.VR.EVRInputStringBits[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_GetLocalizedOriginPart_mEA178543F658F3C193F0ADAECE592F66F35D6A83_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511* ___localizedParts1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return sourceMap[inputSource].GetLocalizedOriginPart(localizedParts);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511* L_3 = ___localizedParts1;
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		String_t* L_4 = SteamVR_Action_In_Source_GetLocalizedOriginPart_m8A1FC7BEF4660C4D7D7573EE13F399C76D325938((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, (EVRInputStringBitsU5BU5D_t9F9E9B47CD745CAAB4F8EDC305D84DDF9E5BE511*)L_3, /*hidden argument*/NULL);
		V_0 = (String_t*)L_4;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetLocalizedOrigin(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_GetLocalizedOrigin_m5A9E92248AED8F86909777D756BC9F486E10FCD6_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return sourceMap[inputSource].GetLocalizedOrigin();
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2);
		String_t* L_3 = SteamVR_Action_In_Source_GetLocalizedOrigin_m3F7940786DFA6BAC3C618A67EA65C503E585D9CC((SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB *)L_2, /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::IsUpdating(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_In_2_IsUpdating_m01BA35F703795271874A64EA33726A70C881F4E0_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap.IsUpdating(inputSource);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0);
		bool L_2 = ((  bool (*) (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (bool)L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::ForceAddSourceToUpdateList(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_2_ForceAddSourceToUpdateList_m1993CD2944CDED4483B9524CBF29B4EFADD4F829_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// sourceMap.ForceAddSourceToUpdateList(inputSource);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0);
		((  void (*) (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.String Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetControllerType(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_In_2_GetControllerType_m2E28257B2E7DCB4B4ACC565AFDCBA2D5C3B777B3_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_In_2_GetControllerType_m2E28257B2E7DCB4B4ACC565AFDCBA2D5C3B777B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return SteamVR.instance.GetStringProperty(ETrackedDeviceProperty.Prop_ControllerType_String, GetDeviceIndex(inputSource));
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F_il2cpp_TypeInfo_var);
		SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F * L_0 = SteamVR_get_instance_m051B21845BD2F1EACC9DAF67416E7B898EB8E248(/*hidden argument*/NULL);
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 *)__this);
		uint32_t L_2 = VirtFuncInvoker1< uint32_t, int32_t >::Invoke(57 /* System.UInt32 Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::GetDeviceIndex(Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 *)__this, (int32_t)L_1);
		NullCheck((SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F *)L_0);
		String_t* L_3 = SteamVR_GetStringProperty_m063C0AA17C2A4A8AB6CD5F67042A86050ACC9ED8((SteamVR_tE14648C0E73A16927B96F72915B425561B0D057F *)L_0, (int32_t)((int32_t)7000), (uint32_t)L_2, /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Valve.VR.SteamVR_Action_In`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_In_2__ctor_m1E68CCDF619CF154D71E1657018F8407C7E9E57C_gshared (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this);
		((  void (*) (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
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
// System.Void Valve.VR.SteamVR_Action_Out`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Out_2__ctor_m57D7973945ED4670545ED47E0BB47329C1939FFF_gshared (SteamVR_Action_Out_2_tBFC90712829F4A53DB24EF908459C469ADC749B7 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this);
		((  void (*) (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::SetUniverseOrigin(Valve.VR.ETrackingUniverseOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Base_2_SetUniverseOrigin_mD2B7C5BD95B32757F2C081384D169A35F877578A_gshared (int32_t ___newOrigin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_Pose_Base_2_SetUniverseOrigin_mD2B7C5BD95B32757F2C081384D169A35F877578A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsPose.Length; actionIndex++)
		V_0 = (int32_t)0;
		goto IL_001e;
	}

IL_0005:
	{
		// SteamVR_Input.actionsPose[actionIndex].sourceMap.SetTrackingUniverseOrigin(newOrigin);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968* L_0 = ((SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var))->get_actionsPose_20();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SteamVR_Action_Pose_tC80CDCF5892F57737ABFCFF1E7BD7DC52951846C * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 * L_4 = (SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 *)((SteamVR_Action_2_tDED2DB9236CA9398BCDCB18DB8DDA3DB1D98FBAC *)L_3)->get_sourceMap_4();
		int32_t L_5 = ___newOrigin0;
		NullCheck((SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 *)L_4);
		SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m8EBF75CA71099C7A7E1480E9E14AE13613E06B0F((SteamVR_Action_Pose_Source_Map_1_t191C12A385C6BE9645B171973AA0141ECCBA76A9 *)L_4, (int32_t)L_5, /*hidden argument*/SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m8EBF75CA71099C7A7E1480E9E14AE13613E06B0F_RuntimeMethod_var);
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsPose.Length; actionIndex++)
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsPose.Length; actionIndex++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		SteamVR_Action_PoseU5BU5D_t0EF45D53BDC6643E07E8EAC0545D47DB35CCE968* L_8 = ((SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var))->get_actionsPose_20();
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsSkeleton.Length; actionIndex++)
		V_2 = (int32_t)0;
		goto IL_0049;
	}

IL_0030:
	{
		// SteamVR_Input.actionsSkeleton[actionIndex].sourceMap.SetTrackingUniverseOrigin(newOrigin);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56* L_10 = ((SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var))->get_actionsSkeleton_21();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SteamVR_Action_Skeleton_t7E7D4C52B0F7C916A35C6CE369BDDA563C478504 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB * L_14 = (SteamVR_Action_Skeleton_Source_Map_t9A588DFCDF65DA8AA617B2170C0E11EB89FA89DB *)((SteamVR_Action_2_t2D32D7E2FBDFB6126D5E6B0594C0F688ED213F5D *)L_13)->get_sourceMap_4();
		int32_t L_15 = ___newOrigin0;
		NullCheck((SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125 *)L_14);
		SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m689A1C27C967F079E455944299436F672441C982((SteamVR_Action_Pose_Source_Map_1_t62FCD50EDE24217AD6FAFADAC23DA65555B7A125 *)L_14, (int32_t)L_15, /*hidden argument*/SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m689A1C27C967F079E455944299436F672441C982_RuntimeMethod_var);
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsSkeleton.Length; actionIndex++)
		int32_t L_16 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0049:
	{
		// for (int actionIndex = 0; actionIndex < SteamVR_Input.actionsSkeleton.Length; actionIndex++)
		int32_t L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		SteamVR_Action_SkeletonU5BU5D_tE7AAA1525F7C292821AB6BD3A1A14BDC0B91FC56* L_18 = ((SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var))->get_actionsSkeleton_21();
		NullCheck(L_18);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_localPosition_m2C2F75316A6FD526B7E490310CD130322FF0AF59_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 localPosition { get { return sourceMap[SteamVR_Input_Sources.Any].localPosition; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_localPosition_mE065A826D8D1A8CF44D9E7F0D038F24D70985833_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 localPosition { get { return sourceMap[SteamVR_Input_Sources.Any].localPosition; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Base_2_get_localRotation_mD5AD27C140726CE0BF8BA5586381967143C1A649_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Quaternion localRotation { get { return sourceMap[SteamVR_Input_Sources.Any].localRotation; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = SteamVR_Action_Pose_Source_get_localRotation_m307D9DD92DFFFCC30446A71D9BD15674A797ED2A_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Quaternion localRotation { get { return sourceMap[SteamVR_Input_Sources.Any].localRotation; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = V_0;
		return L_3;
	}
}
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Base_2_get_trackingState_m28E037A4A346EA7D0545DA71B26C4AA189218E8A_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public ETrackingResult trackingState { get { return sourceMap[SteamVR_Input_Sources.Any].trackingState; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		int32_t L_2 = SteamVR_Action_Pose_Source_get_trackingState_mAA7FE0C2B01A8508823AA7E0D8EED81D5DADCABD((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public ETrackingResult trackingState { get { return sourceMap[SteamVR_Input_Sources.Any].trackingState; } }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_velocity_mAE6FA105E3E62F079A7F4724EE0DECD53EB98CD0_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 velocity { get { return sourceMap[SteamVR_Input_Sources.Any].velocity; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_velocity_m2B71BB7981006080D113442CB374529602A310BF_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 velocity { get { return sourceMap[SteamVR_Input_Sources.Any].velocity; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_angularVelocity_mC6D4C71C76665632F4D5AC62F17F0B2D1A0CC07F_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 angularVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].angularVelocity; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_angularVelocity_mACAA45CB05DB94C9292ED147F3156109DAFA0209_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 angularVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].angularVelocity; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_poseIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_get_poseIsValid_m27CA010E9FF2183DDCE11B5AD1CBD019F051000C_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool poseIsValid { get { return sourceMap[SteamVR_Input_Sources.Any].poseIsValid; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		bool L_2 = SteamVR_Action_Pose_Source_get_poseIsValid_m45C4445DBD635BF4EDAA590D30874EA233DED74D((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool poseIsValid { get { return sourceMap[SteamVR_Input_Sources.Any].poseIsValid; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_deviceIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_get_deviceIsConnected_mE0BB47F203C42C39ED82DD24E2043EAD4024BBC2_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool deviceIsConnected { get { return sourceMap[SteamVR_Input_Sources.Any].deviceIsConnected; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		bool L_2 = SteamVR_Action_Pose_Source_get_deviceIsConnected_mF1AE6114E98F19B5783F49FDB71381DF6D7CC963((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool deviceIsConnected { get { return sourceMap[SteamVR_Input_Sources.Any].deviceIsConnected; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_lastLocalPosition_mE51096ECD4AB3702E4878E20CD6A91C2D2D1917C_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 lastLocalPosition { get { return sourceMap[SteamVR_Input_Sources.Any].lastLocalPosition; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_lastLocalPosition_mB748F9D4600498E9BACCEBE5C8F00DED8125C307_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 lastLocalPosition { get { return sourceMap[SteamVR_Input_Sources.Any].lastLocalPosition; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Base_2_get_lastLocalRotation_m354F00363DAE4A3F099098EA76969247A1A76F3B_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Quaternion lastLocalRotation { get { return sourceMap[SteamVR_Input_Sources.Any].lastLocalRotation; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = SteamVR_Action_Pose_Source_get_lastLocalRotation_m15622BCE4A3D32548EBFE7DC98F8751352617660_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Quaternion lastLocalRotation { get { return sourceMap[SteamVR_Input_Sources.Any].lastLocalRotation; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = V_0;
		return L_3;
	}
}
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Base_2_get_lastTrackingState_mF639B19C2069E0A35DC1D6A665739365E7B49A0C_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public ETrackingResult lastTrackingState { get { return sourceMap[SteamVR_Input_Sources.Any].lastTrackingState; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		int32_t L_2 = SteamVR_Action_Pose_Source_get_lastTrackingState_mC3978EC30F22D70155C39DDF5F263447D9273500((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public ETrackingResult lastTrackingState { get { return sourceMap[SteamVR_Input_Sources.Any].lastTrackingState; } }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_lastVelocity_m320BEB617DECF7E09874348EA07CC521B0023488_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 lastVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].lastVelocity; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_lastVelocity_mB9FD7955140F713C63842433E1E50D498EAD0A21_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 lastVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].lastVelocity; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_get_lastAngularVelocity_m9C0E1672D774467A1F5C4945548C7D5DDB32A9E2_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 lastAngularVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].lastAngularVelocity; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SteamVR_Action_Pose_Source_get_lastAngularVelocity_m3EE729ECF16DA55CFE069E25EB9099A80667C55F_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public Vector3 lastAngularVelocity { get { return sourceMap[SteamVR_Input_Sources.Any].lastAngularVelocity; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastPoseIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_get_lastPoseIsValid_m676EE4A8499EF540C7EE76215ECFF85B602825B7_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool lastPoseIsValid { get { return sourceMap[SteamVR_Input_Sources.Any].lastPoseIsValid; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		bool L_2 = SteamVR_Action_Pose_Source_get_lastPoseIsValid_mED2AB07587C45C6503F49F9B165A0E4861C35202((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool lastPoseIsValid { get { return sourceMap[SteamVR_Input_Sources.Any].lastPoseIsValid; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::get_lastDeviceIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_get_lastDeviceIsConnected_m6E8BBA4896FD71A660BB0B608B3EDD1857215EA8_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool lastDeviceIsConnected { get { return sourceMap[SteamVR_Input_Sources.Any].lastDeviceIsConnected; } }
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1);
		bool L_2 = SteamVR_Action_Pose_Source_get_lastDeviceIsConnected_m13EFE0AE18A9B2F59BA86780A1A61B9BB367604D((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public bool lastDeviceIsConnected { get { return sourceMap[SteamVR_Input_Sources.Any].lastDeviceIsConnected; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Base_2__ctor_m15192F31C4B54121755BF28201D51E0616710270_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, const RuntimeMethod* method)
{
	{
		// public SteamVR_Action_Pose_Base() { }
		NullCheck((SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 *)__this);
		((  void (*) (SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SteamVR_Action_In_2_t69D3F3E304EB8FE2A070ACD581E61CDFF8732243 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// public SteamVR_Action_Pose_Base() { }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::UpdateValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Base_2_UpdateValues_mAE8081CEC78ABECAA8A7ACCE7BAC8BB960387E10_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, bool ___skipStateAndEventUpdates0, const RuntimeMethod* method)
{
	{
		// sourceMap.UpdateValues(skipStateAndEventUpdates);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		bool L_1 = ___skipStateAndEventUpdates0;
		NullCheck((SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 *)L_0);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>::UpdateValues(System.Boolean) */, (SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 *)L_0, (bool)L_1);
		// }
		return;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetVelocitiesAtTimeOffset(Valve.VR.SteamVR_Input_Sources,System.Single,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetVelocitiesAtTimeOffset_m15A4721243992DC5FCD9B53EA619B1C4EF724EC9_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, float ___secondsFromNow1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].GetVelocitiesAtTimeOffset(secondsFromNow, out velocity, out angularVelocity);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_3 = ___secondsFromNow1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___velocity2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = ___angularVelocity3;
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_6 = SteamVR_Action_Pose_Source_GetVelocitiesAtTimeOffset_m68F72C5D84CF5620C5FF8978BCCC52B3F79C7935((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, (float)L_3, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_5, /*hidden argument*/NULL);
		V_0 = (bool)L_6;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetPoseAtTimeOffset(Valve.VR.SteamVR_Input_Sources,System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetPoseAtTimeOffset_mC1EBDF050E48FBD14DA5C14092F2D3A687784928_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, float ___secondsFromNow1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___localPosition2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___localRotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity4, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity5, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].GetPoseAtTimeOffset(secondsFromNow, out localPosition, out localRotation, out velocity, out angularVelocity);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		float L_3 = ___secondsFromNow1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___localPosition2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_5 = ___localRotation3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = ___velocity4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = ___angularVelocity5;
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_8 = SteamVR_Action_Pose_Source_GetPoseAtTimeOffset_m139061D3915BC3462FBEA4CBFCB3BD8DDB7FF4C7((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, (float)L_3, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_6, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_7, /*hidden argument*/NULL);
		V_0 = (bool)L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::UpdateTransform(Valve.VR.SteamVR_Input_Sources,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Base_2_UpdateTransform_mE9D3E5DFD2370F00E7287783C9B240C1796C6071_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformToUpdate1, const RuntimeMethod* method)
{
	{
		// sourceMap[inputSource].UpdateTransform(transformToUpdate);
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___transformToUpdate1;
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		SteamVR_Action_Pose_Source_UpdateTransform_m83614007AB0B80DB53701A76344CCDFCF92CC730((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLocalPosition(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetLocalPosition_m5502F79EF9173FA7C74AC6E14B7FBC82D3650FD0_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].localPosition;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_localPosition_mE065A826D8D1A8CF44D9E7F0D038F24D70985833_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLocalRotation(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Base_2_GetLocalRotation_m0CDCC180B574A3455CB812DF1F7FA610A488F2DE_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].localRotation;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = SteamVR_Action_Pose_Source_get_localRotation_m307D9DD92DFFFCC30446A71D9BD15674A797ED2A_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetVelocity(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetVelocity_m79C8F0BDEE7A9DC694E0155374838A8F391CA5EF_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].velocity;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_velocity_m2B71BB7981006080D113442CB374529602A310BF_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetAngularVelocity(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetAngularVelocity_mC5BE430EFA3FD3897A028CF8141741337145A1B6_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].angularVelocity;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_angularVelocity_mACAA45CB05DB94C9292ED147F3156109DAFA0209_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetDeviceIsConnected(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetDeviceIsConnected_mAA5FB2C3FFE78C72F929772799FD956E6E24A4BB_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].deviceIsConnected;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_3 = SteamVR_Action_Pose_Source_get_deviceIsConnected_mF1AE6114E98F19B5783F49FDB71381DF6D7CC963((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetPoseIsValid(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetPoseIsValid_m31C1BFA4659BD7563C9A1F88B3EC2FC38F7CB72C_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].poseIsValid;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_3 = SteamVR_Action_Pose_Source_get_poseIsValid_m45C4445DBD635BF4EDAA590D30874EA233DED74D((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetTrackingResult(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Base_2_GetTrackingResult_m104B0FF12FD6A572A3E24838446B0FC8534BA470_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return sourceMap[inputSource].trackingState;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		int32_t L_3 = SteamVR_Action_Pose_Source_get_trackingState_mAA7FE0C2B01A8508823AA7E0D8EED81D5DADCABD((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastLocalPosition(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetLastLocalPosition_mAB52974AECBB4C362B8A1259C33B3747B17B37C6_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].lastLocalPosition;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_lastLocalPosition_mB748F9D4600498E9BACCEBE5C8F00DED8125C307_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastLocalRotation(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Base_2_GetLastLocalRotation_m7F7D8897EB5DC3BD251CF88626DF67A0F44C6C0A_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].lastLocalRotation;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = SteamVR_Action_Pose_Source_get_lastLocalRotation_m15622BCE4A3D32548EBFE7DC98F8751352617660_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastVelocity(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetLastVelocity_mBADA7CA9FC7513D368EA66ECD765D2BC31E548EF_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].lastVelocity;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_lastVelocity_mB9FD7955140F713C63842433E1E50D498EAD0A21_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastAngularVelocity(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Base_2_GetLastAngularVelocity_m7F287E8C0681625F3D306CDD276C518AAE221A98_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return sourceMap[inputSource].lastAngularVelocity;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SteamVR_Action_Pose_Source_get_lastAngularVelocity_m3EE729ECF16DA55CFE069E25EB9099A80667C55F_inline((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastDeviceIsConnected(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetLastDeviceIsConnected_m3DB88417EC2713DA71449074CEB16A9A29889CB5_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].lastDeviceIsConnected;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_3 = SteamVR_Action_Pose_Source_get_lastDeviceIsConnected_m13EFE0AE18A9B2F59BA86780A1A61B9BB367604D((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastPoseIsValid(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Pose_Base_2_GetLastPoseIsValid_m29D030F0A18CE88A0FA93096DE2AEB8494D13884_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].lastPoseIsValid;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		bool L_3 = SteamVR_Action_Pose_Source_get_lastPoseIsValid_mED2AB07587C45C6503F49F9B165A0E4861C35202((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// Valve.VR.ETrackingResult Valve.VR.SteamVR_Action_Pose_Base`2<System.Object,System.Object>::GetLastTrackingResult(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Pose_Base_2_GetLastTrackingResult_mC01E8F8D92786187EC472714E206CB3F48B9558A_gshared (SteamVR_Action_Pose_Base_2_tE4721EEBBC945BAAF6FF57A49BF6EB4ACDB13900 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return sourceMap[inputSource].lastTrackingState;
		RuntimeObject * L_0 = (RuntimeObject *)((SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B *)__this)->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2);
		int32_t L_3 = SteamVR_Action_Pose_Source_get_lastTrackingState_mC3978EC30F22D70155C39DDF5F263447D9273500((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_2, /*hidden argument*/NULL);
		V_0 = (int32_t)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
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
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>::SetTrackingUniverseOrigin(Valve.VR.ETrackingUniverseOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Source_Map_1_SetTrackingUniverseOrigin_m3FA656C01774ECEF66B5CAC7E4B20D0CE8FB8943_gshared (SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 * __this, int32_t ___newOrigin0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		V_0 = (int32_t)0;
		goto IL_003a;
	}

IL_0005:
	{
		// if (sources[sourceIndex] != null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// sources[sourceIndex].universeOrigin = newOrigin;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___newOrigin0;
		NullCheck(L_8);
		((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_8)->set_universeOrigin_10(L_9);
	}

IL_0035:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_10 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003a:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>::UpdateValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Source_Map_1_UpdateValues_mCE5CB3D806E602B7AB83CB62EE250E25173C8C93_gshared (SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 * __this, bool ___skipStateAndEventUpdates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_Pose_Source_Map_1_UpdateValues_mCE5CB3D806E602B7AB83CB62EE250E25173C8C93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0005:
	{
		// sources[updatingSources[sourceIndex]].UpdateValue(skipStateAndEventUpdates);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this)->get_sources_7();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this)->get_updatingSources_8();
		int32_t L_2 = V_0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1);
		int32_t L_3 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6 = ___skipStateAndEventUpdates0;
		NullCheck((SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_5);
		VirtActionInvoker1< bool >::Invoke(50 /* System.Void Valve.VR.SteamVR_Action_Pose_Source::UpdateValue(System.Boolean) */, (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 *)L_5, (bool)L_6);
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002e:
	{
		// for (int sourceIndex = 0; sourceIndex < updatingSources.Count; sourceIndex++)
		int32_t L_8 = V_0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_9 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this)->get_updatingSources_8();
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_9);
		int32_t L_10 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_9, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Pose_Source_Map`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Pose_Source_Map_1__ctor_mBB8E245C3E0BAADAA79082AA6FC40445EBC7C41E_gshared (SteamVR_Action_Pose_Source_Map_1_t8D737DFC58E320B9252D6AC46CC512D3AA443163 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this);
		((  void (*) (SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_In_Source_Map_1_t7F4F1E354FE5A814AEA83C884D31215ED36A1A8D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::get_Item(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_Source_Map_1_get_Item_mE7E2BE18AECB1CDFEADB1E81CEC1C729BBACAB4D_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return GetSourceElementForIndexer(inputSource);
		int32_t L_0 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this);
		RuntimeObject * L_1 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(8 /* SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::GetSourceElementForIndexer(Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this, (int32_t)L_0);
		V_0 = (RuntimeObject *)L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::OnAccessSource(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_OnAccessSource_m3879C2897B7327A9642495D50E00A8EC1044CD6B_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// protected virtual void OnAccessSource(SteamVR_Input_Sources inputSource) { }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_Initialize_m7673E53CF5C54AE9E29E5C912CED4F2AC7E8846C_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// base.Initialize();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this);
		SteamVR_Action_Source_Map_Initialize_mF2DCDEC5F104A3F7879C6D0CE8D60483334DBAC6((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this, /*hidden argument*/NULL);
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		V_0 = (int32_t)0;
		goto IL_0041;
	}

IL_000c:
	{
		// if (sources[sourceIndex] != null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// sources[sourceIndex].Initialize();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_8);
		VirtActionInvoker0::Invoke(18 /* System.Void Valve.VR.SteamVR_Action_Source::Initialize() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_8);
	}

IL_003c:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_9 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0041:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_10 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		NullCheck(L_11);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::PreinitializeMap(Valve.VR.SteamVR_Input_Sources,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_PreinitializeMap_m58FD5D0159FEF28A5B1BBBE44806DBD458AA2389_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, int32_t ___inputSource0, SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___wrappingAction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int sourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// sources[sourceIndex] = new SourceElement();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)L_3);
		// sources[sourceIndex].Preinitialize(wrappingAction, inputSource);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_8 = ___wrappingAction1;
		int32_t L_9 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7);
		VirtActionInvoker2< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, int32_t >::Invoke(17 /* System.Void Valve.VR.SteamVR_Action_Source::Preinitialize(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_8, (int32_t)L_9);
		// }
		return;
	}
}
// SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::GetSourceElementForIndexer(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_Source_Map_1_GetSourceElementForIndexer_mB289B7541F0618D1A6AA9B0AC722DAC1C8325CB7_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// int sourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// OnAccessSource(inputSource);
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::OnAccessSource(Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)__this, (int32_t)L_1);
		// return sources[sourceIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (RuntimeObject *)L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1__ctor_mE8EB35AF2F507C1EA04DB21FFAE722DFE57C6B25_gshared (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_Source_Map_1__ctor_mE8EB35AF2F507C1EA04DB21FFAE722DFE57C6B25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SourceElement[] sources = new SourceElement[SteamVR_Input_Source.numSources];
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var))->get_numSources_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (uint32_t)L_0);
		__this->set_sources_7(L_1);
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_il2cpp_TypeInfo_var);
		SteamVR_Action_Source_Map__ctor_m357508E2B821CFFCA32DAA7B72C9CEC839318744((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this, /*hidden argument*/NULL);
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
// SourceElement Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_Item(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_2_get_Item_m3F8CB2C93F816BEE28E29AD04C2B536686F384F9_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return sourceMap[inputSource];
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.String Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_fullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_2_get_fullPath_mA709ADC9AB4033CFC345868481FAF705E2E2D55B_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return sourceMap.fullPath;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		String_t* L_1 = SteamVR_Action_Source_Map_get_fullPath_m17B3B1227ABDCC35456A1B37EE9919772DD1F24E_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		V_0 = (String_t*)L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_2_get_handle_m6274B27ECC1CF2CAA723778F0939D6190D6F61F3_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// public override ulong handle { get { return sourceMap.handle; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		uint64_t L_1 = SteamVR_Action_Source_Map_get_handle_mDD116BA67A37900EC7D7FBB831D8C6FD1BA2903D_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint64_t)L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// public override ulong handle { get { return sourceMap.handle; } }
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_actionSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_2_get_actionSet_m6E8276FC26AC2A483BE7A58E24D1F410EDF83A5B_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * V_0 = NULL;
	{
		// return sourceMap.actionSet;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * L_1 = SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		V_0 = (SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 *)L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * L_2 = V_0;
		return L_2;
	}
}
// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_2_get_direction_m7DE1AA43BD64E9EBC25E0E7DEF5EA52251ACC87E_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return sourceMap.direction;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		int32_t L_1 = SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_active_m4C89212D64DD1907BC8F66037FCB5EB523A9AFD1_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool active { get { return sourceMap[SteamVR_Input_Sources.Any].active; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_active() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public override bool active { get { return sourceMap[SteamVR_Input_Sources.Any].active; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_lastActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_lastActive_m4A4FA8CB4345925A89433DB51DC810338255520E_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool lastActive { get { return sourceMap[SteamVR_Input_Sources.Any].lastActive; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActive() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public override bool lastActive { get { return sourceMap[SteamVR_Input_Sources.Any].lastActive; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_activeBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_activeBinding_mF3A230DE4A834DA43D00F8F964D2DE0A5A74A865_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool activeBinding { get { return sourceMap[SteamVR_Input_Sources.Any].activeBinding; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_activeBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public override bool activeBinding { get { return sourceMap[SteamVR_Input_Sources.Any].activeBinding; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_lastActiveBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_lastActiveBinding_mB30723DC5476D4EBDC7BFFCBB6B37A6F3D7ABE8B_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public override bool lastActiveBinding { get { return sourceMap[SteamVR_Input_Sources.Any].lastActiveBinding; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActiveBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		V_0 = (bool)L_2;
		goto IL_001f;
	}

IL_001f:
	{
		// public override bool lastActiveBinding { get { return sourceMap[SteamVR_Input_Sources.Any].lastActiveBinding; } }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::PreInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_PreInitialize_m0AAD2A4A1F1838ED74DC0A02A4D690B96929D818_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, String_t* ___newActionPath0, const RuntimeMethod* method)
{
	{
		// actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// sourceMap = new SourceMap();
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_1);
		// sourceMap.PreInitialize(this, actionPath);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_3, (bool)1);
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::CreateUninitialized(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_CreateUninitialized_m9D343A458164EBDFB4261620744A1A23FF838A90_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, String_t* ___newActionPath0, bool ___caseSensitive1, const RuntimeMethod* method)
{
	{
		// actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// sourceMap = new SourceMap();
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_1);
		// sourceMap.PreInitialize(this, actionPath, false);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_3, (bool)0);
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// initialized = false;
		__this->set_initialized_5((bool)0);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::CreateUninitialized(System.String,Valve.VR.SteamVR_ActionDirections,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_CreateUninitialized_m5A3FD071535BCBFB7B21641E066BC2BC78C4EE25_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, String_t* ___newActionSet0, int32_t ___direction1, String_t* ___newAction2, bool ___caseSensitive3, const RuntimeMethod* method)
{
	{
		// actionPath = SteamVR_Input_ActionFile_Action.CreateNewName(newActionSet, direction, newAction);
		String_t* L_0 = ___newActionSet0;
		int32_t L_1 = ___direction1;
		String_t* L_2 = ___newAction2;
		String_t* L_3 = SteamVR_Input_ActionFile_Action_CreateNewName_m2762E7D5749B574DADCFC053A0D551E593A3D434((String_t*)L_0, (int32_t)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_3);
		// sourceMap = new SourceMap();
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_4);
		// sourceMap.PreInitialize(this, actionPath, false);
		RuntimeObject * L_5 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_6 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_5);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_5, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_6, (bool)0);
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// initialized = false;
		__this->set_initialized_5((bool)0);
		// }
		return;
	}
}
// System.String Valve.VR.SteamVR_Action`2<System.Object,System.Object>::TryNeedsInitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_2_TryNeedsInitData_m0583C85672E85527F54B5651A3F8FBC528775420_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2_TryNeedsInitData_m0583C85672E85527F54B5651A3F8FBC528775420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (needsReinit && actionPath != null)
		bool L_0 = (bool)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_needsReinit_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		G_B3_0 = ((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0077;
		}
	}
	{
		// SteamVR_Action existingAction = FindExistingActionForPartialPath(actionPath);
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var);
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_4 = SteamVR_Action_FindExistingActionForPartialPath_m3053DA1C5558CD5E5D0C4D1A09E3361C94E3112C((String_t*)L_3, /*hidden argument*/NULL);
		V_1 = (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_4;
		// if (existingAction == null)
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_5 = V_1;
		bool L_6 = SteamVR_Action_op_Equality_m16F1109154021CF7DC424B937A8AA5FC34463EE2((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_5, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)NULL, /*hidden argument*/NULL);
		V_2 = (bool)L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// this.sourceMap = null;
		RuntimeObject ** L_8 = (RuntimeObject **)__this->get_address_of_sourceMap_4();
		il2cpp_codegen_initobj(L_8, sizeof(RuntimeObject *));
		goto IL_0076;
	}

IL_0041:
	{
		// this.actionPath = existingAction.fullPath;
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_9 = V_1;
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String Valve.VR.SteamVR_Action::get_fullPath() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_9);
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_10);
		// this.sourceMap = (SourceMap)existingAction.GetSourceMap();
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_11 = V_1;
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_11);
		SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * L_12 = VirtFuncInvoker0< SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * >::Invoke(30 /* Valve.VR.SteamVR_Action_Source_Map Valve.VR.SteamVR_Action::GetSourceMap() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_11);
		__this->set_sourceMap_4(((RuntimeObject *)Castclass((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))));
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// needsReinit = false;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)0);
		// return actionPath;
		String_t* L_13 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		V_3 = (String_t*)L_13;
		goto IL_007b;
	}

IL_0076:
	{
	}

IL_0077:
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		String_t* L_14 = V_3;
		return L_14;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::Initialize(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_Initialize_mAC98709EEB89AD1E0E53E38F59DDAADF77E1FD3A_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, bool ___createNew0, bool ___throwErrors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2_Initialize_mAC98709EEB89AD1E0E53E38F59DDAADF77E1FD3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (needsReinit)
		bool L_0 = (bool)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_needsReinit_1();
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// TryNeedsInitData();
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Valve.VR.SteamVR_Action::TryNeedsInitData() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
	}

IL_0014:
	{
		// if (createNew)
		bool L_2 = ___createNew0;
		V_1 = (bool)L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// sourceMap.Initialize();
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_4);
		VirtActionInvoker0::Invoke(6 /* System.Void Valve.VR.SteamVR_Action_Source_Map::Initialize() */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_4);
		goto IL_0056;
	}

IL_002e:
	{
		// sourceMap = SteamVR_Input.GetActionDataFromPath<SourceMap>(actionPath);
		String_t* L_5 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (String_t*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((String_t*)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_sourceMap_4(L_6);
		// if (sourceMap == null)
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_sourceMap_4();
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
	}

IL_0055:
	{
	}

IL_0056:
	{
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// Valve.VR.SteamVR_Action_Source_Map Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetSourceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * SteamVR_Action_2_GetSourceMap_m84F8523F4740D5A9A09776B19CF181F2E9153713_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * V_0 = NULL;
	{
		// return sourceMap;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		V_0 = (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::InitializeCopy(System.String,Valve.VR.SteamVR_Action_Source_Map)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_InitializeCopy_mA01F8258C6D103BA47C4F2305D74D2C74D1C2D7E_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, String_t* ___newActionPath0, SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * ___newData1, const RuntimeMethod* method)
{
	{
		// this.actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// this.sourceMap = (SourceMap)newData;
		SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * L_1 = ___newData1;
		__this->set_sourceMap_4(((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))));
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::InitAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_InitAfterDeserialize_mCC6445068DDB02EA2F504749308CE3382698F4BE_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (sourceMap != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// if (sourceMap.fullPath != actionPath)
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		String_t* L_3 = SteamVR_Action_Source_Map_get_fullPath_m17B3B1227ABDCC35456A1B37EE9919772DD1F24E_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2, /*hidden argument*/NULL);
		String_t* L_4 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		bool L_5 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E((String_t*)L_3, (String_t*)L_4, /*hidden argument*/NULL);
		V_1 = (bool)L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// TryNeedsInitData();
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Valve.VR.SteamVR_Action::TryNeedsInitData() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
	}

IL_0043:
	{
		// if (string.IsNullOrEmpty(actionPath))
		String_t* L_7 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		bool L_8 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229((String_t*)L_7, /*hidden argument*/NULL);
		V_2 = (bool)L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// sourceMap = null;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_sourceMap_4();
		il2cpp_codegen_initobj(L_10, sizeof(RuntimeObject *));
	}

IL_005e:
	{
	}

IL_005f:
	{
		// if (initialized == false)
		bool L_11 = (bool)__this->get_initialized_5();
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// Initialize(false, false);
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtActionInvoker2< bool, bool >::Invoke(28 /* System.Void Valve.VR.SteamVR_Action::Initialize(System.Boolean,System.Boolean) */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (bool)0, (bool)0);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetActive(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetActive_m77719640DE2A0F6929745E70041980C8DE157076_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].active;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_active() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetActiveBinding(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetActiveBinding_m5465CA42611D2E3C82D716F7593E7639D37B3C2C_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].activeBinding;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_activeBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetLastActive(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetLastActive_mE9D95ABEBFAC6E7D2E9B9F1327C9366D3A192CA7_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].lastActive;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActive() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetLastActiveBinding(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetLastActiveBinding_m8F7333374E44D23DB0C8E1F777DBDBADBFDA4971_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return sourceMap[inputSource].lastActiveBinding;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tCAA2C8FE17BA000619F1ADE00A17D8037F5B4B14 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActiveBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		V_0 = (bool)L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2__ctor_mAED1FACF82DCD111FFFE1851937D1979A4B6B59C_gshared (SteamVR_Action_2_t17CE6363B177E4D037F3097259B68D6F8842CC5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2__ctor_mAED1FACF82DCD111FFFE1851937D1979A4B6B59C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected bool initialized = false;
		__this->set_initialized_5((bool)0);
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var);
		SteamVR_Action__ctor_m951561A059F566EEBC3EBD45D77C7DB2D2C60359((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, /*hidden argument*/NULL);
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
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB45035B5629D094CE8A9131C50049B0D8266AE12_gshared (Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894 * __this, Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * ____event0, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_m442059AD6B1B853F506D5E40491669C36885CD28_gshared (Action_1_tCAD07644A93EA9BBC74FD01963EFF828A3905894 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * L_2 = (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)__this->get__event_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_action_1();
		NullCheck((Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)L_2);
		((  void (*) (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)L_2, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * L_4 = (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)__this->get__event_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_action_1();
		NullCheck((Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)L_4);
		((  void (*) (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B *)L_4, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA891697554F22CE101CB9C9F19965EC13E802821_gshared (Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94 * __this, Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * ____event0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_m5D75D3DFB22324F84D4B89FE2E21353D7BBA0A01_gshared (Action_1_t6F12718E5242169031602FBCC70CBE2C0B6A7D94 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * L_2 = (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)__this->get__event_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_action_1();
		NullCheck((Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)L_2);
		((  void (*) (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)L_2, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * L_4 = (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)__this->get__event_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_action_1();
		NullCheck((Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)L_4);
		((  void (*) (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F *)L_4, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Single>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m37C66FD567F66CCC40055CB2990277D5BC96FFD5_gshared (Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA * __this, Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * ____event0, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Single>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_mA8601D61E1C51535346C63761F8D388CBECC5F29_gshared (Action_1_t12A6CF75B6351492956238CA3D8A7CDD91B171AA * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * L_2 = (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)__this->get__event_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_action_1();
		NullCheck((Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)L_2);
		((  void (*) (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)L_2, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * L_4 = (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)__this->get__event_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_action_1();
		NullCheck((Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)L_4);
		((  void (*) (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F *)L_4, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9F81AE2FB353F43C14C78BA95D6D1775F73C339C_gshared (Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242 * __this, Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * ____event0, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_m3FABAEB621F4C4AC1B426FCE401B695C692230AC_gshared (Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_2 = (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)__this->get__event_0();
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_3 = (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)__this->get_action_1();
		NullCheck((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_2);
		((  void (*) (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_2, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_4 = (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)__this->get__event_0();
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_5 = (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)__this->get_action_1();
		NullCheck((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_4);
		((  void (*) (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_4, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF03E9563745B3BE888A9DD5B7DF3F0430283088E_gshared (Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226 * __this, Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * ____event0, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_m5EA0847E8C3B62BC8EA35B64F1E082A0AC4F680D_gshared (Action_2_t0E3F7EBD83A69C9615A71023BB4B3BF2597E1226 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * L_2 = (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)__this->get__event_0();
		UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * L_3 = (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)__this->get_action_1();
		NullCheck((Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)L_2);
		((  void (*) (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)L_2, (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * L_4 = (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)__this->get__event_0();
		UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * L_5 = (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)__this->get_action_1();
		NullCheck((Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)L_4);
		((  void (*) (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF *)L_4, (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m06A0D9D671381A2A428654F34FACF40262280D45_gshared (Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1 * __this, Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * ____event0, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_m115AE86AB17F1ACA856FC4BBFFDADD3137B4FF5D_gshared (Action_2_t77E299B712305C6E08DDF7FBD458E9D473D12DC1 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * L_2 = (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)__this->get__event_0();
		UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * L_3 = (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)__this->get_action_1();
		NullCheck((Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)L_2);
		((  void (*) (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)L_2, (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * L_4 = (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)__this->get__event_0();
		UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * L_5 = (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)__this->get_action_1();
		NullCheck((Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)L_4);
		((  void (*) (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 *)L_4, (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9E5457512790DA14F26DE75C27AC029D9507C2B6_gshared (Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A * __this, Event_2_t3615C727C978524006980D0666EC556B57802FE3 * ____event0, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_t3615C727C978524006980D0666EC556B57802FE3 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_mD1DB38179BD17C5F2914EB9D01BF89D9AFC78B97_gshared (Action_2_tBD04D4C29A712CC1B68846E66BDBF88EBC0A690A * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_2_t3615C727C978524006980D0666EC556B57802FE3 * L_2 = (Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)__this->get__event_0();
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_action_1();
		NullCheck((Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)L_2);
		((  void (*) (Event_2_t3615C727C978524006980D0666EC556B57802FE3 *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)L_2, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_2_t3615C727C978524006980D0666EC556B57802FE3 * L_4 = (Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)__this->get__event_0();
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_5 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_action_1();
		NullCheck((Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)L_4);
		((  void (*) (Event_2_t3615C727C978524006980D0666EC556B57802FE3 *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_t3615C727C978524006980D0666EC556B57802FE3 *)L_4, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`3<T0,T1,T2>,UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mCFA6EFA5F32433B76368A221E0B51D7591EDCDDF_gshared (Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39 * __this, Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * ____event0, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1, T2> _event, UnityAction<T0, T1, T2> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Enable_m6DD39B6C7D2FBA09C721EE5E46FF021E1498B551_gshared (Action_3_t5AD66E1BD1707101E932ABD209BD14AF9DC5DF39 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * L_2 = (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)__this->get__event_0();
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_action_1();
		NullCheck((Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)L_2);
		((  void (*) (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)L_2, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * L_4 = (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)__this->get__event_0();
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_5 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_action_1();
		NullCheck((Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)L_4);
		((  void (*) (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 *)L_4, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`3<T0,T1,T2>,UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mC5E7A29BD4781C8EF44155A863074731A7C01B04_gshared (Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE * __this, Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * ____event0, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1, T2> _event, UnityAction<T0, T1, T2> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_mD0F4C81BF96D6920AD8E2AB2E571006EF0B15EA4((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Enable_mF6A13469881E04CCAE01CC8D7FBF0B5730A1D8E6_gshared (Action_3_t5BEEAFC0B7F01D898A1EC9CF67C4DE11E05A4EAE * __this, bool ___enabled0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _event.Listen(action);
		Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * L_2 = (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)__this->get__event_0();
		UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * L_3 = (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)__this->get_action_1();
		NullCheck((Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)L_2);
		((  void (*) (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)L_2, (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		goto IL_002c;
	}

IL_001a:
	{
		// _event.Remove(action);
		Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * L_4 = (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)__this->get__event_0();
		UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * L_5 = (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)__this->get_action_1();
		NullCheck((Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)L_4);
		((  void (*) (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB *)L_4, (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002c:
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
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m80D65194239051F85F995BA56E5E89B04DE9C59E_gshared (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this);
		((  void (*) (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_mBB17D7AA28906F19A9F7CA394529EBEC1B76492A_gshared (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this);
		((  void (*) (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_m051A61313774FE17D016F07E763230AB717E8F74_gshared (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		bool L_0 = ___arg00;
		NullCheck((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this);
		((  void (*) (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m34F62A5E827FB451FD308493B8E643A8E25C0773_gshared (Event_1_tC88EEB4B348FBD4FF6CC454CFDEE5BE9283CD51B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this);
		((  void (*) (UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_tE040CE348097B63925504E9E6AFCD89D46798FE3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m8AFB610491F15EA9180DB85223AD9066742018F6_gshared (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_m024B13F2F2B41B37B88905B43C328744ACAFAD14_gshared (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_mF773020F97864296D6805D73244B599E4C873472_gshared (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		RuntimeObject * L_0 = ___arg00;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m21F7590EFC189196C7CAFD5A118891151ADC57E6_gshared (Event_1_tFAE0B64C96B0FD4DC5A4D7EEB2A712E8E9677F2F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m71F0E21C941CA597CBFE3A51B5002D14843A95B6_gshared (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this);
		((  void (*) (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_m52997D4B7C8EA8B23A4CFC37EE35C1C68E87B49F_gshared (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this);
		((  void (*) (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_m9B69D629A5314DDDB798618BB72DCA8FA5EFB787_gshared (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		float L_0 = ___arg00;
		NullCheck((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this);
		((  void (*) (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m37151844306D277804F7E788D800257EB2E147AA_gshared (Event_1_tD505DB8FF3419989CD6707499926390D07ABA27F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this);
		((  void (*) (UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_tD2F68F6DD363B64D94CB72CA4170B8DC7A1117F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m38BA8AB8A10A0202B52B3F5CA7DB8056FDC0FBE0_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_0 = ___action0;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_mF12BABD97A66E13257D4ECEDA7C4264DF073D93A_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_0 = ___action0;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_mE2E76793C13444617FF138A2E28034C0FD4EC58F_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C  ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C  L_0 = ___arg00;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m2B43D3B6CCF7AB25D8F7222827216B717CE2CAB1_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_m676F411B74C2E541F32C054BB30A8525C8E65FC3_gshared (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * __this, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * L_0 = ___action0;
		NullCheck((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this);
		((  void (*) (UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this, (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_m6A357943D21E9400ED2B20E6D9C740135FFF7F54_gshared (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * __this, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 * L_0 = ___action0;
		NullCheck((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this);
		((  void (*) (UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *, UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this, (UnityAction_2_t15578E6A8C1C05E01FB5C8AA3BBD6617EC9C8160 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_m5BF39D1CD95BDD16F21DC3D28AC1A221AC8A7212_gshared (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * __this, int32_t ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		int32_t L_0 = ___arg00;
		bool L_1 = ___arg11;
		NullCheck((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this);
		((  void (*) (UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this, (int32_t)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_m8AB936C90DE5F15D3B72AFE902E944477F60E3E7_gshared (Event_2_t9A055CAF8D6CA197AED3EE123350C05A6F2AF7EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this);
		((  void (*) (UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_tE17F4E9E9B5B5FD00EDB33328431C30A2A12A219 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_m682D83D2AC8FE044544FE52A0BFF3D224D3D20D5_gshared (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * __this, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * L_0 = ___action0;
		NullCheck((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this);
		((  void (*) (UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this, (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_m6E907891D96B9D760D32D5B48220DB8978C8498B_gshared (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * __this, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F * L_0 = ___action0;
		NullCheck((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this);
		((  void (*) (UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *, UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this, (UnityAction_2_t6700B944FB42737479AB7C02F89675D14793534F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_m5198A5A1730177F63DD5B30574A2F2A42AC10AB7_gshared (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * __this, RuntimeObject * ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		RuntimeObject * L_0 = ___arg00;
		bool L_1 = ___arg11;
		NullCheck((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this);
		((  void (*) (UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this, (RuntimeObject *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_mB6EAE990A9FF31527C293A7F36B11CD71A5406AC_gshared (Event_2_tBA11E15D47AE0C8430BA1AA99A09535D3E111522 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this);
		((  void (*) (UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_tB7E10E8DD89605182E4F1A4F2556D189CCE7060E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_m50FC602A9E5441F9B6DA2278031177034EB0FD9A_gshared (Event_2_t3615C727C978524006980D0666EC556B57802FE3 * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___action0;
		NullCheck((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this);
		((  void (*) (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_m9EF513233CC2C7D16D6CEA066CA3A6BF7C0F7A64_gshared (Event_2_t3615C727C978524006980D0666EC556B57802FE3 * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___action0;
		NullCheck((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this);
		((  void (*) (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_m0C6BAB805471958F9C1A8895E6C696B37BFA0FC4_gshared (Event_2_t3615C727C978524006980D0666EC556B57802FE3 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		RuntimeObject * L_0 = ___arg00;
		RuntimeObject * L_1 = ___arg11;
		NullCheck((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this);
		((  void (*) (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_mDFA5299D8FFEFB4422B122623CB140141529EC13_gshared (Event_2_t3615C727C978524006980D0666EC556B57802FE3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this);
		((  void (*) (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Listen(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Listen_m4004A93CF7BBEB91109BAD2911D345A298953253_gshared (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___action0;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Remove(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Remove_m91ADF4099DF938F4BAC6B778D18BE0040FB1491A_gshared (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___action0;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Send(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Send_mEE2B443B2A4835850921D5AE81AAEE5E57AC9CCC_gshared (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		RuntimeObject * L_0 = ___arg00;
		RuntimeObject * L_1 = ___arg11;
		RuntimeObject * L_2 = ___arg22;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (RuntimeObject *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3__ctor_m50B0A043EF6A76F187057899CB40264BD8530E51_gshared (Event_3_tE4709B3CF909DAB40F89D139FD61962ED09EFEB0 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Listen(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Listen_mAED103267258EE9EB957767AE030D258A7BCF420_gshared (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * __this, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * L_0 = ___action0;
		NullCheck((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this);
		((  void (*) (UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this, (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Remove(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Remove_m834F56DBC3EA3430B4FD2E49FF189B0A5704B226_gshared (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * __this, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB * L_0 = ___action0;
		NullCheck((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this);
		((  void (*) (UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *, UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this, (UnityAction_3_t0DAF185E891CACD97C4D3FF6C3EF1DA0832C70AB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Send(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Send_mC91312BDB300C267D894D2533B44ACB44E8E3880_gshared (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, float ___arg11, bool ___arg22, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___arg00;
		float L_1 = ___arg11;
		bool L_2 = ___arg22;
		NullCheck((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this);
		((  void (*) (UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (float)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3__ctor_mB0C254D6DC795A06787B85BCEC1648A55B897776_gshared (Event_3_t9CE07668434D8E8FE66BB2A44665D5B34045F2AB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this);
		((  void (*) (UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_3_t6E3C878603044854CE0F666FAFD07952E73253E5 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
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
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1__ctor_mDA8C1D14757756D041561541154FC33E0D25A568_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// private bool cleared = false;
		__this->set_cleared_3((bool)0);
		// public SteamVR_RingBuffer(int size)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		// buffer = new T[size];
		int32_t L_0 = ___size0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->set_buffer_0(L_1);
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_Add_m7D43C4C1FFFFCFF7CB3E19263436959BC5F25D8B_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, RuntimeObject * ___newElement0, const RuntimeMethod* method)
{
	{
		// buffer[currentIndex] = newElement;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_1 = (int32_t)__this->get_currentIndex_1();
		RuntimeObject * L_2 = ___newElement0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RuntimeObject *)L_2);
		// StepForward();
		NullCheck((SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 *)__this);
		VirtActionInvoker0::Invoke(4 /* System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::StepForward() */, (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 *)__this);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_StepForward_mC409F651BBEB648F0C3ADDDF2EDCEB871338D7B2_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// lastElement = buffer[currentIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_1 = (int32_t)__this->get_currentIndex_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_lastElement_2(L_3);
		// currentIndex++;
		int32_t L_4 = (int32_t)__this->get_currentIndex_1();
		__this->set_currentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (currentIndex >= buffer.Length)
		int32_t L_5 = (int32_t)__this->get_currentIndex_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_6);
		V_0 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
	}

IL_0044:
	{
		// cleared = false;
		__this->set_cleared_3((bool)0);
		// }
		return;
	}
}
// T Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_RingBuffer_1_GetAtIndex_mA5438DE683C093E83CA9DD45C132725B18240849_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, int32_t ___atIndex0, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		// if (atIndex < 0)
		int32_t L_0 = ___atIndex0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// atIndex += buffer.Length;
		int32_t L_2 = ___atIndex0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_3);
		___atIndex0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))));
	}

IL_0015:
	{
		// return buffer[atIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_5 = ___atIndex0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = (RuntimeObject *)L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject * L_8 = V_1;
		return L_8;
	}
}
// T Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetLast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_RingBuffer_1_GetLast_m9BB39F09D85873F5C5AF1C59FDD869EF0AA88906_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return lastElement;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_lastElement_2();
		V_0 = (RuntimeObject *)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetLastIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_RingBuffer_1_GetLastIndex_mE239F54D80B3988D8B861282D9EB93E81A1C5F5B_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int lastIndex = currentIndex - 1;
		int32_t L_0 = (int32_t)__this->get_currentIndex_1();
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		// if (lastIndex < 0)
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// lastIndex += buffer.Length;
		int32_t L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_4);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))));
	}

IL_001d:
	{
		// return lastIndex;
		int32_t L_5 = V_0;
		V_2 = (int32_t)L_5;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_Clear_m97C5D575D1DA014FC1A4ED823619C2067088E96D_gshared (SteamVR_RingBuffer_1_tB6FE64DC340FF76D0FDC901B5FB739DA8458EE74 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	{
		// if (cleared == true)
		bool L_0 = (bool)__this->get_cleared_3();
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		goto IL_0066;
	}

IL_000d:
	{
		// if (buffer == null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0066;
	}

IL_001c:
	{
		// for (int index = 0; index < buffer.Length; index++)
		V_2 = (int32_t)0;
		goto IL_003b;
	}

IL_0020:
	{
		// buffer[index] = default(T);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_5 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_6);
		// for (int index = 0; index < buffer.Length; index++)
		int32_t L_7 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003b:
	{
		// for (int index = 0; index < buffer.Length; index++)
		int32_t L_8 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_9);
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0020;
		}
	}
	{
		// lastElement = default(T);
		RuntimeObject ** L_11 = (RuntimeObject **)__this->get_address_of_lastElement_2();
		il2cpp_codegen_initobj(L_11, sizeof(RuntimeObject *));
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
		// cleared = true;
		__this->set_cleared_3((bool)1);
	}

IL_0066:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SteamVR_Action_In_Source_get_isUpdating_m85A55DF822095397B0032B8627D56ABA9F1F0A60_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method)
{
	{
		// public bool isUpdating { get; set; }
		bool L_0 = __this->get_U3CisUpdatingU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SteamVR_Action_In_Source_set_isUpdating_m907328DCCD2733DA877A4914FCEEAA08BF4527EE_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isUpdating { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CisUpdatingU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SteamVR_Action_In_Source_get_changedTime_m55B868F934C945AF841AD79C7418EE75F54B9319_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method)
{
	{
		// public float changedTime { get; protected set; }
		float L_0 = __this->get_U3CchangedTimeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SteamVR_Action_In_Source_get_updateTime_m382370EEA7C181B050BF718DBCD8476067A12CA9_inline (SteamVR_Action_In_Source_t6C3FA81DC7F53D302E49E09F5791E612AC7832AB * __this, const RuntimeMethod* method)
{
	{
		// public float updateTime { get; protected set; }
		float L_0 = __this->get_U3CupdateTimeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_localPosition_mE065A826D8D1A8CF44D9E7F0D038F24D70985833_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 localPosition { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClocalPositionU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Source_get_localRotation_m307D9DD92DFFFCC30446A71D9BD15674A797ED2A_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion localRotation { get; protected set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3ClocalRotationU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_velocity_m2B71BB7981006080D113442CB374529602A310BF_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 velocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CvelocityU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_angularVelocity_mACAA45CB05DB94C9292ED147F3156109DAFA0209_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 angularVelocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CangularVelocityU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastLocalPosition_mB748F9D4600498E9BACCEBE5C8F00DED8125C307_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 lastLocalPosition { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastLocalPositionU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SteamVR_Action_Pose_Source_get_lastLocalRotation_m15622BCE4A3D32548EBFE7DC98F8751352617660_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion lastLocalRotation { get; protected set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3ClastLocalRotationU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastVelocity_mB9FD7955140F713C63842433E1E50D498EAD0A21_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 lastVelocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastVelocityU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SteamVR_Action_Pose_Source_get_lastAngularVelocity_m3EE729ECF16DA55CFE069E25EB9099A80667C55F_inline (SteamVR_Action_Pose_Source_t56D2300E6E866DAB00504F844B60F4556A4F0E27 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 lastAngularVelocity { get; protected set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3ClastAngularVelocityU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SteamVR_Action_Source_Map_get_fullPath_m17B3B1227ABDCC35456A1B37EE9919772DD1F24E_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public string fullPath { get; protected set; }
		String_t* L_0 = __this->get_U3CfullPathU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_Source_Map_get_handle_mDD116BA67A37900EC7D7FBB831D8C6FD1BA2903D_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public ulong handle { get; protected set; }
		uint64_t L_0 = __this->get_U3ChandleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public SteamVR_ActionSet actionSet { get; protected set; }
		SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * L_0 = __this->get_U3CactionSetU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public SteamVR_ActionDirections direction { get; protected set; }
		int32_t L_0 = __this->get_U3CdirectionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
