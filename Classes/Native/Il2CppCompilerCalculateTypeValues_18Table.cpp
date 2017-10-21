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

// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3755721586;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3361335557;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t134394922;
// System.IntPtr[]
struct IntPtrU5BU5D_t2512061637;
// System.Uri
struct Uri_t4031968151;
// System.Collections.IEnumerator
struct IEnumerator_t4149408910;
// System.AsyncCallback
struct AsyncCallback_t3200089119;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t376272996;
// System.Byte[]
struct ByteU5BU5D_t464104634;
// System.Collections.ArrayList
struct ArrayList_t4073930564;
// System.String[]
struct StringU5BU5D_t2160812740;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_t4048452721;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1423606164;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_t3250268767;
// System.Security.Cryptography.Oid
struct Oid_t3844911692;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t601284490;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2248440371;
// System.Globalization.CompareInfo
struct CompareInfo_t511925399;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t1983862841;
// System.Int32[]
struct Int32U5BU5D_t4187413745;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t456754220;
// System.Globalization.CultureInfo
struct CultureInfo_t1004381828;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t2451336522;
// System.Collections.Hashtable
struct Hashtable_t1087196262;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t3141866412;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t279463186;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t4228368067;
// System.Text.RegularExpressions.RegexRunner
struct RegexRunner_t1110117737;
// System.Char[]
struct CharU5BU5D_t3850815912;
// System.WeakReference
struct WeakReference_t905792147;
// System.Void
struct Void_t346236799;
// System.Type
struct Type_t;
// System.Uri/MoreInfo
struct MoreInfo_t4215804961;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t3343878603;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t881790376;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2569204332;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t852082282;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2428374264;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1909810013;
// System.UriParser
struct UriParser_t1390293818;
// System.Uri/UriInfo
struct UriInfo_t139325890;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t764521581;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t2745379444;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t3944765307;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t2805648242;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1111123030;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t484929870;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t106568074;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3474370605;
// System.Delegate[]
struct DelegateU5BU5D_t3919377238;
// Mono.Security.X509.X509Store
struct X509Store_t30956381;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t2267405713;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t2026580447;
// System.IOAsyncCallback
struct IOAsyncCallback_t1633662347;
// System.IOAsyncResult
struct IOAsyncResult_t849843027;
// System.IAsyncResult
struct IAsyncResult_t1572955412;

struct Exception_t3118724072_marshaled_pinvoke;
struct Exception_t3118724072_marshaled_com;
struct IOAsyncResult_t849843027_marshaled_pinvoke;
struct IOAsyncResult_t849843027_marshaled_com;



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
#ifndef URIBUILDER_T3153533162_H
#define URIBUILDER_T3153533162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriBuilder
struct  UriBuilder_t3153533162  : public RuntimeObject
{
public:
	// System.Boolean System.UriBuilder::m_changed
	bool ___m_changed_0;
	// System.String System.UriBuilder::m_fragment
	String_t* ___m_fragment_1;
	// System.String System.UriBuilder::m_host
	String_t* ___m_host_2;
	// System.String System.UriBuilder::m_password
	String_t* ___m_password_3;
	// System.String System.UriBuilder::m_path
	String_t* ___m_path_4;
	// System.Int32 System.UriBuilder::m_port
	int32_t ___m_port_5;
	// System.String System.UriBuilder::m_query
	String_t* ___m_query_6;
	// System.String System.UriBuilder::m_scheme
	String_t* ___m_scheme_7;
	// System.String System.UriBuilder::m_schemeDelimiter
	String_t* ___m_schemeDelimiter_8;
	// System.Uri System.UriBuilder::m_uri
	Uri_t4031968151 * ___m_uri_9;
	// System.String System.UriBuilder::m_username
	String_t* ___m_username_10;

public:
	inline static int32_t get_offset_of_m_changed_0() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_changed_0)); }
	inline bool get_m_changed_0() const { return ___m_changed_0; }
	inline bool* get_address_of_m_changed_0() { return &___m_changed_0; }
	inline void set_m_changed_0(bool value)
	{
		___m_changed_0 = value;
	}

	inline static int32_t get_offset_of_m_fragment_1() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_fragment_1)); }
	inline String_t* get_m_fragment_1() const { return ___m_fragment_1; }
	inline String_t** get_address_of_m_fragment_1() { return &___m_fragment_1; }
	inline void set_m_fragment_1(String_t* value)
	{
		___m_fragment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fragment_1), value);
	}

	inline static int32_t get_offset_of_m_host_2() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_host_2)); }
	inline String_t* get_m_host_2() const { return ___m_host_2; }
	inline String_t** get_address_of_m_host_2() { return &___m_host_2; }
	inline void set_m_host_2(String_t* value)
	{
		___m_host_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_host_2), value);
	}

	inline static int32_t get_offset_of_m_password_3() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_password_3)); }
	inline String_t* get_m_password_3() const { return ___m_password_3; }
	inline String_t** get_address_of_m_password_3() { return &___m_password_3; }
	inline void set_m_password_3(String_t* value)
	{
		___m_password_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_password_3), value);
	}

	inline static int32_t get_offset_of_m_path_4() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_path_4)); }
	inline String_t* get_m_path_4() const { return ___m_path_4; }
	inline String_t** get_address_of_m_path_4() { return &___m_path_4; }
	inline void set_m_path_4(String_t* value)
	{
		___m_path_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_path_4), value);
	}

	inline static int32_t get_offset_of_m_port_5() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_port_5)); }
	inline int32_t get_m_port_5() const { return ___m_port_5; }
	inline int32_t* get_address_of_m_port_5() { return &___m_port_5; }
	inline void set_m_port_5(int32_t value)
	{
		___m_port_5 = value;
	}

	inline static int32_t get_offset_of_m_query_6() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_query_6)); }
	inline String_t* get_m_query_6() const { return ___m_query_6; }
	inline String_t** get_address_of_m_query_6() { return &___m_query_6; }
	inline void set_m_query_6(String_t* value)
	{
		___m_query_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_query_6), value);
	}

	inline static int32_t get_offset_of_m_scheme_7() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_scheme_7)); }
	inline String_t* get_m_scheme_7() const { return ___m_scheme_7; }
	inline String_t** get_address_of_m_scheme_7() { return &___m_scheme_7; }
	inline void set_m_scheme_7(String_t* value)
	{
		___m_scheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_scheme_7), value);
	}

	inline static int32_t get_offset_of_m_schemeDelimiter_8() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_schemeDelimiter_8)); }
	inline String_t* get_m_schemeDelimiter_8() const { return ___m_schemeDelimiter_8; }
	inline String_t** get_address_of_m_schemeDelimiter_8() { return &___m_schemeDelimiter_8; }
	inline void set_m_schemeDelimiter_8(String_t* value)
	{
		___m_schemeDelimiter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_schemeDelimiter_8), value);
	}

	inline static int32_t get_offset_of_m_uri_9() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_uri_9)); }
	inline Uri_t4031968151 * get_m_uri_9() const { return ___m_uri_9; }
	inline Uri_t4031968151 ** get_address_of_m_uri_9() { return &___m_uri_9; }
	inline void set_m_uri_9(Uri_t4031968151 * value)
	{
		___m_uri_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_uri_9), value);
	}

	inline static int32_t get_offset_of_m_username_10() { return static_cast<int32_t>(offsetof(UriBuilder_t3153533162, ___m_username_10)); }
	inline String_t* get_m_username_10() const { return ___m_username_10; }
	inline String_t** get_address_of_m_username_10() { return &___m_username_10; }
	inline void set_m_username_10(String_t* value)
	{
		___m_username_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_username_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIBUILDER_T3153533162_H
#ifndef LOCALAPPCONTEXTSWITCHES_T1555128697_H
#define LOCALAPPCONTEXTSWITCHES_T1555128697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalAppContextSwitches
struct  LocalAppContextSwitches_t1555128697  : public RuntimeObject
{
public:

public:
};

struct LocalAppContextSwitches_t1555128697_StaticFields
{
public:
	// System.Boolean System.LocalAppContextSwitches::MemberDescriptorEqualsReturnsFalseIfEquivalent
	bool ___MemberDescriptorEqualsReturnsFalseIfEquivalent_0;

public:
	inline static int32_t get_offset_of_MemberDescriptorEqualsReturnsFalseIfEquivalent_0() { return static_cast<int32_t>(offsetof(LocalAppContextSwitches_t1555128697_StaticFields, ___MemberDescriptorEqualsReturnsFalseIfEquivalent_0)); }
	inline bool get_MemberDescriptorEqualsReturnsFalseIfEquivalent_0() const { return ___MemberDescriptorEqualsReturnsFalseIfEquivalent_0; }
	inline bool* get_address_of_MemberDescriptorEqualsReturnsFalseIfEquivalent_0() { return &___MemberDescriptorEqualsReturnsFalseIfEquivalent_0; }
	inline void set_MemberDescriptorEqualsReturnsFalseIfEquivalent_0(bool value)
	{
		___MemberDescriptorEqualsReturnsFalseIfEquivalent_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALAPPCONTEXTSWITCHES_T1555128697_H
#ifndef X509HELPER2_T2348959099_H
#define X509HELPER2_T2348959099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Helper2
struct  X509Helper2_t2348959099  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509HELPER2_T2348959099_H
#ifndef X509EXTENSIONENUMERATOR_T3699812235_H
#define X509EXTENSIONENUMERATOR_T3699812235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct  X509ExtensionEnumerator_t3699812235  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ExtensionEnumerator_t3699812235, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONENUMERATOR_T3699812235_H
#ifndef IOASYNCRESULT_T849843027_H
#define IOASYNCRESULT_T849843027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOAsyncResult
struct  IOAsyncResult_t849843027  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_t3200089119 * ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject * ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t376272996 * ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;

public:
	inline static int32_t get_offset_of_async_callback_0() { return static_cast<int32_t>(offsetof(IOAsyncResult_t849843027, ___async_callback_0)); }
	inline AsyncCallback_t3200089119 * get_async_callback_0() const { return ___async_callback_0; }
	inline AsyncCallback_t3200089119 ** get_address_of_async_callback_0() { return &___async_callback_0; }
	inline void set_async_callback_0(AsyncCallback_t3200089119 * value)
	{
		___async_callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_0), value);
	}

	inline static int32_t get_offset_of_async_state_1() { return static_cast<int32_t>(offsetof(IOAsyncResult_t849843027, ___async_state_1)); }
	inline RuntimeObject * get_async_state_1() const { return ___async_state_1; }
	inline RuntimeObject ** get_address_of_async_state_1() { return &___async_state_1; }
	inline void set_async_state_1(RuntimeObject * value)
	{
		___async_state_1 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_1), value);
	}

	inline static int32_t get_offset_of_wait_handle_2() { return static_cast<int32_t>(offsetof(IOAsyncResult_t849843027, ___wait_handle_2)); }
	inline ManualResetEvent_t376272996 * get_wait_handle_2() const { return ___wait_handle_2; }
	inline ManualResetEvent_t376272996 ** get_address_of_wait_handle_2() { return &___wait_handle_2; }
	inline void set_wait_handle_2(ManualResetEvent_t376272996 * value)
	{
		___wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___wait_handle_2), value);
	}

	inline static int32_t get_offset_of_completed_synchronously_3() { return static_cast<int32_t>(offsetof(IOAsyncResult_t849843027, ___completed_synchronously_3)); }
	inline bool get_completed_synchronously_3() const { return ___completed_synchronously_3; }
	inline bool* get_address_of_completed_synchronously_3() { return &___completed_synchronously_3; }
	inline void set_completed_synchronously_3(bool value)
	{
		___completed_synchronously_3 = value;
	}

	inline static int32_t get_offset_of_completed_4() { return static_cast<int32_t>(offsetof(IOAsyncResult_t849843027, ___completed_4)); }
	inline bool get_completed_4() const { return ___completed_4; }
	inline bool* get_address_of_completed_4() { return &___completed_4; }
	inline void set_completed_4(bool value)
	{
		___completed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t849843027_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t376272996 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t849843027_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t376272996 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
#endif // IOASYNCRESULT_T849843027_H
#ifndef X509EXTENSIONCOLLECTION_T3343878603_H
#define X509EXTENSIONCOLLECTION_T3343878603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct  X509ExtensionCollection_t3343878603  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t4073930564 * ____list_1;

public:
	inline static int32_t get_offset_of__list_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t3343878603, ____list_1)); }
	inline ArrayList_t4073930564 * get__list_1() const { return ____list_1; }
	inline ArrayList_t4073930564 ** get_address_of__list_1() { return &____list_1; }
	inline void set__list_1(ArrayList_t4073930564 * value)
	{
		____list_1 = value;
		Il2CppCodeGenWriteBarrier((&____list_1), value);
	}
};

struct X509ExtensionCollection_t3343878603_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Empty
	ByteU5BU5D_t464104634* ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t3343878603_StaticFields, ___Empty_0)); }
	inline ByteU5BU5D_t464104634* get_Empty_0() const { return ___Empty_0; }
	inline ByteU5BU5D_t464104634** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ByteU5BU5D_t464104634* value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T3343878603_H
#ifndef IOSELECTOR_T1081476739_H
#define IOSELECTOR_T1081476739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOSelector
struct  IOSelector_t1081476739  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSELECTOR_T1081476739_H
#ifndef MONOTOOLSLOCATOR_T2174547676_H
#define MONOTOOLSLOCATOR_T2174547676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoToolsLocator
struct  MonoToolsLocator_t2174547676  : public RuntimeObject
{
public:

public:
};

struct MonoToolsLocator_t2174547676_StaticFields
{
public:
	// System.String System.MonoToolsLocator::Mono
	String_t* ___Mono_0;
	// System.String System.MonoToolsLocator::McsCSharpCompiler
	String_t* ___McsCSharpCompiler_1;
	// System.String System.MonoToolsLocator::VBCompiler
	String_t* ___VBCompiler_2;
	// System.String System.MonoToolsLocator::AssemblyLinker
	String_t* ___AssemblyLinker_3;

public:
	inline static int32_t get_offset_of_Mono_0() { return static_cast<int32_t>(offsetof(MonoToolsLocator_t2174547676_StaticFields, ___Mono_0)); }
	inline String_t* get_Mono_0() const { return ___Mono_0; }
	inline String_t** get_address_of_Mono_0() { return &___Mono_0; }
	inline void set_Mono_0(String_t* value)
	{
		___Mono_0 = value;
		Il2CppCodeGenWriteBarrier((&___Mono_0), value);
	}

	inline static int32_t get_offset_of_McsCSharpCompiler_1() { return static_cast<int32_t>(offsetof(MonoToolsLocator_t2174547676_StaticFields, ___McsCSharpCompiler_1)); }
	inline String_t* get_McsCSharpCompiler_1() const { return ___McsCSharpCompiler_1; }
	inline String_t** get_address_of_McsCSharpCompiler_1() { return &___McsCSharpCompiler_1; }
	inline void set_McsCSharpCompiler_1(String_t* value)
	{
		___McsCSharpCompiler_1 = value;
		Il2CppCodeGenWriteBarrier((&___McsCSharpCompiler_1), value);
	}

	inline static int32_t get_offset_of_VBCompiler_2() { return static_cast<int32_t>(offsetof(MonoToolsLocator_t2174547676_StaticFields, ___VBCompiler_2)); }
	inline String_t* get_VBCompiler_2() const { return ___VBCompiler_2; }
	inline String_t** get_address_of_VBCompiler_2() { return &___VBCompiler_2; }
	inline void set_VBCompiler_2(String_t* value)
	{
		___VBCompiler_2 = value;
		Il2CppCodeGenWriteBarrier((&___VBCompiler_2), value);
	}

	inline static int32_t get_offset_of_AssemblyLinker_3() { return static_cast<int32_t>(offsetof(MonoToolsLocator_t2174547676_StaticFields, ___AssemblyLinker_3)); }
	inline String_t* get_AssemblyLinker_3() const { return ___AssemblyLinker_3; }
	inline String_t** get_address_of_AssemblyLinker_3() { return &___AssemblyLinker_3; }
	inline void set_AssemblyLinker_3(String_t* value)
	{
		___AssemblyLinker_3 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLinker_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOOLSLOCATOR_T2174547676_H
#ifndef PLATFORM_T261713963_H
#define PLATFORM_T261713963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Platform
struct  Platform_t261713963  : public RuntimeObject
{
public:

public:
};

struct Platform_t261713963_StaticFields
{
public:
	// System.Boolean System.Platform::checkedOS
	bool ___checkedOS_0;
	// System.Boolean System.Platform::isMacOS
	bool ___isMacOS_1;
	// System.Boolean System.Platform::isFreeBSD
	bool ___isFreeBSD_2;

public:
	inline static int32_t get_offset_of_checkedOS_0() { return static_cast<int32_t>(offsetof(Platform_t261713963_StaticFields, ___checkedOS_0)); }
	inline bool get_checkedOS_0() const { return ___checkedOS_0; }
	inline bool* get_address_of_checkedOS_0() { return &___checkedOS_0; }
	inline void set_checkedOS_0(bool value)
	{
		___checkedOS_0 = value;
	}

	inline static int32_t get_offset_of_isMacOS_1() { return static_cast<int32_t>(offsetof(Platform_t261713963_StaticFields, ___isMacOS_1)); }
	inline bool get_isMacOS_1() const { return ___isMacOS_1; }
	inline bool* get_address_of_isMacOS_1() { return &___isMacOS_1; }
	inline void set_isMacOS_1(bool value)
	{
		___isMacOS_1 = value;
	}

	inline static int32_t get_offset_of_isFreeBSD_2() { return static_cast<int32_t>(offsetof(Platform_t261713963_StaticFields, ___isFreeBSD_2)); }
	inline bool get_isFreeBSD_2() const { return ___isFreeBSD_2; }
	inline bool* get_address_of_isFreeBSD_2() { return &___isFreeBSD_2; }
	inline void set_isFreeBSD_2(bool value)
	{
		___isFreeBSD_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T261713963_H
#ifndef X509CHAINIMPL_T4048452721_H
#define X509CHAINIMPL_T4048452721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct  X509ChainImpl_t4048452721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINIMPL_T4048452721_H
#ifndef PERMISSIONHELPER_T4239581931_H
#define PERMISSIONHELPER_T4239581931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionHelper
struct  PermissionHelper_t4239581931  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONHELPER_T4239581931_H
#ifndef X509CHAINELEMENTENUMERATOR_T3952785095_H
#define X509CHAINELEMENTENUMERATOR_T3952785095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct  X509ChainElementEnumerator_t3952785095  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ChainElementEnumerator_t3952785095, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTENUMERATOR_T3952785095_H
#ifndef RESOURCEPERMISSIONBASEENTRY_T1629888654_H
#define RESOURCEPERMISSIONBASEENTRY_T1629888654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ResourcePermissionBaseEntry
struct  ResourcePermissionBaseEntry_t1629888654  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Permissions.ResourcePermissionBaseEntry::permissionAccess
	int32_t ___permissionAccess_0;
	// System.String[] System.Security.Permissions.ResourcePermissionBaseEntry::permissionAccessPath
	StringU5BU5D_t2160812740* ___permissionAccessPath_1;

public:
	inline static int32_t get_offset_of_permissionAccess_0() { return static_cast<int32_t>(offsetof(ResourcePermissionBaseEntry_t1629888654, ___permissionAccess_0)); }
	inline int32_t get_permissionAccess_0() const { return ___permissionAccess_0; }
	inline int32_t* get_address_of_permissionAccess_0() { return &___permissionAccess_0; }
	inline void set_permissionAccess_0(int32_t value)
	{
		___permissionAccess_0 = value;
	}

	inline static int32_t get_offset_of_permissionAccessPath_1() { return static_cast<int32_t>(offsetof(ResourcePermissionBaseEntry_t1629888654, ___permissionAccessPath_1)); }
	inline StringU5BU5D_t2160812740* get_permissionAccessPath_1() const { return ___permissionAccessPath_1; }
	inline StringU5BU5D_t2160812740** get_address_of_permissionAccessPath_1() { return &___permissionAccessPath_1; }
	inline void set_permissionAccessPath_1(StringU5BU5D_t2160812740* value)
	{
		___permissionAccessPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___permissionAccessPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEPERMISSIONBASEENTRY_T1629888654_H
#ifndef X509CHAINELEMENTCOLLECTION_T3944765307_H
#define X509CHAINELEMENTCOLLECTION_T3944765307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct  X509ChainElementCollection_t3944765307  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t4073930564 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ChainElementCollection_t3944765307, ____list_0)); }
	inline ArrayList_t4073930564 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4073930564 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4073930564 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTCOLLECTION_T3944765307_H
#ifndef X509CHAIN_T2951808450_H
#define X509CHAIN_T2951808450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t2951808450  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_t4048452721 * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t2951808450, ___impl_0)); }
	inline X509ChainImpl_t4048452721 * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_t4048452721 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_t4048452721 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((&___impl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T2951808450_H
#ifndef OIDCOLLECTION_T1423606164_H
#define OIDCOLLECTION_T1423606164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t1423606164  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::m_list
	ArrayList_t4073930564 * ___m_list_0;

public:
	inline static int32_t get_offset_of_m_list_0() { return static_cast<int32_t>(offsetof(OidCollection_t1423606164, ___m_list_0)); }
	inline ArrayList_t4073930564 * get_m_list_0() const { return ___m_list_0; }
	inline ArrayList_t4073930564 ** get_address_of_m_list_0() { return &___m_list_0; }
	inline void set_m_list_0(ArrayList_t4073930564 * value)
	{
		___m_list_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T1423606164_H
#ifndef OIDENUMERATOR_T3705266072_H
#define OIDENUMERATOR_T3705266072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t3705266072  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::m_oids
	OidCollection_t1423606164 * ___m_oids_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::m_current
	int32_t ___m_current_1;

public:
	inline static int32_t get_offset_of_m_oids_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t3705266072, ___m_oids_0)); }
	inline OidCollection_t1423606164 * get_m_oids_0() const { return ___m_oids_0; }
	inline OidCollection_t1423606164 ** get_address_of_m_oids_0() { return &___m_oids_0; }
	inline void set_m_oids_0(OidCollection_t1423606164 * value)
	{
		___m_oids_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oids_0), value);
	}

	inline static int32_t get_offset_of_m_current_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t3705266072, ___m_current_1)); }
	inline int32_t get_m_current_1() const { return ___m_current_1; }
	inline int32_t* get_address_of_m_current_1() { return &___m_current_1; }
	inline void set_m_current_1(int32_t value)
	{
		___m_current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T3705266072_H
#ifndef CAPI_T531155712_H
#define CAPI_T531155712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CAPI
struct  CAPI_t531155712  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPI_T531155712_H
#ifndef X509CERTIFICATEIMPLCOLLECTION_T852082282_H
#define X509CERTIFICATEIMPLCOLLECTION_T852082282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct  X509CertificateImplCollection_t852082282  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_t3250268767 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(X509CertificateImplCollection_t852082282, ___list_0)); }
	inline List_1_t3250268767 * get_list_0() const { return ___list_0; }
	inline List_1_t3250268767 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3250268767 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPLCOLLECTION_T852082282_H
#ifndef ASNENCODEDDATA_T2248440371_H
#define ASNENCODEDDATA_T2248440371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t2248440371  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t3844911692 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t464104634* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t2248440371, ____oid_0)); }
	inline Oid_t3844911692 * get__oid_0() const { return ____oid_0; }
	inline Oid_t3844911692 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t3844911692 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t2248440371, ____raw_1)); }
	inline ByteU5BU5D_t464104634* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t464104634** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t464104634* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T2248440371_H
#ifndef X509UTILS_T4139393671_H
#define X509UTILS_T4139393671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Utils
struct  X509Utils_t4139393671  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509UTILS_T4139393671_H
#ifndef OSX509CERTIFICATES_T4117604033_H
#define OSX509CERTIFICATES_T4117604033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OSX509Certificates
struct  OSX509Certificates_t4117604033  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OSX509CERTIFICATES_T4117604033_H
#ifndef X509CERTIFICATEENUMERATOR_T2938624122_H
#define X509CERTIFICATEENUMERATOR_T2938624122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t2938624122  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t2938624122, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T2938624122_H
#ifndef PUBLICKEY_T881790376_H
#define PUBLICKEY_T881790376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t881790376  : public RuntimeObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t601284490 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t2248440371 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t2248440371 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t3844911692 * ____oid_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(PublicKey_t881790376, ____key_0)); }
	inline AsymmetricAlgorithm_t601284490 * get__key_0() const { return ____key_0; }
	inline AsymmetricAlgorithm_t601284490 ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(AsymmetricAlgorithm_t601284490 * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__keyValue_1() { return static_cast<int32_t>(offsetof(PublicKey_t881790376, ____keyValue_1)); }
	inline AsnEncodedData_t2248440371 * get__keyValue_1() const { return ____keyValue_1; }
	inline AsnEncodedData_t2248440371 ** get_address_of__keyValue_1() { return &____keyValue_1; }
	inline void set__keyValue_1(AsnEncodedData_t2248440371 * value)
	{
		____keyValue_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyValue_1), value);
	}

	inline static int32_t get_offset_of__params_2() { return static_cast<int32_t>(offsetof(PublicKey_t881790376, ____params_2)); }
	inline AsnEncodedData_t2248440371 * get__params_2() const { return ____params_2; }
	inline AsnEncodedData_t2248440371 ** get_address_of__params_2() { return &____params_2; }
	inline void set__params_2(AsnEncodedData_t2248440371 * value)
	{
		____params_2 = value;
		Il2CppCodeGenWriteBarrier((&____params_2), value);
	}

	inline static int32_t get_offset_of__oid_3() { return static_cast<int32_t>(offsetof(PublicKey_t881790376, ____oid_3)); }
	inline Oid_t3844911692 * get__oid_3() const { return ____oid_3; }
	inline Oid_t3844911692 ** get_address_of__oid_3() { return &____oid_3; }
	inline void set__oid_3(Oid_t3844911692 * value)
	{
		____oid_3 = value;
		Il2CppCodeGenWriteBarrier((&____oid_3), value);
	}
};

struct PublicKey_t881790376_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_t464104634* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(PublicKey_t881790376_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t464104634* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t464104634** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t464104634* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLICKEY_T881790376_H
#ifndef X509CERTIFICATE2ENUMERATOR_T3500287189_H
#define X509CERTIFICATE2ENUMERATOR_T3500287189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct  X509Certificate2Enumerator_t3500287189  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509Certificate2Enumerator_t3500287189, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2ENUMERATOR_T3500287189_H
#ifndef UNCNAMEHELPER_T1211504394_H
#define UNCNAMEHELPER_T1211504394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UncNameHelper
struct  UncNameHelper_t1211504394  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNCNAMEHELPER_T1211504394_H
#ifndef MYNATIVEHELPER_T3441909596_H
#define MYNATIVEHELPER_T3441909596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct  MyNativeHelper_t3441909596  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYNATIVEHELPER_T3441909596_H
#ifndef IPV4ADDRESSHELPER_T646584906_H
#define IPV4ADDRESSHELPER_T646584906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IPv4AddressHelper
struct  IPv4AddressHelper_t646584906  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4ADDRESSHELPER_T646584906_H
#ifndef THROWHELPER_T813351457_H
#define THROWHELPER_T813351457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThrowHelper
struct  ThrowHelper_t813351457  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THROWHELPER_T813351457_H
#ifndef CRITICALFINALIZEROBJECT_T2074049159_H
#define CRITICALFINALIZEROBJECT_T2074049159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2074049159  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2074049159_H
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
#ifndef SECURITYUTILS_T379875886_H
#define SECURITYUTILS_T379875886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SecurityUtils
struct  SecurityUtils_t379875886  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYUTILS_T379875886_H
#ifndef INVARIANTCOMPARER_T1815957963_H
#define INVARIANTCOMPARER_T1815957963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvariantComparer
struct  InvariantComparer_t1815957963  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.InvariantComparer::m_compareInfo
	CompareInfo_t511925399 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(InvariantComparer_t1815957963, ___m_compareInfo_0)); }
	inline CompareInfo_t511925399 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t511925399 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t511925399 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct InvariantComparer_t1815957963_StaticFields
{
public:
	// System.InvariantComparer System.InvariantComparer::Default
	InvariantComparer_t1815957963 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(InvariantComparer_t1815957963_StaticFields, ___Default_1)); }
	inline InvariantComparer_t1815957963 * get_Default_1() const { return ___Default_1; }
	inline InvariantComparer_t1815957963 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(InvariantComparer_t1815957963 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVARIANTCOMPARER_T1815957963_H
#ifndef IRIHELPER_T486191106_H
#define IRIHELPER_T486191106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IriHelper
struct  IriHelper_t486191106  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IRIHELPER_T486191106_H
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
#ifndef X509CERTIFICATEIMPL_T1983862841_H
#define X509CERTIFICATEIMPL_T1983862841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct  X509CertificateImpl_t1983862841  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509CertificateImpl::cachedCertificateHash
	ByteU5BU5D_t464104634* ___cachedCertificateHash_0;

public:
	inline static int32_t get_offset_of_cachedCertificateHash_0() { return static_cast<int32_t>(offsetof(X509CertificateImpl_t1983862841, ___cachedCertificateHash_0)); }
	inline ByteU5BU5D_t464104634* get_cachedCertificateHash_0() const { return ___cachedCertificateHash_0; }
	inline ByteU5BU5D_t464104634** get_address_of_cachedCertificateHash_0() { return &___cachedCertificateHash_0; }
	inline void set_cachedCertificateHash_0(ByteU5BU5D_t464104634* value)
	{
		___cachedCertificateHash_0 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPL_T1983862841_H
#ifndef MOREINFO_T4215804961_H
#define MOREINFO_T4215804961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/MoreInfo
struct  MoreInfo_t4215804961  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::Path
	String_t* ___Path_0;
	// System.String System.Uri/MoreInfo::Query
	String_t* ___Query_1;
	// System.String System.Uri/MoreInfo::Fragment
	String_t* ___Fragment_2;
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_3;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_4;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_5;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___Path_0)); }
	inline String_t* get_Path_0() const { return ___Path_0; }
	inline String_t** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(String_t* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier((&___Path_0), value);
	}

	inline static int32_t get_offset_of_Query_1() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___Query_1)); }
	inline String_t* get_Query_1() const { return ___Query_1; }
	inline String_t** get_address_of_Query_1() { return &___Query_1; }
	inline void set_Query_1(String_t* value)
	{
		___Query_1 = value;
		Il2CppCodeGenWriteBarrier((&___Query_1), value);
	}

	inline static int32_t get_offset_of_Fragment_2() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___Fragment_2)); }
	inline String_t* get_Fragment_2() const { return ___Fragment_2; }
	inline String_t** get_address_of_Fragment_2() { return &___Fragment_2; }
	inline void set_Fragment_2(String_t* value)
	{
		___Fragment_2 = value;
		Il2CppCodeGenWriteBarrier((&___Fragment_2), value);
	}

	inline static int32_t get_offset_of_AbsoluteUri_3() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___AbsoluteUri_3)); }
	inline String_t* get_AbsoluteUri_3() const { return ___AbsoluteUri_3; }
	inline String_t** get_address_of_AbsoluteUri_3() { return &___AbsoluteUri_3; }
	inline void set_AbsoluteUri_3(String_t* value)
	{
		___AbsoluteUri_3 = value;
		Il2CppCodeGenWriteBarrier((&___AbsoluteUri_3), value);
	}

	inline static int32_t get_offset_of_Hash_4() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___Hash_4)); }
	inline int32_t get_Hash_4() const { return ___Hash_4; }
	inline int32_t* get_address_of_Hash_4() { return &___Hash_4; }
	inline void set_Hash_4(int32_t value)
	{
		___Hash_4 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_5() { return static_cast<int32_t>(offsetof(MoreInfo_t4215804961, ___RemoteUrl_5)); }
	inline String_t* get_RemoteUrl_5() const { return ___RemoteUrl_5; }
	inline String_t** get_address_of_RemoteUrl_5() { return &___RemoteUrl_5; }
	inline void set_RemoteUrl_5(String_t* value)
	{
		___RemoteUrl_5 = value;
		Il2CppCodeGenWriteBarrier((&___RemoteUrl_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOREINFO_T4215804961_H
#ifndef IPV6ADDRESSHELPER_T3263780161_H
#define IPV6ADDRESSHELPER_T3263780161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IPv6AddressHelper
struct  IPv6AddressHelper_t3263780161  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ADDRESSHELPER_T3263780161_H
#ifndef CODEACCESSPERMISSION_T1842773081_H
#define CODEACCESSPERMISSION_T1842773081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t1842773081  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T1842773081_H
#ifndef X509CERTIFICATE_T1773518232_H
#define X509CERTIFICATE_T1773518232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t1773518232  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t1983862841 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1773518232, ___impl_0)); }
	inline X509CertificateImpl_t1983862841 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t1983862841 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t1983862841 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((&___impl_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1773518232, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1773518232, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_2), value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1773518232, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T1773518232_H
#ifndef REGEXBOYERMOORE_T320390695_H
#define REGEXBOYERMOORE_T320390695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexBoyerMoore
struct  RegexBoyerMoore_t320390695  : public RuntimeObject
{
public:
	// System.Int32[] System.Text.RegularExpressions.RegexBoyerMoore::_positive
	Int32U5BU5D_t4187413745* ____positive_0;
	// System.Int32[] System.Text.RegularExpressions.RegexBoyerMoore::_negativeASCII
	Int32U5BU5D_t4187413745* ____negativeASCII_1;
	// System.Int32[][] System.Text.RegularExpressions.RegexBoyerMoore::_negativeUnicode
	Int32U5BU5DU5BU5D_t456754220* ____negativeUnicode_2;
	// System.String System.Text.RegularExpressions.RegexBoyerMoore::_pattern
	String_t* ____pattern_3;
	// System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::_lowASCII
	int32_t ____lowASCII_4;
	// System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::_highASCII
	int32_t ____highASCII_5;
	// System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::_rightToLeft
	bool ____rightToLeft_6;
	// System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::_caseInsensitive
	bool ____caseInsensitive_7;
	// System.Globalization.CultureInfo System.Text.RegularExpressions.RegexBoyerMoore::_culture
	CultureInfo_t1004381828 * ____culture_8;

public:
	inline static int32_t get_offset_of__positive_0() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____positive_0)); }
	inline Int32U5BU5D_t4187413745* get__positive_0() const { return ____positive_0; }
	inline Int32U5BU5D_t4187413745** get_address_of__positive_0() { return &____positive_0; }
	inline void set__positive_0(Int32U5BU5D_t4187413745* value)
	{
		____positive_0 = value;
		Il2CppCodeGenWriteBarrier((&____positive_0), value);
	}

	inline static int32_t get_offset_of__negativeASCII_1() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____negativeASCII_1)); }
	inline Int32U5BU5D_t4187413745* get__negativeASCII_1() const { return ____negativeASCII_1; }
	inline Int32U5BU5D_t4187413745** get_address_of__negativeASCII_1() { return &____negativeASCII_1; }
	inline void set__negativeASCII_1(Int32U5BU5D_t4187413745* value)
	{
		____negativeASCII_1 = value;
		Il2CppCodeGenWriteBarrier((&____negativeASCII_1), value);
	}

	inline static int32_t get_offset_of__negativeUnicode_2() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____negativeUnicode_2)); }
	inline Int32U5BU5DU5BU5D_t456754220* get__negativeUnicode_2() const { return ____negativeUnicode_2; }
	inline Int32U5BU5DU5BU5D_t456754220** get_address_of__negativeUnicode_2() { return &____negativeUnicode_2; }
	inline void set__negativeUnicode_2(Int32U5BU5DU5BU5D_t456754220* value)
	{
		____negativeUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&____negativeUnicode_2), value);
	}

	inline static int32_t get_offset_of__pattern_3() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____pattern_3)); }
	inline String_t* get__pattern_3() const { return ____pattern_3; }
	inline String_t** get_address_of__pattern_3() { return &____pattern_3; }
	inline void set__pattern_3(String_t* value)
	{
		____pattern_3 = value;
		Il2CppCodeGenWriteBarrier((&____pattern_3), value);
	}

	inline static int32_t get_offset_of__lowASCII_4() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____lowASCII_4)); }
	inline int32_t get__lowASCII_4() const { return ____lowASCII_4; }
	inline int32_t* get_address_of__lowASCII_4() { return &____lowASCII_4; }
	inline void set__lowASCII_4(int32_t value)
	{
		____lowASCII_4 = value;
	}

	inline static int32_t get_offset_of__highASCII_5() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____highASCII_5)); }
	inline int32_t get__highASCII_5() const { return ____highASCII_5; }
	inline int32_t* get_address_of__highASCII_5() { return &____highASCII_5; }
	inline void set__highASCII_5(int32_t value)
	{
		____highASCII_5 = value;
	}

	inline static int32_t get_offset_of__rightToLeft_6() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____rightToLeft_6)); }
	inline bool get__rightToLeft_6() const { return ____rightToLeft_6; }
	inline bool* get_address_of__rightToLeft_6() { return &____rightToLeft_6; }
	inline void set__rightToLeft_6(bool value)
	{
		____rightToLeft_6 = value;
	}

	inline static int32_t get_offset_of__caseInsensitive_7() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____caseInsensitive_7)); }
	inline bool get__caseInsensitive_7() const { return ____caseInsensitive_7; }
	inline bool* get_address_of__caseInsensitive_7() { return &____caseInsensitive_7; }
	inline void set__caseInsensitive_7(bool value)
	{
		____caseInsensitive_7 = value;
	}

	inline static int32_t get_offset_of__culture_8() { return static_cast<int32_t>(offsetof(RegexBoyerMoore_t320390695, ____culture_8)); }
	inline CultureInfo_t1004381828 * get__culture_8() const { return ____culture_8; }
	inline CultureInfo_t1004381828 ** get_address_of__culture_8() { return &____culture_8; }
	inline void set__culture_8(CultureInfo_t1004381828 * value)
	{
		____culture_8 = value;
		Il2CppCodeGenWriteBarrier((&____culture_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXBOYERMOORE_T320390695_H
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
#ifndef DOMAINNAMEHELPER_T3814147263_H
#define DOMAINNAMEHELPER_T3814147263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DomainNameHelper
struct  DomainNameHelper_t3814147263  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOMAINNAMEHELPER_T3814147263_H
#ifndef CACHEDCODEENTRY_T1114271147_H
#define CACHEDCODEENTRY_T1114271147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CachedCodeEntry
struct  CachedCodeEntry_t1114271147  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.CachedCodeEntry::_key
	String_t* ____key_0;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.CachedCodeEntry::_code
	RegexCode_t2451336522 * ____code_1;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_caps
	Hashtable_t1087196262 * ____caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.CachedCodeEntry::_capnames
	Hashtable_t1087196262 * ____capnames_3;
	// System.String[] System.Text.RegularExpressions.CachedCodeEntry::_capslist
	StringU5BU5D_t2160812740* ____capslist_4;
	// System.Int32 System.Text.RegularExpressions.CachedCodeEntry::_capsize
	int32_t ____capsize_5;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.CachedCodeEntry::_factory
	RegexRunnerFactory_t3141866412 * ____factory_6;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.CachedCodeEntry::_runnerref
	ExclusiveReference_t279463186 * ____runnerref_7;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.CachedCodeEntry::_replref
	SharedReference_t4228368067 * ____replref_8;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__code_1() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____code_1)); }
	inline RegexCode_t2451336522 * get__code_1() const { return ____code_1; }
	inline RegexCode_t2451336522 ** get_address_of__code_1() { return &____code_1; }
	inline void set__code_1(RegexCode_t2451336522 * value)
	{
		____code_1 = value;
		Il2CppCodeGenWriteBarrier((&____code_1), value);
	}

	inline static int32_t get_offset_of__caps_2() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____caps_2)); }
	inline Hashtable_t1087196262 * get__caps_2() const { return ____caps_2; }
	inline Hashtable_t1087196262 ** get_address_of__caps_2() { return &____caps_2; }
	inline void set__caps_2(Hashtable_t1087196262 * value)
	{
		____caps_2 = value;
		Il2CppCodeGenWriteBarrier((&____caps_2), value);
	}

	inline static int32_t get_offset_of__capnames_3() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____capnames_3)); }
	inline Hashtable_t1087196262 * get__capnames_3() const { return ____capnames_3; }
	inline Hashtable_t1087196262 ** get_address_of__capnames_3() { return &____capnames_3; }
	inline void set__capnames_3(Hashtable_t1087196262 * value)
	{
		____capnames_3 = value;
		Il2CppCodeGenWriteBarrier((&____capnames_3), value);
	}

	inline static int32_t get_offset_of__capslist_4() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____capslist_4)); }
	inline StringU5BU5D_t2160812740* get__capslist_4() const { return ____capslist_4; }
	inline StringU5BU5D_t2160812740** get_address_of__capslist_4() { return &____capslist_4; }
	inline void set__capslist_4(StringU5BU5D_t2160812740* value)
	{
		____capslist_4 = value;
		Il2CppCodeGenWriteBarrier((&____capslist_4), value);
	}

	inline static int32_t get_offset_of__capsize_5() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____capsize_5)); }
	inline int32_t get__capsize_5() const { return ____capsize_5; }
	inline int32_t* get_address_of__capsize_5() { return &____capsize_5; }
	inline void set__capsize_5(int32_t value)
	{
		____capsize_5 = value;
	}

	inline static int32_t get_offset_of__factory_6() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____factory_6)); }
	inline RegexRunnerFactory_t3141866412 * get__factory_6() const { return ____factory_6; }
	inline RegexRunnerFactory_t3141866412 ** get_address_of__factory_6() { return &____factory_6; }
	inline void set__factory_6(RegexRunnerFactory_t3141866412 * value)
	{
		____factory_6 = value;
		Il2CppCodeGenWriteBarrier((&____factory_6), value);
	}

	inline static int32_t get_offset_of__runnerref_7() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____runnerref_7)); }
	inline ExclusiveReference_t279463186 * get__runnerref_7() const { return ____runnerref_7; }
	inline ExclusiveReference_t279463186 ** get_address_of__runnerref_7() { return &____runnerref_7; }
	inline void set__runnerref_7(ExclusiveReference_t279463186 * value)
	{
		____runnerref_7 = value;
		Il2CppCodeGenWriteBarrier((&____runnerref_7), value);
	}

	inline static int32_t get_offset_of__replref_8() { return static_cast<int32_t>(offsetof(CachedCodeEntry_t1114271147, ____replref_8)); }
	inline SharedReference_t4228368067 * get__replref_8() const { return ____replref_8; }
	inline SharedReference_t4228368067 ** get_address_of__replref_8() { return &____replref_8; }
	inline void set__replref_8(SharedReference_t4228368067 * value)
	{
		____replref_8 = value;
		Il2CppCodeGenWriteBarrier((&____replref_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CACHEDCODEENTRY_T1114271147_H
#ifndef EXCLUSIVEREFERENCE_T279463186_H
#define EXCLUSIVEREFERENCE_T279463186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.ExclusiveReference
struct  ExclusiveReference_t279463186  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.ExclusiveReference::_ref
	RegexRunner_t1110117737 * ____ref_0;
	// System.Object System.Text.RegularExpressions.ExclusiveReference::_obj
	RuntimeObject * ____obj_1;
	// System.Int32 System.Text.RegularExpressions.ExclusiveReference::_locked
	int32_t ____locked_2;

public:
	inline static int32_t get_offset_of__ref_0() { return static_cast<int32_t>(offsetof(ExclusiveReference_t279463186, ____ref_0)); }
	inline RegexRunner_t1110117737 * get__ref_0() const { return ____ref_0; }
	inline RegexRunner_t1110117737 ** get_address_of__ref_0() { return &____ref_0; }
	inline void set__ref_0(RegexRunner_t1110117737 * value)
	{
		____ref_0 = value;
		Il2CppCodeGenWriteBarrier((&____ref_0), value);
	}

	inline static int32_t get_offset_of__obj_1() { return static_cast<int32_t>(offsetof(ExclusiveReference_t279463186, ____obj_1)); }
	inline RuntimeObject * get__obj_1() const { return ____obj_1; }
	inline RuntimeObject ** get_address_of__obj_1() { return &____obj_1; }
	inline void set__obj_1(RuntimeObject * value)
	{
		____obj_1 = value;
		Il2CppCodeGenWriteBarrier((&____obj_1), value);
	}

	inline static int32_t get_offset_of__locked_2() { return static_cast<int32_t>(offsetof(ExclusiveReference_t279463186, ____locked_2)); }
	inline int32_t get__locked_2() const { return ____locked_2; }
	inline int32_t* get_address_of__locked_2() { return &____locked_2; }
	inline void set__locked_2(int32_t value)
	{
		____locked_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUSIVEREFERENCE_T279463186_H
#ifndef URIHELPER_T3247493780_H
#define URIHELPER_T3247493780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHelper
struct  UriHelper_t3247493780  : public RuntimeObject
{
public:

public:
};

struct UriHelper_t3247493780_StaticFields
{
public:
	// System.Char[] System.UriHelper::HexUpperChars
	CharU5BU5D_t3850815912* ___HexUpperChars_0;

public:
	inline static int32_t get_offset_of_HexUpperChars_0() { return static_cast<int32_t>(offsetof(UriHelper_t3247493780_StaticFields, ___HexUpperChars_0)); }
	inline CharU5BU5D_t3850815912* get_HexUpperChars_0() const { return ___HexUpperChars_0; }
	inline CharU5BU5D_t3850815912** get_address_of_HexUpperChars_0() { return &___HexUpperChars_0; }
	inline void set_HexUpperChars_0(CharU5BU5D_t3850815912* value)
	{
		___HexUpperChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___HexUpperChars_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIHELPER_T3247493780_H
#ifndef SHAREDREFERENCE_T4228368067_H
#define SHAREDREFERENCE_T4228368067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.SharedReference
struct  SharedReference_t4228368067  : public RuntimeObject
{
public:
	// System.WeakReference System.Text.RegularExpressions.SharedReference::_ref
	WeakReference_t905792147 * ____ref_0;
	// System.Int32 System.Text.RegularExpressions.SharedReference::_locked
	int32_t ____locked_1;

public:
	inline static int32_t get_offset_of__ref_0() { return static_cast<int32_t>(offsetof(SharedReference_t4228368067, ____ref_0)); }
	inline WeakReference_t905792147 * get__ref_0() const { return ____ref_0; }
	inline WeakReference_t905792147 ** get_address_of__ref_0() { return &____ref_0; }
	inline void set__ref_0(WeakReference_t905792147 * value)
	{
		____ref_0 = value;
		Il2CppCodeGenWriteBarrier((&____ref_0), value);
	}

	inline static int32_t get_offset_of__locked_1() { return static_cast<int32_t>(offsetof(SharedReference_t4228368067, ____locked_1)); }
	inline int32_t get__locked_1() const { return ____locked_1; }
	inline int32_t* get_address_of__locked_1() { return &____locked_1; }
	inline void set__locked_1(int32_t value)
	{
		____locked_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDREFERENCE_T4228368067_H
#ifndef X509CERTIFICATE2IMPL_T3870559011_H
#define X509CERTIFICATE2IMPL_T3870559011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct  X509Certificate2Impl_t3870559011  : public X509CertificateImpl_t1983862841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2IMPL_T3870559011_H
#ifndef X509CERTIFICATECOLLECTION_T3474370605_H
#define X509CERTIFICATECOLLECTION_T3474370605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t3474370605  : public CollectionBase_t2359751193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3474370605_H
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
#ifndef X509EXTENSION_T824407186_H
#define X509EXTENSION_T824407186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t824407186  : public AsnEncodedData_t2248440371
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;

public:
	inline static int32_t get_offset_of__critical_2() { return static_cast<int32_t>(offsetof(X509Extension_t824407186, ____critical_2)); }
	inline bool get__critical_2() const { return ____critical_2; }
	inline bool* get_address_of__critical_2() { return &____critical_2; }
	inline void set__critical_2(bool value)
	{
		____critical_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T824407186_H
#ifndef DESCRIPTIONATTRIBUTE_T3776098871_H
#define DESCRIPTIONATTRIBUTE_T3776098871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3776098871  : public Attribute_t3701037118
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3776098871, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t3776098871_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3776098871 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3776098871_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t3776098871 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t3776098871 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t3776098871 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3776098871_H
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
#ifndef X509CERTIFICATE2_T764521581_H
#define X509CERTIFICATE2_T764521581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t764521581  : public X509Certificate_t1773518232
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::friendlyName
	String_t* ___friendlyName_4;

public:
	inline static int32_t get_offset_of_friendlyName_4() { return static_cast<int32_t>(offsetof(X509Certificate2_t764521581, ___friendlyName_4)); }
	inline String_t* get_friendlyName_4() const { return ___friendlyName_4; }
	inline String_t** get_address_of_friendlyName_4() { return &___friendlyName_4; }
	inline void set_friendlyName_4(String_t* value)
	{
		___friendlyName_4 = value;
		Il2CppCodeGenWriteBarrier((&___friendlyName_4), value);
	}
};

struct X509Certificate2_t764521581_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t464104634* ___signedData_5;

public:
	inline static int32_t get_offset_of_signedData_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t764521581_StaticFields, ___signedData_5)); }
	inline ByteU5BU5D_t464104634* get_signedData_5() const { return ___signedData_5; }
	inline ByteU5BU5D_t464104634** get_address_of_signedData_5() { return &___signedData_5; }
	inline void set_signedData_5(ByteU5BU5D_t464104634* value)
	{
		___signedData_5 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2_T764521581_H
#ifndef X500DISTINGUISHEDNAME_T2569204332_H
#define X500DISTINGUISHEDNAME_T2569204332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct  X500DistinguishedName_t2569204332  : public AsnEncodedData_t2248440371
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::name
	String_t* ___name_2;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X500DistinguishedName::canonEncoding
	ByteU5BU5D_t464104634* ___canonEncoding_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(X500DistinguishedName_t2569204332, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_canonEncoding_3() { return static_cast<int32_t>(offsetof(X500DistinguishedName_t2569204332, ___canonEncoding_3)); }
	inline ByteU5BU5D_t464104634* get_canonEncoding_3() const { return ___canonEncoding_3; }
	inline ByteU5BU5D_t464104634** get_address_of_canonEncoding_3() { return &___canonEncoding_3; }
	inline void set_canonEncoding_3(ByteU5BU5D_t464104634* value)
	{
		___canonEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___canonEncoding_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X500DISTINGUISHEDNAME_T2569204332_H
#ifndef OFFSET_T324696283_H
#define OFFSET_T324696283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Offset
#pragma pack(push, tp, 1)
struct  Offset_t324696283 
{
public:
	// System.UInt16 System.Uri/Offset::Scheme
	uint16_t ___Scheme_0;
	// System.UInt16 System.Uri/Offset::User
	uint16_t ___User_1;
	// System.UInt16 System.Uri/Offset::Host
	uint16_t ___Host_2;
	// System.UInt16 System.Uri/Offset::PortValue
	uint16_t ___PortValue_3;
	// System.UInt16 System.Uri/Offset::Path
	uint16_t ___Path_4;
	// System.UInt16 System.Uri/Offset::Query
	uint16_t ___Query_5;
	// System.UInt16 System.Uri/Offset::Fragment
	uint16_t ___Fragment_6;
	// System.UInt16 System.Uri/Offset::End
	uint16_t ___End_7;

public:
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t324696283, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OFFSET_T324696283_H
#ifndef RESOURCEPERMISSIONBASE_T3287668836_H
#define RESOURCEPERMISSIONBASE_T3287668836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ResourcePermissionBase
struct  ResourcePermissionBase_t3287668836  : public CodeAccessPermission_t1842773081
{
public:
	// System.Collections.ArrayList System.Security.Permissions.ResourcePermissionBase::_list
	ArrayList_t4073930564 * ____list_0;
	// System.Boolean System.Security.Permissions.ResourcePermissionBase::_unrestricted
	bool ____unrestricted_1;
	// System.Type System.Security.Permissions.ResourcePermissionBase::_type
	Type_t * ____type_2;
	// System.String[] System.Security.Permissions.ResourcePermissionBase::_tags
	StringU5BU5D_t2160812740* ____tags_3;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ResourcePermissionBase_t3287668836, ____list_0)); }
	inline ArrayList_t4073930564 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4073930564 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4073930564 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__unrestricted_1() { return static_cast<int32_t>(offsetof(ResourcePermissionBase_t3287668836, ____unrestricted_1)); }
	inline bool get__unrestricted_1() const { return ____unrestricted_1; }
	inline bool* get_address_of__unrestricted_1() { return &____unrestricted_1; }
	inline void set__unrestricted_1(bool value)
	{
		____unrestricted_1 = value;
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(ResourcePermissionBase_t3287668836, ____type_2)); }
	inline Type_t * get__type_2() const { return ____type_2; }
	inline Type_t ** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(Type_t * value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier((&____type_2), value);
	}

	inline static int32_t get_offset_of__tags_3() { return static_cast<int32_t>(offsetof(ResourcePermissionBase_t3287668836, ____tags_3)); }
	inline StringU5BU5D_t2160812740* get__tags_3() const { return ____tags_3; }
	inline StringU5BU5D_t2160812740** get_address_of__tags_3() { return &____tags_3; }
	inline void set__tags_3(StringU5BU5D_t2160812740* value)
	{
		____tags_3 = value;
		Il2CppCodeGenWriteBarrier((&____tags_3), value);
	}
};

struct ResourcePermissionBase_t3287668836_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.ResourcePermissionBase::invalidChars
	CharU5BU5D_t3850815912* ___invalidChars_4;

public:
	inline static int32_t get_offset_of_invalidChars_4() { return static_cast<int32_t>(offsetof(ResourcePermissionBase_t3287668836_StaticFields, ___invalidChars_4)); }
	inline CharU5BU5D_t3850815912* get_invalidChars_4() const { return ___invalidChars_4; }
	inline CharU5BU5D_t3850815912** get_address_of_invalidChars_4() { return &___invalidChars_4; }
	inline void set_invalidChars_4(CharU5BU5D_t3850815912* value)
	{
		___invalidChars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalidChars_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEPERMISSIONBASE_T3287668836_H
#ifndef X509FINDTYPE_T3628191731_H
#define X509FINDTYPE_T3628191731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509FindType
struct  X509FindType_t3628191731 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509FindType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509FindType_t3628191731, ___value___2)); }
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
#endif // X509FINDTYPE_T3628191731_H
#ifndef X509KEYUSAGEFLAGS_T1278133075_H
#define X509KEYUSAGEFLAGS_T1278133075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t1278133075 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t1278133075, ___value___2)); }
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
#endif // X509KEYUSAGEFLAGS_T1278133075_H
#ifndef X509NAMETYPE_T780181607_H
#define X509NAMETYPE_T780181607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509NameType
struct  X509NameType_t780181607 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509NameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509NameType_t780181607, ___value___2)); }
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
#endif // X509NAMETYPE_T780181607_H
#ifndef X509REVOCATIONFLAG_T4117238238_H
#define X509REVOCATIONFLAG_T4117238238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t4117238238 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t4117238238, ___value___2)); }
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
#endif // X509REVOCATIONFLAG_T4117238238_H
#ifndef X509REVOCATIONMODE_T3748806969_H
#define X509REVOCATIONMODE_T3748806969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t3748806969 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationMode_t3748806969, ___value___2)); }
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
#endif // X509REVOCATIONMODE_T3748806969_H
#ifndef CHECK_T1071491042_H
#define CHECK_T1071491042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Check
struct  Check_t1071491042 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_t1071491042, ___value___2)); }
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
#endif // CHECK_T1071491042_H
#ifndef X500DISTINGUISHEDNAMEFLAGS_T875956878_H
#define X500DISTINGUISHEDNAMEFLAGS_T875956878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
struct  X500DistinguishedNameFlags_t875956878 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X500DistinguishedNameFlags_t875956878, ___value___2)); }
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
#endif // X500DISTINGUISHEDNAMEFLAGS_T875956878_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2019982143_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2019982143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t2019982143 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t2019982143, ___value___2)); }
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
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2019982143_H
#ifndef X509VERIFICATIONFLAGS_T2049744613_H
#define X509VERIFICATIONFLAGS_T2049744613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t2049744613 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t2049744613, ___value___2)); }
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
#endif // X509VERIFICATIONFLAGS_T2049744613_H
#ifndef SSLPROTOCOLS_T2971867245_H
#define SSLPROTOCOLS_T2971867245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Authentication.SslProtocols
struct  SslProtocols_t2971867245 
{
public:
	// System.Int32 System.Security.Authentication.SslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslProtocols_t2971867245, ___value___2)); }
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
#endif // SSLPROTOCOLS_T2971867245_H
#ifndef TYPECONVERTER_T2029493906_H
#define TYPECONVERTER_T2029493906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2029493906  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2029493906_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2029493906_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2029493906_H
#ifndef URIQUIRKSVERSION_T1273212301_H
#define URIQUIRKSVERSION_T1273212301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser/UriQuirksVersion
struct  UriQuirksVersion_t1273212301 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t1273212301, ___value___2)); }
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
#endif // URIQUIRKSVERSION_T1273212301_H
#ifndef URIKIND_T243774412_H
#define URIKIND_T243774412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t243774412 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t243774412, ___value___2)); }
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
#endif // URIKIND_T243774412_H
#ifndef URIHOSTNAMETYPE_T3432965085_H
#define URIHOSTNAMETYPE_T3432965085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t3432965085 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriHostNameType_t3432965085, ___value___2)); }
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
#endif // URIHOSTNAMETYPE_T3432965085_H
#ifndef URICOMPONENTS_T2814418560_H
#define URICOMPONENTS_T2814418560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriComponents
struct  UriComponents_t2814418560 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriComponents_t2814418560, ___value___2)); }
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
#endif // URICOMPONENTS_T2814418560_H
#ifndef UNESCAPEMODE_T3966471977_H
#define UNESCAPEMODE_T3966471977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnescapeMode
struct  UnescapeMode_t3966471977 
{
public:
	// System.Int32 System.UnescapeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnescapeMode_t3966471977, ___value___2)); }
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
#endif // UNESCAPEMODE_T3966471977_H
#ifndef PARSINGERROR_T3752634486_H
#define PARSINGERROR_T3752634486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParsingError
struct  ParsingError_t3752634486 
{
public:
	// System.Int32 System.ParsingError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParsingError_t3752634486, ___value___2)); }
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
#endif // PARSINGERROR_T3752634486_H
#ifndef URIIDNSCOPE_T1852860527_H
#define URIIDNSCOPE_T1852860527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1852860527 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1852860527, ___value___2)); }
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
#endif // URIIDNSCOPE_T1852860527_H
#ifndef URISYNTAXFLAGS_T4162268635_H
#define URISYNTAXFLAGS_T4162268635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriSyntaxFlags
struct  UriSyntaxFlags_t4162268635 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t4162268635, ___value___2)); }
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
#endif // URISYNTAXFLAGS_T4162268635_H
#ifndef IOOPERATION_T3773120530_H
#define IOOPERATION_T3773120530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOOperation
struct  IOOperation_t3773120530 
{
public:
	// System.Int32 System.IOOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IOOperation_t3773120530, ___value___2)); }
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
#endif // IOOPERATION_T3773120530_H
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
#ifndef URIINFO_T139325890_H
#define URIINFO_T139325890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriInfo
struct  UriInfo_t139325890  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t324696283  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t4215804961 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((&___Host_0), value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_1), value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((&___String_2), value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___Offset_3)); }
	inline Offset_t324696283  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t324696283 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t324696283  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSafeHost_4), value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_t139325890, ___MoreInfo_5)); }
	inline MoreInfo_t4215804961 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t4215804961 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t4215804961 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___MoreInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIINFO_T139325890_H
#ifndef X509CERTIFICATE2COLLECTION_T484929870_H
#define X509CERTIFICATE2COLLECTION_T484929870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct  X509Certificate2Collection_t484929870  : public X509CertificateCollection_t3474370605
{
public:

public:
};

struct X509Certificate2Collection_t484929870_StaticFields
{
public:
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t2160812740* ___newline_split_1;

public:
	inline static int32_t get_offset_of_newline_split_1() { return static_cast<int32_t>(offsetof(X509Certificate2Collection_t484929870_StaticFields, ___newline_split_1)); }
	inline StringU5BU5D_t2160812740* get_newline_split_1() const { return ___newline_split_1; }
	inline StringU5BU5D_t2160812740** get_address_of_newline_split_1() { return &___newline_split_1; }
	inline void set_newline_split_1(StringU5BU5D_t2160812740* value)
	{
		___newline_split_1 = value;
		Il2CppCodeGenWriteBarrier((&___newline_split_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2COLLECTION_T484929870_H
#ifndef STORENAME_T440312763_H
#define STORENAME_T440312763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreName
struct  StoreName_t440312763 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreName_t440312763, ___value___2)); }
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
#endif // STORENAME_T440312763_H
#ifndef STORELOCATION_T4134512510_H
#define STORELOCATION_T4134512510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t4134512510 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreLocation_t4134512510, ___value___2)); }
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
#endif // STORELOCATION_T4134512510_H
#ifndef X509CERTIFICATE2IMPLMONO_T479427572_H
#define X509CERTIFICATE2IMPLMONO_T479427572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct  X509Certificate2ImplMono_t479427572  : public X509Certificate2Impl_t3870559011
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_archived
	bool ____archived_1;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_extensions
	X509ExtensionCollection_t3343878603 * ____extensions_2;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_publicKey
	PublicKey_t881790376 * ____publicKey_3;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::issuer_name
	X500DistinguishedName_t2569204332 * ___issuer_name_4;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::subject_name
	X500DistinguishedName_t2569204332 * ___subject_name_5;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signature_algorithm
	Oid_t3844911692 * ___signature_algorithm_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::intermediateCerts
	X509CertificateImplCollection_t852082282 * ___intermediateCerts_7;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_cert
	X509Certificate_t2428374264 * ____cert_8;

public:
	inline static int32_t get_offset_of__archived_1() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ____archived_1)); }
	inline bool get__archived_1() const { return ____archived_1; }
	inline bool* get_address_of__archived_1() { return &____archived_1; }
	inline void set__archived_1(bool value)
	{
		____archived_1 = value;
	}

	inline static int32_t get_offset_of__extensions_2() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ____extensions_2)); }
	inline X509ExtensionCollection_t3343878603 * get__extensions_2() const { return ____extensions_2; }
	inline X509ExtensionCollection_t3343878603 ** get_address_of__extensions_2() { return &____extensions_2; }
	inline void set__extensions_2(X509ExtensionCollection_t3343878603 * value)
	{
		____extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_2), value);
	}

	inline static int32_t get_offset_of__publicKey_3() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ____publicKey_3)); }
	inline PublicKey_t881790376 * get__publicKey_3() const { return ____publicKey_3; }
	inline PublicKey_t881790376 ** get_address_of__publicKey_3() { return &____publicKey_3; }
	inline void set__publicKey_3(PublicKey_t881790376 * value)
	{
		____publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_3), value);
	}

	inline static int32_t get_offset_of_issuer_name_4() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ___issuer_name_4)); }
	inline X500DistinguishedName_t2569204332 * get_issuer_name_4() const { return ___issuer_name_4; }
	inline X500DistinguishedName_t2569204332 ** get_address_of_issuer_name_4() { return &___issuer_name_4; }
	inline void set_issuer_name_4(X500DistinguishedName_t2569204332 * value)
	{
		___issuer_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_4), value);
	}

	inline static int32_t get_offset_of_subject_name_5() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ___subject_name_5)); }
	inline X500DistinguishedName_t2569204332 * get_subject_name_5() const { return ___subject_name_5; }
	inline X500DistinguishedName_t2569204332 ** get_address_of_subject_name_5() { return &___subject_name_5; }
	inline void set_subject_name_5(X500DistinguishedName_t2569204332 * value)
	{
		___subject_name_5 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_5), value);
	}

	inline static int32_t get_offset_of_signature_algorithm_6() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ___signature_algorithm_6)); }
	inline Oid_t3844911692 * get_signature_algorithm_6() const { return ___signature_algorithm_6; }
	inline Oid_t3844911692 ** get_address_of_signature_algorithm_6() { return &___signature_algorithm_6; }
	inline void set_signature_algorithm_6(Oid_t3844911692 * value)
	{
		___signature_algorithm_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_algorithm_6), value);
	}

	inline static int32_t get_offset_of_intermediateCerts_7() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ___intermediateCerts_7)); }
	inline X509CertificateImplCollection_t852082282 * get_intermediateCerts_7() const { return ___intermediateCerts_7; }
	inline X509CertificateImplCollection_t852082282 ** get_address_of_intermediateCerts_7() { return &___intermediateCerts_7; }
	inline void set_intermediateCerts_7(X509CertificateImplCollection_t852082282 * value)
	{
		___intermediateCerts_7 = value;
		Il2CppCodeGenWriteBarrier((&___intermediateCerts_7), value);
	}

	inline static int32_t get_offset_of__cert_8() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572, ____cert_8)); }
	inline X509Certificate_t2428374264 * get__cert_8() const { return ____cert_8; }
	inline X509Certificate_t2428374264 ** get_address_of__cert_8() { return &____cert_8; }
	inline void set__cert_8(X509Certificate_t2428374264 * value)
	{
		____cert_8 = value;
		Il2CppCodeGenWriteBarrier((&____cert_8), value);
	}
};

struct X509Certificate2ImplMono_t479427572_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::empty_error
	String_t* ___empty_error_9;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::commonName
	ByteU5BU5D_t464104634* ___commonName_10;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::email
	ByteU5BU5D_t464104634* ___email_11;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signedData
	ByteU5BU5D_t464104634* ___signedData_12;

public:
	inline static int32_t get_offset_of_empty_error_9() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572_StaticFields, ___empty_error_9)); }
	inline String_t* get_empty_error_9() const { return ___empty_error_9; }
	inline String_t** get_address_of_empty_error_9() { return &___empty_error_9; }
	inline void set_empty_error_9(String_t* value)
	{
		___empty_error_9 = value;
		Il2CppCodeGenWriteBarrier((&___empty_error_9), value);
	}

	inline static int32_t get_offset_of_commonName_10() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572_StaticFields, ___commonName_10)); }
	inline ByteU5BU5D_t464104634* get_commonName_10() const { return ___commonName_10; }
	inline ByteU5BU5D_t464104634** get_address_of_commonName_10() { return &___commonName_10; }
	inline void set_commonName_10(ByteU5BU5D_t464104634* value)
	{
		___commonName_10 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_10), value);
	}

	inline static int32_t get_offset_of_email_11() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572_StaticFields, ___email_11)); }
	inline ByteU5BU5D_t464104634* get_email_11() const { return ___email_11; }
	inline ByteU5BU5D_t464104634** get_address_of_email_11() { return &___email_11; }
	inline void set_email_11(ByteU5BU5D_t464104634* value)
	{
		___email_11 = value;
		Il2CppCodeGenWriteBarrier((&___email_11), value);
	}

	inline static int32_t get_offset_of_signedData_12() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t479427572_StaticFields, ___signedData_12)); }
	inline ByteU5BU5D_t464104634* get_signedData_12() const { return ___signedData_12; }
	inline ByteU5BU5D_t464104634** get_address_of_signedData_12() { return &___signedData_12; }
	inline void set_signedData_12(ByteU5BU5D_t464104634* value)
	{
		___signedData_12 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2IMPLMONO_T479427572_H
#ifndef OPENFLAGS_T667343715_H
#define OPENFLAGS_T667343715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t667343715 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpenFlags_t667343715, ___value___2)); }
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
#endif // OPENFLAGS_T667343715_H
#ifndef SECTRUSTRESULT_T2398507263_H
#define SECTRUSTRESULT_T2398507263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OSX509Certificates/SecTrustResult
struct  SecTrustResult_t2398507263 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OSX509Certificates/SecTrustResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecTrustResult_t2398507263, ___value___2)); }
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
#endif // SECTRUSTRESULT_T2398507263_H
#ifndef ASNDECODESTATUS_T3281528679_H
#define ASNDECODESTATUS_T3281528679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t3281528679 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t3281528679, ___value___2)); }
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
#endif // ASNDECODESTATUS_T3281528679_H
#ifndef EXCEPTIONARGUMENT_T3854348522_H
#define EXCEPTIONARGUMENT_T3854348522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionArgument
struct  ExceptionArgument_t3854348522 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t3854348522, ___value___2)); }
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
#endif // EXCEPTIONARGUMENT_T3854348522_H
#ifndef URIFORMAT_T2503608817_H
#define URIFORMAT_T2503608817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormat
struct  UriFormat_t2503608817 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t2503608817, ___value___2)); }
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
#endif // URIFORMAT_T2503608817_H
#ifndef EXCEPTIONRESOURCE_T959232876_H
#define EXCEPTIONRESOURCE_T959232876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionResource
struct  ExceptionResource_t959232876 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_t959232876, ___value___2)); }
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
#endif // EXCEPTIONRESOURCE_T959232876_H
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
#ifndef SAFEHANDLE_T3060690203_H
#define SAFEHANDLE_T3060690203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3060690203  : public CriticalFinalizerObject_t2074049159
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3060690203, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3060690203, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3060690203, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3060690203, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3060690203_H
#ifndef REGEXOPTIONS_T1752243223_H
#define REGEXOPTIONS_T1752243223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t1752243223 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t1752243223, ___value___2)); }
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
#endif // REGEXOPTIONS_T1752243223_H
#ifndef X509CHAINSTATUSFLAGS_T52973152_H
#define X509CHAINSTATUSFLAGS_T52973152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t52973152 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t52973152, ___value___2)); }
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
#endif // X509CHAINSTATUSFLAGS_T52973152_H
#ifndef FLAGS_T1321844385_H
#define FLAGS_T1321844385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t1321844385 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t1321844385, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T1321844385_H
#ifndef SRDESCRIPTIONATTRIBUTE_T309801737_H
#define SRDESCRIPTIONATTRIBUTE_T309801737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SRDescriptionAttribute
struct  SRDescriptionAttribute_t309801737  : public DescriptionAttribute_t3776098871
{
public:
	// System.Boolean System.SRDescriptionAttribute::isReplaced
	bool ___isReplaced_2;

public:
	inline static int32_t get_offset_of_isReplaced_2() { return static_cast<int32_t>(offsetof(SRDescriptionAttribute_t309801737, ___isReplaced_2)); }
	inline bool get_isReplaced_2() const { return ___isReplaced_2; }
	inline bool* get_address_of_isReplaced_2() { return &___isReplaced_2; }
	inline void set_isReplaced_2(bool value)
	{
		___isReplaced_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SRDESCRIPTIONATTRIBUTE_T309801737_H
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
#ifndef OIDGROUP_T1429785059_H
#define OIDGROUP_T1429785059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidGroup
struct  OidGroup_t1429785059 
{
public:
	// System.Int32 System.Security.Cryptography.OidGroup::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OidGroup_t1429785059, ___value___2)); }
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
#endif // OIDGROUP_T1429785059_H
#ifndef URIFORMATEXCEPTION_T3388690637_H
#define URIFORMATEXCEPTION_T3388690637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t3388690637  : public FormatException_t405081198
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T3388690637_H
#ifndef URI_T4031968151_H
#define URI_T4031968151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t4031968151  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t1390293818 * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t139325890 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_13), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_14), value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_Syntax_15)); }
	inline UriParser_t1390293818 * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t1390293818 ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t1390293818 * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_15), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_16), value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_Info_18)); }
	inline UriInfo_t139325890 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t139325890 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t139325890 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_18), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4031968151, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4031968151_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3850815912* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3850815912* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_26), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t3850815912* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t3850815912** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t3850815912* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_27), value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4031968151_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t3850815912* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t3850815912** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t3850815912* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T4031968151_H
#ifndef X509BASICCONSTRAINTSEXTENSION_T1285098626_H
#define X509BASICCONSTRAINTSEXTENSION_T1285098626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct  X509BasicConstraintsExtension_t1285098626  : public X509Extension_t824407186
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_5;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_6;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__certificateAuthority_5() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1285098626, ____certificateAuthority_5)); }
	inline bool get__certificateAuthority_5() const { return ____certificateAuthority_5; }
	inline bool* get_address_of__certificateAuthority_5() { return &____certificateAuthority_5; }
	inline void set__certificateAuthority_5(bool value)
	{
		____certificateAuthority_5 = value;
	}

	inline static int32_t get_offset_of__hasPathLengthConstraint_6() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1285098626, ____hasPathLengthConstraint_6)); }
	inline bool get__hasPathLengthConstraint_6() const { return ____hasPathLengthConstraint_6; }
	inline bool* get_address_of__hasPathLengthConstraint_6() { return &____hasPathLengthConstraint_6; }
	inline void set__hasPathLengthConstraint_6(bool value)
	{
		____hasPathLengthConstraint_6 = value;
	}

	inline static int32_t get_offset_of__pathLengthConstraint_7() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1285098626, ____pathLengthConstraint_7)); }
	inline int32_t get__pathLengthConstraint_7() const { return ____pathLengthConstraint_7; }
	inline int32_t* get_address_of__pathLengthConstraint_7() { return &____pathLengthConstraint_7; }
	inline void set__pathLengthConstraint_7(int32_t value)
	{
		____pathLengthConstraint_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t1285098626, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BASICCONSTRAINTSEXTENSION_T1285098626_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T2433637652_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T2433637652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t2433637652  : public X509Extension_t824407186
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t464104634* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_5() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2433637652, ____subjectKeyIdentifier_5)); }
	inline ByteU5BU5D_t464104634* get__subjectKeyIdentifier_5() const { return ____subjectKeyIdentifier_5; }
	inline ByteU5BU5D_t464104634** get_address_of__subjectKeyIdentifier_5() { return &____subjectKeyIdentifier_5; }
	inline void set__subjectKeyIdentifier_5(ByteU5BU5D_t464104634* value)
	{
		____subjectKeyIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_5), value);
	}

	inline static int32_t get_offset_of__ski_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2433637652, ____ski_6)); }
	inline String_t* get__ski_6() const { return ____ski_6; }
	inline String_t** get_address_of__ski_6() { return &____ski_6; }
	inline void set__ski_6(String_t* value)
	{
		____ski_6 = value;
		Il2CppCodeGenWriteBarrier((&____ski_6), value);
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t2433637652, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T2433637652_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1723575600_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1723575600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1723575600  : public SafeHandle_t3060690203
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1723575600_H
#ifndef OID_T3844911692_H
#define OID_T3844911692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t3844911692  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::m_value
	String_t* ___m_value_0;
	// System.String System.Security.Cryptography.Oid::m_friendlyName
	String_t* ___m_friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::m_group
	int32_t ___m_group_2;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Oid_t3844911692, ___m_value_0)); }
	inline String_t* get_m_value_0() const { return ___m_value_0; }
	inline String_t** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(String_t* value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_0), value);
	}

	inline static int32_t get_offset_of_m_friendlyName_1() { return static_cast<int32_t>(offsetof(Oid_t3844911692, ___m_friendlyName_1)); }
	inline String_t* get_m_friendlyName_1() const { return ___m_friendlyName_1; }
	inline String_t** get_address_of_m_friendlyName_1() { return &___m_friendlyName_1; }
	inline void set_m_friendlyName_1(String_t* value)
	{
		___m_friendlyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_friendlyName_1), value);
	}

	inline static int32_t get_offset_of_m_group_2() { return static_cast<int32_t>(offsetof(Oid_t3844911692, ___m_group_2)); }
	inline int32_t get_m_group_2() const { return ___m_group_2; }
	inline int32_t* get_address_of_m_group_2() { return &___m_group_2; }
	inline void set_m_group_2(int32_t value)
	{
		___m_group_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T3844911692_H
#ifndef X509CHAINELEMENT_T1111123030_H
#define X509CHAINELEMENT_T1111123030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct  X509ChainElement_t1111123030  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::certificate
	X509Certificate2_t764521581 * ___certificate_0;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::status
	X509ChainStatusU5BU5D_t2745379444* ___status_1;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainElement::info
	String_t* ___info_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::compressed_status_flags
	int32_t ___compressed_status_flags_3;

public:
	inline static int32_t get_offset_of_certificate_0() { return static_cast<int32_t>(offsetof(X509ChainElement_t1111123030, ___certificate_0)); }
	inline X509Certificate2_t764521581 * get_certificate_0() const { return ___certificate_0; }
	inline X509Certificate2_t764521581 ** get_address_of_certificate_0() { return &___certificate_0; }
	inline void set_certificate_0(X509Certificate2_t764521581 * value)
	{
		___certificate_0 = value;
		Il2CppCodeGenWriteBarrier((&___certificate_0), value);
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(X509ChainElement_t1111123030, ___status_1)); }
	inline X509ChainStatusU5BU5D_t2745379444* get_status_1() const { return ___status_1; }
	inline X509ChainStatusU5BU5D_t2745379444** get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(X509ChainStatusU5BU5D_t2745379444* value)
	{
		___status_1 = value;
		Il2CppCodeGenWriteBarrier((&___status_1), value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(X509ChainElement_t1111123030, ___info_2)); }
	inline String_t* get_info_2() const { return ___info_2; }
	inline String_t** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(String_t* value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((&___info_2), value);
	}

	inline static int32_t get_offset_of_compressed_status_flags_3() { return static_cast<int32_t>(offsetof(X509ChainElement_t1111123030, ___compressed_status_flags_3)); }
	inline int32_t get_compressed_status_flags_3() const { return ___compressed_status_flags_3; }
	inline int32_t* get_address_of_compressed_status_flags_3() { return &___compressed_status_flags_3; }
	inline void set_compressed_status_flags_3(int32_t value)
	{
		___compressed_status_flags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENT_T1111123030_H
#ifndef URITYPECONVERTER_T4081306227_H
#define URITYPECONVERTER_T4081306227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t4081306227  : public TypeConverter_t2029493906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T4081306227_H
#ifndef X509CHAINIMPLMONO_T3316656982_H
#define X509CHAINIMPLMONO_T3316656982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct  X509ChainImplMono_t3316656982  : public X509ChainImpl_t4048452721
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_t3944765307 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_t2805648242 * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::status
	X509ChainStatusU5BU5D_t2745379444* ___status_3;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainImplMono::max_path_length
	int32_t ___max_path_length_5;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_issuer_name
	X500DistinguishedName_t2569204332 * ___working_issuer_name_6;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_public_key
	AsymmetricAlgorithm_t601284490 * ___working_public_key_7;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainImplMono::bce_restriction
	X509ChainElement_t1111123030 * ___bce_restriction_8;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::roots
	X509Certificate2Collection_t484929870 * ___roots_9;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::cas
	X509Certificate2Collection_t484929870 * ___cas_10;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::root_store
	X509Store_t106568074 * ___root_store_11;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::ca_store
	X509Store_t106568074 * ___ca_store_12;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_root_store
	X509Store_t106568074 * ___user_root_store_13;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_ca_store
	X509Store_t106568074 * ___user_ca_store_14;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::collection
	X509Certificate2Collection_t484929870 * ___collection_15;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___elements_1)); }
	inline X509ChainElementCollection_t3944765307 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_t3944765307 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_t3944765307 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___elements_1), value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___policy_2)); }
	inline X509ChainPolicy_t2805648242 * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_t2805648242 ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_t2805648242 * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((&___policy_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___status_3)); }
	inline X509ChainStatusU5BU5D_t2745379444* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_t2745379444** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_t2745379444* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_3), value);
	}

	inline static int32_t get_offset_of_max_path_length_5() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___max_path_length_5)); }
	inline int32_t get_max_path_length_5() const { return ___max_path_length_5; }
	inline int32_t* get_address_of_max_path_length_5() { return &___max_path_length_5; }
	inline void set_max_path_length_5(int32_t value)
	{
		___max_path_length_5 = value;
	}

	inline static int32_t get_offset_of_working_issuer_name_6() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___working_issuer_name_6)); }
	inline X500DistinguishedName_t2569204332 * get_working_issuer_name_6() const { return ___working_issuer_name_6; }
	inline X500DistinguishedName_t2569204332 ** get_address_of_working_issuer_name_6() { return &___working_issuer_name_6; }
	inline void set_working_issuer_name_6(X500DistinguishedName_t2569204332 * value)
	{
		___working_issuer_name_6 = value;
		Il2CppCodeGenWriteBarrier((&___working_issuer_name_6), value);
	}

	inline static int32_t get_offset_of_working_public_key_7() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___working_public_key_7)); }
	inline AsymmetricAlgorithm_t601284490 * get_working_public_key_7() const { return ___working_public_key_7; }
	inline AsymmetricAlgorithm_t601284490 ** get_address_of_working_public_key_7() { return &___working_public_key_7; }
	inline void set_working_public_key_7(AsymmetricAlgorithm_t601284490 * value)
	{
		___working_public_key_7 = value;
		Il2CppCodeGenWriteBarrier((&___working_public_key_7), value);
	}

	inline static int32_t get_offset_of_bce_restriction_8() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___bce_restriction_8)); }
	inline X509ChainElement_t1111123030 * get_bce_restriction_8() const { return ___bce_restriction_8; }
	inline X509ChainElement_t1111123030 ** get_address_of_bce_restriction_8() { return &___bce_restriction_8; }
	inline void set_bce_restriction_8(X509ChainElement_t1111123030 * value)
	{
		___bce_restriction_8 = value;
		Il2CppCodeGenWriteBarrier((&___bce_restriction_8), value);
	}

	inline static int32_t get_offset_of_roots_9() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___roots_9)); }
	inline X509Certificate2Collection_t484929870 * get_roots_9() const { return ___roots_9; }
	inline X509Certificate2Collection_t484929870 ** get_address_of_roots_9() { return &___roots_9; }
	inline void set_roots_9(X509Certificate2Collection_t484929870 * value)
	{
		___roots_9 = value;
		Il2CppCodeGenWriteBarrier((&___roots_9), value);
	}

	inline static int32_t get_offset_of_cas_10() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___cas_10)); }
	inline X509Certificate2Collection_t484929870 * get_cas_10() const { return ___cas_10; }
	inline X509Certificate2Collection_t484929870 ** get_address_of_cas_10() { return &___cas_10; }
	inline void set_cas_10(X509Certificate2Collection_t484929870 * value)
	{
		___cas_10 = value;
		Il2CppCodeGenWriteBarrier((&___cas_10), value);
	}

	inline static int32_t get_offset_of_root_store_11() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___root_store_11)); }
	inline X509Store_t106568074 * get_root_store_11() const { return ___root_store_11; }
	inline X509Store_t106568074 ** get_address_of_root_store_11() { return &___root_store_11; }
	inline void set_root_store_11(X509Store_t106568074 * value)
	{
		___root_store_11 = value;
		Il2CppCodeGenWriteBarrier((&___root_store_11), value);
	}

	inline static int32_t get_offset_of_ca_store_12() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___ca_store_12)); }
	inline X509Store_t106568074 * get_ca_store_12() const { return ___ca_store_12; }
	inline X509Store_t106568074 ** get_address_of_ca_store_12() { return &___ca_store_12; }
	inline void set_ca_store_12(X509Store_t106568074 * value)
	{
		___ca_store_12 = value;
		Il2CppCodeGenWriteBarrier((&___ca_store_12), value);
	}

	inline static int32_t get_offset_of_user_root_store_13() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___user_root_store_13)); }
	inline X509Store_t106568074 * get_user_root_store_13() const { return ___user_root_store_13; }
	inline X509Store_t106568074 ** get_address_of_user_root_store_13() { return &___user_root_store_13; }
	inline void set_user_root_store_13(X509Store_t106568074 * value)
	{
		___user_root_store_13 = value;
		Il2CppCodeGenWriteBarrier((&___user_root_store_13), value);
	}

	inline static int32_t get_offset_of_user_ca_store_14() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___user_ca_store_14)); }
	inline X509Store_t106568074 * get_user_ca_store_14() const { return ___user_ca_store_14; }
	inline X509Store_t106568074 ** get_address_of_user_ca_store_14() { return &___user_ca_store_14; }
	inline void set_user_ca_store_14(X509Store_t106568074 * value)
	{
		___user_ca_store_14 = value;
		Il2CppCodeGenWriteBarrier((&___user_ca_store_14), value);
	}

	inline static int32_t get_offset_of_collection_15() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982, ___collection_15)); }
	inline X509Certificate2Collection_t484929870 * get_collection_15() const { return ___collection_15; }
	inline X509Certificate2Collection_t484929870 ** get_address_of_collection_15() { return &___collection_15; }
	inline void set_collection_15(X509Certificate2Collection_t484929870 * value)
	{
		___collection_15 = value;
		Il2CppCodeGenWriteBarrier((&___collection_15), value);
	}
};

struct X509ChainImplMono_t3316656982_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_t2745379444* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3316656982_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_t2745379444* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_t2745379444** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_t2745379444* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINIMPLMONO_T3316656982_H
#ifndef X509CHAINPOLICY_T2805648242_H
#define X509CHAINPOLICY_T2805648242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_t2805648242  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_t1423606164 * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_t1423606164 * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509CertificateCollection_t3474370605 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t484929870 * ___store2_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_4;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_5;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t483180088  ___timeout_6;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t3095499941  ___vtime_8;

public:
	inline static int32_t get_offset_of_apps_0() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___apps_0)); }
	inline OidCollection_t1423606164 * get_apps_0() const { return ___apps_0; }
	inline OidCollection_t1423606164 ** get_address_of_apps_0() { return &___apps_0; }
	inline void set_apps_0(OidCollection_t1423606164 * value)
	{
		___apps_0 = value;
		Il2CppCodeGenWriteBarrier((&___apps_0), value);
	}

	inline static int32_t get_offset_of_cert_1() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___cert_1)); }
	inline OidCollection_t1423606164 * get_cert_1() const { return ___cert_1; }
	inline OidCollection_t1423606164 ** get_address_of_cert_1() { return &___cert_1; }
	inline void set_cert_1(OidCollection_t1423606164 * value)
	{
		___cert_1 = value;
		Il2CppCodeGenWriteBarrier((&___cert_1), value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___store_2)); }
	inline X509CertificateCollection_t3474370605 * get_store_2() const { return ___store_2; }
	inline X509CertificateCollection_t3474370605 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(X509CertificateCollection_t3474370605 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_store2_3() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___store2_3)); }
	inline X509Certificate2Collection_t484929870 * get_store2_3() const { return ___store2_3; }
	inline X509Certificate2Collection_t484929870 ** get_address_of_store2_3() { return &___store2_3; }
	inline void set_store2_3(X509Certificate2Collection_t484929870 * value)
	{
		___store2_3 = value;
		Il2CppCodeGenWriteBarrier((&___store2_3), value);
	}

	inline static int32_t get_offset_of_rflag_4() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___rflag_4)); }
	inline int32_t get_rflag_4() const { return ___rflag_4; }
	inline int32_t* get_address_of_rflag_4() { return &___rflag_4; }
	inline void set_rflag_4(int32_t value)
	{
		___rflag_4 = value;
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_timeout_6() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___timeout_6)); }
	inline TimeSpan_t483180088  get_timeout_6() const { return ___timeout_6; }
	inline TimeSpan_t483180088 * get_address_of_timeout_6() { return &___timeout_6; }
	inline void set_timeout_6(TimeSpan_t483180088  value)
	{
		___timeout_6 = value;
	}

	inline static int32_t get_offset_of_vflags_7() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___vflags_7)); }
	inline int32_t get_vflags_7() const { return ___vflags_7; }
	inline int32_t* get_address_of_vflags_7() { return &___vflags_7; }
	inline void set_vflags_7(int32_t value)
	{
		___vflags_7 = value;
	}

	inline static int32_t get_offset_of_vtime_8() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2805648242, ___vtime_8)); }
	inline DateTime_t3095499941  get_vtime_8() const { return ___vtime_8; }
	inline DateTime_t3095499941 * get_address_of_vtime_8() { return &___vtime_8; }
	inline void set_vtime_8(DateTime_t3095499941  value)
	{
		___vtime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINPOLICY_T2805648242_H
#ifndef X509CHAINSTATUS_T3211021897_H
#define X509CHAINSTATUS_T3211021897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t3211021897 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t3211021897, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t3211021897, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t3211021897_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t3211021897_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T3211021897_H
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
#ifndef X509ENHANCEDKEYUSAGEEXTENSION_T1333850275_H
#define X509ENHANCEDKEYUSAGEEXTENSION_T1333850275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t1333850275  : public X509Extension_t824407186
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t1423606164 * ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of__enhKeyUsage_3() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t1333850275, ____enhKeyUsage_3)); }
	inline OidCollection_t1423606164 * get__enhKeyUsage_3() const { return ____enhKeyUsage_3; }
	inline OidCollection_t1423606164 ** get_address_of__enhKeyUsage_3() { return &____enhKeyUsage_3; }
	inline void set__enhKeyUsage_3(OidCollection_t1423606164 * value)
	{
		____enhKeyUsage_3 = value;
		Il2CppCodeGenWriteBarrier((&____enhKeyUsage_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t1333850275, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509ENHANCEDKEYUSAGEEXTENSION_T1333850275_H
#ifndef X509KEYUSAGEEXTENSION_T2274848412_H
#define X509KEYUSAGEEXTENSION_T2274848412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t2274848412  : public X509Extension_t824407186
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__keyUsages_6() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t2274848412, ____keyUsages_6)); }
	inline int32_t get__keyUsages_6() const { return ____keyUsages_6; }
	inline int32_t* get_address_of__keyUsages_6() { return &____keyUsages_6; }
	inline void set__keyUsages_6(int32_t value)
	{
		____keyUsages_6 = value;
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t2274848412, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T2274848412_H
#ifndef X509STORE_T106568074_H
#define X509STORE_T106568074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t106568074  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t484929870 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t30956381 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t106568074, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t106568074, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t106568074, ___list_2)); }
	inline X509Certificate2Collection_t484929870 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t484929870 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t484929870 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t106568074, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t106568074, ___store_4)); }
	inline X509Store_t30956381 * get_store_4() const { return ___store_4; }
	inline X509Store_t30956381 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t30956381 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T106568074_H
#ifndef REGEX_T2430533737_H
#define REGEX_T2430533737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t2430533737  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t3141866412 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t483180088  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t1087196262 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t1087196262 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t2160812740* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t279463186 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t4228368067 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t2451336522 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___factory_1)); }
	inline RegexRunnerFactory_t3141866412 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t3141866412 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t3141866412 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((&___factory_1), value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___internalMatchTimeout_5)); }
	inline TimeSpan_t483180088  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t483180088 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t483180088  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___caps_8)); }
	inline Hashtable_t1087196262 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t1087196262 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t1087196262 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((&___caps_8), value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___capnames_9)); }
	inline Hashtable_t1087196262 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t1087196262 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t1087196262 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_9), value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___capslist_10)); }
	inline StringU5BU5D_t2160812740* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t2160812740** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t2160812740* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_10), value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___runnerref_12)); }
	inline ExclusiveReference_t279463186 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t279463186 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t279463186 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((&___runnerref_12), value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___replref_13)); }
	inline SharedReference_t4228368067 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t4228368067 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t4228368067 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((&___replref_13), value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___code_14)); }
	inline RegexCode_t2451336522 * get_code_14() const { return ___code_14; }
	inline RegexCode_t2451336522 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t2451336522 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((&___code_14), value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t2430533737, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t2430533737_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t483180088  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t483180088  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t483180088  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t483180088  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t2267405713 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t483180088  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t483180088 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t483180088  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t483180088  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t483180088 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t483180088  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t483180088  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t483180088 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t483180088  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t483180088  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t483180088 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t483180088  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t2267405713 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t2267405713 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t2267405713 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((&___livecode_16), value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t2430533737_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T2430533737_H
#ifndef URIPARSER_T1390293818_H
#define URIPARSER_T1390293818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t1390293818  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_2;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_4;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_5;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_6;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(UriParser_t1390293818, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_3() { return static_cast<int32_t>(offsetof(UriParser_t1390293818, ___m_UpdatableFlags_3)); }
	inline int32_t get_m_UpdatableFlags_3() const { return ___m_UpdatableFlags_3; }
	inline int32_t* get_address_of_m_UpdatableFlags_3() { return &___m_UpdatableFlags_3; }
	inline void set_m_UpdatableFlags_3(int32_t value)
	{
		___m_UpdatableFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_4() { return static_cast<int32_t>(offsetof(UriParser_t1390293818, ___m_UpdatableFlagsUsed_4)); }
	inline bool get_m_UpdatableFlagsUsed_4() const { return ___m_UpdatableFlagsUsed_4; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_4() { return &___m_UpdatableFlagsUsed_4; }
	inline void set_m_UpdatableFlagsUsed_4(bool value)
	{
		___m_UpdatableFlagsUsed_4 = value;
	}

	inline static int32_t get_offset_of_m_Port_5() { return static_cast<int32_t>(offsetof(UriParser_t1390293818, ___m_Port_5)); }
	inline int32_t get_m_Port_5() const { return ___m_Port_5; }
	inline int32_t* get_address_of_m_Port_5() { return &___m_Port_5; }
	inline void set_m_Port_5(int32_t value)
	{
		___m_Port_5 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_6() { return static_cast<int32_t>(offsetof(UriParser_t1390293818, ___m_Scheme_6)); }
	inline String_t* get_m_Scheme_6() const { return ___m_Scheme_6; }
	inline String_t** get_address_of_m_Scheme_6() { return &___m_Scheme_6; }
	inline void set_m_Scheme_6(String_t* value)
	{
		___m_Scheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scheme_6), value);
	}
};

struct UriParser_t1390293818_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t2026580447 * ___m_Table_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t2026580447 * ___m_TempTable_1;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t1390293818 * ___HttpUri_7;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t1390293818 * ___HttpsUri_8;
	// System.UriParser System.UriParser::WsUri
	UriParser_t1390293818 * ___WsUri_9;
	// System.UriParser System.UriParser::WssUri
	UriParser_t1390293818 * ___WssUri_10;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t1390293818 * ___FtpUri_11;
	// System.UriParser System.UriParser::FileUri
	UriParser_t1390293818 * ___FileUri_12;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t1390293818 * ___GopherUri_13;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t1390293818 * ___NntpUri_14;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t1390293818 * ___NewsUri_15;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t1390293818 * ___MailToUri_16;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t1390293818 * ___UuidUri_17;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t1390293818 * ___TelnetUri_18;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t1390293818 * ___LdapUri_19;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t1390293818 * ___NetTcpUri_20;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t1390293818 * ___NetPipeUri_21;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t1390293818 * ___VsMacrosUri_22;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_23;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_24;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_25;

public:
	inline static int32_t get_offset_of_m_Table_0() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___m_Table_0)); }
	inline Dictionary_2_t2026580447 * get_m_Table_0() const { return ___m_Table_0; }
	inline Dictionary_2_t2026580447 ** get_address_of_m_Table_0() { return &___m_Table_0; }
	inline void set_m_Table_0(Dictionary_2_t2026580447 * value)
	{
		___m_Table_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Table_0), value);
	}

	inline static int32_t get_offset_of_m_TempTable_1() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___m_TempTable_1)); }
	inline Dictionary_2_t2026580447 * get_m_TempTable_1() const { return ___m_TempTable_1; }
	inline Dictionary_2_t2026580447 ** get_address_of_m_TempTable_1() { return &___m_TempTable_1; }
	inline void set_m_TempTable_1(Dictionary_2_t2026580447 * value)
	{
		___m_TempTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempTable_1), value);
	}

	inline static int32_t get_offset_of_HttpUri_7() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___HttpUri_7)); }
	inline UriParser_t1390293818 * get_HttpUri_7() const { return ___HttpUri_7; }
	inline UriParser_t1390293818 ** get_address_of_HttpUri_7() { return &___HttpUri_7; }
	inline void set_HttpUri_7(UriParser_t1390293818 * value)
	{
		___HttpUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___HttpUri_7), value);
	}

	inline static int32_t get_offset_of_HttpsUri_8() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___HttpsUri_8)); }
	inline UriParser_t1390293818 * get_HttpsUri_8() const { return ___HttpsUri_8; }
	inline UriParser_t1390293818 ** get_address_of_HttpsUri_8() { return &___HttpsUri_8; }
	inline void set_HttpsUri_8(UriParser_t1390293818 * value)
	{
		___HttpsUri_8 = value;
		Il2CppCodeGenWriteBarrier((&___HttpsUri_8), value);
	}

	inline static int32_t get_offset_of_WsUri_9() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___WsUri_9)); }
	inline UriParser_t1390293818 * get_WsUri_9() const { return ___WsUri_9; }
	inline UriParser_t1390293818 ** get_address_of_WsUri_9() { return &___WsUri_9; }
	inline void set_WsUri_9(UriParser_t1390293818 * value)
	{
		___WsUri_9 = value;
		Il2CppCodeGenWriteBarrier((&___WsUri_9), value);
	}

	inline static int32_t get_offset_of_WssUri_10() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___WssUri_10)); }
	inline UriParser_t1390293818 * get_WssUri_10() const { return ___WssUri_10; }
	inline UriParser_t1390293818 ** get_address_of_WssUri_10() { return &___WssUri_10; }
	inline void set_WssUri_10(UriParser_t1390293818 * value)
	{
		___WssUri_10 = value;
		Il2CppCodeGenWriteBarrier((&___WssUri_10), value);
	}

	inline static int32_t get_offset_of_FtpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___FtpUri_11)); }
	inline UriParser_t1390293818 * get_FtpUri_11() const { return ___FtpUri_11; }
	inline UriParser_t1390293818 ** get_address_of_FtpUri_11() { return &___FtpUri_11; }
	inline void set_FtpUri_11(UriParser_t1390293818 * value)
	{
		___FtpUri_11 = value;
		Il2CppCodeGenWriteBarrier((&___FtpUri_11), value);
	}

	inline static int32_t get_offset_of_FileUri_12() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___FileUri_12)); }
	inline UriParser_t1390293818 * get_FileUri_12() const { return ___FileUri_12; }
	inline UriParser_t1390293818 ** get_address_of_FileUri_12() { return &___FileUri_12; }
	inline void set_FileUri_12(UriParser_t1390293818 * value)
	{
		___FileUri_12 = value;
		Il2CppCodeGenWriteBarrier((&___FileUri_12), value);
	}

	inline static int32_t get_offset_of_GopherUri_13() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___GopherUri_13)); }
	inline UriParser_t1390293818 * get_GopherUri_13() const { return ___GopherUri_13; }
	inline UriParser_t1390293818 ** get_address_of_GopherUri_13() { return &___GopherUri_13; }
	inline void set_GopherUri_13(UriParser_t1390293818 * value)
	{
		___GopherUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___GopherUri_13), value);
	}

	inline static int32_t get_offset_of_NntpUri_14() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___NntpUri_14)); }
	inline UriParser_t1390293818 * get_NntpUri_14() const { return ___NntpUri_14; }
	inline UriParser_t1390293818 ** get_address_of_NntpUri_14() { return &___NntpUri_14; }
	inline void set_NntpUri_14(UriParser_t1390293818 * value)
	{
		___NntpUri_14 = value;
		Il2CppCodeGenWriteBarrier((&___NntpUri_14), value);
	}

	inline static int32_t get_offset_of_NewsUri_15() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___NewsUri_15)); }
	inline UriParser_t1390293818 * get_NewsUri_15() const { return ___NewsUri_15; }
	inline UriParser_t1390293818 ** get_address_of_NewsUri_15() { return &___NewsUri_15; }
	inline void set_NewsUri_15(UriParser_t1390293818 * value)
	{
		___NewsUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___NewsUri_15), value);
	}

	inline static int32_t get_offset_of_MailToUri_16() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___MailToUri_16)); }
	inline UriParser_t1390293818 * get_MailToUri_16() const { return ___MailToUri_16; }
	inline UriParser_t1390293818 ** get_address_of_MailToUri_16() { return &___MailToUri_16; }
	inline void set_MailToUri_16(UriParser_t1390293818 * value)
	{
		___MailToUri_16 = value;
		Il2CppCodeGenWriteBarrier((&___MailToUri_16), value);
	}

	inline static int32_t get_offset_of_UuidUri_17() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___UuidUri_17)); }
	inline UriParser_t1390293818 * get_UuidUri_17() const { return ___UuidUri_17; }
	inline UriParser_t1390293818 ** get_address_of_UuidUri_17() { return &___UuidUri_17; }
	inline void set_UuidUri_17(UriParser_t1390293818 * value)
	{
		___UuidUri_17 = value;
		Il2CppCodeGenWriteBarrier((&___UuidUri_17), value);
	}

	inline static int32_t get_offset_of_TelnetUri_18() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___TelnetUri_18)); }
	inline UriParser_t1390293818 * get_TelnetUri_18() const { return ___TelnetUri_18; }
	inline UriParser_t1390293818 ** get_address_of_TelnetUri_18() { return &___TelnetUri_18; }
	inline void set_TelnetUri_18(UriParser_t1390293818 * value)
	{
		___TelnetUri_18 = value;
		Il2CppCodeGenWriteBarrier((&___TelnetUri_18), value);
	}

	inline static int32_t get_offset_of_LdapUri_19() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___LdapUri_19)); }
	inline UriParser_t1390293818 * get_LdapUri_19() const { return ___LdapUri_19; }
	inline UriParser_t1390293818 ** get_address_of_LdapUri_19() { return &___LdapUri_19; }
	inline void set_LdapUri_19(UriParser_t1390293818 * value)
	{
		___LdapUri_19 = value;
		Il2CppCodeGenWriteBarrier((&___LdapUri_19), value);
	}

	inline static int32_t get_offset_of_NetTcpUri_20() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___NetTcpUri_20)); }
	inline UriParser_t1390293818 * get_NetTcpUri_20() const { return ___NetTcpUri_20; }
	inline UriParser_t1390293818 ** get_address_of_NetTcpUri_20() { return &___NetTcpUri_20; }
	inline void set_NetTcpUri_20(UriParser_t1390293818 * value)
	{
		___NetTcpUri_20 = value;
		Il2CppCodeGenWriteBarrier((&___NetTcpUri_20), value);
	}

	inline static int32_t get_offset_of_NetPipeUri_21() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___NetPipeUri_21)); }
	inline UriParser_t1390293818 * get_NetPipeUri_21() const { return ___NetPipeUri_21; }
	inline UriParser_t1390293818 ** get_address_of_NetPipeUri_21() { return &___NetPipeUri_21; }
	inline void set_NetPipeUri_21(UriParser_t1390293818 * value)
	{
		___NetPipeUri_21 = value;
		Il2CppCodeGenWriteBarrier((&___NetPipeUri_21), value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_22() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___VsMacrosUri_22)); }
	inline UriParser_t1390293818 * get_VsMacrosUri_22() const { return ___VsMacrosUri_22; }
	inline UriParser_t1390293818 ** get_address_of_VsMacrosUri_22() { return &___VsMacrosUri_22; }
	inline void set_VsMacrosUri_22(UriParser_t1390293818 * value)
	{
		___VsMacrosUri_22 = value;
		Il2CppCodeGenWriteBarrier((&___VsMacrosUri_22), value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_23() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___s_QuirksVersion_23)); }
	inline int32_t get_s_QuirksVersion_23() const { return ___s_QuirksVersion_23; }
	inline int32_t* get_address_of_s_QuirksVersion_23() { return &___s_QuirksVersion_23; }
	inline void set_s_QuirksVersion_23(int32_t value)
	{
		___s_QuirksVersion_23 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_24() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___HttpSyntaxFlags_24)); }
	inline int32_t get_HttpSyntaxFlags_24() const { return ___HttpSyntaxFlags_24; }
	inline int32_t* get_address_of_HttpSyntaxFlags_24() { return &___HttpSyntaxFlags_24; }
	inline void set_HttpSyntaxFlags_24(int32_t value)
	{
		___HttpSyntaxFlags_24 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_25() { return static_cast<int32_t>(offsetof(UriParser_t1390293818_StaticFields, ___FileSyntaxFlags_25)); }
	inline int32_t get_FileSyntaxFlags_25() const { return ___FileSyntaxFlags_25; }
	inline int32_t* get_address_of_FileSyntaxFlags_25() { return &___FileSyntaxFlags_25; }
	inline void set_FileSyntaxFlags_25(int32_t value)
	{
		___FileSyntaxFlags_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T1390293818_H
#ifndef IOSELECTORJOB_T484570155_H
#define IOSELECTORJOB_T484570155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOSelectorJob
struct  IOSelectorJob_t484570155  : public RuntimeObject
{
public:
	// System.IOOperation System.IOSelectorJob::operation
	int32_t ___operation_0;
	// System.IOAsyncCallback System.IOSelectorJob::callback
	IOAsyncCallback_t1633662347 * ___callback_1;
	// System.IOAsyncResult System.IOSelectorJob::state
	IOAsyncResult_t849843027 * ___state_2;

public:
	inline static int32_t get_offset_of_operation_0() { return static_cast<int32_t>(offsetof(IOSelectorJob_t484570155, ___operation_0)); }
	inline int32_t get_operation_0() const { return ___operation_0; }
	inline int32_t* get_address_of_operation_0() { return &___operation_0; }
	inline void set_operation_0(int32_t value)
	{
		___operation_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(IOSelectorJob_t484570155, ___callback_1)); }
	inline IOAsyncCallback_t1633662347 * get_callback_1() const { return ___callback_1; }
	inline IOAsyncCallback_t1633662347 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(IOAsyncCallback_t1633662347 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(IOSelectorJob_t484570155, ___state_2)); }
	inline IOAsyncResult_t849843027 * get_state_2() const { return ___state_2; }
	inline IOAsyncResult_t849843027 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(IOAsyncResult_t849843027 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IOSelectorJob
struct IOSelectorJob_t484570155_marshaled_pinvoke
{
	int32_t ___operation_0;
	Il2CppMethodPointer ___callback_1;
	IOAsyncResult_t849843027_marshaled_pinvoke* ___state_2;
};
// Native definition for COM marshalling of System.IOSelectorJob
struct IOSelectorJob_t484570155_marshaled_com
{
	int32_t ___operation_0;
	Il2CppMethodPointer ___callback_1;
	IOAsyncResult_t849843027_marshaled_com* ___state_2;
};
#endif // IOSELECTORJOB_T484570155_H
#ifndef IOASYNCCALLBACK_T1633662347_H
#define IOASYNCCALLBACK_T1633662347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOAsyncCallback
struct  IOAsyncCallback_t1633662347  : public MulticastDelegate_t2010921510
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOASYNCCALLBACK_T1633662347_H
#ifndef BUILTINURIPARSER_T2600070387_H
#define BUILTINURIPARSER_T2600070387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser/BuiltInUriParser
struct  BuiltInUriParser_t2600070387  : public UriParser_t1390293818
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILTINURIPARSER_T2600070387_H
#ifndef SAFEPROCESSHANDLE_T3158040337_H
#define SAFEPROCESSHANDLE_T3158040337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct  SafeProcessHandle_t3158040337  : public SafeHandleZeroOrMinusOneIsInvalid_t1723575600
{
public:

public:
};

struct SafeProcessHandle_t3158040337_StaticFields
{
public:
	// Microsoft.Win32.SafeHandles.SafeProcessHandle Microsoft.Win32.SafeHandles.SafeProcessHandle::InvalidHandle
	SafeProcessHandle_t3158040337 * ___InvalidHandle_4;

public:
	inline static int32_t get_offset_of_InvalidHandle_4() { return static_cast<int32_t>(offsetof(SafeProcessHandle_t3158040337_StaticFields, ___InvalidHandle_4)); }
	inline SafeProcessHandle_t3158040337 * get_InvalidHandle_4() const { return ___InvalidHandle_4; }
	inline SafeProcessHandle_t3158040337 ** get_address_of_InvalidHandle_4() { return &___InvalidHandle_4; }
	inline void set_InvalidHandle_4(SafeProcessHandle_t3158040337 * value)
	{
		___InvalidHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___InvalidHandle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEPROCESSHANDLE_T3158040337_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (SafeProcessHandle_t3158040337), sizeof(void*), sizeof(SafeProcessHandle_t3158040337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1800[1] = 
{
	SafeProcessHandle_t3158040337_StaticFields::get_offset_of_InvalidHandle_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (ThrowHelper_t813351457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (ExceptionArgument_t3854348522)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1802[18] = 
{
	ExceptionArgument_t3854348522::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (ExceptionResource_t959232876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1803[27] = 
{
	ExceptionResource_t959232876::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (SecurityUtils_t379875886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (InvariantComparer_t1815957963), -1, sizeof(InvariantComparer_t1815957963_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1805[2] = 
{
	InvariantComparer_t1815957963::get_offset_of_m_compareInfo_0(),
	InvariantComparer_t1815957963_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (IriHelper_t486191106), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (Uri_t4031968151), -1, sizeof(Uri_t4031968151_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1807[29] = 
{
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeFile_0(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeFtp_1(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeGopher_2(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeHttp_3(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeHttps_4(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeWs_5(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeWss_6(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeMailto_7(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeNews_8(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeNntp_9(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeNetTcp_10(),
	Uri_t4031968151_StaticFields::get_offset_of_UriSchemeNetPipe_11(),
	Uri_t4031968151_StaticFields::get_offset_of_SchemeDelimiter_12(),
	Uri_t4031968151::get_offset_of_m_String_13(),
	Uri_t4031968151::get_offset_of_m_originalUnicodeString_14(),
	Uri_t4031968151::get_offset_of_m_Syntax_15(),
	Uri_t4031968151::get_offset_of_m_DnsSafeHost_16(),
	Uri_t4031968151::get_offset_of_m_Flags_17(),
	Uri_t4031968151::get_offset_of_m_Info_18(),
	Uri_t4031968151::get_offset_of_m_iriParsing_19(),
	Uri_t4031968151_StaticFields::get_offset_of_s_ConfigInitialized_20(),
	Uri_t4031968151_StaticFields::get_offset_of_s_ConfigInitializing_21(),
	Uri_t4031968151_StaticFields::get_offset_of_s_IdnScope_22(),
	Uri_t4031968151_StaticFields::get_offset_of_s_IriParsing_23(),
	Uri_t4031968151_StaticFields::get_offset_of_useDotNetRelativeOrAbsolute_24(),
	Uri_t4031968151_StaticFields::get_offset_of_IsWindowsFileSystem_25(),
	Uri_t4031968151_StaticFields::get_offset_of_s_initLock_26(),
	Uri_t4031968151_StaticFields::get_offset_of_HexLowerChars_27(),
	Uri_t4031968151_StaticFields::get_offset_of__WSchars_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (Flags_t1321844385)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1808[56] = 
{
	Flags_t1321844385::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (UriInfo_t139325890), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[6] = 
{
	UriInfo_t139325890::get_offset_of_Host_0(),
	UriInfo_t139325890::get_offset_of_ScopeId_1(),
	UriInfo_t139325890::get_offset_of_String_2(),
	UriInfo_t139325890::get_offset_of_Offset_3(),
	UriInfo_t139325890::get_offset_of_DnsSafeHost_4(),
	UriInfo_t139325890::get_offset_of_MoreInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (Offset_t324696283)+ sizeof (RuntimeObject), sizeof(Offset_t324696283 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[8] = 
{
	Offset_t324696283::get_offset_of_Scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_User_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_Host_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_PortValue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_Path_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_Query_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_Fragment_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Offset_t324696283::get_offset_of_End_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (MoreInfo_t4215804961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[6] = 
{
	MoreInfo_t4215804961::get_offset_of_Path_0(),
	MoreInfo_t4215804961::get_offset_of_Query_1(),
	MoreInfo_t4215804961::get_offset_of_Fragment_2(),
	MoreInfo_t4215804961::get_offset_of_AbsoluteUri_3(),
	MoreInfo_t4215804961::get_offset_of_Hash_4(),
	MoreInfo_t4215804961::get_offset_of_RemoteUrl_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (Check_t1071491042)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1812[10] = 
{
	Check_t1071491042::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (UriFormatException_t3388690637), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (UriKind_t243774412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1814[4] = 
{
	UriKind_t243774412::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (UriComponents_t2814418560)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1815[18] = 
{
	UriComponents_t2814418560::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (UriFormat_t2503608817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1816[4] = 
{
	UriFormat_t2503608817::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (UriIdnScope_t1852860527)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1817[4] = 
{
	UriIdnScope_t1852860527::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (ParsingError_t3752634486)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1818[15] = 
{
	ParsingError_t3752634486::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (UnescapeMode_t3966471977)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1819[8] = 
{
	UnescapeMode_t3966471977::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (UriHelper_t3247493780), -1, sizeof(UriHelper_t3247493780_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1820[1] = 
{
	UriHelper_t3247493780_StaticFields::get_offset_of_HexUpperChars_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (UriHostNameType_t3432965085)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1821[6] = 
{
	UriHostNameType_t3432965085::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (UriParser_t1390293818), -1, sizeof(UriParser_t1390293818_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1822[26] = 
{
	UriParser_t1390293818_StaticFields::get_offset_of_m_Table_0(),
	UriParser_t1390293818_StaticFields::get_offset_of_m_TempTable_1(),
	UriParser_t1390293818::get_offset_of_m_Flags_2(),
	UriParser_t1390293818::get_offset_of_m_UpdatableFlags_3(),
	UriParser_t1390293818::get_offset_of_m_UpdatableFlagsUsed_4(),
	UriParser_t1390293818::get_offset_of_m_Port_5(),
	UriParser_t1390293818::get_offset_of_m_Scheme_6(),
	UriParser_t1390293818_StaticFields::get_offset_of_HttpUri_7(),
	UriParser_t1390293818_StaticFields::get_offset_of_HttpsUri_8(),
	UriParser_t1390293818_StaticFields::get_offset_of_WsUri_9(),
	UriParser_t1390293818_StaticFields::get_offset_of_WssUri_10(),
	UriParser_t1390293818_StaticFields::get_offset_of_FtpUri_11(),
	UriParser_t1390293818_StaticFields::get_offset_of_FileUri_12(),
	UriParser_t1390293818_StaticFields::get_offset_of_GopherUri_13(),
	UriParser_t1390293818_StaticFields::get_offset_of_NntpUri_14(),
	UriParser_t1390293818_StaticFields::get_offset_of_NewsUri_15(),
	UriParser_t1390293818_StaticFields::get_offset_of_MailToUri_16(),
	UriParser_t1390293818_StaticFields::get_offset_of_UuidUri_17(),
	UriParser_t1390293818_StaticFields::get_offset_of_TelnetUri_18(),
	UriParser_t1390293818_StaticFields::get_offset_of_LdapUri_19(),
	UriParser_t1390293818_StaticFields::get_offset_of_NetTcpUri_20(),
	UriParser_t1390293818_StaticFields::get_offset_of_NetPipeUri_21(),
	UriParser_t1390293818_StaticFields::get_offset_of_VsMacrosUri_22(),
	UriParser_t1390293818_StaticFields::get_offset_of_s_QuirksVersion_23(),
	UriParser_t1390293818_StaticFields::get_offset_of_HttpSyntaxFlags_24(),
	UriParser_t1390293818_StaticFields::get_offset_of_FileSyntaxFlags_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (UriQuirksVersion_t1273212301)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1823[3] = 
{
	UriQuirksVersion_t1273212301::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (BuiltInUriParser_t2600070387), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (DomainNameHelper_t3814147263), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (IPv4AddressHelper_t646584906), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (IPv6AddressHelper_t3263780161), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (UncNameHelper_t1211504394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (UriSyntaxFlags_t4162268635)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1829[30] = 
{
	UriSyntaxFlags_t4162268635::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (UriBuilder_t3153533162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[11] = 
{
	UriBuilder_t3153533162::get_offset_of_m_changed_0(),
	UriBuilder_t3153533162::get_offset_of_m_fragment_1(),
	UriBuilder_t3153533162::get_offset_of_m_host_2(),
	UriBuilder_t3153533162::get_offset_of_m_password_3(),
	UriBuilder_t3153533162::get_offset_of_m_path_4(),
	UriBuilder_t3153533162::get_offset_of_m_port_5(),
	UriBuilder_t3153533162::get_offset_of_m_query_6(),
	UriBuilder_t3153533162::get_offset_of_m_scheme_7(),
	UriBuilder_t3153533162::get_offset_of_m_schemeDelimiter_8(),
	UriBuilder_t3153533162::get_offset_of_m_uri_9(),
	UriBuilder_t3153533162::get_offset_of_m_username_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (LocalAppContextSwitches_t1555128697), -1, sizeof(LocalAppContextSwitches_t1555128697_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1831[1] = 
{
	LocalAppContextSwitches_t1555128697_StaticFields::get_offset_of_MemberDescriptorEqualsReturnsFalseIfEquivalent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (IOOperation_t3773120530)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1832[3] = 
{
	IOOperation_t3773120530::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (IOAsyncCallback_t1633662347), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (IOAsyncResult_t849843027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[5] = 
{
	IOAsyncResult_t849843027::get_offset_of_async_callback_0(),
	IOAsyncResult_t849843027::get_offset_of_async_state_1(),
	IOAsyncResult_t849843027::get_offset_of_wait_handle_2(),
	IOAsyncResult_t849843027::get_offset_of_completed_synchronously_3(),
	IOAsyncResult_t849843027::get_offset_of_completed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (IOSelectorJob_t484570155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1835[3] = 
{
	IOSelectorJob_t484570155::get_offset_of_operation_0(),
	IOSelectorJob_t484570155::get_offset_of_callback_1(),
	IOSelectorJob_t484570155::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (IOSelector_t1081476739), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (MonoToolsLocator_t2174547676), -1, sizeof(MonoToolsLocator_t2174547676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1837[4] = 
{
	MonoToolsLocator_t2174547676_StaticFields::get_offset_of_Mono_0(),
	MonoToolsLocator_t2174547676_StaticFields::get_offset_of_McsCSharpCompiler_1(),
	MonoToolsLocator_t2174547676_StaticFields::get_offset_of_VBCompiler_2(),
	MonoToolsLocator_t2174547676_StaticFields::get_offset_of_AssemblyLinker_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (Platform_t261713963), -1, sizeof(Platform_t261713963_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1838[3] = 
{
	Platform_t261713963_StaticFields::get_offset_of_checkedOS_0(),
	Platform_t261713963_StaticFields::get_offset_of_isMacOS_1(),
	Platform_t261713963_StaticFields::get_offset_of_isFreeBSD_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (SRDescriptionAttribute_t309801737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1839[1] = 
{
	SRDescriptionAttribute_t309801737::get_offset_of_isReplaced_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (UriTypeConverter_t4081306227), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (PermissionHelper_t4239581931), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (ResourcePermissionBase_t3287668836), -1, sizeof(ResourcePermissionBase_t3287668836_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1842[5] = 
{
	ResourcePermissionBase_t3287668836::get_offset_of__list_0(),
	ResourcePermissionBase_t3287668836::get_offset_of__unrestricted_1(),
	ResourcePermissionBase_t3287668836::get_offset_of__type_2(),
	ResourcePermissionBase_t3287668836::get_offset_of__tags_3(),
	ResourcePermissionBase_t3287668836_StaticFields::get_offset_of_invalidChars_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (ResourcePermissionBaseEntry_t1629888654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1843[2] = 
{
	ResourcePermissionBaseEntry_t1629888654::get_offset_of_permissionAccess_0(),
	ResourcePermissionBaseEntry_t1629888654::get_offset_of_permissionAccessPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (OidGroup_t1429785059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1844[12] = 
{
	OidGroup_t1429785059::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (Oid_t3844911692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1845[3] = 
{
	Oid_t3844911692::get_offset_of_m_value_0(),
	Oid_t3844911692::get_offset_of_m_friendlyName_1(),
	Oid_t3844911692::get_offset_of_m_group_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (OidCollection_t1423606164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[1] = 
{
	OidCollection_t1423606164::get_offset_of_m_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (OidEnumerator_t3705266072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1847[2] = 
{
	OidEnumerator_t3705266072::get_offset_of_m_oids_0(),
	OidEnumerator_t3705266072::get_offset_of_m_current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (CAPI_t531155712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (AsnDecodeStatus_t3281528679)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1849[7] = 
{
	AsnDecodeStatus_t3281528679::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (AsnEncodedData_t2248440371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[2] = 
{
	AsnEncodedData_t2248440371::get_offset_of__oid_0(),
	AsnEncodedData_t2248440371::get_offset_of__raw_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (X509Utils_t4139393671), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (OSX509Certificates_t4117604033), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (SecTrustResult_t2398507263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1853[9] = 
{
	SecTrustResult_t2398507263::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (OpenFlags_t667343715)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1854[6] = 
{
	OpenFlags_t667343715::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (PublicKey_t881790376), -1, sizeof(PublicKey_t881790376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1855[5] = 
{
	PublicKey_t881790376::get_offset_of__key_0(),
	PublicKey_t881790376::get_offset_of__keyValue_1(),
	PublicKey_t881790376::get_offset_of__params_2(),
	PublicKey_t881790376::get_offset_of__oid_3(),
	PublicKey_t881790376_StaticFields::get_offset_of_Empty_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (StoreLocation_t4134512510)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1856[3] = 
{
	StoreLocation_t4134512510::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (StoreName_t440312763)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1857[9] = 
{
	StoreName_t440312763::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (X500DistinguishedName_t2569204332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[2] = 
{
	X500DistinguishedName_t2569204332::get_offset_of_name_2(),
	X500DistinguishedName_t2569204332::get_offset_of_canonEncoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (X500DistinguishedNameFlags_t875956878)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1859[11] = 
{
	X500DistinguishedNameFlags_t875956878::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (X509BasicConstraintsExtension_t1285098626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[6] = 
{
	0,
	0,
	X509BasicConstraintsExtension_t1285098626::get_offset_of__certificateAuthority_5(),
	X509BasicConstraintsExtension_t1285098626::get_offset_of__hasPathLengthConstraint_6(),
	X509BasicConstraintsExtension_t1285098626::get_offset_of__pathLengthConstraint_7(),
	X509BasicConstraintsExtension_t1285098626::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (X509Certificate2_t764521581), -1, sizeof(X509Certificate2_t764521581_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1861[2] = 
{
	X509Certificate2_t764521581::get_offset_of_friendlyName_4(),
	X509Certificate2_t764521581_StaticFields::get_offset_of_signedData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (X509Certificate2Collection_t484929870), -1, sizeof(X509Certificate2Collection_t484929870_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1862[1] = 
{
	X509Certificate2Collection_t484929870_StaticFields::get_offset_of_newline_split_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (X509Certificate2Enumerator_t3500287189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[1] = 
{
	X509Certificate2Enumerator_t3500287189::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (X509Certificate2Impl_t3870559011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (X509Certificate2ImplMono_t479427572), -1, sizeof(X509Certificate2ImplMono_t479427572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1865[12] = 
{
	X509Certificate2ImplMono_t479427572::get_offset_of__archived_1(),
	X509Certificate2ImplMono_t479427572::get_offset_of__extensions_2(),
	X509Certificate2ImplMono_t479427572::get_offset_of__publicKey_3(),
	X509Certificate2ImplMono_t479427572::get_offset_of_issuer_name_4(),
	X509Certificate2ImplMono_t479427572::get_offset_of_subject_name_5(),
	X509Certificate2ImplMono_t479427572::get_offset_of_signature_algorithm_6(),
	X509Certificate2ImplMono_t479427572::get_offset_of_intermediateCerts_7(),
	X509Certificate2ImplMono_t479427572::get_offset_of__cert_8(),
	X509Certificate2ImplMono_t479427572_StaticFields::get_offset_of_empty_error_9(),
	X509Certificate2ImplMono_t479427572_StaticFields::get_offset_of_commonName_10(),
	X509Certificate2ImplMono_t479427572_StaticFields::get_offset_of_email_11(),
	X509Certificate2ImplMono_t479427572_StaticFields::get_offset_of_signedData_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (X509CertificateCollection_t3474370605), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (X509CertificateEnumerator_t2938624122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[1] = 
{
	X509CertificateEnumerator_t2938624122::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (X509CertificateImplCollection_t852082282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[1] = 
{
	X509CertificateImplCollection_t852082282::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (X509Chain_t2951808450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[1] = 
{
	X509Chain_t2951808450::get_offset_of_impl_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (X509ChainElement_t1111123030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1870[4] = 
{
	X509ChainElement_t1111123030::get_offset_of_certificate_0(),
	X509ChainElement_t1111123030::get_offset_of_status_1(),
	X509ChainElement_t1111123030::get_offset_of_info_2(),
	X509ChainElement_t1111123030::get_offset_of_compressed_status_flags_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (X509ChainElementCollection_t3944765307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[1] = 
{
	X509ChainElementCollection_t3944765307::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (X509ChainElementEnumerator_t3952785095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[1] = 
{
	X509ChainElementEnumerator_t3952785095::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (X509ChainImpl_t4048452721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (X509ChainImplMono_t3316656982), -1, sizeof(X509ChainImplMono_t3316656982_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1874[16] = 
{
	X509ChainImplMono_t3316656982::get_offset_of_location_0(),
	X509ChainImplMono_t3316656982::get_offset_of_elements_1(),
	X509ChainImplMono_t3316656982::get_offset_of_policy_2(),
	X509ChainImplMono_t3316656982::get_offset_of_status_3(),
	X509ChainImplMono_t3316656982_StaticFields::get_offset_of_Empty_4(),
	X509ChainImplMono_t3316656982::get_offset_of_max_path_length_5(),
	X509ChainImplMono_t3316656982::get_offset_of_working_issuer_name_6(),
	X509ChainImplMono_t3316656982::get_offset_of_working_public_key_7(),
	X509ChainImplMono_t3316656982::get_offset_of_bce_restriction_8(),
	X509ChainImplMono_t3316656982::get_offset_of_roots_9(),
	X509ChainImplMono_t3316656982::get_offset_of_cas_10(),
	X509ChainImplMono_t3316656982::get_offset_of_root_store_11(),
	X509ChainImplMono_t3316656982::get_offset_of_ca_store_12(),
	X509ChainImplMono_t3316656982::get_offset_of_user_root_store_13(),
	X509ChainImplMono_t3316656982::get_offset_of_user_ca_store_14(),
	X509ChainImplMono_t3316656982::get_offset_of_collection_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (X509ChainPolicy_t2805648242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1875[9] = 
{
	X509ChainPolicy_t2805648242::get_offset_of_apps_0(),
	X509ChainPolicy_t2805648242::get_offset_of_cert_1(),
	X509ChainPolicy_t2805648242::get_offset_of_store_2(),
	X509ChainPolicy_t2805648242::get_offset_of_store2_3(),
	X509ChainPolicy_t2805648242::get_offset_of_rflag_4(),
	X509ChainPolicy_t2805648242::get_offset_of_mode_5(),
	X509ChainPolicy_t2805648242::get_offset_of_timeout_6(),
	X509ChainPolicy_t2805648242::get_offset_of_vflags_7(),
	X509ChainPolicy_t2805648242::get_offset_of_vtime_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (X509ChainStatus_t3211021897)+ sizeof (RuntimeObject), sizeof(X509ChainStatus_t3211021897_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1876[2] = 
{
	X509ChainStatus_t3211021897::get_offset_of_status_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	X509ChainStatus_t3211021897::get_offset_of_info_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (X509ChainStatusFlags_t52973152)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1877[27] = 
{
	X509ChainStatusFlags_t52973152::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (X509EnhancedKeyUsageExtension_t1333850275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1878[2] = 
{
	X509EnhancedKeyUsageExtension_t1333850275::get_offset_of__enhKeyUsage_3(),
	X509EnhancedKeyUsageExtension_t1333850275::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (X509Extension_t824407186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1879[1] = 
{
	X509Extension_t824407186::get_offset_of__critical_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (X509ExtensionCollection_t3343878603), -1, sizeof(X509ExtensionCollection_t3343878603_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1880[2] = 
{
	X509ExtensionCollection_t3343878603_StaticFields::get_offset_of_Empty_0(),
	X509ExtensionCollection_t3343878603::get_offset_of__list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (X509ExtensionEnumerator_t3699812235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1881[1] = 
{
	X509ExtensionEnumerator_t3699812235::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (X509FindType_t3628191731)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1882[16] = 
{
	X509FindType_t3628191731::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (X509Helper2_t2348959099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (MyNativeHelper_t3441909596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (X509KeyUsageExtension_t2274848412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t2274848412::get_offset_of__keyUsages_6(),
	X509KeyUsageExtension_t2274848412::get_offset_of__status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (X509KeyUsageFlags_t1278133075)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1886[11] = 
{
	X509KeyUsageFlags_t1278133075::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (X509NameType_t780181607)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1887[7] = 
{
	X509NameType_t780181607::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (X509RevocationFlag_t4117238238)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1888[4] = 
{
	X509RevocationFlag_t4117238238::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (X509RevocationMode_t3748806969)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1889[4] = 
{
	X509RevocationMode_t3748806969::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (X509Store_t106568074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1890[5] = 
{
	X509Store_t106568074::get_offset_of__name_0(),
	X509Store_t106568074::get_offset_of__location_1(),
	X509Store_t106568074::get_offset_of_list_2(),
	X509Store_t106568074::get_offset_of__flags_3(),
	X509Store_t106568074::get_offset_of_store_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (X509SubjectKeyIdentifierExtension_t2433637652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1891[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t2433637652::get_offset_of__subjectKeyIdentifier_5(),
	X509SubjectKeyIdentifierExtension_t2433637652::get_offset_of__ski_6(),
	X509SubjectKeyIdentifierExtension_t2433637652::get_offset_of__status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t2019982143)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1892[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t2019982143::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (X509VerificationFlags_t2049744613)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1893[15] = 
{
	X509VerificationFlags_t2049744613::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (SslProtocols_t2971867245)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1894[8] = 
{
	SslProtocols_t2971867245::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (Regex_t2430533737), -1, sizeof(Regex_t2430533737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1895[18] = 
{
	Regex_t2430533737::get_offset_of_pattern_0(),
	Regex_t2430533737::get_offset_of_factory_1(),
	Regex_t2430533737::get_offset_of_roptions_2(),
	Regex_t2430533737_StaticFields::get_offset_of_MaximumMatchTimeout_3(),
	Regex_t2430533737_StaticFields::get_offset_of_InfiniteMatchTimeout_4(),
	Regex_t2430533737::get_offset_of_internalMatchTimeout_5(),
	Regex_t2430533737_StaticFields::get_offset_of_FallbackDefaultMatchTimeout_6(),
	Regex_t2430533737_StaticFields::get_offset_of_DefaultMatchTimeout_7(),
	Regex_t2430533737::get_offset_of_caps_8(),
	Regex_t2430533737::get_offset_of_capnames_9(),
	Regex_t2430533737::get_offset_of_capslist_10(),
	Regex_t2430533737::get_offset_of_capsize_11(),
	Regex_t2430533737::get_offset_of_runnerref_12(),
	Regex_t2430533737::get_offset_of_replref_13(),
	Regex_t2430533737::get_offset_of_code_14(),
	Regex_t2430533737::get_offset_of_refsInitialized_15(),
	Regex_t2430533737_StaticFields::get_offset_of_livecode_16(),
	Regex_t2430533737_StaticFields::get_offset_of_cacheSize_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (CachedCodeEntry_t1114271147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1896[9] = 
{
	CachedCodeEntry_t1114271147::get_offset_of__key_0(),
	CachedCodeEntry_t1114271147::get_offset_of__code_1(),
	CachedCodeEntry_t1114271147::get_offset_of__caps_2(),
	CachedCodeEntry_t1114271147::get_offset_of__capnames_3(),
	CachedCodeEntry_t1114271147::get_offset_of__capslist_4(),
	CachedCodeEntry_t1114271147::get_offset_of__capsize_5(),
	CachedCodeEntry_t1114271147::get_offset_of__factory_6(),
	CachedCodeEntry_t1114271147::get_offset_of__runnerref_7(),
	CachedCodeEntry_t1114271147::get_offset_of__replref_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (ExclusiveReference_t279463186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1897[3] = 
{
	ExclusiveReference_t279463186::get_offset_of__ref_0(),
	ExclusiveReference_t279463186::get_offset_of__obj_1(),
	ExclusiveReference_t279463186::get_offset_of__locked_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (SharedReference_t4228368067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1898[2] = 
{
	SharedReference_t4228368067::get_offset_of__ref_0(),
	SharedReference_t4228368067::get_offset_of__locked_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (RegexBoyerMoore_t320390695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1899[9] = 
{
	RegexBoyerMoore_t320390695::get_offset_of__positive_0(),
	RegexBoyerMoore_t320390695::get_offset_of__negativeASCII_1(),
	RegexBoyerMoore_t320390695::get_offset_of__negativeUnicode_2(),
	RegexBoyerMoore_t320390695::get_offset_of__pattern_3(),
	RegexBoyerMoore_t320390695::get_offset_of__lowASCII_4(),
	RegexBoyerMoore_t320390695::get_offset_of__highASCII_5(),
	RegexBoyerMoore_t320390695::get_offset_of__rightToLeft_6(),
	RegexBoyerMoore_t320390695::get_offset_of__caseInsensitive_7(),
	RegexBoyerMoore_t320390695::get_offset_of__culture_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
