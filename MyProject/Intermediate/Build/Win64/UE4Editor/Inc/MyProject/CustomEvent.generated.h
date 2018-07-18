// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_CustomEvent_generated_h
#error "CustomEvent.generated.h already included, missing '#pragma once' in CustomEvent.h"
#endif
#define MYPROJECT_CustomEvent_generated_h

#define MyProject_Source_MyProject_CustomEvent_h_13_RPC_WRAPPERS
#define MyProject_Source_MyProject_CustomEvent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_CustomEvent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomEvent(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCustomEvent(); \
public: \
	DECLARE_CLASS(UCustomEvent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCustomEvent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_CustomEvent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCustomEvent(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UCustomEvent(); \
public: \
	DECLARE_CLASS(UCustomEvent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UCustomEvent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_CustomEvent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomEvent(UCustomEvent&&); \
	NO_API UCustomEvent(const UCustomEvent&); \
public:


#define MyProject_Source_MyProject_CustomEvent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomEvent(UCustomEvent&&); \
	NO_API UCustomEvent(const UCustomEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomEvent)


#define MyProject_Source_MyProject_CustomEvent_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_CustomEvent_h_10_PROLOG
#define MyProject_Source_MyProject_CustomEvent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CustomEvent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CustomEvent_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_CustomEvent_h_13_INCLASS \
	MyProject_Source_MyProject_CustomEvent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_CustomEvent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_CustomEvent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_CustomEvent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CustomEvent_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_CustomEvent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_CustomEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
