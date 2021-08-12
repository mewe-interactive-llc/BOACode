// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPlayerState() {}
// Cross Module References
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState_NoRegister();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularPlayerState::StaticRegisterNativesAModularPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AModularPlayerState_NoRegister()
	{
		return AModularPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AModularPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
		{ "HideCategories", "Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "ModularPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPlayerState_Statics::ClassParams = {
		&AModularPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularPlayerState, 1000263224);
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularPlayerState>()
	{
		return AModularPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularPlayerState(Z_Construct_UClass_AModularPlayerState, &AModularPlayerState::StaticClass, TEXT("/Script/ModularGameplayActors"), TEXT("AModularPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
