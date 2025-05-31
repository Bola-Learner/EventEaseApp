#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
198,
199,
200,
201,
202,
203,
204,
205,
206,
209,
210,
319,
320,
321,
344,
345,
346,
363,
364,
365,
461,
462,
463,
466,
498,
499,
501,
503,
505,
507,
512,
520,
521,
522,
523,
524,
525,
526,
527,
528,
606,
607,
651,
660,
661,
730,
736,
739,
741,
746,
747,
749,
750,
754,
755,
757,
758,
761,
762,
763,
766,
768,
771,
773,
775,
784,
848,
850,
852,
862,
863,
864,
866,
872,
873,
874,
875,
876,
884,
885,
886,
890,
891,
893,
897,
898,
899,
1191,
1351,
1352,
8341,
8342,
8344,
8345,
8346,
8347,
8348,
8350,
8351,
8352,
8369,
8371,
8376,
8378,
8380,
8382,
8433,
8434,
8436,
8437,
8438,
8439,
8440,
8442,
8444,
9389,
9393,
9395,
9396,
9397,
9398,
9817,
9818,
9819,
9820,
9838,
9839,
9840,
9884,
9948,
9951,
9959,
9960,
9961,
9962,
9963,
10231,
10235,
10236,
10263,
10297,
10304,
10311,
10322,
10326,
10349,
10427,
10429,
10438,
10440,
10441,
10448,
10463,
10483,
10484,
10492,
10494,
10501,
10502,
10505,
10507,
10512,
10518,
10519,
10526,
10528,
10540,
10543,
10544,
10545,
10556,
10566,
10572,
10573,
10574,
10576,
10577,
10594,
10596,
10611,
10629,
10656,
10686,
10687,
11170,
11254,
11255,
11439,
11440,
11444,
11445,
11446,
11451,
11502,
11892,
11893,
12084,
12089,
12099,
12889,
12910,
12912,
12914,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 198,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 199,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetGenericValue_icall,
// token 209,
ves_icall_System_Array_SetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 319,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 320,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 321,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 344,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 345,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 346,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 363,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 364,
ves_icall_System_Enum_InternalGetCorElementType,
// token 365,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 461,
ves_icall_System_Environment_get_ProcessorCount,
// token 462,
ves_icall_System_Environment_get_TickCount,
// token 463,
ves_icall_System_Environment_get_TickCount64,
// token 466,
ves_icall_System_Environment_FailFast_raw,
// token 498,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 499,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 501,
ves_icall_System_GC_SuppressFinalize_raw,
// token 503,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 505,
ves_icall_System_GC_GetGCMemoryInfo,
// token 507,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 512,
ves_icall_System_Object_MemberwiseClone_raw,
// token 520,
ves_icall_System_Math_Ceiling,
// token 521,
ves_icall_System_Math_Cos,
// token 522,
ves_icall_System_Math_Floor,
// token 523,
ves_icall_System_Math_Pow,
// token 524,
ves_icall_System_Math_Sin,
// token 525,
ves_icall_System_Math_Sqrt,
// token 526,
ves_icall_System_Math_Tan,
// token 527,
ves_icall_System_Math_Log2,
// token 528,
ves_icall_System_Math_ModF,
// token 606,
ves_icall_System_MathF_Log2,
// token 607,
ves_icall_System_MathF_ModF,
// token 651,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 660,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 661,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 730,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 736,
ves_icall_RuntimeType_make_array_type_raw,
// token 739,
ves_icall_RuntimeType_make_byref_type_raw,
// token 741,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 746,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 747,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 749,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 750,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 754,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 755,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 757,
ves_icall_System_RuntimeType_getFullName_raw,
// token 758,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 761,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 762,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 763,
ves_icall_RuntimeType_GetFields_native_raw,
// token 766,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 768,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 771,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 773,
ves_icall_RuntimeType_GetName_raw,
// token 775,
ves_icall_RuntimeType_GetNamespace_raw,
// token 784,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 848,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 850,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 852,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 862,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 863,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 864,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 866,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 872,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 873,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 874,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 875,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 876,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 884,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 885,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 886,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 890,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 891,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 893,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 897,
ves_icall_System_String_FastAllocateString_raw,
// token 898,
ves_icall_System_String_InternalIsInterned_raw,
// token 899,
ves_icall_System_String_InternalIntern_raw,
// token 1191,
ves_icall_System_Type_internal_from_handle_raw,
// token 1351,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1352,
ves_icall_System_ValueType_Equals_raw,
// token 8341,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8342,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8344,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8345,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8346,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8347,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8348,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8350,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8351,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8352,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8369,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8371,
mono_monitor_exit_icall_raw,
// token 8376,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8378,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8380,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8382,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8433,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8434,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8436,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8437,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8438,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8439,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8440,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8442,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8444,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9389,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9393,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9395,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9396,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9397,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9398,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9817,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9818,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9819,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9820,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9838,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9839,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9840,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9884,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9948,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9951,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9959,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9960,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9961,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9962,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9963,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 10231,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10235,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10236,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10263,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10297,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10304,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10311,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10322,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10326,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10349,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 10427,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10429,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10438,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10440,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10441,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10448,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10463,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10483,
ves_icall_reflection_get_token_raw,
// token 10484,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10492,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10494,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10501,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10502,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10505,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10507,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10512,
ves_icall_reflection_get_token_raw,
// token 10518,
ves_icall_get_method_info_raw,
// token 10519,
ves_icall_get_method_attributes,
// token 10526,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10528,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10540,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10543,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10544,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10545,
ves_icall_reflection_get_token_raw,
// token 10556,
ves_icall_InternalInvoke_raw,
// token 10566,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10572,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10573,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10574,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10576,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10577,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10594,
ves_icall_InvokeClassConstructor_raw,
// token 10596,
ves_icall_InternalInvoke_raw,
// token 10611,
ves_icall_reflection_get_token_raw,
// token 10629,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10656,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10686,
ves_icall_reflection_get_token_raw,
// token 10687,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11170,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11254,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11255,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11439,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11440,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11444,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11445,
ves_icall_ModuleBuilder_getToken_raw,
// token 11446,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11451,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11502,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11892,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11893,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12084,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 12089,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 12099,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 12889,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12910,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12912,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12914,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
