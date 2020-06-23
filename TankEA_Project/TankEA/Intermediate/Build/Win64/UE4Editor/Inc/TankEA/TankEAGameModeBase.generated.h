// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKEA_TankEAGameModeBase_generated_h
#error "TankEAGameModeBase.generated.h already included, missing '#pragma once' in TankEAGameModeBase.h"
#endif
#define TANKEA_TankEAGameModeBase_generated_h

#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_RPC_WRAPPERS
#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankEAGameModeBase(); \
	friend struct Z_Construct_UClass_ATankEAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankEAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TankEA"), NO_API) \
	DECLARE_SERIALIZER(ATankEAGameModeBase)


#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankEAGameModeBase(); \
	friend struct Z_Construct_UClass_ATankEAGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankEAGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TankEA"), NO_API) \
	DECLARE_SERIALIZER(ATankEAGameModeBase)


#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankEAGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankEAGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankEAGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankEAGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankEAGameModeBase(ATankEAGameModeBase&&); \
	NO_API ATankEAGameModeBase(const ATankEAGameModeBase&); \
public:


#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankEAGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankEAGameModeBase(ATankEAGameModeBase&&); \
	NO_API ATankEAGameModeBase(const ATankEAGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankEAGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankEAGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankEAGameModeBase)


#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define TankEA_Source_TankEA_TankEAGameModeBase_h_12_PROLOG
#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_RPC_WRAPPERS \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_INCLASS \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankEA_Source_TankEA_TankEAGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	TankEA_Source_TankEA_TankEAGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKEA_API UClass* StaticClass<class ATankEAGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankEA_Source_TankEA_TankEAGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
