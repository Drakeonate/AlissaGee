// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/DoorOpenEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorOpenEvent() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UDoorOpenEvent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UDoorOpenEvent();
	MYPROJECT_API UClass* Z_Construct_UClass_UCustomEvent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UDoorOpenEvent::StaticRegisterNativesUDoorOpenEvent()
	{
	}
	UClass* Z_Construct_UClass_UDoorOpenEvent_NoRegister()
	{
		return UDoorOpenEvent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorOpenEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorOpenEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpenEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorOpenEvent.h" },
		{ "ModuleRelativePath", "DoorOpenEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "DoorOpenEvent" },
		{ "ModuleRelativePath", "DoorOpenEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDoorOpenEvent, speed), METADATA_PARAMS(Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_door_MetaData[] = {
		{ "Category", "DoorOpenEvent" },
		{ "ModuleRelativePath", "DoorOpenEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_door = { UE4CodeGen_Private::EPropertyClass::Object, "door", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDoorOpenEvent, door), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_door_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorOpenEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorOpenEvent_Statics::NewProp_door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorOpenEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorOpenEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorOpenEvent_Statics::ClassParams = {
		&UDoorOpenEvent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UDoorOpenEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDoorOpenEvent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDoorOpenEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDoorOpenEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorOpenEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorOpenEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorOpenEvent, 579572658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorOpenEvent(Z_Construct_UClass_UDoorOpenEvent, &UDoorOpenEvent::StaticClass, TEXT("/Script/MyProject"), TEXT("UDoorOpenEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorOpenEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
