// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameMode() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
// End Cross Module References
	void AModularGameModeBase::StaticRegisterNativesAModularGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AModularGameModeBase_NoRegister()
	{
		return AModularGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameStateBase */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameStateBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams = {
		&AModularGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularGameModeBase, 3346372956);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameModeBase>()
	{
		return AModularGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularGameModeBase(Z_Construct_UClass_AModularGameModeBase, &AModularGameModeBase::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameModeBase);
	void AModularGameMode::StaticRegisterNativesAModularGameMode()
	{
	}
	UClass* Z_Construct_UClass_AModularGameMode_NoRegister()
	{
		return AModularGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Pair this with a ModularGameState */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Pair this with a ModularGameState" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameMode_Statics::ClassParams = {
		&AModularGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularGameMode, 2574244980);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameMode>()
	{
		return AModularGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularGameMode(Z_Construct_UClass_AModularGameMode, &AModularGameMode::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
