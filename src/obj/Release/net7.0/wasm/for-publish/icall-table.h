#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
179,
185,
186,
187,
188,
189,
190,
191,
193,
194,
256,
257,
259,
287,
288,
289,
309,
310,
311,
312,
385,
386,
387,
390,
423,
424,
426,
428,
430,
432,
437,
445,
446,
447,
448,
449,
450,
451,
452,
453,
583,
591,
594,
596,
601,
602,
604,
605,
609,
610,
612,
613,
616,
617,
618,
621,
623,
626,
628,
630,
698,
700,
702,
711,
712,
713,
714,
716,
723,
724,
725,
726,
727,
735,
736,
737,
741,
742,
744,
746,
931,
1105,
1106,
5434,
5435,
5437,
5438,
5439,
5440,
5441,
5443,
5445,
5447,
5453,
5455,
5459,
5460,
5462,
5464,
5466,
5477,
5486,
5487,
5489,
5490,
5491,
5492,
5493,
5495,
5497,
6374,
6378,
6380,
6381,
6382,
6383,
6515,
6516,
6517,
6518,
6538,
6539,
6540,
6542,
6583,
6632,
6634,
6644,
6645,
6646,
6895,
6897,
6898,
6925,
6945,
6951,
6958,
6968,
6971,
7057,
7067,
7069,
7070,
7076,
7089,
7109,
7110,
7118,
7120,
7127,
7128,
7131,
7133,
7138,
7144,
7145,
7152,
7154,
7166,
7169,
7170,
7171,
7182,
7191,
7197,
7198,
7199,
7201,
7202,
7220,
7222,
7236,
7259,
7260,
7278,
7283,
7310,
7311,
7697,
7698,
7836,
8073,
8074,
8080,
8081,
8082,
8087,
8147,
8420,
8421,
9189,
9210,
9217,
9219,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
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
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
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
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
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
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
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
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
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
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 179,
ves_icall_System_Array_InternalCreate,
// token 185,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 186,
ves_icall_System_Array_CanChangePrimitive,
// token 187,
ves_icall_System_Array_FastCopy_raw,
// token 188,
ves_icall_System_Array_GetLength_raw,
// token 189,
ves_icall_System_Array_GetLowerBound_raw,
// token 190,
ves_icall_System_Array_GetGenericValue_icall,
// token 191,
ves_icall_System_Array_GetValueImpl_raw,
// token 193,
ves_icall_System_Array_SetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 256,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 257,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 259,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 287,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 288,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 289,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 309,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 310,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 311,
ves_icall_System_Enum_InternalGetCorElementType,
// token 312,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 385,
ves_icall_System_Environment_get_ProcessorCount,
// token 386,
ves_icall_System_Environment_get_TickCount,
// token 387,
ves_icall_System_Environment_get_TickCount64,
// token 390,
ves_icall_System_Environment_FailFast_raw,
// token 423,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 424,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 426,
ves_icall_System_GC_SuppressFinalize_raw,
// token 428,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 430,
ves_icall_System_GC_GetGCMemoryInfo,
// token 432,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 437,
ves_icall_System_Object_MemberwiseClone_raw,
// token 445,
ves_icall_System_Math_Ceiling,
// token 446,
ves_icall_System_Math_Cos,
// token 447,
ves_icall_System_Math_Floor,
// token 448,
ves_icall_System_Math_Log10,
// token 449,
ves_icall_System_Math_Pow,
// token 450,
ves_icall_System_Math_Sin,
// token 451,
ves_icall_System_Math_Sqrt,
// token 452,
ves_icall_System_Math_Tan,
// token 453,
ves_icall_System_Math_ModF,
// token 583,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 591,
ves_icall_RuntimeType_make_array_type_raw,
// token 594,
ves_icall_RuntimeType_make_byref_type_raw,
// token 596,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 601,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 602,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 604,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 605,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 609,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 610,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 612,
ves_icall_System_RuntimeType_getFullName_raw,
// token 613,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 616,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 617,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 618,
ves_icall_RuntimeType_GetFields_native_raw,
// token 621,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 623,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 626,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 628,
ves_icall_RuntimeType_GetName_raw,
// token 630,
ves_icall_RuntimeType_GetNamespace_raw,
// token 698,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 700,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 702,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 711,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 712,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 713,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 714,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 716,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 723,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 724,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 725,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 727,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 735,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 736,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 737,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 741,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 742,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 744,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 746,
ves_icall_System_String_FastAllocateString_raw,
// token 931,
ves_icall_System_Type_internal_from_handle_raw,
// token 1105,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1106,
ves_icall_System_ValueType_Equals_raw,
// token 5434,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5435,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5437,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5438,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5439,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5440,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5441,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5443,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5445,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5447,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5453,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5455,
mono_monitor_exit_icall_raw,
// token 5459,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5460,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5462,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5464,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5466,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5477,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5486,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5487,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5489,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5490,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5491,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5492,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5493,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5495,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5497,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6374,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6378,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6380,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6381,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6382,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6383,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6515,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6516,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6517,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6518,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6538,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6539,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6540,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6542,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6583,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6632,
mono_object_hash_icall_raw,
// token 6634,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6644,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6645,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6646,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6895,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6897,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6898,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6925,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6945,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6951,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6958,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6968,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6971,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7057,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7067,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7069,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7070,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 7076,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7089,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7109,
ves_icall_reflection_get_token_raw,
// token 7110,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7118,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7120,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7127,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7128,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7131,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7133,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7138,
ves_icall_reflection_get_token_raw,
// token 7144,
ves_icall_get_method_info_raw,
// token 7145,
ves_icall_get_method_attributes,
// token 7152,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7154,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7166,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7169,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7170,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7171,
ves_icall_reflection_get_token_raw,
// token 7182,
ves_icall_InternalInvoke_raw,
// token 7191,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7197,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7198,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7199,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7201,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7202,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7220,
ves_icall_InvokeClassConstructor_raw,
// token 7222,
ves_icall_InternalInvoke_raw,
// token 7236,
ves_icall_reflection_get_token_raw,
// token 7259,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 7260,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7278,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 7283,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7310,
ves_icall_reflection_get_token_raw,
// token 7311,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7697,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7698,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7836,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8073,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8074,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8080,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8081,
ves_icall_ModuleBuilder_getToken_raw,
// token 8082,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8087,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8147,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8420,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8421,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9189,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9210,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9217,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9219,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
