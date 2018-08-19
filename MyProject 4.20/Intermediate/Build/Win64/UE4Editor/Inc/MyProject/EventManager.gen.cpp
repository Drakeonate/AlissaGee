// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/EventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManager() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UEventManager_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UEventManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UEventManager::StaticRegisterNativesUEventManager()
	{
	}
	UClass* Z_Construct_UClass_UEventManager_NoRegister()
	{
		return UEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EventManager.h" },
		{ "ModuleRelativePath", "EventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventManager_Statics::ClassParams = {
		&UEventManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventManager, 90658668);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventManager(Z_Construct_UClass_UEventManager, &UEventManager::StaticClass, TEXT("/Script/MyProject"), TEXT("UEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
