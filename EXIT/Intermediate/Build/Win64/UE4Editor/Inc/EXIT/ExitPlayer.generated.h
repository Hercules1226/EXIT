// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXIT_ExitPlayer_generated_h
#error "ExitPlayer.generated.h already included, missing '#pragma once' in ExitPlayer.h"
#endif
#define EXIT_ExitPlayer_generated_h

#define EXIT_Source_EXIT_ExitPlayer_h_12_SPARSE_DATA
#define EXIT_Source_EXIT_ExitPlayer_h_12_RPC_WRAPPERS
#define EXIT_Source_EXIT_ExitPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define EXIT_Source_EXIT_ExitPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExitPlayer(); \
	friend struct Z_Construct_UClass_AExitPlayer_Statics; \
public: \
	DECLARE_CLASS(AExitPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EXIT"), NO_API) \
	DECLARE_SERIALIZER(AExitPlayer)


#define EXIT_Source_EXIT_ExitPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExitPlayer(); \
	friend struct Z_Construct_UClass_AExitPlayer_Statics; \
public: \
	DECLARE_CLASS(AExitPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EXIT"), NO_API) \
	DECLARE_SERIALIZER(AExitPlayer)


#define EXIT_Source_EXIT_ExitPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExitPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExitPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExitPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExitPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExitPlayer(AExitPlayer&&); \
	NO_API AExitPlayer(const AExitPlayer&); \
public:


#define EXIT_Source_EXIT_ExitPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExitPlayer(AExitPlayer&&); \
	NO_API AExitPlayer(const AExitPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExitPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExitPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExitPlayer)


#define EXIT_Source_EXIT_ExitPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define EXIT_Source_EXIT_ExitPlayer_h_9_PROLOG
#define EXIT_Source_EXIT_ExitPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EXIT_Source_EXIT_ExitPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	EXIT_Source_EXIT_ExitPlayer_h_12_SPARSE_DATA \
	EXIT_Source_EXIT_ExitPlayer_h_12_RPC_WRAPPERS \
	EXIT_Source_EXIT_ExitPlayer_h_12_INCLASS \
	EXIT_Source_EXIT_ExitPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EXIT_Source_EXIT_ExitPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EXIT_Source_EXIT_ExitPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	EXIT_Source_EXIT_ExitPlayer_h_12_SPARSE_DATA \
	EXIT_Source_EXIT_ExitPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EXIT_Source_EXIT_ExitPlayer_h_12_INCLASS_NO_PURE_DECLS \
	EXIT_Source_EXIT_ExitPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXIT_API UClass* StaticClass<class AExitPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EXIT_Source_EXIT_ExitPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
