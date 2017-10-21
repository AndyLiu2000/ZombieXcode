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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.UInt64[]
struct UInt64U5BU5D_t1307377406;
// System.String[]
struct StringU5BU5D_t2160812740;
// System.Int32[]
struct Int32U5BU5D_t4187413745;
// System.Security.Util.Tokenizer/StringMaker
struct StringMaker_t1338288855;
// System.Type[]
struct TypeU5BU5D_t815670707;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t852945944;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3850815912;
// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState>
struct Dictionary_2_t837756469;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t3770991670;
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_t2427273721;
// System.Double[]
struct DoubleU5BU5D_t1669680406;
// System.Collections.IDictionary
struct IDictionary_t3755721586;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3361335557;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t134394922;
// System.IntPtr[]
struct IntPtrU5BU5D_t2512061637;
// System.Globalization.CompareInfo
struct CompareInfo_t511925399;
// System.Char
struct Char_t2672541733;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t325141206;
// System.Action`1<System.Object>
struct Action_1_t3769088838;
// System.Void
struct Void_t346236799;
// System.Byte
struct Byte_t4219732219;
// System.Object[]
struct ObjectU5BU5D_t608532122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1909810013;
// System.Version
struct Version_t986581081;
// System.Reflection.MemberFilter
struct MemberFilter_t3391617843;
// System.Reflection.Binder
struct Binder_t1003639188;
// System.Byte[]
struct ByteU5BU5D_t464104634;
// System.Delegate[]
struct DelegateU5BU5D_t3919377238;
// System.EventArgs
struct EventArgs_t1971840696;
// System.IAsyncResult
struct IAsyncResult_t1572955412;
// System.AsyncCallback
struct AsyncCallback_t3200089119;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1279349540;
// System.MonoTypeInfo
struct MonoTypeInfo_t2950349361;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t906393226;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t3797947310;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2212728307;

struct Exception_t3118724072_marshaled_pinvoke;
struct Exception_t3118724072_marshaled_com;



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
#ifndef VALUESANDNAMES_T3890449022_H
#define VALUESANDNAMES_T3890449022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum/ValuesAndNames
struct  ValuesAndNames_t3890449022  : public RuntimeObject
{
public:
	// System.UInt64[] System.Enum/ValuesAndNames::Values
	UInt64U5BU5D_t1307377406* ___Values_0;
	// System.String[] System.Enum/ValuesAndNames::Names
	StringU5BU5D_t2160812740* ___Names_1;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(ValuesAndNames_t3890449022, ___Values_0)); }
	inline UInt64U5BU5D_t1307377406* get_Values_0() const { return ___Values_0; }
	inline UInt64U5BU5D_t1307377406** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(UInt64U5BU5D_t1307377406* value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier((&___Values_0), value);
	}

	inline static int32_t get_offset_of_Names_1() { return static_cast<int32_t>(offsetof(ValuesAndNames_t3890449022, ___Names_1)); }
	inline StringU5BU5D_t2160812740* get_Names_1() const { return ___Names_1; }
	inline StringU5BU5D_t2160812740** get_address_of_Names_1() { return &___Names_1; }
	inline void set_Names_1(StringU5BU5D_t2160812740* value)
	{
		___Names_1 = value;
		Il2CppCodeGenWriteBarrier((&___Names_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUESANDNAMES_T3890449022_H
#ifndef NUMBER_T3629966747_H
#define NUMBER_T3629966747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number
struct  Number_t3629966747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBER_T3629966747_H
#ifndef RANDOM_T1180981843_H
#define RANDOM_T1180981843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1180981843  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t4187413745* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t1180981843, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t1180981843, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t1180981843, ___SeedArray_2)); }
	inline Int32U5BU5D_t4187413745* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t4187413745** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t4187413745* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1180981843_H
#ifndef SHAREDSTATICS_T3115695139_H
#define SHAREDSTATICS_T3115695139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SharedStatics
struct  SharedStatics_t3115695139  : public RuntimeObject
{
public:
	// System.Security.Util.Tokenizer/StringMaker System.SharedStatics::_maker
	StringMaker_t1338288855 * ____maker_1;

public:
	inline static int32_t get_offset_of__maker_1() { return static_cast<int32_t>(offsetof(SharedStatics_t3115695139, ____maker_1)); }
	inline StringMaker_t1338288855 * get__maker_1() const { return ____maker_1; }
	inline StringMaker_t1338288855 ** get_address_of__maker_1() { return &____maker_1; }
	inline void set__maker_1(StringMaker_t1338288855 * value)
	{
		____maker_1 = value;
		Il2CppCodeGenWriteBarrier((&____maker_1), value);
	}
};

struct SharedStatics_t3115695139_StaticFields
{
public:
	// System.SharedStatics System.SharedStatics::_sharedStatics
	SharedStatics_t3115695139 * ____sharedStatics_0;

public:
	inline static int32_t get_offset_of__sharedStatics_0() { return static_cast<int32_t>(offsetof(SharedStatics_t3115695139_StaticFields, ____sharedStatics_0)); }
	inline SharedStatics_t3115695139 * get__sharedStatics_0() const { return ____sharedStatics_0; }
	inline SharedStatics_t3115695139 ** get_address_of__sharedStatics_0() { return &____sharedStatics_0; }
	inline void set__sharedStatics_0(SharedStatics_t3115695139 * value)
	{
		____sharedStatics_0 = value;
		Il2CppCodeGenWriteBarrier((&____sharedStatics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDSTATICS_T3115695139_H
#ifndef STRINGCOMPARER_T3515338828_H
#define STRINGCOMPARER_T3515338828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3515338828  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3515338828_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t3515338828 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t3515338828 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t3515338828 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t3515338828 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t3515338828_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t3515338828 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t3515338828 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t3515338828 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t3515338828_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t3515338828 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t3515338828 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t3515338828 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t3515338828_StaticFields, ____ordinal_2)); }
	inline StringComparer_t3515338828 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t3515338828 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t3515338828 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t3515338828_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t3515338828 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t3515338828 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t3515338828 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3515338828_H
#ifndef THROWHELPER_T813351456_H
#define THROWHELPER_T813351456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThrowHelper
struct  ThrowHelper_t813351456  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T813351456_H
#ifndef UNITYSERIALIZATIONHOLDER_T3405802364_H
#define UNITYSERIALIZATIONHOLDER_T3405802364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t3405802364  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t815670707* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t4187413745* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t852945944 * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_instantiation_0)); }
	inline TypeU5BU5D_t815670707* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t815670707** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t815670707* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_instantiation_0), value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t4187413745* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t4187413745** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t4187413745* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_elementTypes_1), value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringType_3), value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_declaringMethod_4)); }
	inline MethodBase_t852945944 * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t852945944 ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t852945944 * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_declaringMethod_4), value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_5), value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemblyName_6), value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3405802364, ___m_unityType_7)); }
	inline int32_t get_m_unityType_7() const { return ___m_unityType_7; }
	inline int32_t* get_address_of_m_unityType_7() { return &___m_unityType_7; }
	inline void set_m_unityType_7(int32_t value)
	{
		___m_unityType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T3405802364_H
#ifndef VERSION_T986581081_H
#define VERSION_T986581081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t986581081  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_t986581081, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_t986581081, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_t986581081, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_t986581081, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_t986581081_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t3850815912* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_t986581081_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t3850815912* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t3850815912** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t3850815912* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___SeparatorsArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T986581081_H
#ifndef APPCONTEXT_T655341298_H
#define APPCONTEXT_T655341298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext
struct  AppContext_t655341298  : public RuntimeObject
{
public:

public:
};

struct AppContext_t655341298_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.AppContext/SwitchValueState> System.AppContext::s_switchMap
	Dictionary_2_t837756469 * ___s_switchMap_0;

public:
	inline static int32_t get_offset_of_s_switchMap_0() { return static_cast<int32_t>(offsetof(AppContext_t655341298_StaticFields, ___s_switchMap_0)); }
	inline Dictionary_2_t837756469 * get_s_switchMap_0() const { return ___s_switchMap_0; }
	inline Dictionary_2_t837756469 ** get_address_of_s_switchMap_0() { return &___s_switchMap_0; }
	inline void set_s_switchMap_0(Dictionary_2_t837756469 * value)
	{
		___s_switchMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_switchMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXT_T655341298_H
#ifndef APPCONTEXTSWITCHES_T3276636319_H
#define APPCONTEXTSWITCHES_T3276636319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextSwitches
struct  AppContextSwitches_t3276636319  : public RuntimeObject
{
public:

public:
};

struct AppContextSwitches_t3276636319_StaticFields
{
public:
	// System.Int32 System.AppContextSwitches::_noAsyncCurrentCulture
	int32_t ____noAsyncCurrentCulture_0;
	// System.Int32 System.AppContextSwitches::_throwExceptionIfDisposedCancellationTokenSource
	int32_t ____throwExceptionIfDisposedCancellationTokenSource_1;
	// System.Int32 System.AppContextSwitches::_cloneActor
	int32_t ____cloneActor_2;
	// System.Boolean System.AppContextSwitches::<DisableCaching>k__BackingField
	bool ___U3CDisableCachingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__noAsyncCurrentCulture_0() { return static_cast<int32_t>(offsetof(AppContextSwitches_t3276636319_StaticFields, ____noAsyncCurrentCulture_0)); }
	inline int32_t get__noAsyncCurrentCulture_0() const { return ____noAsyncCurrentCulture_0; }
	inline int32_t* get_address_of__noAsyncCurrentCulture_0() { return &____noAsyncCurrentCulture_0; }
	inline void set__noAsyncCurrentCulture_0(int32_t value)
	{
		____noAsyncCurrentCulture_0 = value;
	}

	inline static int32_t get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1() { return static_cast<int32_t>(offsetof(AppContextSwitches_t3276636319_StaticFields, ____throwExceptionIfDisposedCancellationTokenSource_1)); }
	inline int32_t get__throwExceptionIfDisposedCancellationTokenSource_1() const { return ____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline int32_t* get_address_of__throwExceptionIfDisposedCancellationTokenSource_1() { return &____throwExceptionIfDisposedCancellationTokenSource_1; }
	inline void set__throwExceptionIfDisposedCancellationTokenSource_1(int32_t value)
	{
		____throwExceptionIfDisposedCancellationTokenSource_1 = value;
	}

	inline static int32_t get_offset_of__cloneActor_2() { return static_cast<int32_t>(offsetof(AppContextSwitches_t3276636319_StaticFields, ____cloneActor_2)); }
	inline int32_t get__cloneActor_2() const { return ____cloneActor_2; }
	inline int32_t* get_address_of__cloneActor_2() { return &____cloneActor_2; }
	inline void set__cloneActor_2(int32_t value)
	{
		____cloneActor_2 = value;
	}

	inline static int32_t get_offset_of_U3CDisableCachingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppContextSwitches_t3276636319_StaticFields, ___U3CDisableCachingU3Ek__BackingField_3)); }
	inline bool get_U3CDisableCachingU3Ek__BackingField_3() const { return ___U3CDisableCachingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CDisableCachingU3Ek__BackingField_3() { return &___U3CDisableCachingU3Ek__BackingField_3; }
	inline void set_U3CDisableCachingU3Ek__BackingField_3(bool value)
	{
		___U3CDisableCachingU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTSWITCHES_T3276636319_H
#ifndef APPCONTEXTDEFAULTVALUES_T691143793_H
#define APPCONTEXTDEFAULTVALUES_T691143793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextDefaultValues
struct  AppContextDefaultValues_t691143793  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONTEXTDEFAULTVALUES_T691143793_H
#ifndef DATETIMEPARSE_T2552092110_H
#define DATETIMEPARSE_T2552092110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse
struct  DateTimeParse_t2552092110  : public RuntimeObject
{
public:

public:
};

struct DateTimeParse_t2552092110_StaticFields
{
public:
	// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse::m_hebrewNumberParser
	MatchNumberDelegate_t3770991670 * ___m_hebrewNumberParser_0;
	// System.DateTimeParse/DS[][] System.DateTimeParse::dateParsingStates
	DSU5BU5DU5BU5D_t2427273721* ___dateParsingStates_1;

public:
	inline static int32_t get_offset_of_m_hebrewNumberParser_0() { return static_cast<int32_t>(offsetof(DateTimeParse_t2552092110_StaticFields, ___m_hebrewNumberParser_0)); }
	inline MatchNumberDelegate_t3770991670 * get_m_hebrewNumberParser_0() const { return ___m_hebrewNumberParser_0; }
	inline MatchNumberDelegate_t3770991670 ** get_address_of_m_hebrewNumberParser_0() { return &___m_hebrewNumberParser_0; }
	inline void set_m_hebrewNumberParser_0(MatchNumberDelegate_t3770991670 * value)
	{
		___m_hebrewNumberParser_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_hebrewNumberParser_0), value);
	}

	inline static int32_t get_offset_of_dateParsingStates_1() { return static_cast<int32_t>(offsetof(DateTimeParse_t2552092110_StaticFields, ___dateParsingStates_1)); }
	inline DSU5BU5DU5BU5D_t2427273721* get_dateParsingStates_1() const { return ___dateParsingStates_1; }
	inline DSU5BU5DU5BU5D_t2427273721** get_address_of_dateParsingStates_1() { return &___dateParsingStates_1; }
	inline void set_dateParsingStates_1(DSU5BU5DU5BU5D_t2427273721* value)
	{
		___dateParsingStates_1 = value;
		Il2CppCodeGenWriteBarrier((&___dateParsingStates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEPARSE_T2552092110_H
#ifndef ATTRIBUTE_T3701037118_H
#define ATTRIBUTE_T3701037118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3701037118  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3701037118_H
#ifndef VALUETYPE_T982632147_H
#define VALUETYPE_T982632147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t982632147  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t982632147_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t982632147_marshaled_com
{
};
#endif // VALUETYPE_T982632147_H
#ifndef MATH_T2802231814_H
#define MATH_T2802231814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t2802231814  : public RuntimeObject
{
public:

public:
};

struct Math_t2802231814_StaticFields
{
public:
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_t1669680406* ___roundPower10Double_1;

public:
	inline static int32_t get_offset_of_doubleRoundLimit_0() { return static_cast<int32_t>(offsetof(Math_t2802231814_StaticFields, ___doubleRoundLimit_0)); }
	inline double get_doubleRoundLimit_0() const { return ___doubleRoundLimit_0; }
	inline double* get_address_of_doubleRoundLimit_0() { return &___doubleRoundLimit_0; }
	inline void set_doubleRoundLimit_0(double value)
	{
		___doubleRoundLimit_0 = value;
	}

	inline static int32_t get_offset_of_roundPower10Double_1() { return static_cast<int32_t>(offsetof(Math_t2802231814_StaticFields, ___roundPower10Double_1)); }
	inline DoubleU5BU5D_t1669680406* get_roundPower10Double_1() const { return ___roundPower10Double_1; }
	inline DoubleU5BU5D_t1669680406** get_address_of_roundPower10Double_1() { return &___roundPower10Double_1; }
	inline void set_roundPower10Double_1(DoubleU5BU5D_t1669680406* value)
	{
		___roundPower10Double_1 = value;
		Il2CppCodeGenWriteBarrier((&___roundPower10Double_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T2802231814_H
#ifndef LAZYHELPERS_T1941619503_H
#define LAZYHELPERS_T1941619503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LazyHelpers
struct  LazyHelpers_t1941619503  : public RuntimeObject
{
public:

public:
};

struct LazyHelpers_t1941619503_StaticFields
{
public:
	// System.Object System.LazyHelpers::PUBLICATION_ONLY_SENTINEL
	RuntimeObject * ___PUBLICATION_ONLY_SENTINEL_0;

public:
	inline static int32_t get_offset_of_PUBLICATION_ONLY_SENTINEL_0() { return static_cast<int32_t>(offsetof(LazyHelpers_t1941619503_StaticFields, ___PUBLICATION_ONLY_SENTINEL_0)); }
	inline RuntimeObject * get_PUBLICATION_ONLY_SENTINEL_0() const { return ___PUBLICATION_ONLY_SENTINEL_0; }
	inline RuntimeObject ** get_address_of_PUBLICATION_ONLY_SENTINEL_0() { return &___PUBLICATION_ONLY_SENTINEL_0; }
	inline void set_PUBLICATION_ONLY_SENTINEL_0(RuntimeObject * value)
	{
		___PUBLICATION_ONLY_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((&___PUBLICATION_ONLY_SENTINEL_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZYHELPERS_T1941619503_H
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
#ifndef EVENTARGS_T1971840696_H
#define EVENTARGS_T1971840696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1971840696  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1971840696_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1971840696 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1971840696_StaticFields, ___Empty_0)); }
	inline EventArgs_t1971840696 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1971840696 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1971840696 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1971840696_H
#ifndef EXCEPTION_T3118724072_H
#define EXCEPTION_T3118724072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3118724072  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t3118724072 * ____innerException_4;
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
	SafeSerializationManager_t3361335557 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t134394922* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t2512061637* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____innerException_4)); }
	inline Exception_t3118724072 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t3118724072 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t3118724072 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t3361335557 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t3361335557 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t3361335557 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t134394922* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t134394922** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t134394922* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t3118724072, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t2512061637* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t2512061637** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t2512061637* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t3118724072_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t3118724072_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t3118724072_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3118724072_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t3361335557 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t134394922* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t3118724072_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3118724072_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t3361335557 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t134394922* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T3118724072_H
#ifndef GC_T3909062859_H
#define GC_T3909062859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t3909062859  : public RuntimeObject
{
public:

public:
};

struct GC_t3909062859_StaticFields
{
public:
	// System.Object System.GC::EPHEMERON_TOMBSTONE
	RuntimeObject * ___EPHEMERON_TOMBSTONE_0;

public:
	inline static int32_t get_offset_of_EPHEMERON_TOMBSTONE_0() { return static_cast<int32_t>(offsetof(GC_t3909062859_StaticFields, ___EPHEMERON_TOMBSTONE_0)); }
	inline RuntimeObject * get_EPHEMERON_TOMBSTONE_0() const { return ___EPHEMERON_TOMBSTONE_0; }
	inline RuntimeObject ** get_address_of_EPHEMERON_TOMBSTONE_0() { return &___EPHEMERON_TOMBSTONE_0; }
	inline void set_EPHEMERON_TOMBSTONE_0(RuntimeObject * value)
	{
		___EPHEMERON_TOMBSTONE_0 = value;
		Il2CppCodeGenWriteBarrier((&___EPHEMERON_TOMBSTONE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T3909062859_H
#ifndef INT64_T1293223455_H
#define INT64_T1293223455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t1293223455 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t1293223455, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T1293223455_H
#ifndef SINGLE_T1123457781_H
#define SINGLE_T1123457781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1123457781 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1123457781, ___m_value_0)); }
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
#endif // SINGLE_T1123457781_H
#ifndef CULTUREAWARECOMPARER_T1215850338_H
#define CULTUREAWARECOMPARER_T1215850338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1215850338  : public StringComparer_t3515338828
{
public:
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t511925399 * ____compareInfo_4;
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_5;

public:
	inline static int32_t get_offset_of__compareInfo_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1215850338, ____compareInfo_4)); }
	inline CompareInfo_t511925399 * get__compareInfo_4() const { return ____compareInfo_4; }
	inline CompareInfo_t511925399 ** get_address_of__compareInfo_4() { return &____compareInfo_4; }
	inline void set__compareInfo_4(CompareInfo_t511925399 * value)
	{
		____compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_4), value);
	}

	inline static int32_t get_offset_of__ignoreCase_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1215850338, ____ignoreCase_5)); }
	inline bool get__ignoreCase_5() const { return ____ignoreCase_5; }
	inline bool* get_address_of__ignoreCase_5() { return &____ignoreCase_5; }
	inline void set__ignoreCase_5(bool value)
	{
		____ignoreCase_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1215850338_H
#ifndef ORDINALCOMPARER_T268124976_H
#define ORDINALCOMPARER_T268124976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t268124976  : public StringComparer_t3515338828
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t268124976, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T268124976_H
#ifndef SYSTEMEXCEPTION_T1209695858_H
#define SYSTEMEXCEPTION_T1209695858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1209695858  : public Exception_t3118724072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1209695858_H
#ifndef INVALIDTIMEZONEEXCEPTION_T3916378553_H
#define INVALIDTIMEZONEEXCEPTION_T3916378553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t3916378553  : public Exception_t3118724072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T3916378553_H
#ifndef UINT16_T340842388_H
#define UINT16_T340842388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t340842388 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t340842388, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T340842388_H
#ifndef UINT32_T164030222_H
#define UINT32_T164030222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t164030222 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t164030222, ___m_value_0)); }
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
#endif // UINT32_T164030222_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T1279349540_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T1279349540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t1279349540  : public EventArgs_t1971840696
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1279349540, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1279349540, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T1279349540_H
#ifndef SERIALIZABLEATTRIBUTE_T1184117677_H
#define SERIALIZABLEATTRIBUTE_T1184117677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t1184117677  : public Attribute_t3701037118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T1184117677_H
#ifndef UNSAFECHARBUFFER_T2700778660_H
#define UNSAFECHARBUFFER_T2700778660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t2700778660 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2700778660, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2700778660, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t2700778660, ___m_length_2)); }
	inline int32_t get_m_length_2() const { return ___m_length_2; }
	inline int32_t* get_address_of_m_length_2() { return &___m_length_2; }
	inline void set_m_length_2(int32_t value)
	{
		___m_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2700778660_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t2700778660_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
#endif // UNSAFECHARBUFFER_T2700778660_H
#ifndef FLAGSATTRIBUTE_T3420520587_H
#define FLAGSATTRIBUTE_T3420520587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t3420520587  : public Attribute_t3701037118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T3420520587_H
#ifndef VOID_T346236799_H
#define VOID_T346236799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t346236799 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t346236799__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T346236799_H
#ifndef ENUM_T137291114_H
#define ENUM_T137291114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t137291114  : public ValueType_t982632147
{
public:

public:
};

struct Enum_t137291114_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3850815912* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t137291114_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3850815912* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3850815912** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3850815912* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t137291114_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t137291114_marshaled_com
{
};
#endif // ENUM_T137291114_H
#ifndef CANCELLATIONTOKEN_T3701455336_H
#define CANCELLATIONTOKEN_T3701455336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t3701455336 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t325141206 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t3701455336, ___m_source_0)); }
	inline CancellationTokenSource_t325141206 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t325141206 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t325141206 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t3701455336_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3769088838 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t3701455336_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3769088838 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3769088838 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3769088838 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t3701455336_marshaled_pinvoke
{
	CancellationTokenSource_t325141206 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t3701455336_marshaled_com
{
	CancellationTokenSource_t325141206 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T3701455336_H
#ifndef BOOLEAN_T735397371_H
#define BOOLEAN_T735397371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t735397371 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t735397371, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t735397371_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t735397371_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t735397371_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T735397371_H
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
#ifndef UINT64_T1634078983_H
#define UINT64_T1634078983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t1634078983 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t1634078983, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T1634078983_H
#ifndef SBYTE_T2680250289_H
#define SBYTE_T2680250289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t2680250289 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t2680250289, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T2680250289_H
#ifndef THREADSTATICATTRIBUTE_T3725497727_H
#define THREADSTATICATTRIBUTE_T3725497727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3725497727  : public Attribute_t3701037118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3725497727_H
#ifndef NUMBERBUFFER_T1668389892_H
#define NUMBERBUFFER_T1668389892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number/NumberBuffer
struct  NumberBuffer_t1668389892 
{
public:
	// System.Byte* System.Number/NumberBuffer::baseAddress
	uint8_t* ___baseAddress_1;
	// System.Char* System.Number/NumberBuffer::digits
	Il2CppChar* ___digits_2;
	// System.Int32 System.Number/NumberBuffer::precision
	int32_t ___precision_3;
	// System.Int32 System.Number/NumberBuffer::scale
	int32_t ___scale_4;
	// System.Boolean System.Number/NumberBuffer::sign
	bool ___sign_5;

public:
	inline static int32_t get_offset_of_baseAddress_1() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892, ___baseAddress_1)); }
	inline uint8_t* get_baseAddress_1() const { return ___baseAddress_1; }
	inline uint8_t** get_address_of_baseAddress_1() { return &___baseAddress_1; }
	inline void set_baseAddress_1(uint8_t* value)
	{
		___baseAddress_1 = value;
	}

	inline static int32_t get_offset_of_digits_2() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892, ___digits_2)); }
	inline Il2CppChar* get_digits_2() const { return ___digits_2; }
	inline Il2CppChar** get_address_of_digits_2() { return &___digits_2; }
	inline void set_digits_2(Il2CppChar* value)
	{
		___digits_2 = value;
	}

	inline static int32_t get_offset_of_precision_3() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892, ___precision_3)); }
	inline int32_t get_precision_3() const { return ___precision_3; }
	inline int32_t* get_address_of_precision_3() { return &___precision_3; }
	inline void set_precision_3(int32_t value)
	{
		___precision_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892, ___scale_4)); }
	inline int32_t get_scale_4() const { return ___scale_4; }
	inline int32_t* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(int32_t value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892, ___sign_5)); }
	inline bool get_sign_5() const { return ___sign_5; }
	inline bool* get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(bool value)
	{
		___sign_5 = value;
	}
};

struct NumberBuffer_t1668389892_StaticFields
{
public:
	// System.Int32 System.Number/NumberBuffer::NumberBufferBytes
	int32_t ___NumberBufferBytes_0;

public:
	inline static int32_t get_offset_of_NumberBufferBytes_0() { return static_cast<int32_t>(offsetof(NumberBuffer_t1668389892_StaticFields, ___NumberBufferBytes_0)); }
	inline int32_t get_NumberBufferBytes_0() const { return ___NumberBufferBytes_0; }
	inline int32_t* get_address_of_NumberBufferBytes_0() { return &___NumberBufferBytes_0; }
	inline void set_NumberBufferBytes_0(int32_t value)
	{
		___NumberBufferBytes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Number/NumberBuffer
struct NumberBuffer_t1668389892_marshaled_pinvoke
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
// Native definition for COM marshalling of System.Number/NumberBuffer
struct NumberBuffer_t1668389892_marshaled_com
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
#endif // NUMBERBUFFER_T1668389892_H
#ifndef INT32_T1745228240_H
#define INT32_T1745228240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1745228240 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t1745228240, ___m_value_0)); }
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
#endif // INT32_T1745228240_H
#ifndef PARAMSARRAY_T562935794_H
#define PARAMSARRAY_T562935794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamsArray
struct  ParamsArray_t562935794 
{
public:
	// System.Object System.ParamsArray::arg0
	RuntimeObject * ___arg0_3;
	// System.Object System.ParamsArray::arg1
	RuntimeObject * ___arg1_4;
	// System.Object System.ParamsArray::arg2
	RuntimeObject * ___arg2_5;
	// System.Object[] System.ParamsArray::args
	ObjectU5BU5D_t608532122* ___args_6;

public:
	inline static int32_t get_offset_of_arg0_3() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794, ___arg0_3)); }
	inline RuntimeObject * get_arg0_3() const { return ___arg0_3; }
	inline RuntimeObject ** get_address_of_arg0_3() { return &___arg0_3; }
	inline void set_arg0_3(RuntimeObject * value)
	{
		___arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_3), value);
	}

	inline static int32_t get_offset_of_arg1_4() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794, ___arg1_4)); }
	inline RuntimeObject * get_arg1_4() const { return ___arg1_4; }
	inline RuntimeObject ** get_address_of_arg1_4() { return &___arg1_4; }
	inline void set_arg1_4(RuntimeObject * value)
	{
		___arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_4), value);
	}

	inline static int32_t get_offset_of_arg2_5() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794, ___arg2_5)); }
	inline RuntimeObject * get_arg2_5() const { return ___arg2_5; }
	inline RuntimeObject ** get_address_of_arg2_5() { return &___arg2_5; }
	inline void set_arg2_5(RuntimeObject * value)
	{
		___arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_5), value);
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794, ___args_6)); }
	inline ObjectU5BU5D_t608532122* get_args_6() const { return ___args_6; }
	inline ObjectU5BU5D_t608532122** get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(ObjectU5BU5D_t608532122* value)
	{
		___args_6 = value;
		Il2CppCodeGenWriteBarrier((&___args_6), value);
	}
};

struct ParamsArray_t562935794_StaticFields
{
public:
	// System.Object[] System.ParamsArray::oneArgArray
	ObjectU5BU5D_t608532122* ___oneArgArray_0;
	// System.Object[] System.ParamsArray::twoArgArray
	ObjectU5BU5D_t608532122* ___twoArgArray_1;
	// System.Object[] System.ParamsArray::threeArgArray
	ObjectU5BU5D_t608532122* ___threeArgArray_2;

public:
	inline static int32_t get_offset_of_oneArgArray_0() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794_StaticFields, ___oneArgArray_0)); }
	inline ObjectU5BU5D_t608532122* get_oneArgArray_0() const { return ___oneArgArray_0; }
	inline ObjectU5BU5D_t608532122** get_address_of_oneArgArray_0() { return &___oneArgArray_0; }
	inline void set_oneArgArray_0(ObjectU5BU5D_t608532122* value)
	{
		___oneArgArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___oneArgArray_0), value);
	}

	inline static int32_t get_offset_of_twoArgArray_1() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794_StaticFields, ___twoArgArray_1)); }
	inline ObjectU5BU5D_t608532122* get_twoArgArray_1() const { return ___twoArgArray_1; }
	inline ObjectU5BU5D_t608532122** get_address_of_twoArgArray_1() { return &___twoArgArray_1; }
	inline void set_twoArgArray_1(ObjectU5BU5D_t608532122* value)
	{
		___twoArgArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___twoArgArray_1), value);
	}

	inline static int32_t get_offset_of_threeArgArray_2() { return static_cast<int32_t>(offsetof(ParamsArray_t562935794_StaticFields, ___threeArgArray_2)); }
	inline ObjectU5BU5D_t608532122* get_threeArgArray_2() const { return ___threeArgArray_2; }
	inline ObjectU5BU5D_t608532122** get_address_of_threeArgArray_2() { return &___threeArgArray_2; }
	inline void set_threeArgArray_2(ObjectU5BU5D_t608532122* value)
	{
		___threeArgArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___threeArgArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParamsArray
struct ParamsArray_t562935794_marshaled_pinvoke
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t608532122* ___args_6;
};
// Native definition for COM marshalling of System.ParamsArray
struct ParamsArray_t562935794_marshaled_com
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t608532122* ___args_6;
};
#endif // PARAMSARRAY_T562935794_H
#ifndef PARAMARRAYATTRIBUTE_T2932496946_H
#define PARAMARRAYATTRIBUTE_T2932496946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t2932496946  : public Attribute_t3701037118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T2932496946_H
#ifndef OBSOLETEATTRIBUTE_T3521585388_H
#define OBSOLETEATTRIBUTE_T3521585388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t3521585388  : public Attribute_t3701037118
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t3521585388, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t3521585388, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T3521585388_H
#ifndef INT16_T2329935398_H
#define INT16_T2329935398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2329935398 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2329935398, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2329935398_H
#ifndef NONSERIALIZEDATTRIBUTE_T1198024176_H
#define NONSERIALIZEDATTRIBUTE_T1198024176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t1198024176  : public Attribute_t3701037118
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T1198024176_H
#ifndef NULLREFERENCEEXCEPTION_T2872250702_H
#define NULLREFERENCEEXCEPTION_T2872250702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t2872250702  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T2872250702_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T3853547498_H
#define UNAUTHORIZEDACCESSEXCEPTION_T3853547498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t3853547498  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T3853547498_H
#ifndef NOTSUPPORTEDEXCEPTION_T2441971861_H
#define NOTSUPPORTEDEXCEPTION_T2441971861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t2441971861  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T2441971861_H
#ifndef INVALIDOPERATIONEXCEPTION_T1226705933_H
#define INVALIDOPERATIONEXCEPTION_T1226705933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t1226705933  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T1226705933_H
#ifndef FORMATEXCEPTION_T405081198_H
#define FORMATEXCEPTION_T405081198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t405081198  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T405081198_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3088544901_H
#define NOTIMPLEMENTEDEXCEPTION_T3088544901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3088544901  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3088544901_H
#ifndef EXECUTIONENGINEEXCEPTION_T2635538317_H
#define EXECUTIONENGINEEXCEPTION_T2635538317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t2635538317  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T2635538317_H
#ifndef SWITCHVALUESTATE_T201469840_H
#define SWITCHVALUESTATE_T201469840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContext/SwitchValueState
struct  SwitchValueState_t201469840 
{
public:
	// System.Int32 System.AppContext/SwitchValueState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SwitchValueState_t201469840, ___value___2)); }
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
#endif // SWITCHVALUESTATE_T201469840_H
#ifndef EXCEPTIONMESSAGEKIND_T119371845_H
#define EXCEPTIONMESSAGEKIND_T119371845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception/ExceptionMessageKind
struct  ExceptionMessageKind_t119371845 
{
public:
	// System.Int32 System.Exception/ExceptionMessageKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionMessageKind_t119371845, ___value___2)); }
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
#endif // EXCEPTIONMESSAGEKIND_T119371845_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T3679354693_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T3679354693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t3679354693  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T3679354693_H
#ifndef ARITHMETICEXCEPTION_T1794122380_H
#define ARITHMETICEXCEPTION_T1794122380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t1794122380  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T1794122380_H
#ifndef MEMBERACCESSEXCEPTION_T742368260_H
#define MEMBERACCESSEXCEPTION_T742368260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t742368260  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T742368260_H
#ifndef RUNTIMETYPEHANDLE_T351885512_H
#define RUNTIMETYPEHANDLE_T351885512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t351885512 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t351885512, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T351885512_H
#ifndef DELEGATE_T2095407503_H
#define DELEGATE_T2095407503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2095407503  : public RuntimeObject
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
	DelegateData_t1909810013 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___data_9)); }
	inline DelegateData_t1909810013 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1909810013 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1909810013 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t2095407503, ___method_is_virtual_10)); }
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
struct Delegate_t2095407503_marshaled_pinvoke
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
	DelegateData_t1909810013 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t2095407503_marshaled_com
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
	DelegateData_t1909810013 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T2095407503_H
#ifndef BINDINGFLAGS_T2955490398_H
#define BINDINGFLAGS_T2955490398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2955490398 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2955490398, ___value___2)); }
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
#endif // BINDINGFLAGS_T2955490398_H
#ifndef PARSEFAILUREKIND_T4193638372_H
#define PARSEFAILUREKIND_T4193638372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/ParseFailureKind
struct  ParseFailureKind_t4193638372 
{
public:
	// System.Int32 System.Version/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t4193638372, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T4193638372_H
#ifndef RANKEXCEPTION_T3841262664_H
#define RANKEXCEPTION_T3841262664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3841262664  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3841262664_H
#ifndef STACKOVERFLOWEXCEPTION_T1949871928_H
#define STACKOVERFLOWEXCEPTION_T1949871928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t1949871928  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T1949871928_H
#ifndef TYPELOADEXCEPTION_T1274040424_H
#define TYPELOADEXCEPTION_T1274040424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1274040424  : public SystemException_t1209695858
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_16;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_17;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_18;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_19;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(TypeLoadException_t1274040424, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_AssemblyName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t1274040424, ___AssemblyName_17)); }
	inline String_t* get_AssemblyName_17() const { return ___AssemblyName_17; }
	inline String_t** get_address_of_AssemblyName_17() { return &___AssemblyName_17; }
	inline void set_AssemblyName_17(String_t* value)
	{
		___AssemblyName_17 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_17), value);
	}

	inline static int32_t get_offset_of_MessageArg_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t1274040424, ___MessageArg_18)); }
	inline String_t* get_MessageArg_18() const { return ___MessageArg_18; }
	inline String_t** get_address_of_MessageArg_18() { return &___MessageArg_18; }
	inline void set_MessageArg_18(String_t* value)
	{
		___MessageArg_18 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_18), value);
	}

	inline static int32_t get_offset_of_ResourceId_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t1274040424, ___ResourceId_19)); }
	inline int32_t get_ResourceId_19() const { return ___ResourceId_19; }
	inline int32_t* get_address_of_ResourceId_19() { return &___ResourceId_19; }
	inline void set_ResourceId_19(int32_t value)
	{
		___ResourceId_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T1274040424_H
#ifndef TYPENAMEKIND_T1264047990_H
#define TYPENAMEKIND_T1264047990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameKind
struct  TypeNameKind_t1264047990 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t1264047990, ___value___2)); }
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
#endif // TYPENAMEKIND_T1264047990_H
#ifndef TYPENAMEFORMATFLAGS_T4165845883_H
#define TYPENAMEFORMATFLAGS_T4165845883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_t4165845883 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_t4165845883, ___value___2)); }
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
#endif // TYPENAMEFORMATFLAGS_T4165845883_H
#ifndef STRINGSPLITOPTIONS_T1694186064_H
#define STRINGSPLITOPTIONS_T1694186064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t1694186064 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t1694186064, ___value___2)); }
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
#endif // STRINGSPLITOPTIONS_T1694186064_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T2127812357_H
#define INDEXOUTOFRANGEEXCEPTION_T2127812357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t2127812357  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T2127812357_H
#ifndef OUTOFMEMORYEXCEPTION_T4181025100_H
#define OUTOFMEMORYEXCEPTION_T4181025100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t4181025100  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T4181025100_H
#ifndef OPERATIONCANCELEDEXCEPTION_T3336766334_H
#define OPERATIONCANCELEDEXCEPTION_T3336766334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t3336766334  : public SystemException_t1209695858
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t3701455336  ____cancellationToken_16;

public:
	inline static int32_t get_offset_of__cancellationToken_16() { return static_cast<int32_t>(offsetof(OperationCanceledException_t3336766334, ____cancellationToken_16)); }
	inline CancellationToken_t3701455336  get__cancellationToken_16() const { return ____cancellationToken_16; }
	inline CancellationToken_t3701455336 * get_address_of__cancellationToken_16() { return &____cancellationToken_16; }
	inline void set__cancellationToken_16(CancellationToken_t3701455336  value)
	{
		____cancellationToken_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T3336766334_H
#ifndef INVALIDCASTEXCEPTION_T576550936_H
#define INVALIDCASTEXCEPTION_T576550936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t576550936  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T576550936_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T4129318129_H
#define TYPEINITIALIZATIONEXCEPTION_T4129318129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t4129318129  : public SystemException_t1209695858
{
public:
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_16;

public:
	inline static int32_t get_offset_of__typeName_16() { return static_cast<int32_t>(offsetof(TypeInitializationException_t4129318129, ____typeName_16)); }
	inline String_t* get__typeName_16() const { return ____typeName_16; }
	inline String_t** get_address_of__typeName_16() { return &____typeName_16; }
	inline void set__typeName_16(String_t* value)
	{
		____typeName_16 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T4129318129_H
#ifndef TIMESPAN_T483180088_H
#define TIMESPAN_T483180088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t483180088 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t483180088_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t483180088  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t483180088  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t483180088  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088_StaticFields, ___Zero_0)); }
	inline TimeSpan_t483180088  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t483180088 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t483180088  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t483180088  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t483180088 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t483180088  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t483180088  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t483180088 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t483180088  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t483180088_StaticFields, ____legacyMode_5)); }
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
#endif // TIMESPAN_T483180088_H
#ifndef EXCEPTIONARGUMENT_T3854348521_H
#define EXCEPTIONARGUMENT_T3854348521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionArgument
struct  ExceptionArgument_t3854348521 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t3854348521, ___value___2)); }
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
#endif // EXCEPTIONARGUMENT_T3854348521_H
#ifndef TIMEOUTEXCEPTION_T1220097412_H
#define TIMEOUTEXCEPTION_T1220097412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t1220097412  : public SystemException_t1209695858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T1220097412_H
#ifndef EXCEPTIONRESOURCE_T959232875_H
#define EXCEPTIONRESOURCE_T959232875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionResource
struct  ExceptionResource_t959232875 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_t959232875, ___value___2)); }
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
#endif // EXCEPTIONRESOURCE_T959232875_H
#ifndef VERSIONRESULT_T1080948415_H
#define VERSIONRESULT_T1080948415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version/VersionResult
struct  VersionResult_t1080948415 
{
public:
	// System.Version System.Version/VersionResult::m_parsedVersion
	Version_t986581081 * ___m_parsedVersion_0;
	// System.Version/ParseFailureKind System.Version/VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version/VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version/VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version/VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_t1080948415, ___m_parsedVersion_0)); }
	inline Version_t986581081 * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_t986581081 ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_t986581081 * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parsedVersion_0), value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_t1080948415, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_t1080948415, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_exceptionArgument_2), value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_t1080948415, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_argumentName_3), value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_t1080948415, ___m_canThrow_4)); }
	inline bool get_m_canThrow_4() const { return ___m_canThrow_4; }
	inline bool* get_address_of_m_canThrow_4() { return &___m_canThrow_4; }
	inline void set_m_canThrow_4(bool value)
	{
		___m_canThrow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Version/VersionResult
struct VersionResult_t1080948415_marshaled_pinvoke
{
	Version_t986581081 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_t1080948415_marshaled_com
{
	Version_t986581081 * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
#endif // VERSIONRESULT_T1080948415_H
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
	RuntimeTypeHandle_t351885512  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t351885512  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t351885512 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t351885512  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3391617843 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3391617843 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3391617843 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t815670707* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t1003639188 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t3391617843 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t3391617843 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t3391617843 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t3391617843 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t3391617843 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t3391617843 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t3391617843 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t3391617843 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t3391617843 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t815670707* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t815670707** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t815670707* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t1003639188 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t1003639188 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t1003639188 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef METHODACCESSEXCEPTION_T221635680_H
#define METHODACCESSEXCEPTION_T221635680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t221635680  : public MemberAccessException_t742368260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T221635680_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T1709289196_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T1709289196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t1709289196  : public TypeLoadException_t1274040424
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T1709289196_H
#ifndef MISSINGMEMBEREXCEPTION_T4225353063_H
#define MISSINGMEMBEREXCEPTION_T4225353063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t4225353063  : public MemberAccessException_t742368260
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_16;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_17;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t464104634* ___Signature_18;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(MissingMemberException_t4225353063, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_MemberName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t4225353063, ___MemberName_17)); }
	inline String_t* get_MemberName_17() const { return ___MemberName_17; }
	inline String_t** get_address_of_MemberName_17() { return &___MemberName_17; }
	inline void set_MemberName_17(String_t* value)
	{
		___MemberName_17 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_17), value);
	}

	inline static int32_t get_offset_of_Signature_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t4225353063, ___Signature_18)); }
	inline ByteU5BU5D_t464104634* get_Signature_18() const { return ___Signature_18; }
	inline ByteU5BU5D_t464104634** get_address_of_Signature_18() { return &___Signature_18; }
	inline void set_Signature_18(ByteU5BU5D_t464104634* value)
	{
		___Signature_18 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T4225353063_H
#ifndef MULTICASTDELEGATE_T2010921510_H
#define MULTICASTDELEGATE_T2010921510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2010921510  : public Delegate_t2095407503
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t3919377238* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2010921510, ___delegates_11)); }
	inline DelegateU5BU5D_t3919377238* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t3919377238** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t3919377238* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2010921510_marshaled_pinvoke : public Delegate_t2095407503_marshaled_pinvoke
{
	DelegateU5BU5D_t3919377238* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2010921510_marshaled_com : public Delegate_t2095407503_marshaled_com
{
	DelegateU5BU5D_t3919377238* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2010921510_H
#ifndef DATETIMEFORMAT_T256970506_H
#define DATETIMEFORMAT_T256970506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeFormat
struct  DateTimeFormat_t256970506  : public RuntimeObject
{
public:

public:
};

struct DateTimeFormat_t256970506_StaticFields
{
public:
	// System.TimeSpan System.DateTimeFormat::NullOffset
	TimeSpan_t483180088  ___NullOffset_0;
	// System.Char[] System.DateTimeFormat::allStandardFormats
	CharU5BU5D_t3850815912* ___allStandardFormats_1;
	// System.String[] System.DateTimeFormat::fixedNumberFormats
	StringU5BU5D_t2160812740* ___fixedNumberFormats_2;

public:
	inline static int32_t get_offset_of_NullOffset_0() { return static_cast<int32_t>(offsetof(DateTimeFormat_t256970506_StaticFields, ___NullOffset_0)); }
	inline TimeSpan_t483180088  get_NullOffset_0() const { return ___NullOffset_0; }
	inline TimeSpan_t483180088 * get_address_of_NullOffset_0() { return &___NullOffset_0; }
	inline void set_NullOffset_0(TimeSpan_t483180088  value)
	{
		___NullOffset_0 = value;
	}

	inline static int32_t get_offset_of_allStandardFormats_1() { return static_cast<int32_t>(offsetof(DateTimeFormat_t256970506_StaticFields, ___allStandardFormats_1)); }
	inline CharU5BU5D_t3850815912* get_allStandardFormats_1() const { return ___allStandardFormats_1; }
	inline CharU5BU5D_t3850815912** get_address_of_allStandardFormats_1() { return &___allStandardFormats_1; }
	inline void set_allStandardFormats_1(CharU5BU5D_t3850815912* value)
	{
		___allStandardFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___allStandardFormats_1), value);
	}

	inline static int32_t get_offset_of_fixedNumberFormats_2() { return static_cast<int32_t>(offsetof(DateTimeFormat_t256970506_StaticFields, ___fixedNumberFormats_2)); }
	inline StringU5BU5D_t2160812740* get_fixedNumberFormats_2() const { return ___fixedNumberFormats_2; }
	inline StringU5BU5D_t2160812740** get_address_of_fixedNumberFormats_2() { return &___fixedNumberFormats_2; }
	inline void set_fixedNumberFormats_2(StringU5BU5D_t2160812740* value)
	{
		___fixedNumberFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___fixedNumberFormats_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMAT_T256970506_H
#ifndef OBJECTDISPOSEDEXCEPTION_T2395645644_H
#define OBJECTDISPOSEDEXCEPTION_T2395645644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t2395645644  : public InvalidOperationException_t1226705933
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_16;

public:
	inline static int32_t get_offset_of_objectName_16() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2395645644, ___objectName_16)); }
	inline String_t* get_objectName_16() const { return ___objectName_16; }
	inline String_t** get_address_of_objectName_16() { return &___objectName_16; }
	inline void set_objectName_16(String_t* value)
	{
		___objectName_16 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T2395645644_H
#ifndef OVERFLOWEXCEPTION_T3054656059_H
#define OVERFLOWEXCEPTION_T3054656059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t3054656059  : public ArithmeticException_t1794122380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T3054656059_H
#ifndef FIELDACCESSEXCEPTION_T3680481608_H
#define FIELDACCESSEXCEPTION_T3680481608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t3680481608  : public MemberAccessException_t742368260
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T3680481608_H
#ifndef TYPEDREFERENCE_T656743868_H
#define TYPEDREFERENCE_T656743868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t656743868 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t351885512  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t656743868, ___type_0)); }
	inline RuntimeTypeHandle_t351885512  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t351885512 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t351885512  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t656743868, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t656743868, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T656743868_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T826398654_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T826398654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t826398654  : public NotSupportedException_t2441971861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T826398654_H
#ifndef TYPEINFO_T2717993802_H
#define TYPEINFO_T2717993802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t2717993802  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T2717993802_H
#ifndef EVENTHANDLER_T3301447612_H
#define EVENTHANDLER_T3301447612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t3301447612  : public MulticastDelegate_t2010921510
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3301447612_H
#ifndef MISSINGFIELDEXCEPTION_T2534451631_H
#define MISSINGFIELDEXCEPTION_T2534451631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t2534451631  : public MissingMemberException_t4225353063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T2534451631_H
#ifndef MISSINGMETHODEXCEPTION_T3254663600_H
#define MISSINGMETHODEXCEPTION_T3254663600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t3254663600  : public MissingMemberException_t4225353063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T3254663600_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3421025660_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3421025660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3421025660  : public MulticastDelegate_t2010921510
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3421025660_H
#ifndef RUNTIMETYPE_T139990853_H
#define RUNTIMETYPE_T139990853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t139990853  : public TypeInfo_t2717993802
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t2950349361 * ___type_info_10;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_11;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t906393226 * ___m_serializationCtor_12;

public:
	inline static int32_t get_offset_of_type_info_10() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853, ___type_info_10)); }
	inline MonoTypeInfo_t2950349361 * get_type_info_10() const { return ___type_info_10; }
	inline MonoTypeInfo_t2950349361 ** get_address_of_type_info_10() { return &___type_info_10; }
	inline void set_type_info_10(MonoTypeInfo_t2950349361 * value)
	{
		___type_info_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_10), value);
	}

	inline static int32_t get_offset_of_GenericCache_11() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853, ___GenericCache_11)); }
	inline RuntimeObject * get_GenericCache_11() const { return ___GenericCache_11; }
	inline RuntimeObject ** get_address_of_GenericCache_11() { return &___GenericCache_11; }
	inline void set_GenericCache_11(RuntimeObject * value)
	{
		___GenericCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_11), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_12() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853, ___m_serializationCtor_12)); }
	inline RuntimeConstructorInfo_t906393226 * get_m_serializationCtor_12() const { return ___m_serializationCtor_12; }
	inline RuntimeConstructorInfo_t906393226 ** get_address_of_m_serializationCtor_12() { return &___m_serializationCtor_12; }
	inline void set_m_serializationCtor_12(RuntimeConstructorInfo_t906393226 * value)
	{
		___m_serializationCtor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_12), value);
	}
};

struct RuntimeType_t139990853_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t3797947310 * ___clsid_types_13;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t2212728307 * ___clsid_assemblybuilder_14;
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t139990853 * ___ValueType_15;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t139990853 * ___EnumType_16;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t139990853 * ___ObjectType_17;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t139990853 * ___StringType_18;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t139990853 * ___DelegateType_19;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t815670707* ___s_SICtorParamTypes_20;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t139990853 * ___s_typedRef_30;

public:
	inline static int32_t get_offset_of_clsid_types_13() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___clsid_types_13)); }
	inline Dictionary_2_t3797947310 * get_clsid_types_13() const { return ___clsid_types_13; }
	inline Dictionary_2_t3797947310 ** get_address_of_clsid_types_13() { return &___clsid_types_13; }
	inline void set_clsid_types_13(Dictionary_2_t3797947310 * value)
	{
		___clsid_types_13 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_13), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_14() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___clsid_assemblybuilder_14)); }
	inline AssemblyBuilder_t2212728307 * get_clsid_assemblybuilder_14() const { return ___clsid_assemblybuilder_14; }
	inline AssemblyBuilder_t2212728307 ** get_address_of_clsid_assemblybuilder_14() { return &___clsid_assemblybuilder_14; }
	inline void set_clsid_assemblybuilder_14(AssemblyBuilder_t2212728307 * value)
	{
		___clsid_assemblybuilder_14 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_14), value);
	}

	inline static int32_t get_offset_of_ValueType_15() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___ValueType_15)); }
	inline RuntimeType_t139990853 * get_ValueType_15() const { return ___ValueType_15; }
	inline RuntimeType_t139990853 ** get_address_of_ValueType_15() { return &___ValueType_15; }
	inline void set_ValueType_15(RuntimeType_t139990853 * value)
	{
		___ValueType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_15), value);
	}

	inline static int32_t get_offset_of_EnumType_16() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___EnumType_16)); }
	inline RuntimeType_t139990853 * get_EnumType_16() const { return ___EnumType_16; }
	inline RuntimeType_t139990853 ** get_address_of_EnumType_16() { return &___EnumType_16; }
	inline void set_EnumType_16(RuntimeType_t139990853 * value)
	{
		___EnumType_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_16), value);
	}

	inline static int32_t get_offset_of_ObjectType_17() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___ObjectType_17)); }
	inline RuntimeType_t139990853 * get_ObjectType_17() const { return ___ObjectType_17; }
	inline RuntimeType_t139990853 ** get_address_of_ObjectType_17() { return &___ObjectType_17; }
	inline void set_ObjectType_17(RuntimeType_t139990853 * value)
	{
		___ObjectType_17 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_17), value);
	}

	inline static int32_t get_offset_of_StringType_18() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___StringType_18)); }
	inline RuntimeType_t139990853 * get_StringType_18() const { return ___StringType_18; }
	inline RuntimeType_t139990853 ** get_address_of_StringType_18() { return &___StringType_18; }
	inline void set_StringType_18(RuntimeType_t139990853 * value)
	{
		___StringType_18 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_18), value);
	}

	inline static int32_t get_offset_of_DelegateType_19() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___DelegateType_19)); }
	inline RuntimeType_t139990853 * get_DelegateType_19() const { return ___DelegateType_19; }
	inline RuntimeType_t139990853 ** get_address_of_DelegateType_19() { return &___DelegateType_19; }
	inline void set_DelegateType_19(RuntimeType_t139990853 * value)
	{
		___DelegateType_19 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_19), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_20() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___s_SICtorParamTypes_20)); }
	inline TypeU5BU5D_t815670707* get_s_SICtorParamTypes_20() const { return ___s_SICtorParamTypes_20; }
	inline TypeU5BU5D_t815670707** get_address_of_s_SICtorParamTypes_20() { return &___s_SICtorParamTypes_20; }
	inline void set_s_SICtorParamTypes_20(TypeU5BU5D_t815670707* value)
	{
		___s_SICtorParamTypes_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_20), value);
	}

	inline static int32_t get_offset_of_s_typedRef_30() { return static_cast<int32_t>(offsetof(RuntimeType_t139990853_StaticFields, ___s_typedRef_30)); }
	inline RuntimeType_t139990853 * get_s_typedRef_30() const { return ___s_typedRef_30; }
	inline RuntimeType_t139990853 ** get_address_of_s_typedRef_30() { return &___s_typedRef_30; }
	inline void set_s_typedRef_30(RuntimeType_t139990853 * value)
	{
		___s_typedRef_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T139990853_H
#ifndef REFLECTIONONLYTYPE_T3594395547_H
#define REFLECTIONONLYTYPE_T3594395547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ReflectionOnlyType
struct  ReflectionOnlyType_t3594395547  : public RuntimeType_t139990853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONONLYTYPE_T3594395547_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (ValuesAndNames_t3890449022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable200[2] = 
{
	ValuesAndNames_t3890449022::get_offset_of_Values_0(),
	ValuesAndNames_t3890449022::get_offset_of_Names_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (EntryPointNotFoundException_t1709289196), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (EventArgs_t1971840696), -1, sizeof(EventArgs_t1971840696_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable202[1] = 
{
	EventArgs_t1971840696_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (EventHandler_t3301447612), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (Exception_t3118724072), -1, sizeof(Exception_t3118724072_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable205[16] = 
{
	Exception_t3118724072_StaticFields::get_offset_of_s_EDILock_0(),
	Exception_t3118724072::get_offset_of__className_1(),
	Exception_t3118724072::get_offset_of__message_2(),
	Exception_t3118724072::get_offset_of__data_3(),
	Exception_t3118724072::get_offset_of__innerException_4(),
	Exception_t3118724072::get_offset_of__helpURL_5(),
	Exception_t3118724072::get_offset_of__stackTrace_6(),
	Exception_t3118724072::get_offset_of__stackTraceString_7(),
	Exception_t3118724072::get_offset_of__remoteStackTraceString_8(),
	Exception_t3118724072::get_offset_of__remoteStackIndex_9(),
	Exception_t3118724072::get_offset_of__dynamicMethods_10(),
	Exception_t3118724072::get_offset_of__HResult_11(),
	Exception_t3118724072::get_offset_of__source_12(),
	Exception_t3118724072::get_offset_of__safeSerializationManager_13(),
	Exception_t3118724072::get_offset_of_captured_traces_14(),
	Exception_t3118724072::get_offset_of_native_trace_ips_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { sizeof (ExceptionMessageKind_t119371845)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable206[4] = 
{
	ExceptionMessageKind_t119371845::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { sizeof (ExecutionEngineException_t2635538317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { sizeof (FieldAccessException_t3680481608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (FlagsAttribute_t3420520587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (FormatException_t405081198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (GC_t3909062859), -1, sizeof(GC_t3909062859_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable211[1] = 
{
	GC_t3909062859_StaticFields::get_offset_of_EPHEMERON_TOMBSTONE_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (InvalidCastException_t576550936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (IndexOutOfRangeException_t2127812357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (InvalidOperationException_t1226705933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (Int16_t2329935398)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable227[3] = 
{
	Int16_t2329935398::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (Int32_t1745228240)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable228[3] = 
{
	Int32_t1745228240::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { sizeof (Int64_t1293223455)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable229[3] = 
{
	Int64_t1293223455::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (InvalidTimeZoneException_t3916378553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (LazyHelpers_t1941619503), -1, sizeof(LazyHelpers_t1941619503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable232[1] = 
{
	LazyHelpers_t1941619503_StaticFields::get_offset_of_PUBLICATION_ONLY_SENTINEL_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable233[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable234[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable235[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable236[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (Math_t2802231814), -1, sizeof(Math_t2802231814_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable238[2] = 
{
	Math_t2802231814_StaticFields::get_offset_of_doubleRoundLimit_0(),
	Math_t2802231814_StaticFields::get_offset_of_roundPower10Double_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (MemberAccessException_t742368260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (MethodAccessException_t221635680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (MissingFieldException_t2534451631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (MissingMemberException_t4225353063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable242[3] = 
{
	MissingMemberException_t4225353063::get_offset_of_ClassName_16(),
	MissingMemberException_t4225353063::get_offset_of_MemberName_17(),
	MissingMemberException_t4225353063::get_offset_of_Signature_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (MissingMethodException_t3254663600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (MulticastNotSupportedException_t3679354693), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (NonSerializedAttribute_t1198024176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (NotImplementedException_t3088544901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (NotSupportedException_t2441971861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (NullReferenceException_t2872250702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (Number_t3629966747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (NumberBuffer_t1668389892)+ sizeof (RuntimeObject), sizeof(NumberBuffer_t1668389892_marshaled_pinvoke), sizeof(NumberBuffer_t1668389892_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable250[6] = 
{
	NumberBuffer_t1668389892_StaticFields::get_offset_of_NumberBufferBytes_0(),
	NumberBuffer_t1668389892::get_offset_of_baseAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t1668389892::get_offset_of_digits_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t1668389892::get_offset_of_precision_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t1668389892::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t1668389892::get_offset_of_sign_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (ObjectDisposedException_t2395645644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable251[1] = 
{
	ObjectDisposedException_t2395645644::get_offset_of_objectName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (ObsoleteAttribute_t3521585388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable252[2] = 
{
	ObsoleteAttribute_t3521585388::get_offset_of__message_0(),
	ObsoleteAttribute_t3521585388::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (OperationCanceledException_t3336766334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable253[1] = 
{
	OperationCanceledException_t3336766334::get_offset_of__cancellationToken_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (OutOfMemoryException_t4181025100), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (OverflowException_t3054656059), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (ParamArrayAttribute_t2932496946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (ParamsArray_t562935794)+ sizeof (RuntimeObject), -1, sizeof(ParamsArray_t562935794_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable257[7] = 
{
	ParamsArray_t562935794_StaticFields::get_offset_of_oneArgArray_0(),
	ParamsArray_t562935794_StaticFields::get_offset_of_twoArgArray_1(),
	ParamsArray_t562935794_StaticFields::get_offset_of_threeArgArray_2(),
	ParamsArray_t562935794::get_offset_of_arg0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t562935794::get_offset_of_arg1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t562935794::get_offset_of_arg2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t562935794::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (PlatformNotSupportedException_t826398654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (Random_t1180981843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable259[3] = 
{
	Random_t1180981843::get_offset_of_inext_0(),
	Random_t1180981843::get_offset_of_inextp_1(),
	Random_t1180981843::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (RankException_t3841262664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (TypeNameFormatFlags_t4165845883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable261[11] = 
{
	TypeNameFormatFlags_t4165845883::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (TypeNameKind_t1264047990)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable262[5] = 
{
	TypeNameKind_t1264047990::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (ReflectionOnlyType_t3594395547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (SByte_t2680250289)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable264[1] = 
{
	SByte_t2680250289::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (SerializableAttribute_t1184117677), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (SharedStatics_t3115695139), -1, sizeof(SharedStatics_t3115695139_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable266[2] = 
{
	SharedStatics_t3115695139_StaticFields::get_offset_of__sharedStatics_0(),
	SharedStatics_t3115695139::get_offset_of__maker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (StackOverflowException_t1949871928), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (Single_t1123457781)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable268[7] = 
{
	Single_t1123457781::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (StringSplitOptions_t1694186064)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable269[3] = 
{
	StringSplitOptions_t1694186064::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (StringComparer_t3515338828), -1, sizeof(StringComparer_t3515338828_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable270[4] = 
{
	StringComparer_t3515338828_StaticFields::get_offset_of__invariantCulture_0(),
	StringComparer_t3515338828_StaticFields::get_offset_of__invariantCultureIgnoreCase_1(),
	StringComparer_t3515338828_StaticFields::get_offset_of__ordinal_2(),
	StringComparer_t3515338828_StaticFields::get_offset_of__ordinalIgnoreCase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (CultureAwareComparer_t1215850338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable271[2] = 
{
	CultureAwareComparer_t1215850338::get_offset_of__compareInfo_4(),
	CultureAwareComparer_t1215850338::get_offset_of__ignoreCase_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (OrdinalComparer_t268124976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable272[1] = 
{
	OrdinalComparer_t268124976::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (SystemException_t1209695858), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (TimeoutException_t1220097412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (TimeSpan_t483180088)+ sizeof (RuntimeObject), sizeof(TimeSpan_t483180088 ), sizeof(TimeSpan_t483180088_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable275[6] = 
{
	TimeSpan_t483180088_StaticFields::get_offset_of_Zero_0(),
	TimeSpan_t483180088_StaticFields::get_offset_of_MaxValue_1(),
	TimeSpan_t483180088_StaticFields::get_offset_of_MinValue_2(),
	TimeSpan_t483180088::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpan_t483180088_StaticFields::get_offset_of__legacyConfigChecked_4(),
	TimeSpan_t483180088_StaticFields::get_offset_of__legacyMode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (ThreadStaticAttribute_t3725497727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (ThrowHelper_t813351456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (ExceptionArgument_t3854348521)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable278[25] = 
{
	ExceptionArgument_t3854348521::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (ExceptionResource_t959232875)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable279[47] = 
{
	ExceptionResource_t959232875::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (TypeInitializationException_t4129318129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable280[1] = 
{
	TypeInitializationException_t4129318129::get_offset_of__typeName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (TypeLoadException_t1274040424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable281[4] = 
{
	TypeLoadException_t1274040424::get_offset_of_ClassName_16(),
	TypeLoadException_t1274040424::get_offset_of_AssemblyName_17(),
	TypeLoadException_t1274040424::get_offset_of_MessageArg_18(),
	TypeLoadException_t1274040424::get_offset_of_ResourceId_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (TypedReference_t656743868)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable282[3] = 
{
	TypedReference_t656743868::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t656743868::get_offset_of_Value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t656743868::get_offset_of_Type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (UInt16_t340842388)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	UInt16_t340842388::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (UInt32_t164030222)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable284[1] = 
{
	UInt32_t164030222::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (UInt64_t1634078983)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable285[1] = 
{
	UInt64_t1634078983::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (UnauthorizedAccessException_t3853547498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (UnhandledExceptionEventArgs_t1279349540), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable287[2] = 
{
	UnhandledExceptionEventArgs_t1279349540::get_offset_of__Exception_1(),
	UnhandledExceptionEventArgs_t1279349540::get_offset_of__IsTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (UnhandledExceptionEventHandler_t3421025660), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (UnitySerializationHolder_t3405802364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable289[8] = 
{
	UnitySerializationHolder_t3405802364::get_offset_of_m_instantiation_0(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_elementTypes_1(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_genericParameterPosition_2(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_declaringType_3(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_declaringMethod_4(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_data_5(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_assemblyName_6(),
	UnitySerializationHolder_t3405802364::get_offset_of_m_unityType_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (UnSafeCharBuffer_t2700778660)+ sizeof (RuntimeObject), sizeof(UnSafeCharBuffer_t2700778660_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable290[3] = 
{
	UnSafeCharBuffer_t2700778660::get_offset_of_m_buffer_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t2700778660::get_offset_of_m_totalSize_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnSafeCharBuffer_t2700778660::get_offset_of_m_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (Version_t986581081), -1, sizeof(Version_t986581081_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable291[6] = 
{
	Version_t986581081::get_offset_of__Major_0(),
	Version_t986581081::get_offset_of__Minor_1(),
	Version_t986581081::get_offset_of__Build_2(),
	Version_t986581081::get_offset_of__Revision_3(),
	Version_t986581081_StaticFields::get_offset_of_SeparatorsArray_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (ParseFailureKind_t4193638372)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable292[5] = 
{
	ParseFailureKind_t4193638372::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (VersionResult_t1080948415)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable293[5] = 
{
	VersionResult_t1080948415::get_offset_of_m_parsedVersion_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t1080948415::get_offset_of_m_failure_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t1080948415::get_offset_of_m_exceptionArgument_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t1080948415::get_offset_of_m_argumentName_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionResult_t1080948415::get_offset_of_m_canThrow_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (AppContext_t655341298), -1, sizeof(AppContext_t655341298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable294[1] = 
{
	AppContext_t655341298_StaticFields::get_offset_of_s_switchMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (SwitchValueState_t201469840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable295[5] = 
{
	SwitchValueState_t201469840::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (AppContextSwitches_t3276636319), -1, sizeof(AppContextSwitches_t3276636319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable296[4] = 
{
	AppContextSwitches_t3276636319_StaticFields::get_offset_of__noAsyncCurrentCulture_0(),
	AppContextSwitches_t3276636319_StaticFields::get_offset_of__throwExceptionIfDisposedCancellationTokenSource_1(),
	AppContextSwitches_t3276636319_StaticFields::get_offset_of__cloneActor_2(),
	AppContextSwitches_t3276636319_StaticFields::get_offset_of_U3CDisableCachingU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (AppContextDefaultValues_t691143793), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (DateTimeFormat_t256970506), -1, sizeof(DateTimeFormat_t256970506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable298[3] = 
{
	DateTimeFormat_t256970506_StaticFields::get_offset_of_NullOffset_0(),
	DateTimeFormat_t256970506_StaticFields::get_offset_of_allStandardFormats_1(),
	DateTimeFormat_t256970506_StaticFields::get_offset_of_fixedNumberFormats_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (DateTimeParse_t2552092110), -1, sizeof(DateTimeParse_t2552092110_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable299[2] = 
{
	DateTimeParse_t2552092110_StaticFields::get_offset_of_m_hebrewNumberParser_0(),
	DateTimeParse_t2552092110_StaticFields::get_offset_of_dateParsingStates_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
