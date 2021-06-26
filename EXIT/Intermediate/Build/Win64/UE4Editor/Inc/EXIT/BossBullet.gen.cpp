// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EXIT/BossBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossBullet() {}
// Cross Module References
	EXIT_API UClass* Z_Construct_UClass_ABossBullet_NoRegister();
	EXIT_API UClass* Z_Construct_UClass_ABossBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EXIT();
// End Cross Module References
	void ABossBullet::StaticRegisterNativesABossBullet()
	{
	}
	UClass* Z_Construct_UClass_ABossBullet_NoRegister()
	{
		return ABossBullet::StaticClass();
	}
	struct Z_Construct_UClass_ABossBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EXIT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BossBullet.h" },
		{ "ModuleRelativePath", "BossBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABossBullet_Statics::ClassParams = {
		&ABossBullet::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABossBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABossBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABossBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABossBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABossBullet, 1718406239);
	template<> EXIT_API UClass* StaticClass<ABossBullet>()
	{
		return ABossBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABossBullet(Z_Construct_UClass_ABossBullet, &ABossBullet::StaticClass, TEXT("/Script/EXIT"), TEXT("ABossBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
