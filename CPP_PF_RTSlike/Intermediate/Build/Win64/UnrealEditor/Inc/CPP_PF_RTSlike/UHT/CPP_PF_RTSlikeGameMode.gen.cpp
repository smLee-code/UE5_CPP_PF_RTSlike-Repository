// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PF_RTSlike/CPP_PF_RTSlikeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_PF_RTSlikeGameMode() {}
// Cross Module References
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ACPP_PF_RTSlikeGameMode();
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_PF_RTSlike();
// End Cross Module References
	void ACPP_PF_RTSlikeGameMode::StaticRegisterNativesACPP_PF_RTSlikeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_PF_RTSlikeGameMode);
	UClass* Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_NoRegister()
	{
		return ACPP_PF_RTSlikeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PF_RTSlike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_PF_RTSlikeGameMode.h" },
		{ "ModuleRelativePath", "CPP_PF_RTSlikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_PF_RTSlikeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::ClassParams = {
		&ACPP_PF_RTSlikeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACPP_PF_RTSlikeGameMode()
	{
		if (!Z_Registration_Info_UClass_ACPP_PF_RTSlikeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_PF_RTSlikeGameMode.OuterSingleton, Z_Construct_UClass_ACPP_PF_RTSlikeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_PF_RTSlikeGameMode.OuterSingleton;
	}
	template<> CPP_PF_RTSLIKE_API UClass* StaticClass<ACPP_PF_RTSlikeGameMode>()
	{
		return ACPP_PF_RTSlikeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_PF_RTSlikeGameMode);
	ACPP_PF_RTSlikeGameMode::~ACPP_PF_RTSlikeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_PF_RTSlikeGameMode, ACPP_PF_RTSlikeGameMode::StaticClass, TEXT("ACPP_PF_RTSlikeGameMode"), &Z_Registration_Info_UClass_ACPP_PF_RTSlikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_PF_RTSlikeGameMode), 2989424928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeGameMode_h_2890384593(TEXT("/Script/CPP_PF_RTSlike"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_CPP_PF_RTSlikeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
