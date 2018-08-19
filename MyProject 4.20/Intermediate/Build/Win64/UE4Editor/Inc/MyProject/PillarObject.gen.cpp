// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/PillarObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePillarObject() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UPillarObject_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UPillarObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UPillarObject::StaticRegisterNativesUPillarObject()
	{
	}
	UClass* Z_Construct_UClass_UPillarObject_NoRegister()
	{
		return UPillarObject::StaticClass();
	}
	struct Z_Construct_UClass_UPillarObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPillarObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPillarObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PillarObject.h" },
		{ "ModuleRelativePath", "PillarObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPillarObject_Statics::NewProp_state_MetaData[] = {
		{ "Category", "PillarObject" },
		{ "ModuleRelativePath", "PillarObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPillarObject_Statics::NewProp_state = { UE4CodeGen_Private::EPropertyClass::Int, "state", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPillarObject, state), METADATA_PARAMS(Z_Construct_UClass_UPillarObject_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPillarObject_Statics::NewProp_state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPillarObject_Statics::NewProp_type_MetaData[] = {
		{ "Category", "PillarObject" },
		{ "ModuleRelativePath", "PillarObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPillarObject_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Str, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPillarObject, type), METADATA_PARAMS(Z_Construct_UClass_UPillarObject_Statics::NewProp_type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPillarObject_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPillarObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPillarObject_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPillarObject_Statics::NewProp_type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPillarObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPillarObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPillarObject_Statics::ClassParams = {
		&UPillarObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPillarObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPillarObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPillarObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPillarObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPillarObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPillarObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPillarObject, 3303596300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPillarObject(Z_Construct_UClass_UPillarObject, &UPillarObject::StaticClass, TEXT("/Script/MyProject"), TEXT("UPillarObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPillarObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
