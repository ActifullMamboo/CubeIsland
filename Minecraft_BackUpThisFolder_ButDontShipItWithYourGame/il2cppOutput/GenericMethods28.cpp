#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_Texture
struct ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8;
// ES3Types.ES3Type_Texture2D
struct ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349;
// ES3Types.ES3Type_TextureSheetAnimationModule
struct ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10;
// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral1B548DBCEFD2B25E7F8D152DFC18D00BEBF879DA;
IL2CPP_EXTERN_C String_t* _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00;
IL2CPP_EXTERN_C String_t* _stringLiteral354281948B6269615E32D856CF85B6F456724DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119;
IL2CPP_EXTERN_C String_t* _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3E16DE5C9643F2C4E3C5850DB6945FD6647B31;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578;
IL2CPP_EXTERN_C String_t* _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D;
IL2CPP_EXTERN_C String_t* _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866;
IL2CPP_EXTERN_C String_t* _stringLiteral7390E7E638C5CB6AF44E3BD9A47E47866E8340DC;
IL2CPP_EXTERN_C String_t* _stringLiteral7896B55D3A8180CB0751CF974F561E3042B4E40B;
IL2CPP_EXTERN_C String_t* _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737;
IL2CPP_EXTERN_C String_t* _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A;
IL2CPP_EXTERN_C String_t* _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757;
IL2CPP_EXTERN_C String_t* _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5;
IL2CPP_EXTERN_C String_t* _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1439A3AE532D1310341C818741450454C83AA36;
IL2CPP_EXTERN_C String_t* _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182;
IL2CPP_EXTERN_C String_t* _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25;
IL2CPP_EXTERN_C String_t* _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E;
IL2CPP_EXTERN_C String_t* _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisTextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_mB7672942B04D7DADEAA5DC03583E2542F94B6D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC17412B8A18FD87621C0E65AB8756D3F2BC50102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m111B871E0D6F4D72F6A225F3515E421EDD9C3FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m2F187EF3360E9BA1422EA653FC09835E7BBF6C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m7B38F6965DD1A3AADDB6E7EB1CB32CAC7A0305E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mD1C65D66B1B656949C36E24E75313FF31C3BCF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m71AD755CFC9BF2F514D2F1FBECA02B89BFB74165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD558C2C7A87868FF3B0B9F9EB6616AA5B4D95305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m653D3F1405BCF31FD445112B323ECC679DE64EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m57CD42008F98ED730EBDEE5D34C5EE898F0DEF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m16C5D110ACA8B646F79EB8DCBD07291F944E0F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mB41C19DE91882171722990AD82524579E38C4279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mED33D080CC30963F081B80AD15BA275EA840EB31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD51BD92D1C46E32BF61E3FAA2D31CF7F7493AEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m1A934F539206CD367735E10369B7ED0CCF830D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisRuntimeObject_m6145CC791ED7365C2F6FD65332D979555B1047D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m381C9840A149954E1CE3EBE75A1A8AD3BEC2169F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m952295EEDE47DDB9C2A3EAB295834A57F8EA2FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m2D008937AC431C4E9ECB60DC36C9DD7A6CA339C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mEE944A40E853514E90C0C8FA5D4351E0F45A6511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mD6F8F222AB4D07FE41C42B4F11822346EBD592DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m82D3C1FF667E3B3842DE27E2E17F4AAA879EE986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m72450E1EAD4E748E3EA76740D5715B5D8817BAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Type_Texture_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m104843639A151E62D96658E36B8FF7CC7DA80B22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isTuple
	bool ___isTuple_7;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_8;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_9;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_10;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_11;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_12;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_Texture
struct ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Texture::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_TextureSheetAnimationModule
struct ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TextureSheetAnimationModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TrailModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_byteArray
struct ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_byteArray::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// ES3Types.ES3Type_RenderTexture
struct ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

struct ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_RenderTexture::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// ES3Types.ES3Type_Texture2D
struct ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

struct ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Texture2D::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T ES3Reader::ReadProperty<System.Int32>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ES3Reader_ReadProperty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m9A1C78DC6D905C0A3783C85D0F923F0F9103EBB1_gshared (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Int32>(ES3Types.ES3Type)
inline int32_t ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___type0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_gshared)(__this, ___type0, method);
}
// T ES3Reader::ReadProperty<UnityEngine.TextureFormat>()
inline int32_t ES3Reader_ReadProperty_TisTextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_mB7672942B04D7DADEAA5DC03583E2542F94B6D4A (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, const RuntimeMethod*))ES3Reader_ReadProperty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m9A1C78DC6D905C0A3783C85D0F923F0F9103EBB1_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Boolean ES3Types.ES3Type_Texture2D::IsReadable(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ES3Type_Texture2D_IsReadable_m87D49D8A1AEB3037E988A16A7C6542AC54F42967 (ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___instance0, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogWarning(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogWarning_mDCFB14CEB39EB6808DBFCCABC1CF310A112AA63A (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void ES3Internal.ES3Debug::LogError(System.String,UnityEngine.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Debug_LogError_m8165218A013911617C94FCF4DD0C89F7327B2BAB (String_t* ___msg0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, int32_t ___indent2, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_numTilesX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_numTilesY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_animation(UnityEngine.ParticleSystemAnimationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_rowMode(UnityEngine.ParticleSystemAnimationRowMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_frameOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_frameOverTimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_startFrame(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_startFrameMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_cycleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_rowIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_uvChannelMask(UnityEngine.Rendering.UVChannelFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_minVertexDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_textureMode(UnityEngine.ParticleSystemTrailTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_worldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_dieWithParticles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsLifetime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_inheritParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverLifetime(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrail(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrailMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverTrail(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Object ES3Types.ES3Type_Texture::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCE5F6CCDF97F4DA06EFDE9B7909E7F601C85723D_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m755D61C22C1AE1331697C5828841E11B178D5DA3_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA35708D15F444C77DE35D731DD39D51CBF0D4C6B_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E2A05D34320828EB10364FDC53714DADDC8C3C8_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0E2D8A913448DABF8BD49A8ED59D5E30278C71D2_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43C92409C99EFC709F0BD66CAC85D9F90156F5E9_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8BC2CE93D1E8700F48E3A32ED4388ABE042AD2A2_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m39FF6A24895E5C0CAEC9305558DBDB51D6095C59_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m3BE671DE5A3D13DA9D02749A93A93A2265664F21_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m396D5362854E4CA7775DE4FB18EB8BDADDCE40D5_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisRuntimeObject_mC7DFDB490307F43DF02B0E17679BA89A8AEACA76_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mEDC1E13FC1808A74135EDBF986E3D5BEFA2C9DF4_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m4D2DA932AA6099DCBAA8576EB02C3A3C1096C811_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m6FBA6E2B5E50D85A2D83988A3EF5E655E122AA0C_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9E8342FC2119B5D4CAE5F6DB5037106B7E93B7CF_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m60E590909AD2FB8E94856577ED20D45110350F6E_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1E727AC86A89D4A01BCFD143BCDE68FFB0E167EF_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9977B00A322481BA72ED3E2E7F01D018A2D26EEB_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m7DD16B94D124CE0F77C1BA3B89683D96B78D7CA5_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Object ES3Types.ES3Type_Texture::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m6E54063960BBFC031EBBEA2C9535670CBC1959C7_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ES3Type_Texture2D.Instance.Read<T>(reader);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_0 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericVirtualFuncInvoker1< RuntimeObject*, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisRuntimeObject_m6145CC791ED7365C2F6FD65332D979555B1047D9_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisRuntimeObject_m6145CC791ED7365C2F6FD65332D979555B1047D9_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m111B871E0D6F4D72F6A225F3515E421EDD9C3FEB_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m111B871E0D6F4D72F6A225F3515E421EDD9C3FEB_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m2F187EF3360E9BA1422EA653FC09835E7BBF6C1E_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m2F187EF3360E9BA1422EA653FC09835E7BBF6C1E_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m7B38F6965DD1A3AADDB6E7EB1CB32CAC7A0305E3_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m7B38F6965DD1A3AADDB6E7EB1CB32CAC7A0305E3_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mD1C65D66B1B656949C36E24E75313FF31C3BCF53_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mD1C65D66B1B656949C36E24E75313FF31C3BCF53_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m71AD755CFC9BF2F514D2F1FBECA02B89BFB74165_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m71AD755CFC9BF2F514D2F1FBECA02B89BFB74165_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD558C2C7A87868FF3B0B9F9EB6616AA5B4D95305_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mD558C2C7A87868FF3B0B9F9EB6616AA5B4D95305_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m653D3F1405BCF31FD445112B323ECC679DE64EAF_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m653D3F1405BCF31FD445112B323ECC679DE64EAF_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m57CD42008F98ED730EBDEE5D34C5EE898F0DEF44_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m57CD42008F98ED730EBDEE5D34C5EE898F0DEF44_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m16C5D110ACA8B646F79EB8DCBD07291F944E0F00_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m16C5D110ACA8B646F79EB8DCBD07291F944E0F00_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mB41C19DE91882171722990AD82524579E38C4279_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mB41C19DE91882171722990AD82524579E38C4279_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mED33D080CC30963F081B80AD15BA275EA840EB31_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mED33D080CC30963F081B80AD15BA275EA840EB31_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD51BD92D1C46E32BF61E3FAA2D31CF7F7493AEF8_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD51BD92D1C46E32BF61E3FAA2D31CF7F7493AEF8_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m1A934F539206CD367735E10369B7ED0CCF830D4E_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m1A934F539206CD367735E10369B7ED0CCF830D4E_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m381C9840A149954E1CE3EBE75A1A8AD3BEC2169F_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_m381C9840A149954E1CE3EBE75A1A8AD3BEC2169F_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m952295EEDE47DDB9C2A3EAB295834A57F8EA2FE6_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m952295EEDE47DDB9C2A3EAB295834A57F8EA2FE6_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m2D008937AC431C4E9ECB60DC36C9DD7A6CA339C5_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m2D008937AC431C4E9ECB60DC36C9DD7A6CA339C5_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mEE944A40E853514E90C0C8FA5D4351E0F45A6511_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mEE944A40E853514E90C0C8FA5D4351E0F45A6511_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mD6F8F222AB4D07FE41C42B4F11822346EBD592DC_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_mD6F8F222AB4D07FE41C42B4F11822346EBD592DC_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m82D3C1FF667E3B3842DE27E2E17F4AAA879EE986_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m82D3C1FF667E3B3842DE27E2E17F4AAA879EE986_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m72450E1EAD4E748E3EA76740D5715B5D8817BAAB_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m72450E1EAD4E748E3EA76740D5715B5D8817BAAB_RuntimeMethod_var)));
	}
}
// System.Void ES3Types.ES3Type_Texture::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m104843639A151E62D96658E36B8FF7CC7DA80B22_gshared (ES3Type_Texture_t96F5FBD504C2F7E6904ADA3CF46CB98B4FD018C8* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (obj.GetType () == typeof(Texture2D))
		RuntimeObject* L_0 = ___obj1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// ES3Type_Texture2D.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_5 = ((ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		RuntimeObject* L_7 = ___obj1;
		NullCheck(L_5);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_5, L_6, L_7);
		return;
	}

IL_0024:
	{
		// throw new NotSupportedException ("Textures of type "+obj.GetType()+" are not currently supported.");
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		Type_t* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA0DDA6315100AD6F5D9B8EFB5440BFE2000A5D5));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck((RuntimeObject*)G_B4_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B4_0);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B5_1, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F78E9CEBAAC5AEB6A0B49D5119C7C43C1529737)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_13 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ES3Type_Texture_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m104843639A151E62D96658E36B8FF7CC7DA80B22_RuntimeMethod_var)));
	}
}
// System.Object ES3Types.ES3Type_Texture2D::ReadUnityObject<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Texture2D_ReadUnityObject_TisRuntimeObject_m5EDDB8FD0A1E0DA66A956B591C7FD05F9D48A966_gshared (ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisTextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_mB7672942B04D7DADEAA5DC03583E2542F94B6D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		// var instance = new Texture2D(    reader.Read<int>(ES3Type_int.Instance), // Property name has already been read in ES3UnityObjectType, so we only need to read the value.
		//                                 reader.ReadProperty<int>(ES3Type_int.Instance),
		//                                 reader.ReadProperty<TextureFormat>(),
		//                                 (reader.ReadProperty<int>(ES3Type_int.Instance) > 1));
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_1 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_0, L_1);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_3 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_4 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F(L_3, L_4, ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_6 = ___reader0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ES3Reader_ReadProperty_TisTextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_mB7672942B04D7DADEAA5DC03583E2542F94B6D4A(L_6, ES3Reader_ReadProperty_TisTextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_mB7672942B04D7DADEAA5DC03583E2542F94B6D4A_RuntimeMethod_var);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_8 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_9 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F(L_8, L_9, ES3Reader_ReadProperty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA85AF1ABBDB71C295B0634C931ABBB49263911F_RuntimeMethod_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_11, L_2, L_5, L_7, (bool)((((int32_t)L_10) > ((int32_t)1))? 1 : 0), NULL);
		V_0 = L_11;
		// ReadObject<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_12 = ___reader0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = V_0;
		NullCheck((ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6*)__this, L_12, (RuntimeObject*)L_13);
		// return instance;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = V_0;
		return (RuntimeObject*)L_14;
	}
}
// System.Void ES3Types.ES3Type_Texture2D::ReadUnityObject<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Texture2D_ReadUnityObject_TisRuntimeObject_m79ED6843C4ED7BB5762D128E575E3CC13E9F9ECD_gshared (ES3Type_Texture2D_t93A489E457BCF59AB4ECB76716DF927C41D96349* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC17412B8A18FD87621C0E65AB8756D3F2BC50102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B548DBCEFD2B25E7F8D152DFC18D00BEBF879DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7390E7E638C5CB6AF44E3BD9A47E47866E8340DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7896B55D3A8180CB0751CF974F561E3042B4E40B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (obj.GetType() == typeof(RenderTexture))
		RuntimeObject* L_1 = ___obj1;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// ES3Type_RenderTexture.Instance.ReadInto<T>(reader, obj);
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_6 = ((ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_RenderTexture_t1ABEBF4244620EEBA133478E2715EF22A775457C_il2cpp_TypeInfo_var))->___Instance_13;
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_7 = ___reader0;
		RuntimeObject* L_8 = ___obj1;
		NullCheck(L_6);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_6, L_7, L_8);
		// return;
		return;
	}

IL_0028:
	{
		// var instance = (Texture2D)obj;
		RuntimeObject* L_9 = ___obj1;
		V_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_9, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var));
		// if (!IsReadable(instance))
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_0;
		bool L_11;
		L_11 = ES3Type_Texture2D_IsReadable_m87D49D8A1AEB3037E988A16A7C6542AC54F42967(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0044;
		}
	}
	{
		// ES3Internal.ES3Debug.LogWarning("Easy Save cannot load the properties or pixels for this Texture because it is not read/write enabled, so it will be loaded by reference. To load the properties and pixels for this Texture, check the 'Read/Write Enabled' checkbox in its Import Settings.", instance);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = V_0;
		ES3Debug_LogWarning_mDCFB14CEB39EB6808DBFCCABC1CF310A112AA63A(_stringLiteral1B548DBCEFD2B25E7F8D152DFC18D00BEBF879DA, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_12, 0, NULL);
	}

IL_0044:
	{
		// foreach (string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_13 = ___reader0;
		NullCheck(L_13);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_14;
		L_14 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_14, NULL);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0164:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_16 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_17 = V_4;
					if (!L_17)
					{
						goto IL_0177;
					}
				}
				{
					RuntimeObject* L_18 = V_4;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0177:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0157_1;
			}

IL_0055_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_20, String_t_il2cpp_TypeInfo_var));
				// if (!IsReadable(instance))
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = V_0;
				bool L_22;
				L_22 = ES3Type_Texture2D_IsReadable_m87D49D8A1AEB3037E988A16A7C6542AC54F42967(__this, L_21, NULL);
				if (L_22)
				{
					goto IL_0075_1;
				}
			}
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_23 = ___reader0;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_23);
				// continue;
				goto IL_0157_1;
			}

IL_0075_1:
			{
				String_t* L_24 = V_2;
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral65B008F04EC40A696263EF679CF274BD10999A5D, NULL);
				if (L_25)
				{
					goto IL_00bb_1;
				}
			}
			{
				String_t* L_26 = V_2;
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralF38CFAE6A91D072D4453C29FF44D81D459A582F1, NULL);
				if (L_27)
				{
					goto IL_00cc_1;
				}
			}
			{
				String_t* L_28 = V_2;
				bool L_29;
				L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral95F57476C0AA778364404E7CCCD7499BF1BF3757, NULL);
				if (L_29)
				{
					goto IL_00df_1;
				}
			}
			{
				String_t* L_30 = V_2;
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3BC15E3C2F40466B2DC85C4776499817B8306CBB, NULL);
				if (L_31)
				{
					goto IL_00ed_1;
				}
			}
			{
				String_t* L_32 = V_2;
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral7390E7E638C5CB6AF44E3BD9A47E47866E8340DC, NULL);
				if (L_33)
				{
					goto IL_0100_1;
				}
			}
			{
				goto IL_0151_1;
			}

IL_00bb_1:
			{
				// instance.filterMode = reader.Read<UnityEngine.FilterMode>();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_35 = ___reader0;
				NullCheck(L_35);
				int32_t L_36;
				L_36 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisFilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34_m7E9AF0CC302245C3E89EE25426EB23E3A6636D11_RuntimeMethod_var, L_35);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_34);
				Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_34, L_36, NULL);
				// break;
				goto IL_0157_1;
			}

IL_00cc_1:
			{
				// instance.anisoLevel = reader.Read<System.Int32>(ES3Type_int.Instance);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_38 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_39 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_38);
				int32_t L_40;
				L_40 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_38, L_39);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37);
				Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37, L_40, NULL);
				// break;
				goto IL_0157_1;
			}

IL_00df_1:
			{
				// instance.wrapMode = reader.Read<UnityEngine.TextureWrapMode>();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisTextureWrapMode_tF9851343029052ED45668D1C99BAE09B2CCC13AD_mC5099851E6E2B029CE6A2102B3F20F0A81669ACF_RuntimeMethod_var, L_42);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41);
				Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_41, L_43, NULL);
				// break;
				goto IL_0157_1;
			}

IL_00ed_1:
			{
				// instance.mipMapBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_45);
				float L_47;
				L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
				NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44);
				Texture_set_mipMapBias_m945790033BD16B51B4EDD12E177207EBF5887286((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44, L_47, NULL);
				// break;
				goto IL_0157_1;
			}

IL_0100_1:
			{
				// if (!IsReadable(instance))
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_0;
				bool L_49;
				L_49 = ES3Type_Texture2D_IsReadable_m87D49D8A1AEB3037E988A16A7C6542AC54F42967(__this, L_48, NULL);
				if (L_49)
				{
					goto IL_011d_1;
				}
			}
			{
				// ES3Internal.ES3Debug.LogWarning("Easy Save cannot load the pixels of this Texture because it is not read/write enabled, so Easy Save will ignore the pixel data. To load the pixel data, check the 'Read/Write Enabled' checkbox in the Texture's import settings. Clicking this warning will take you to the Texture, assuming it is not generated at runtime.", instance);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_50 = V_0;
				ES3Debug_LogWarning_mDCFB14CEB39EB6808DBFCCABC1CF310A112AA63A(_stringLiteral7896B55D3A8180CB0751CF974F561E3042B4E40B, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_50, 0, NULL);
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
				NullCheck(L_51);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_51);
				goto IL_0157_1;
			}

IL_011d_1:
			{
			}
			try
			{// begin try (depth: 2)
				// instance.LoadRawTextureData(reader.Read<byte[]>(ES3Type_byteArray.Instance));
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_54 = ((ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byteArray_t6C519292985B1D62E6ADC873D247720C4FB3C8BD_il2cpp_TypeInfo_var))->___Instance_13;
				NullCheck(L_53);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
				L_55 = GenericVirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mC17412B8A18FD87621C0E65AB8756D3F2BC50102_RuntimeMethod_var, L_53, L_54);
				NullCheck(L_52);
				Texture2D_LoadRawTextureData_mB8D1DEB5FF8715A871D8043D48C9054FCFF4ED1B(L_52, L_55, NULL);
				// instance.Apply();
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = V_0;
				NullCheck(L_56);
				Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_56, NULL);
				// }
				goto IL_0157_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0137_1;
				}
				throw e;
			}

CATCH_0137_1:
			{// begin catch(System.Exception)
				// catch(Exception e)
				V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// ES3Internal.ES3Debug.LogError("Easy Save encountered an error when trying to load this Texture, please see the end of this messasge for the error. This is most likely because the Texture format of the instance we are loading into is different to the Texture we saved.\n"+e.ToString(), instance);
				Exception_t* L_57 = V_3;
				NullCheck((RuntimeObject*)L_57);
				String_t* L_58;
				L_58 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_57);
				String_t* L_59;
				L_59 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D3E16DE5C9643F2C4E3C5850DB6945FD6647B31)), L_58, NULL);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_60 = V_0;
				ES3Debug_LogError_m8165218A013911617C94FCF4DD0C89F7327B2BAB(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_60, 0, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0157_1;
			}// end catch (depth: 2)

IL_0151_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
				NullCheck(L_61);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_61);
			}

IL_0157_1:
			{
				// foreach (string propertyName in reader.Properties)
				RuntimeObject* L_62 = V_1;
				NullCheck(L_62);
				bool L_63;
				L_63 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_62);
				if (L_63)
				{
					goto IL_0055_1;
				}
			}
			{
				goto IL_0178;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0178:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m379304364F549BBFD806328CD8774E22CB33DDD4_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mAD65405D3B094B64654EAA76AC67E97D522BF984_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2468F9D8F616F790B602B231EF888AE6215A77B3_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2E6EBAA65C1FE4D81A4F954DA940BD062F77AC93_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m39714584BA4D589D55CE217D7881A4C66CFEE812_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m460137FFA6C27FCE37F4D4713853EEDFF5C630E9_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBC5A7FAA58C099B5BD6DFE4216EFFCAC06CE37F0_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8493354F6DA321895E5669568D9046A0FC788CB3_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m74F0A3C08EEFC8366CDCD6EA89E3173B42B4DE7E_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9CD079CA8F502FE6C5E18E3AA71FA959263A0E97_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisRuntimeObject_m5CD7621452CD176B8A9F23EF9FA6EDDF9EEBA97B_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m80E75DADE4F11D6D6A9C2D777DA89DB1132E16F1_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m68BB915BAED14BCE52FD8040824B72BA1545F22A_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m7110300588A719C0D871FE446D9A92413B6E46CE_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC585B34DBACF3048F6B47747CB3413F15469A7F9_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEED461E56E569BDE09E0EBED8C1F6D1DE42E723E_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7DF9FDA5EEAD32C32D700FEFD4A84AC941C24F21_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mBD32A51173033F067E1D8671B8ADBFE3E4025B60_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mACF76EF366CC34FBD095BF3CEB99F436C3D0EC70_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TextureSheetAnimationModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TextureSheetAnimationModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m09E79BC350F183572DFCDB14E52F6378F9A87FB0_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TextureSheetAnimationModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_1 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_2 = L_1;
		RuntimeObject* L_3 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4 = V_0;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisRuntimeObject_mB7A1B71D4A2F034DC0BB591390C6C794D0F792B6_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m62FDC3E01D4A0C18C412631B0C4200301D5E75D6_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m847719F5431EA02009F1A483D0F55859CD7ABCBD_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m4EFEE0A93BFC2AFB984532C90DE1D33A45EA134E_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m10780176352FC263B9E98EED360EF83C7984127D_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m3855CC1E05A6E3F2D2399F9A8599DAF0B6E023F8_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mF0F265414938D24E78EB1F94DEDC1DA8291EB8D1_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m2C12EC8A0997C6ABB71B54ABAC116FE395011018_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mF0E00537CA0CC4E2C12889E906E0549AB210C58F_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m73956C68B3FA4A89916A0DF468011F099993F68F_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m4496204C65F6A7F585BF65157CF3271A9D5A44DB_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mC62C6294A28A851BD419A9EE17CDDAFB8750062B_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m64260935CE109F9299BD745CC6CE1AD5D7D840AA_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m44DDB34E1BFAEE98DC6FB0F83BE2F465A1A94557_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/ShapeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_mA26CE191CF277AB254DF9BD2E4447B2466C99616_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/SizeBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisSizeBySpeedModule_t73995CB54A0D1B06BA100EA77972D37CDF7B4DC4_m0430F7163F6839C7AF71170F1C60C31B2C7E2592_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/SizeOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisSizeOverLifetimeModule_t6711CE9659123CAA5BFBFDFA9F53174CD979AC0C_m11F02A0E42C164EBC1860E608B21946A082535E5_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m793CA3DA9A560786E14503F8363917F258B605B9_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m1B451C30C31B1CB6C4B2B7E33AB700F5A6B1FF3B_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mC896F8AA59E13AFFF01A894A3F77819314033674_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mBD657917EFF4531FE6C175F702F14DE5E0BE04C6_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m96F5AA3B5A20EDC8696385A9637684F7CD4F6D75_gshared (ES3Type_TextureSheetAnimationModule_t34199E7CF608245A90C094A6960E508259989E10* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m60C7C7E4AC5E53FE39F7613E93B43856DE8D38CF_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_mCD29C09E3709C4A78E7E2D21DBA6E2ECAACA55E5_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_55 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_56 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_58 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_59 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_61 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_62 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_64 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_65 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_67 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_68 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_70 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_71 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_mEC92AFC07660CFFD73C4D8F091D3C422E6CABEAA_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m727547343E89445A4BDF1F4646237F4719BC06EF_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m617D498C27040D1EABF7E66B931CCD62D825C892_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC1E2209CC2C0C09B18A4BA1AE7B9A1536C7BC98A_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8BB76DAFA744D47FBFB369737E00756069D8E396_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int16>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mDF0F081927DB7EFA44161DE8A72E8D5DF15E8489_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m016FE2CB306534A31ED3AC99D0DF65835863382B_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF3170EC440EA45719CBE69123BEEC87AEE892B1A_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDB2B2CD345C7B1A0A7B8083FA0676A9BBB93F1DD_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m9B3EB38B5A6058D48F5496CC205841C34979C617_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA9E353EADF92FE2BE8F2D50031FC854FF424716E_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRuntimeObject_m2BF40721B7395569E88CBB1BEA3DB9F96BD399B1_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m80D0056A762949F73C8E950088F959E32DB527A6_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m477C0AA61DB79209B706440DAD22A2E3CB04C255_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m14EFE1817C494A579B4759546CA67FA8A03BCC87_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB5AF039D3D931FF2D73A6FA14EA75006C5DE2CE5_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8938CD47CFA88B18A32D5F637074D563A23C6A9_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF3311BF717BEA1D47391CD5421AE0F5334D11A73_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m55CC15EE848ED346DFEDEBAA2059020666C53F94_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mC17EA8C8B813112FFB38E48A145B1D6BBE48AB19_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mA1BD729D3AE02F8BD4A04535A7D2B7935F0A9991_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRuntimeObject_mB08336D266B719630E454007628F9F0AE91E2E46_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mF4C82AC80F4A69F2571AB64A9B67DA262762BBC6_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mF346CF9C1D50CA8F84DA0A7EC88EB5A0BF8950C1_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_mB78D170E2BA912A55DBA0347986EBC605E7569C5_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m070D215D3ADE674F964360DC2A2A42EB4DF2165C_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m602DE1BA261222C8432D11E1BCE2D9A42B096A0F_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m0ED102DEDA0514E558C1900417B7C3F52767DACF_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m5B6482C0D5A22733B7F0415E283C8BB4F352CC66_gshared (ES3Type_TrailModule_t3935CA75C96FBC32E1ED96782B8A71B1782B8D87* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_mE2AAF89900FEC605BDBB97014723EFF8AB610E04_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_71 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_72 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_74 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_75 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_78 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_80 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_81 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_83 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_84 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_89 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_90 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_92 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_93 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_95 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_96 = ((ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_t2300C741A97E113291BBCDA1AB4A75A63A937A83_il2cpp_TypeInfo_var))->___Instance_13;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m9FFBC21BA4063F38EED4722161E3FB26BECEEED7_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
