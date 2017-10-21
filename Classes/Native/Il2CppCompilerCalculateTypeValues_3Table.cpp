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

// System.Collections.Hashtable
struct Hashtable_t1087196262;
// System.Globalization.CompareInfo
struct CompareInfo_t511925399;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t538859604;
// System.Globalization.TextInfo
struct TextInfo_t2749110893;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1982929951;
// System.Collections.ArrayList
struct ArrayList_t4073930564;
// System.Collections.IComparer
struct IComparer_t2058995387;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t882704030;
// System.Object[]
struct ObjectU5BU5D_t608532122;
// System.Collections.SortedList/KeyList
struct KeyList_t650095379;
// System.Collections.SortedList/ValueList
struct ValueList_t2635601006;
// System.Collections.Queue
struct Queue_t606257448;
// System.Int32[]
struct Int32U5BU5D_t4187413745;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t2117662772;
// System.Collections.SortedList
struct SortedList_t1186461002;
// System.Collections.Stack
struct Stack_t2659455594;
// System.Char[]
struct CharU5BU5D_t3850815912;
// System.String
struct String_t;
// System.Void
struct Void_t346236799;
// System.Collections.IList
struct IList_t2765826894;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1909810013;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t3473602380;
// System.Collections.ICollection
struct ICollection_t4256665485;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2975857993;
// System.Delegate[]
struct DelegateU5BU5D_t3919377238;
// System.Globalization.Calendar
struct Calendar_t4010284997;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t3770991670;
// System.Int32
struct Int32_t1745228240;
// System.IAsyncResult
struct IAsyncResult_t1572955412;
// System.AsyncCallback
struct AsyncCallback_t3200089119;




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
#ifndef KEYCOLLECTION_T3004105951_H
#define KEYCOLLECTION_T3004105951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_t3004105951  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t1087196262 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3004105951, ____hashtable_0)); }
	inline Hashtable_t1087196262 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1087196262 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1087196262 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3004105951_H
#ifndef ARRAYLISTDEBUGVIEW_T1590593672_H
#define ARRAYLISTDEBUGVIEW_T1590593672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_t1590593672  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_T1590593672_H
#ifndef CASEINSENSITIVECOMPARER_T538859604_H
#define CASEINSENSITIVECOMPARER_T538859604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t538859604  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t511925399 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t538859604, ___m_compareInfo_0)); }
	inline CompareInfo_t511925399 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t511925399 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t511925399 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t538859604_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t538859604 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t538859604_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t538859604 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t538859604 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t538859604 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T538859604_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T1982929951_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T1982929951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t1982929951  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t2749110893 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1982929951, ___m_text_0)); }
	inline TextInfo_t2749110893 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t2749110893 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t2749110893 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t1982929951_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t1982929951 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1982929951_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t1982929951 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t1982929951 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t1982929951 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T1982929951_H
#ifndef COLLECTIONBASE_T2359751193_H
#define COLLECTIONBASE_T2359751193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2359751193  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4073930564 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2359751193, ___list_0)); }
	inline ArrayList_t4073930564 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4073930564 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4073930564 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2359751193_H
#ifndef COMPARER_T3878478191_H
#define COMPARER_T3878478191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t3878478191  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t511925399 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t3878478191, ___m_compareInfo_0)); }
	inline CompareInfo_t511925399 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t511925399 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t511925399 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t3878478191_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t3878478191 * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t3878478191 * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t3878478191_StaticFields, ___Default_1)); }
	inline Comparer_t3878478191 * get_Default_1() const { return ___Default_1; }
	inline Comparer_t3878478191 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t3878478191 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t3878478191_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t3878478191 * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t3878478191 ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t3878478191 * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T3878478191_H
#ifndef COMPATIBLECOMPARER_T615061135_H
#define COMPATIBLECOMPARER_T615061135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_t615061135  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t615061135, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t615061135, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T615061135_H
#ifndef DICTIONARYBASE_T143979444_H
#define DICTIONARYBASE_T143979444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryBase
struct  DictionaryBase_t143979444  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.DictionaryBase::hashtable
	Hashtable_t1087196262 * ___hashtable_0;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(DictionaryBase_t143979444, ___hashtable_0)); }
	inline Hashtable_t1087196262 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1087196262 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1087196262 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYBASE_T143979444_H
#ifndef SORTEDLIST_T1186461002_H
#define SORTEDLIST_T1186461002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t1186461002  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t608532122* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t608532122* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t650095379 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t2635601006 * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___keys_0)); }
	inline ObjectU5BU5D_t608532122* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t608532122** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t608532122* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___values_1)); }
	inline ObjectU5BU5D_t608532122* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t608532122** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t608532122* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___keyList_5)); }
	inline KeyList_t650095379 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t650095379 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t650095379 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyList_5), value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ___valueList_6)); }
	inline ValueList_t2635601006 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t2635601006 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t2635601006 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_6), value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t1186461002, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_7), value);
	}
};

struct SortedList_t1186461002_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t608532122* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t1186461002_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_t608532122* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_t608532122** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_t608532122* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T1186461002_H
#ifndef READONLYCOLLECTIONBASE_T975370009_H
#define READONLYCOLLECTIONBASE_T975370009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t975370009  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4073930564 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t975370009, ___list_0)); }
	inline ArrayList_t4073930564 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4073930564 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4073930564 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T975370009_H
#ifndef QUEUEDEBUGVIEW_T884837005_H
#define QUEUEDEBUGVIEW_T884837005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t884837005  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T884837005_H
#ifndef VALUECOLLECTION_T2100518985_H
#define VALUECOLLECTION_T2100518985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_t2100518985  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t1087196262 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2100518985, ____hashtable_0)); }
	inline Hashtable_t1087196262 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t1087196262 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t1087196262 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T2100518985_H
#ifndef QUEUEENUMERATOR_T2802960516_H
#define QUEUEENUMERATOR_T2802960516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t2802960516  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t606257448 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2802960516, ____q_0)); }
	inline Queue_t606257448 * get__q_0() const { return ____q_0; }
	inline Queue_t606257448 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_t606257448 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2802960516, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2802960516, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t2802960516, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T2802960516_H
#ifndef HASHTABLEENUMERATOR_T3344466569_H
#define HASHTABLEENUMERATOR_T3344466569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_t3344466569  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t1087196262 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___hashtable_0)); }
	inline Hashtable_t1087196262 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t1087196262 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t1087196262 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t3344466569, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_T3344466569_H
#ifndef HASHTABLEDEBUGVIEW_T1074504385_H
#define HASHTABLEDEBUGVIEW_T1074504385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_t1074504385  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_T1074504385_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T2233587834_H
#define ARRAYLISTENUMERATORSIMPLE_T2233587834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t2233587834  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t4073930564 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834, ___list_0)); }
	inline ArrayList_t4073930564 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4073930564 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4073930564 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t2233587834_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2233587834_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T2233587834_H
#ifndef HASHHELPERS_T124593733_H
#define HASHHELPERS_T124593733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_t124593733  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t124593733_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t4187413745* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t2117662772 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_t124593733_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t4187413745* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t4187413745** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t4187413745* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_t124593733_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t2117662772 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t2117662772 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t2117662772 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T124593733_H
#ifndef SORTEDLISTENUMERATOR_T3549592278_H
#define SORTEDLISTENUMERATOR_T3549592278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t3549592278  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t1186461002 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___sortedList_0)); }
	inline SortedList_t1186461002 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t1186461002 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t1186461002 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t3549592278, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T3549592278_H
#ifndef VALUELIST_T2635601006_H
#define VALUELIST_T2635601006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t2635601006  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t1186461002 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t2635601006, ___sortedList_0)); }
	inline SortedList_t1186461002 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t1186461002 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t1186461002 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T2635601006_H
#ifndef EQUALITYCOMPARER_1_T4136707002_H
#define EQUALITYCOMPARER_1_T4136707002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t4136707002  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t4136707002_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4136707002 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t4136707002_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t4136707002 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t4136707002 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t4136707002 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T4136707002_H
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
#ifndef KEYLIST_T650095379_H
#define KEYLIST_T650095379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/KeyList
struct  KeyList_t650095379  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t1186461002 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t650095379, ___sortedList_0)); }
	inline SortedList_t1186461002 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t1186461002 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t1186461002 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYLIST_T650095379_H
#ifndef LOWLEVELCOMPARER_T2447469620_H
#define LOWLEVELCOMPARER_T2447469620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t2447469620  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t2447469620_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t2447469620 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t2447469620_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t2447469620 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t2447469620 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t2447469620 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T2447469620_H
#ifndef STACKDEBUGVIEW_T48008534_H
#define STACKDEBUGVIEW_T48008534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_t48008534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_T48008534_H
#ifndef QUEUE_T606257448_H
#define QUEUE_T606257448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t606257448  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t608532122* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____array_0)); }
	inline ObjectU5BU5D_t608532122* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t608532122** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t608532122* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t606257448, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T606257448_H
#ifndef STACK_T2659455594_H
#define STACK_T2659455594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2659455594  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t608532122* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t2659455594, ____array_0)); }
	inline ObjectU5BU5D_t608532122* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t608532122** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t608532122* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t2659455594, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t2659455594, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t2659455594, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2659455594_H
#ifndef SORTEDLISTDEBUGVIEW_T248032218_H
#define SORTEDLISTDEBUGVIEW_T248032218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t248032218  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T248032218_H
#ifndef TUPLE_T1789670563_H
#define TUPLE_T1789670563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple
struct  Tuple_t1789670563  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T1789670563_H
#ifndef ARRAYLIST_T4073930564_H
#define ARRAYLIST_T4073930564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t4073930564  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t608532122* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4073930564, ____items_0)); }
	inline ObjectU5BU5D_t608532122* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t608532122** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t608532122* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4073930564, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4073930564, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4073930564, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t4073930564_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t608532122* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t4073930564_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t608532122* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t608532122** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t608532122* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T4073930564_H
#ifndef STACKENUMERATOR_T1006800200_H
#define STACKENUMERATOR_T1006800200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_t1006800200  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t2659455594 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_t1006800200, ____stack_0)); }
	inline Stack_t2659455594 * get__stack_0() const { return ____stack_0; }
	inline Stack_t2659455594 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t2659455594 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_t1006800200, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_t1006800200, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_t1006800200, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_T1006800200_H
#ifndef BYTEEQUALITYCOMPARER_T2778330611_H
#define BYTEEQUALITYCOMPARER_T2778330611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t2778330611  : public EqualityComparer_1_t4136707002
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T2778330611_H
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
#ifndef DATETIME_T3095499941_H
#define DATETIME_T3095499941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3095499941 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t3095499941, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t3095499941_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t4187413745* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t4187413745* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3095499941  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3095499941  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t3095499941_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t4187413745* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t4187413745** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t4187413745* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t3095499941_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t4187413745* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t4187413745** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t4187413745* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3095499941_StaticFields, ___MinValue_2)); }
	inline DateTime_t3095499941  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t3095499941 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t3095499941  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3095499941_StaticFields, ___MaxValue_3)); }
	inline DateTime_t3095499941  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t3095499941 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t3095499941  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3095499941_H
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
#ifndef SYNCSORTEDLIST_T4184696493_H
#define SYNCSORTEDLIST_T4184696493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_t4184696493  : public SortedList_t1186461002
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t1186461002 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t4184696493, ____list_9)); }
	inline SortedList_t1186461002 * get__list_9() const { return ____list_9; }
	inline SortedList_t1186461002 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t1186461002 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((&____list_9), value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t4184696493, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((&____root_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_T4184696493_H
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
#ifndef BUCKET_T1465602129_H
#define BUCKET_T1465602129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t1465602129 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t1465602129, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t1465602129, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t1465602129, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t1465602129_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t1465602129_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T1465602129_H
#ifndef DICTIONARYENTRY_T3864228728_H
#define DICTIONARYENTRY_T3864228728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3864228728 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3864228728, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3864228728, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3864228728_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3864228728_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3864228728_H
#ifndef READONLYARRAYLIST_T2331478993_H
#define READONLYARRAYLIST_T2331478993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t2331478993  : public ArrayList_t4073930564
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t4073930564 * ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t2331478993, ____list_6)); }
	inline ArrayList_t4073930564 * get__list_6() const { return ____list_6; }
	inline ArrayList_t4073930564 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t4073930564 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T2331478993_H
#ifndef SYNCARRAYLIST_T3322708784_H
#define SYNCARRAYLIST_T3322708784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SyncArrayList
struct  SyncArrayList_t3322708784  : public ArrayList_t4073930564
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SyncArrayList::_list
	ArrayList_t4073930564 * ____list_6;
	// System.Object System.Collections.ArrayList/SyncArrayList::_root
	RuntimeObject * ____root_7;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(SyncArrayList_t3322708784, ____list_6)); }
	inline ArrayList_t4073930564 * get__list_6() const { return ____list_6; }
	inline ArrayList_t4073930564 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t4073930564 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}

	inline static int32_t get_offset_of__root_7() { return static_cast<int32_t>(offsetof(SyncArrayList_t3322708784, ____root_7)); }
	inline RuntimeObject * get__root_7() const { return ____root_7; }
	inline RuntimeObject ** get_address_of__root_7() { return &____root_7; }
	inline void set__root_7(RuntimeObject * value)
	{
		____root_7 = value;
		Il2CppCodeGenWriteBarrier((&____root_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCARRAYLIST_T3322708784_H
#ifndef ILISTWRAPPER_T4088801500_H
#define ILISTWRAPPER_T4088801500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/IListWrapper
struct  IListWrapper_t4088801500  : public ArrayList_t4073930564
{
public:
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(IListWrapper_t4088801500, ____list_6)); }
	inline RuntimeObject* get__list_6() const { return ____list_6; }
	inline RuntimeObject** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(RuntimeObject* value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILISTWRAPPER_T4088801500_H
#ifndef __DTSTRING_T468940195_H
#define __DTSTRING_T468940195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t468940195 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t511925399 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___m_info_4)); }
	inline CompareInfo_t511925399 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t511925399 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t511925399 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t468940195, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t468940195_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t3850815912* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t468940195_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t3850815912* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t3850815912** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t3850815912* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t468940195_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t511925399 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t468940195_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t511925399 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T468940195_H
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
#ifndef DTT_T3411856056_H
#define DTT_T3411856056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DTT
struct  DTT_t3411856056 
{
public:
	// System.Int32 System.DateTimeParse/DTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTT_t3411856056, ___value___2)); }
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
#endif // DTT_T3411856056_H
#ifndef TM_T937499583_H
#define TM_T937499583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/TM
struct  TM_t937499583 
{
public:
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TM_t937499583, ___value___2)); }
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
#endif // TM_T937499583_H
#ifndef DS_T775881061_H
#define DS_T775881061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DS
struct  DS_t775881061 
{
public:
	// System.Int32 System.DateTimeParse/DS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DS_t775881061, ___value___2)); }
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
#endif // DS_T775881061_H
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
#ifndef DTSUBSTRINGTYPE_T809349911_H
#define DTSUBSTRINGTYPE_T809349911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t809349911 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t809349911, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T809349911_H
#ifndef PARSEFAILUREKIND_T2179765019_H
#define PARSEFAILUREKIND_T2179765019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFailureKind
struct  ParseFailureKind_t2179765019 
{
public:
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t2179765019, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T2179765019_H
#ifndef PARSEFLAGS_T378358700_H
#define PARSEFLAGS_T378358700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFlags
struct  ParseFlags_t378358700 
{
public:
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFlags_t378358700, ___value___2)); }
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
#endif // PARSEFLAGS_T378358700_H
#ifndef TOKENTYPE_T732350424_H
#define TOKENTYPE_T732350424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t732350424 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t732350424, ___value___2)); }
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
#endif // TOKENTYPE_T732350424_H
#ifndef HASHTABLE_T1087196262_H
#define HASHTABLE_T1087196262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1087196262  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t3473602380* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___buckets_0)); }
	inline bucketU5BU5D_t3473602380* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t3473602380** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t3473602380* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t1087196262, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1087196262_H
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
#ifndef DATETIMETOKEN_T697232724_H
#define DATETIMETOKEN_T697232724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeToken
struct  DateTimeToken_t697232724 
{
public:
	// System.DateTimeParse/DTT System.DateTimeToken::dtt
	int32_t ___dtt_0;
	// System.TokenType System.DateTimeToken::suffix
	int32_t ___suffix_1;
	// System.Int32 System.DateTimeToken::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_dtt_0() { return static_cast<int32_t>(offsetof(DateTimeToken_t697232724, ___dtt_0)); }
	inline int32_t get_dtt_0() const { return ___dtt_0; }
	inline int32_t* get_address_of_dtt_0() { return &___dtt_0; }
	inline void set_dtt_0(int32_t value)
	{
		___dtt_0 = value;
	}

	inline static int32_t get_offset_of_suffix_1() { return static_cast<int32_t>(offsetof(DateTimeToken_t697232724, ___suffix_1)); }
	inline int32_t get_suffix_1() const { return ___suffix_1; }
	inline int32_t* get_address_of_suffix_1() { return &___suffix_1; }
	inline void set_suffix_1(int32_t value)
	{
		___suffix_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(DateTimeToken_t697232724, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMETOKEN_T697232724_H
#ifndef DTSUBSTRING_T111986615_H
#define DTSUBSTRING_T111986615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t111986615 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t111986615, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t111986615, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t111986615, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t111986615, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t111986615, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t111986615_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t111986615_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T111986615_H
#ifndef SYNCHASHTABLE_T107400635_H
#define SYNCHASHTABLE_T107400635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t107400635  : public Hashtable_t1087196262
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t1087196262 * ____table_11;

public:
	inline static int32_t get_offset_of__table_11() { return static_cast<int32_t>(offsetof(SyncHashtable_t107400635, ____table_11)); }
	inline Hashtable_t1087196262 * get__table_11() const { return ____table_11; }
	inline Hashtable_t1087196262 ** get_address_of__table_11() { return &____table_11; }
	inline void set__table_11(Hashtable_t1087196262 * value)
	{
		____table_11 = value;
		Il2CppCodeGenWriteBarrier((&____table_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T107400635_H
#ifndef DATETIMERESULT_T2142110179_H
#define DATETIMERESULT_T2142110179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeResult
struct  DateTimeResult_t2142110179 
{
public:
	// System.Int32 System.DateTimeResult::Year
	int32_t ___Year_0;
	// System.Int32 System.DateTimeResult::Month
	int32_t ___Month_1;
	// System.Int32 System.DateTimeResult::Day
	int32_t ___Day_2;
	// System.Int32 System.DateTimeResult::Hour
	int32_t ___Hour_3;
	// System.Int32 System.DateTimeResult::Minute
	int32_t ___Minute_4;
	// System.Int32 System.DateTimeResult::Second
	int32_t ___Second_5;
	// System.Double System.DateTimeResult::fraction
	double ___fraction_6;
	// System.Int32 System.DateTimeResult::era
	int32_t ___era_7;
	// System.ParseFlags System.DateTimeResult::flags
	int32_t ___flags_8;
	// System.TimeSpan System.DateTimeResult::timeZoneOffset
	TimeSpan_t483180088  ___timeZoneOffset_9;
	// System.Globalization.Calendar System.DateTimeResult::calendar
	Calendar_t4010284997 * ___calendar_10;
	// System.DateTime System.DateTimeResult::parsedDate
	DateTime_t3095499941  ___parsedDate_11;
	// System.ParseFailureKind System.DateTimeResult::failure
	int32_t ___failure_12;
	// System.String System.DateTimeResult::failureMessageID
	String_t* ___failureMessageID_13;
	// System.Object System.DateTimeResult::failureMessageFormatArgument
	RuntimeObject * ___failureMessageFormatArgument_14;
	// System.String System.DateTimeResult::failureArgumentName
	String_t* ___failureArgumentName_15;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_fraction_6() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___fraction_6)); }
	inline double get_fraction_6() const { return ___fraction_6; }
	inline double* get_address_of_fraction_6() { return &___fraction_6; }
	inline void set_fraction_6(double value)
	{
		___fraction_6 = value;
	}

	inline static int32_t get_offset_of_era_7() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___era_7)); }
	inline int32_t get_era_7() const { return ___era_7; }
	inline int32_t* get_address_of_era_7() { return &___era_7; }
	inline void set_era_7(int32_t value)
	{
		___era_7 = value;
	}

	inline static int32_t get_offset_of_flags_8() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___flags_8)); }
	inline int32_t get_flags_8() const { return ___flags_8; }
	inline int32_t* get_address_of_flags_8() { return &___flags_8; }
	inline void set_flags_8(int32_t value)
	{
		___flags_8 = value;
	}

	inline static int32_t get_offset_of_timeZoneOffset_9() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___timeZoneOffset_9)); }
	inline TimeSpan_t483180088  get_timeZoneOffset_9() const { return ___timeZoneOffset_9; }
	inline TimeSpan_t483180088 * get_address_of_timeZoneOffset_9() { return &___timeZoneOffset_9; }
	inline void set_timeZoneOffset_9(TimeSpan_t483180088  value)
	{
		___timeZoneOffset_9 = value;
	}

	inline static int32_t get_offset_of_calendar_10() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___calendar_10)); }
	inline Calendar_t4010284997 * get_calendar_10() const { return ___calendar_10; }
	inline Calendar_t4010284997 ** get_address_of_calendar_10() { return &___calendar_10; }
	inline void set_calendar_10(Calendar_t4010284997 * value)
	{
		___calendar_10 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_10), value);
	}

	inline static int32_t get_offset_of_parsedDate_11() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___parsedDate_11)); }
	inline DateTime_t3095499941  get_parsedDate_11() const { return ___parsedDate_11; }
	inline DateTime_t3095499941 * get_address_of_parsedDate_11() { return &___parsedDate_11; }
	inline void set_parsedDate_11(DateTime_t3095499941  value)
	{
		___parsedDate_11 = value;
	}

	inline static int32_t get_offset_of_failure_12() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___failure_12)); }
	inline int32_t get_failure_12() const { return ___failure_12; }
	inline int32_t* get_address_of_failure_12() { return &___failure_12; }
	inline void set_failure_12(int32_t value)
	{
		___failure_12 = value;
	}

	inline static int32_t get_offset_of_failureMessageID_13() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___failureMessageID_13)); }
	inline String_t* get_failureMessageID_13() const { return ___failureMessageID_13; }
	inline String_t** get_address_of_failureMessageID_13() { return &___failureMessageID_13; }
	inline void set_failureMessageID_13(String_t* value)
	{
		___failureMessageID_13 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageID_13), value);
	}

	inline static int32_t get_offset_of_failureMessageFormatArgument_14() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___failureMessageFormatArgument_14)); }
	inline RuntimeObject * get_failureMessageFormatArgument_14() const { return ___failureMessageFormatArgument_14; }
	inline RuntimeObject ** get_address_of_failureMessageFormatArgument_14() { return &___failureMessageFormatArgument_14; }
	inline void set_failureMessageFormatArgument_14(RuntimeObject * value)
	{
		___failureMessageFormatArgument_14 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageFormatArgument_14), value);
	}

	inline static int32_t get_offset_of_failureArgumentName_15() { return static_cast<int32_t>(offsetof(DateTimeResult_t2142110179, ___failureArgumentName_15)); }
	inline String_t* get_failureArgumentName_15() const { return ___failureArgumentName_15; }
	inline String_t** get_address_of_failureArgumentName_15() { return &___failureArgumentName_15; }
	inline void set_failureArgumentName_15(String_t* value)
	{
		___failureArgumentName_15 = value;
		Il2CppCodeGenWriteBarrier((&___failureArgumentName_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeResult
struct DateTimeResult_t2142110179_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t483180088  ___timeZoneOffset_9;
	Calendar_t4010284997 * ___calendar_10;
	DateTime_t3095499941  ___parsedDate_11;
	int32_t ___failure_12;
	char* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	char* ___failureArgumentName_15;
};
// Native definition for COM marshalling of System.DateTimeResult
struct DateTimeResult_t2142110179_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t483180088  ___timeZoneOffset_9;
	Calendar_t4010284997 * ___calendar_10;
	DateTime_t3095499941  ___parsedDate_11;
	int32_t ___failure_12;
	Il2CppChar* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	Il2CppChar* ___failureArgumentName_15;
};
#endif // DATETIMERESULT_T2142110179_H
#ifndef PARSINGINFO_T3933171964_H
#define PARSINGINFO_T3933171964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParsingInfo
struct  ParsingInfo_t3933171964 
{
public:
	// System.Globalization.Calendar System.ParsingInfo::calendar
	Calendar_t4010284997 * ___calendar_0;
	// System.Int32 System.ParsingInfo::dayOfWeek
	int32_t ___dayOfWeek_1;
	// System.DateTimeParse/TM System.ParsingInfo::timeMark
	int32_t ___timeMark_2;
	// System.Boolean System.ParsingInfo::fUseHour12
	bool ___fUseHour12_3;
	// System.Boolean System.ParsingInfo::fUseTwoDigitYear
	bool ___fUseTwoDigitYear_4;
	// System.Boolean System.ParsingInfo::fAllowInnerWhite
	bool ___fAllowInnerWhite_5;
	// System.Boolean System.ParsingInfo::fAllowTrailingWhite
	bool ___fAllowTrailingWhite_6;
	// System.Boolean System.ParsingInfo::fCustomNumberParser
	bool ___fCustomNumberParser_7;
	// System.DateTimeParse/MatchNumberDelegate System.ParsingInfo::parseNumberDelegate
	MatchNumberDelegate_t3770991670 * ___parseNumberDelegate_8;

public:
	inline static int32_t get_offset_of_calendar_0() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___calendar_0)); }
	inline Calendar_t4010284997 * get_calendar_0() const { return ___calendar_0; }
	inline Calendar_t4010284997 ** get_address_of_calendar_0() { return &___calendar_0; }
	inline void set_calendar_0(Calendar_t4010284997 * value)
	{
		___calendar_0 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_0), value);
	}

	inline static int32_t get_offset_of_dayOfWeek_1() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___dayOfWeek_1)); }
	inline int32_t get_dayOfWeek_1() const { return ___dayOfWeek_1; }
	inline int32_t* get_address_of_dayOfWeek_1() { return &___dayOfWeek_1; }
	inline void set_dayOfWeek_1(int32_t value)
	{
		___dayOfWeek_1 = value;
	}

	inline static int32_t get_offset_of_timeMark_2() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___timeMark_2)); }
	inline int32_t get_timeMark_2() const { return ___timeMark_2; }
	inline int32_t* get_address_of_timeMark_2() { return &___timeMark_2; }
	inline void set_timeMark_2(int32_t value)
	{
		___timeMark_2 = value;
	}

	inline static int32_t get_offset_of_fUseHour12_3() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___fUseHour12_3)); }
	inline bool get_fUseHour12_3() const { return ___fUseHour12_3; }
	inline bool* get_address_of_fUseHour12_3() { return &___fUseHour12_3; }
	inline void set_fUseHour12_3(bool value)
	{
		___fUseHour12_3 = value;
	}

	inline static int32_t get_offset_of_fUseTwoDigitYear_4() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___fUseTwoDigitYear_4)); }
	inline bool get_fUseTwoDigitYear_4() const { return ___fUseTwoDigitYear_4; }
	inline bool* get_address_of_fUseTwoDigitYear_4() { return &___fUseTwoDigitYear_4; }
	inline void set_fUseTwoDigitYear_4(bool value)
	{
		___fUseTwoDigitYear_4 = value;
	}

	inline static int32_t get_offset_of_fAllowInnerWhite_5() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___fAllowInnerWhite_5)); }
	inline bool get_fAllowInnerWhite_5() const { return ___fAllowInnerWhite_5; }
	inline bool* get_address_of_fAllowInnerWhite_5() { return &___fAllowInnerWhite_5; }
	inline void set_fAllowInnerWhite_5(bool value)
	{
		___fAllowInnerWhite_5 = value;
	}

	inline static int32_t get_offset_of_fAllowTrailingWhite_6() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___fAllowTrailingWhite_6)); }
	inline bool get_fAllowTrailingWhite_6() const { return ___fAllowTrailingWhite_6; }
	inline bool* get_address_of_fAllowTrailingWhite_6() { return &___fAllowTrailingWhite_6; }
	inline void set_fAllowTrailingWhite_6(bool value)
	{
		___fAllowTrailingWhite_6 = value;
	}

	inline static int32_t get_offset_of_fCustomNumberParser_7() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___fCustomNumberParser_7)); }
	inline bool get_fCustomNumberParser_7() const { return ___fCustomNumberParser_7; }
	inline bool* get_address_of_fCustomNumberParser_7() { return &___fCustomNumberParser_7; }
	inline void set_fCustomNumberParser_7(bool value)
	{
		___fCustomNumberParser_7 = value;
	}

	inline static int32_t get_offset_of_parseNumberDelegate_8() { return static_cast<int32_t>(offsetof(ParsingInfo_t3933171964, ___parseNumberDelegate_8)); }
	inline MatchNumberDelegate_t3770991670 * get_parseNumberDelegate_8() const { return ___parseNumberDelegate_8; }
	inline MatchNumberDelegate_t3770991670 ** get_address_of_parseNumberDelegate_8() { return &___parseNumberDelegate_8; }
	inline void set_parseNumberDelegate_8(MatchNumberDelegate_t3770991670 * value)
	{
		___parseNumberDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___parseNumberDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParsingInfo
struct ParsingInfo_t3933171964_marshaled_pinvoke
{
	Calendar_t4010284997 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
// Native definition for COM marshalling of System.ParsingInfo
struct ParsingInfo_t3933171964_marshaled_com
{
	Calendar_t4010284997 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
#endif // PARSINGINFO_T3933171964_H
#ifndef DATETIMERAWINFO_T2158331383_H
#define DATETIMERAWINFO_T2158331383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeRawInfo
struct  DateTimeRawInfo_t2158331383 
{
public:
	// System.Int32* System.DateTimeRawInfo::num
	int32_t* ___num_0;
	// System.Int32 System.DateTimeRawInfo::numCount
	int32_t ___numCount_1;
	// System.Int32 System.DateTimeRawInfo::month
	int32_t ___month_2;
	// System.Int32 System.DateTimeRawInfo::year
	int32_t ___year_3;
	// System.Int32 System.DateTimeRawInfo::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Int32 System.DateTimeRawInfo::era
	int32_t ___era_5;
	// System.DateTimeParse/TM System.DateTimeRawInfo::timeMark
	int32_t ___timeMark_6;
	// System.Double System.DateTimeRawInfo::fraction
	double ___fraction_7;
	// System.Boolean System.DateTimeRawInfo::hasSameDateAndTimeSeparators
	bool ___hasSameDateAndTimeSeparators_8;
	// System.Boolean System.DateTimeRawInfo::timeZone
	bool ___timeZone_9;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___num_0)); }
	inline int32_t* get_num_0() const { return ___num_0; }
	inline int32_t** get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t* value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_numCount_1() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___numCount_1)); }
	inline int32_t get_numCount_1() const { return ___numCount_1; }
	inline int32_t* get_address_of_numCount_1() { return &___numCount_1; }
	inline void set_numCount_1(int32_t value)
	{
		___numCount_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_year_3() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___year_3)); }
	inline int32_t get_year_3() const { return ___year_3; }
	inline int32_t* get_address_of_year_3() { return &___year_3; }
	inline void set_year_3(int32_t value)
	{
		___year_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_era_5() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___era_5)); }
	inline int32_t get_era_5() const { return ___era_5; }
	inline int32_t* get_address_of_era_5() { return &___era_5; }
	inline void set_era_5(int32_t value)
	{
		___era_5 = value;
	}

	inline static int32_t get_offset_of_timeMark_6() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___timeMark_6)); }
	inline int32_t get_timeMark_6() const { return ___timeMark_6; }
	inline int32_t* get_address_of_timeMark_6() { return &___timeMark_6; }
	inline void set_timeMark_6(int32_t value)
	{
		___timeMark_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___fraction_7)); }
	inline double get_fraction_7() const { return ___fraction_7; }
	inline double* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(double value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_hasSameDateAndTimeSeparators_8() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___hasSameDateAndTimeSeparators_8)); }
	inline bool get_hasSameDateAndTimeSeparators_8() const { return ___hasSameDateAndTimeSeparators_8; }
	inline bool* get_address_of_hasSameDateAndTimeSeparators_8() { return &___hasSameDateAndTimeSeparators_8; }
	inline void set_hasSameDateAndTimeSeparators_8(bool value)
	{
		___hasSameDateAndTimeSeparators_8 = value;
	}

	inline static int32_t get_offset_of_timeZone_9() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t2158331383, ___timeZone_9)); }
	inline bool get_timeZone_9() const { return ___timeZone_9; }
	inline bool* get_address_of_timeZone_9() { return &___timeZone_9; }
	inline void set_timeZone_9(bool value)
	{
		___timeZone_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t2158331383_marshaled_pinvoke
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
// Native definition for COM marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t2158331383_marshaled_com
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
#endif // DATETIMERAWINFO_T2158331383_H
#ifndef MATCHNUMBERDELEGATE_T3770991670_H
#define MATCHNUMBERDELEGATE_T3770991670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/MatchNumberDelegate
struct  MatchNumberDelegate_t3770991670  : public MulticastDelegate_t2010921510
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHNUMBERDELEGATE_T3770991670_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (MatchNumberDelegate_t3770991670), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (DTT_t3411856056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable301[22] = 
{
	DTT_t3411856056::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (TM_t937499583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable302[4] = 
{
	TM_t937499583::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (DS_t775881061)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable303[40] = 
{
	DS_t775881061::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (__DTString_t468940195)+ sizeof (RuntimeObject), -1, sizeof(__DTString_t468940195_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable304[7] = 
{
	__DTString_t468940195::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195::get_offset_of_len_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195::get_offset_of_m_current_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195::get_offset_of_m_info_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195::get_offset_of_m_checkDigitToken_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t468940195_StaticFields::get_offset_of_WhiteSpaceChecks_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (DTSubStringType_t809349911)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable305[6] = 
{
	DTSubStringType_t809349911::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (DTSubString_t111986615)+ sizeof (RuntimeObject), sizeof(DTSubString_t111986615_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable306[5] = 
{
	DTSubString_t111986615::get_offset_of_s_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t111986615::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t111986615::get_offset_of_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t111986615::get_offset_of_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t111986615::get_offset_of_value_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (DateTimeToken_t697232724)+ sizeof (RuntimeObject), sizeof(DateTimeToken_t697232724 ), 0, 0 };
extern const int32_t g_FieldOffsetTable307[3] = 
{
	DateTimeToken_t697232724::get_offset_of_dtt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t697232724::get_offset_of_suffix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t697232724::get_offset_of_num_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (DateTimeRawInfo_t2158331383)+ sizeof (RuntimeObject), sizeof(DateTimeRawInfo_t2158331383_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable308[10] = 
{
	DateTimeRawInfo_t2158331383::get_offset_of_num_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_numCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_month_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_year_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_era_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_timeMark_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_fraction_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_hasSameDateAndTimeSeparators_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t2158331383::get_offset_of_timeZone_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (ParseFailureKind_t2179765019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable309[6] = 
{
	ParseFailureKind_t2179765019::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ParseFlags_t378358700)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable310[16] = 
{
	ParseFlags_t378358700::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (DateTimeResult_t2142110179)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[16] = 
{
	DateTimeResult_t2142110179::get_offset_of_Year_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_Month_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_Day_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_Hour_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_Minute_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_Second_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_fraction_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_era_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_flags_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_timeZoneOffset_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_calendar_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_parsedDate_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_failure_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_failureMessageID_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_failureMessageFormatArgument_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2142110179::get_offset_of_failureArgumentName_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (ParsingInfo_t3933171964)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[9] = 
{
	ParsingInfo_t3933171964::get_offset_of_calendar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_dayOfWeek_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_timeMark_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_fUseHour12_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_fUseTwoDigitYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_fAllowInnerWhite_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_fAllowTrailingWhite_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_fCustomNumberParser_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3933171964::get_offset_of_parseNumberDelegate_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (TokenType_t732350424)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable313[33] = 
{
	TokenType_t732350424::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (Tuple_t1789670563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable316[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable317[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable318[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (ArrayList_t4073930564), -1, sizeof(ArrayList_t4073930564_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable319[6] = 
{
	ArrayList_t4073930564::get_offset_of__items_0(),
	ArrayList_t4073930564::get_offset_of__size_1(),
	ArrayList_t4073930564::get_offset_of__version_2(),
	ArrayList_t4073930564::get_offset_of__syncRoot_3(),
	0,
	ArrayList_t4073930564_StaticFields::get_offset_of_emptyArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (IListWrapper_t4088801500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[1] = 
{
	IListWrapper_t4088801500::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (SyncArrayList_t3322708784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable321[2] = 
{
	SyncArrayList_t3322708784::get_offset_of__list_6(),
	SyncArrayList_t3322708784::get_offset_of__root_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (ReadOnlyArrayList_t2331478993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	ReadOnlyArrayList_t2331478993::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ArrayListEnumeratorSimple_t2233587834), -1, sizeof(ArrayListEnumeratorSimple_t2233587834_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable323[6] = 
{
	ArrayListEnumeratorSimple_t2233587834::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t2233587834::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t2233587834::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t2233587834::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t2233587834::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t2233587834_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (ArrayListDebugView_t1590593672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (CaseInsensitiveComparer_t538859604), -1, sizeof(CaseInsensitiveComparer_t538859604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable325[2] = 
{
	CaseInsensitiveComparer_t538859604::get_offset_of_m_compareInfo_0(),
	CaseInsensitiveComparer_t538859604_StaticFields::get_offset_of_m_InvariantCaseInsensitiveComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (CaseInsensitiveHashCodeProvider_t1982929951), -1, sizeof(CaseInsensitiveHashCodeProvider_t1982929951_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable326[2] = 
{
	CaseInsensitiveHashCodeProvider_t1982929951::get_offset_of_m_text_0(),
	CaseInsensitiveHashCodeProvider_t1982929951_StaticFields::get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (CollectionBase_t2359751193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	CollectionBase_t2359751193::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (Comparer_t3878478191), -1, sizeof(Comparer_t3878478191_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable328[3] = 
{
	Comparer_t3878478191::get_offset_of_m_compareInfo_0(),
	Comparer_t3878478191_StaticFields::get_offset_of_Default_1(),
	Comparer_t3878478191_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (CompatibleComparer_t615061135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable329[2] = 
{
	CompatibleComparer_t615061135::get_offset_of__comparer_0(),
	CompatibleComparer_t615061135::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (DictionaryBase_t143979444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[1] = 
{
	DictionaryBase_t143979444::get_offset_of_hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (DictionaryEntry_t3864228728)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t3864228728_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable331[2] = 
{
	DictionaryEntry_t3864228728::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t3864228728::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (Hashtable_t1087196262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[11] = 
{
	Hashtable_t1087196262::get_offset_of_buckets_0(),
	Hashtable_t1087196262::get_offset_of_count_1(),
	Hashtable_t1087196262::get_offset_of_occupancy_2(),
	Hashtable_t1087196262::get_offset_of_loadsize_3(),
	Hashtable_t1087196262::get_offset_of_loadFactor_4(),
	Hashtable_t1087196262::get_offset_of_version_5(),
	Hashtable_t1087196262::get_offset_of_isWriterInProgress_6(),
	Hashtable_t1087196262::get_offset_of_keys_7(),
	Hashtable_t1087196262::get_offset_of_values_8(),
	Hashtable_t1087196262::get_offset_of__keycomparer_9(),
	Hashtable_t1087196262::get_offset_of__syncRoot_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (bucket_t1465602129)+ sizeof (RuntimeObject), sizeof(bucket_t1465602129_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable333[3] = 
{
	bucket_t1465602129::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t1465602129::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t1465602129::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (KeyCollection_t3004105951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	KeyCollection_t3004105951::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (ValueCollection_t2100518985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable335[1] = 
{
	ValueCollection_t2100518985::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (SyncHashtable_t107400635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable336[1] = 
{
	SyncHashtable_t107400635::get_offset_of__table_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (HashtableEnumerator_t3344466569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable337[7] = 
{
	HashtableEnumerator_t3344466569::get_offset_of_hashtable_0(),
	HashtableEnumerator_t3344466569::get_offset_of_bucket_1(),
	HashtableEnumerator_t3344466569::get_offset_of_version_2(),
	HashtableEnumerator_t3344466569::get_offset_of_current_3(),
	HashtableEnumerator_t3344466569::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_t3344466569::get_offset_of_currentKey_5(),
	HashtableEnumerator_t3344466569::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (HashtableDebugView_t1074504385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (HashHelpers_t124593733), -1, sizeof(HashHelpers_t124593733_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable339[2] = 
{
	HashHelpers_t124593733_StaticFields::get_offset_of_primes_0(),
	HashHelpers_t124593733_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (Queue_t606257448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[7] = 
{
	Queue_t606257448::get_offset_of__array_0(),
	Queue_t606257448::get_offset_of__head_1(),
	Queue_t606257448::get_offset_of__tail_2(),
	Queue_t606257448::get_offset_of__size_3(),
	Queue_t606257448::get_offset_of__growFactor_4(),
	Queue_t606257448::get_offset_of__version_5(),
	Queue_t606257448::get_offset_of__syncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (QueueEnumerator_t2802960516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[4] = 
{
	QueueEnumerator_t2802960516::get_offset_of__q_0(),
	QueueEnumerator_t2802960516::get_offset_of__index_1(),
	QueueEnumerator_t2802960516::get_offset_of__version_2(),
	QueueEnumerator_t2802960516::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (QueueDebugView_t884837005), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (ReadOnlyCollectionBase_t975370009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[1] = 
{
	ReadOnlyCollectionBase_t975370009::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (SortedList_t1186461002), -1, sizeof(SortedList_t1186461002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable355[9] = 
{
	SortedList_t1186461002::get_offset_of_keys_0(),
	SortedList_t1186461002::get_offset_of_values_1(),
	SortedList_t1186461002::get_offset_of__size_2(),
	SortedList_t1186461002::get_offset_of_version_3(),
	SortedList_t1186461002::get_offset_of_comparer_4(),
	SortedList_t1186461002::get_offset_of_keyList_5(),
	SortedList_t1186461002::get_offset_of_valueList_6(),
	SortedList_t1186461002::get_offset_of__syncRoot_7(),
	SortedList_t1186461002_StaticFields::get_offset_of_emptyArray_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (SyncSortedList_t4184696493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[2] = 
{
	SyncSortedList_t4184696493::get_offset_of__list_9(),
	SyncSortedList_t4184696493::get_offset_of__root_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (SortedListEnumerator_t3549592278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable357[9] = 
{
	SortedListEnumerator_t3549592278::get_offset_of_sortedList_0(),
	SortedListEnumerator_t3549592278::get_offset_of_key_1(),
	SortedListEnumerator_t3549592278::get_offset_of_value_2(),
	SortedListEnumerator_t3549592278::get_offset_of_index_3(),
	SortedListEnumerator_t3549592278::get_offset_of_startIndex_4(),
	SortedListEnumerator_t3549592278::get_offset_of_endIndex_5(),
	SortedListEnumerator_t3549592278::get_offset_of_version_6(),
	SortedListEnumerator_t3549592278::get_offset_of_current_7(),
	SortedListEnumerator_t3549592278::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (KeyList_t650095379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable358[1] = 
{
	KeyList_t650095379::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (ValueList_t2635601006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable359[1] = 
{
	ValueList_t2635601006::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (SortedListDebugView_t248032218), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (Stack_t2659455594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[4] = 
{
	Stack_t2659455594::get_offset_of__array_0(),
	Stack_t2659455594::get_offset_of__size_1(),
	Stack_t2659455594::get_offset_of__version_2(),
	Stack_t2659455594::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (StackEnumerator_t1006800200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable362[4] = 
{
	StackEnumerator_t1006800200::get_offset_of__stack_0(),
	StackEnumerator_t1006800200::get_offset_of__index_1(),
	StackEnumerator_t1006800200::get_offset_of__version_2(),
	StackEnumerator_t1006800200::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (StackDebugView_t48008534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (LowLevelComparer_t2447469620), -1, sizeof(LowLevelComparer_t2447469620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable364[1] = 
{
	LowLevelComparer_t2447469620_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable365[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable374[14] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable375[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable376[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable377[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable378[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable379[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable380[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable381[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (ByteEqualityComparer_t2778330611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
