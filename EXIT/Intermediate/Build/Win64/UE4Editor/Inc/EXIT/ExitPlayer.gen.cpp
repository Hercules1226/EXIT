// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EXIT/ExitPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExitPlayer() {}
// Cross Module References
	EXIT_API UClass* Z_Construct_UClass_AExitPlayer_NoRegister();
	EXIT_API UClass* Z_Construct_UClass_AExitPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_EXIT();
// End Cross Module References
	void AExitPlayer::StaticRegisterNativesAExitPlayer()
	{
	}
	UClass* Z_Construct_UClass_AExitPlayer_NoRegister()
	{
		return AExitPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AExitPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExitPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_EXIT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExitPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ExitPlayer.h" },
		{ "ModuleRelativePath", "ExitPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExitPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExitPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExitPlayer_Statics::ClassParams = {
		&AExitPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExitPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExitPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExitPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExitPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExitPlayer, 3100367584);
	template<> EXIT_API UClass* StaticClass<AExitPlayer>()
	{
		return AExitPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExitPlayer(Z_Construct_UClass_AExitPlayer, &AExitPlayer::StaticClass, TEXT("/Script/EXIT"), TEXT("AExitPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExitPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
