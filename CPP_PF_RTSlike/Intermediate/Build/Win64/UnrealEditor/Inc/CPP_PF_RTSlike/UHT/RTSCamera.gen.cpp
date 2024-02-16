// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_PF_RTSlike/RTSCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCamera() {}
// Cross Module References
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ARTSCamera();
	CPP_PF_RTSLIKE_API UClass* Z_Construct_UClass_ARTSCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CPP_PF_RTSlike();
// End Cross Module References
	void ARTSCamera::StaticRegisterNativesARTSCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSCamera);
	UClass* Z_Construct_UClass_ARTSCamera_NoRegister()
	{
		return ARTSCamera::StaticClass();
	}
	struct Z_Construct_UClass_ARTSCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_PF_RTSlike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCamera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSCamera.h" },
		{ "ModuleRelativePath", "RTSCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSCamera_Statics::ClassParams = {
		&ARTSCamera::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSCamera_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARTSCamera()
	{
		if (!Z_Registration_Info_UClass_ARTSCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSCamera.OuterSingleton, Z_Construct_UClass_ARTSCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSCamera.OuterSingleton;
	}
	template<> CPP_PF_RTSLIKE_API UClass* StaticClass<ARTSCamera>()
	{
		return ARTSCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCamera);
	ARTSCamera::~ARTSCamera() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_RTSCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_RTSCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSCamera, ARTSCamera::StaticClass, TEXT("ARTSCamera"), &Z_Registration_Info_UClass_ARTSCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSCamera), 266359673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_RTSCamera_h_4001332675(TEXT("/Script/CPP_PF_RTSlike"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_RTSCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_UE5_CPP_PF_RTSlike_Repository_CPP_PF_RTSlike_Source_CPP_PF_RTSlike_RTSCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
